/*
 * XREFs of SmHwAcceleratorPartitionMgrInsertAccelerator @ 0x14060DEF4
 * Callers:
 *     SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x14079C59C (SmHwAcceleratorMgrCreatePartitionAccelerators.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

void __fastcall SmHwAcceleratorPartitionMgrInsertAccelerator(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 *v3; // rdi
  __int64 v4; // r12
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // rax
  char *v9; // r14
  __int64 v10; // rax
  _QWORD *v11; // rcx

  v2 = *(_QWORD *)(a2 + 32);
  v3 = (unsigned __int64 *)(a1 + 24);
  v4 = *(int *)(a2 + 60);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (char *)KeAbPreAcquire(a1 + 24, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v8, (__int64)v3);
  if ( v9 )
    v9[10] = 1;
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
