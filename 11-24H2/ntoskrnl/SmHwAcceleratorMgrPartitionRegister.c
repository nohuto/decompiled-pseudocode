/*
 * XREFs of SmHwAcceleratorMgrPartitionRegister @ 0x14079C60C
 * Callers:
 *     SmHwAcceleratorPartitionMgrStart @ 0x14079CCB0 (SmHwAcceleratorPartitionMgrStart.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     SmHwAcceleratorMgrAcquireAccelerators @ 0x14079BE58 (SmHwAcceleratorMgrAcquireAccelerators.c)
 *     SmHwAcceleratorMgrCreatePartitionAccelerators @ 0x14079C48C (SmHwAcceleratorMgrCreatePartitionAccelerators.c)
 *     SmHwAcceleratorMgrPartitionUnregister @ 0x14079C72C (SmHwAcceleratorMgrPartitionUnregister.c)
 */

__int64 __fastcall SmHwAcceleratorMgrPartitionRegister(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  int v7; // r14d
  _QWORD *v8; // rcx
  int PartitionAccelerators; // ebp

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(BugCheckParameter2, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, (__int64)v5, BugCheckParameter2);
  v7 = 1;
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
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
