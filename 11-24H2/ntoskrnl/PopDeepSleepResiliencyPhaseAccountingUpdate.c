/*
 * XREFs of PopDeepSleepResiliencyPhaseAccountingUpdate @ 0x1403CB59C
 * Callers:
 *     PopDeepSleepSetDisengageReason @ 0x1403CB2E4 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403CB4D8 (PopDeepSleepClearDisengageReason.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KeQueryPerformanceCounter @ 0x14034FA10 (KeQueryPerformanceCounter.c)
 *     PopDeepSleepResiliencyPhaseAccountingBegin @ 0x1403CB8A4 (PopDeepSleepResiliencyPhaseAccountingBegin.c)
 *     PopDeepSleepResiliencyPhaseAccountingEnd @ 0x1403CB954 (PopDeepSleepResiliencyPhaseAccountingEnd.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
  v8 = dword_140F0BF9C;
  v9 = v7;
  if ( (v6 & dword_140F0BF9C) != 0 )
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
      LOBYTE(v13.LowPart) = 1;
      ((void (__fastcall *)(_QWORD, _QWORD))PopDeepSleepResiliencyPhaseAccountingEnd)(v5, (LARGE_INTEGER)v13.QuadPart);
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
