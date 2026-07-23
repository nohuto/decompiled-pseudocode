/*
 * XREFs of WdipSemAllocatePool @ 0x140A85020
 * Callers:
 *     WdipSemFastAllocate @ 0x140A3FB7C (WdipSemFastAllocate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // ebx
  __int64 v3; // rsi
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rdi
  int v7; // ecx
  _QWORD *Pool2; // rax
  signed __int64 v9; // rdx
  ULONG_PTR v10; // rtt
  _QWORD *v12; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (a1 + 15) & 0xFFFFFFF0;
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  v4 = (char *)KeAbPreAcquire((__int64)&qword_140E28CC0, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E28CC0, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140E28CC0, v4, (__int64)&qword_140E28CC0);
  if ( v6 )
    v6[10] = 1;
  v7 = dword_140E28CB0;
  if ( v2 > dword_140E28CB0 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x1000uLL, 0x73494457u);
    if ( !Pool2 )
      goto LABEL_7;
    v12 = (_QWORD *)qword_140E28CA8;
    if ( *(PVOID **)qword_140E28CA8 != &WdipSemPool )
      __fastfail(3u);
    Pool2[1] = qword_140E28CA8;
    *Pool2 = &WdipSemPool;
    *v12 = Pool2;
    v7 = 4080;
    qword_140E28CA8 = (__int64)Pool2;
    qword_140E28CB8 = (__int64)(Pool2 + 2);
  }
  v3 = qword_140E28CB8;
  qword_140E28CB8 += v2;
  dword_140E28CB0 = v7 - v2;
LABEL_7:
  _m_prefetchw(&qword_140E28CC0);
  v9 = qword_140E28CC0 - 16;
  if ( (qword_140E28CC0 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v9 = 0LL;
  if ( (qword_140E28CC0 & 2) != 0
    || (v10 = qword_140E28CC0,
        v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E28CC0, v9, qword_140E28CC0)) )
  {
    ExfReleasePushLock(&qword_140E28CC0);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140E28CC0);
  KeLeaveCriticalRegion();
  return v3;
}
