/*
 * XREFs of SmHwAcceleratorPartitionMgrInsertAccelerator @ 0x140603974
 * Callers:
 *     SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x14078D0CC (SmHwAcceleratorMgrCreatePartitionAccelerators.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 */

void __fastcall SmHwAcceleratorPartitionMgrInsertAccelerator(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 *v3; // rdi
  __int64 v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rax
  __int64 *v9; // r14
  __int64 v10; // rax
  _QWORD *v11; // rcx

  v2 = *(_QWORD *)(a2 + 32);
  v3 = (unsigned __int64 *)(a1 + 24);
  v4 = *(int *)(a2 + 60);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire(a1 + 24, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v8, (__int64)v3);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  ++*(_DWORD *)(a1 + 4 * v4 + 48);
  v10 = *(_QWORD *)(a1 + 8 * v4 + 32) + 16LL * *(unsigned int *)(v2 + 44);
  v11 = *(_QWORD **)(v10 + 8);
  if ( *v11 != v10 )
    __fastfail(3u);
  *(_QWORD *)a2 = v10;
  *(_QWORD *)(a2 + 8) = v11;
  *v11 = a2;
  *(_QWORD *)(v10 + 8) = a2;
  if ( !*(_DWORD *)(a1 + 72) )
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 64LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegion();
}
