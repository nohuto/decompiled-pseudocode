/*
 * XREFs of WdipSemAllocatePool @ 0x140A88C20
 * Callers:
 *     WdipSemFastAllocate @ 0x140A48E64 (WdipSemFastAllocate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall WdipSemAllocatePool(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v2; // ebx
  __int64 v3; // rsi
  _QWORD *v4; // rax
  signed __int8 v5; // cf
  _QWORD *v6; // rdi
  int v7; // ecx
  _QWORD *Pool2; // rax
  signed __int64 v9; // rdx
  ULONG_PTR v10; // rtt
  _QWORD *v12; // rcx

  CurrentThread = KeGetCurrentThread();
  v2 = (a1 + 15) & 0xFFFFFFF0;
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  v4 = KeAbPreAcquire((__int64)&qword_140E28B80, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140E28B80, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&qword_140E28B80, (__int64)v4, (__int64)&qword_140E28B80);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = dword_140E28B70;
  if ( v2 > dword_140E28B70 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      goto LABEL_7;
    v12 = (_QWORD *)qword_140E28B68;
    if ( *(PVOID **)qword_140E28B68 != &WdipSemPool )
      __fastfail(3u);
    Pool2[1] = qword_140E28B68;
    *Pool2 = &WdipSemPool;
    *v12 = Pool2;
    v7 = 4080;
    qword_140E28B68 = (__int64)Pool2;
    qword_140E28B78 = (__int64)(Pool2 + 2);
  }
  v3 = qword_140E28B78;
  qword_140E28B78 += v2;
  dword_140E28B70 = v7 - v2;
LABEL_7:
  _m_prefetchw(&qword_140E28B80);
  v9 = qword_140E28B80 - 16;
  if ( (qword_140E28B80 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v9 = 0LL;
  if ( (qword_140E28B80 & 2) != 0
    || (v10 = qword_140E28B80,
        v10 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140E28B80, v9, qword_140E28B80)) )
  {
    ExfReleasePushLock(&qword_140E28B80);
  }
  KeAbPostRelease((ULONG_PTR)&qword_140E28B80);
  KeLeaveCriticalRegion();
  return v3;
}
