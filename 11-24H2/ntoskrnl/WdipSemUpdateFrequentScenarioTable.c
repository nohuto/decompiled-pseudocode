/*
 * XREFs of WdipSemUpdateFrequentScenarioTable @ 0x1407A25AC
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x1407A2368 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     WdipSemFastAllocate @ 0x140A48E64 (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemUpdateFrequentScenarioTable(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // ebx
  _QWORD *v4; // rax
  signed __int8 v5; // cf
  _QWORD *v6; // rdi
  __int64 v7; // rax
  signed __int64 v8; // rdx
  ULONG_PTR v9; // rtt

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire((__int64)&qword_140EFFEC8, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140EFFEC8, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140EFFEC8, (__int64)v4, (__int64)&qword_140EFFEC8);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  if ( a1 )
  {
    if ( (unsigned int)dword_140EFFEC0 < 0x80 )
    {
      v7 = WdipSemFastAllocate(5LL, 24LL);
      if ( v7 )
      {
        *(_OWORD *)v7 = *(_OWORD *)a1;
        *(_QWORD *)(v7 + 16) = *(_QWORD *)(a1 + 16);
        WdipSemFrequentScenarioTable[dword_140EFFEC0++] = v7;
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
  _m_prefetchw(&qword_140EFFEC8);
  v8 = qword_140EFFEC8 - 16;
  if ( (qword_140EFFEC8 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v8 = 0LL;
  if ( (qword_140EFFEC8 & 2) != 0
    || (v9 = qword_140EFFEC8,
        v9 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140EFFEC8, v8, qword_140EFFEC8)) )
  {
    ExfReleasePushLock(&qword_140EFFEC8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140EFFEC8);
  KeLeaveCriticalRegion();
  return v3;
}
