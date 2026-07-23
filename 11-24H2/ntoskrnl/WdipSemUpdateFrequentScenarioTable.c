/*
 * XREFs of WdipSemUpdateFrequentScenarioTable @ 0x1407A26BC
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407A2478 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     WdipSemFastAllocate @ 0x140A3FB7C (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemUpdateFrequentScenarioTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rdi
  __int64 v7; // rax
  signed __int64 v8; // rdx
  ULONG_PTR v9; // rtt

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)&qword_140F00188, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140F00188, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140F00188, v4, (__int64)&qword_140F00188);
  if ( v6 )
    v6[10] = 1;
  if ( a1 )
  {
    if ( (unsigned int)dword_140F00180 < 0x80 )
    {
      v7 = WdipSemFastAllocate(5LL, 24LL);
      if ( v7 )
      {
        *(_OWORD *)v7 = *(_OWORD *)a1;
        *(_QWORD *)(v7 + 16) = *(_QWORD *)(a1 + 16);
        WdipSemFrequentScenarioTable[dword_140F00180++] = v7;
      }
      else
      {
        v3 = -1073741670;
      }
    }
    else
    {
      v3 = -1073741823;
    }
  }
  else
  {
    v3 = -1073741811;
  }
  _m_prefetchw(&qword_140F00188);
  v8 = qword_140F00188 - 16;
  if ( (qword_140F00188 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (qword_140F00188 & 2) != 0
    || (v9 = qword_140F00188,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140F00188, v8, qword_140F00188)) )
  {
    ExfReleasePushLock(&qword_140F00188);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140F00188);
  KeLeaveCriticalRegion();
  return v3;
}
