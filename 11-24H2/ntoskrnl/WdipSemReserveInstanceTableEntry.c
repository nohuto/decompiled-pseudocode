/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x140A3F980
 * Callers:
 *     WdipSemEnableScenario @ 0x140A3E10C (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407A2478 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140A3FAC0 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemBuildScenarioInstance @ 0x140A3FB08 (WdipSemBuildScenarioInstance.c)
 */

_QWORD *__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rbx
  char *v6; // rax
  signed __int8 v7; // cf
  char *v8; // rbp
  signed __int64 v9; // rdx
  ULONG_PTR v10; // rtt
  _QWORD *v12; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 0LL;
  v6 = (char *)KeAbPreAcquire((__int64)&qword_140F021D8, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F021D8, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_140F021D8, v6, (__int64)&qword_140F021D8);
  if ( v8 )
    v8[10] = 1;
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_140F021D0 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(_WORD *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v5 = (_QWORD *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v5 )
      {
        v12 = (_QWORD *)qword_140F021C8;
        if ( *(__int64 **)qword_140F021C8 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v5 = &WdipSemEnabledInstanceTable;
        v5[1] = v12;
        *v12 = v5;
        ++dword_140F021D0;
        qword_140F021C8 = (__int64)v5;
      }
    }
  }
  _m_prefetchw(&qword_140F021D8);
  v9 = qword_140F021D8 - 16;
  if ( (qword_140F021D8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v9 = 0LL;
  if ( (qword_140F021D8 & 2) != 0
    || (v10 = qword_140F021D8,
        v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F021D8, v9, qword_140F021D8)) )
  {
    ExfReleasePushLock(&qword_140F021D8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F021D8);
  KeLeaveCriticalRegion();
  return v5;
}
