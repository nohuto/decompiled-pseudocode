/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1402BA0B4
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x1402B9DFC (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1402B9FF0 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1402B962C (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1402BA3BC (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall PopDeepSleepResiliencyPhaseAccountingUpdate(int a1, char a2)
{
  __int64 v2; // r15
  unsigned int v3; // edi
  unsigned int v5; // ebx
  int v6; // esi
  KIRQL v7; // al
  __int16 v8; // bp
  unsigned __int64 v9; // r14
  __int64 result; // rax
  __int64 v11; // rdx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v13; // rdx
  char *v14; // r8

  v2 = a1;
  v3 = 0;
  v5 = 0;
  v6 = 1 << a1;
  v7 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  v8 = dword_140F0C41C;
  v9 = v7;
  if ( (v6 & dword_140F0C41C) != 0 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v14 = &PopCsResiliencyStats[8 * v2 + 160];
    if ( !a2 )
    {
      *(_QWORD *)&PopCsResiliencyStats[8 * v2 + 248] += PerformanceCounter.QuadPart - *(_QWORD *)v14;
      PerformanceCounter.QuadPart = 0LL;
    }
    *(LARGE_INTEGER *)v14 = PerformanceCounter;
    if ( a2 )
    {
      if ( (v6 & 3) != 0 )
      {
        v5 = v8 & 0x40;
        if ( (v8 & 0x7BC) != 0 )
          v5 |= 0x7BCu;
      }
      else if ( (v6 & 0x40) != 0 && (v8 & 0x7BC) != 0 )
      {
        v5 = 1980;
      }
      PopDeepSleepResiliencyPhaseAccountingEnd(v5, 1);
    }
    else
    {
      if ( (v6 & 3) != 0 )
      {
        if ( (PopDeepSleepDisengageReasonMask & 3) == 0 )
        {
          v3 = 64;
          if ( (PopDeepSleepDisengageReasonMask & 0x40) == 0 )
            v3 = 2044;
        }
      }
      else if ( (v6 & 0x40) != 0 && (PopDeepSleepDisengageReasonMask & 0x40) == 0 )
      {
        v3 = 1980;
      }
      LOBYTE(v13.LowPart) = 1;
      ((void (__fastcall *)(_QWORD, _QWORD))PopDeepSleepResiliencyPhaseAccountingBegin)(v3, (LARGE_INTEGER)v13.QuadPart);
    }
  }
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
  if ( KiIrqlFlags )
  {
    LOBYTE(v11) = v9;
    result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v11);
  }
  __writecr8(v9);
  return result;
}
