/*
 * XREFs of WdipSemReserveInstanceTableEntry @ 0x140A48C68
 * Callers:
 *     WdipSemEnableScenario @ 0x140A4835C (WdipSemEnableScenario.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407A2368 (WdipSemLogInflightLimitExceededInformation.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x140A48DA8 (WdipSemQueryEnabledInstanceTable.c)
 *     WdipSemBuildScenarioInstance @ 0x140A48DF0 (WdipSemBuildScenarioInstance.c)
 */

_QWORD *__fastcall WdipSemReserveInstanceTableEntry(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  signed __int8 v7; // cf
  _QWORD *v8; // rbp
  signed __int64 v9; // rdx
  ULONG_PTR v10; // rtt
  _QWORD *v12; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = 0LL;
  v6 = KeAbPreAcquire((__int64)&qword_140EFFEF8, 0LL);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140EFFEF8, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_140EFFEF8, (__int64)v6, (__int64)&qword_140EFFEF8);
  if ( v8 )
    *((_BYTE *)v8 + 10) = 1;
  if ( a1 && a2 )
  {
    if ( (unsigned int)dword_140EFFEF0 >= 0x80 )
    {
      WdipSemLogInflightLimitExceededInformation(a1, *(_WORD *)(a1 + 16), a2);
    }
    else if ( !WdipSemQueryEnabledInstanceTable(a2) )
    {
      v5 = (_QWORD *)WdipSemBuildScenarioInstance(a1, a2);
      if ( v5 )
      {
        v12 = (_QWORD *)qword_140EFFEE8;
        if ( *(__int64 **)qword_140EFFEE8 != &WdipSemEnabledInstanceTable )
          __fastfail(3u);
        *v5 = &WdipSemEnabledInstanceTable;
        v5[1] = v12;
        *v12 = v5;
        ++dword_140EFFEF0;
        qword_140EFFEE8 = (__int64)v5;
      }
    }
  }
  _m_prefetchw(&qword_140EFFEF8);
  v9 = qword_140EFFEF8 - 16;
  if ( (qword_140EFFEF8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v9 = 0LL;
  if ( (qword_140EFFEF8 & 2) != 0
    || (v10 = qword_140EFFEF8,
        v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140EFFEF8, v9, qword_140EFFEF8)) )
  {
    ExfReleasePushLock(&qword_140EFFEF8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140EFFEF8);
  KeLeaveCriticalRegion();
  return v5;
}
