/*
 * XREFs of SmHwAcceleratorMgrPartitionRegister @ 0x14079C71C
 * Callers:
 *     SmHwAcceleratorPartitionMgrStart @ 0x14079CDC0 (SmHwAcceleratorPartitionMgrStart.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14079BF68 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x14079C59C (SmHwAcceleratorMgrCreatePartitionAccelerators.c)
 *     SmHwAcceleratorMgrPartitionUnregister @ 0x14079C83C (SmHwAcceleratorMgrPartitionUnregister.c)
 */

__int64 __fastcall SmHwAcceleratorMgrPartitionRegister(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v5; // rax
  char *v6; // rbp
  int v7; // r14d
  _QWORD *v8; // rcx
  int PartitionAccelerators; // ebp

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v5, BugCheckParameter2);
  v7 = 1;
  if ( v6 )
    v6[10] = 1;
  if ( !*(_DWORD *)(BugCheckParameter2 + 1304) && (int)SmHwAcceleratorMgrAcquireAccelerators(BugCheckParameter2) < 0 )
    *(_DWORD *)(BugCheckParameter2 + 1304) = -1;
  v8 = *(_QWORD **)(BugCheckParameter2 + 16);
  if ( *v8 != BugCheckParameter2 + 8 )
    __fastfail(3u);
  *a2 = BugCheckParameter2 + 8;
  a2[1] = v8;
  *v8 = a2;
  *(_QWORD *)(BugCheckParameter2 + 16) = a2;
  a2[2] = BugCheckParameter2;
  if ( *(_DWORD *)(BugCheckParameter2 + 1304) == -1
    || (PartitionAccelerators = SmHwAcceleratorMgrCreatePartitionAccelerators(BugCheckParameter2, (__int64)a2),
        PartitionAccelerators >= 0) )
  {
    v7 = 0;
    PartitionAccelerators = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
  if ( v7 )
    SmHwAcceleratorMgrPartitionUnregister(BugCheckParameter2);
  return (unsigned int)PartitionAccelerators;
}
