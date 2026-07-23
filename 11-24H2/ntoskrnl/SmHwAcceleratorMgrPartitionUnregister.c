/*
 * XREFs of SmHwAcceleratorMgrPartitionUnregister @ 0x14079C83C
 * Callers:
 *     SmHwAcceleratorMgrPartitionRegister @ 0x14079C71C (SmHwAcceleratorMgrPartitionRegister.c)
 *     SmHwAcceleratorPartitionMgrCleanup @ 0x14079CC8C (SmHwAcceleratorPartitionMgrCleanup.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     SmHwAcceleratorMgrReleaseAccelerators @ 0x14079C918 (SmHwAcceleratorMgrReleaseAccelerators.c)
 */

void __fastcall SmHwAcceleratorMgrPartitionUnregister(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v5; // rax
  char *v6; // rbp
  __int64 v7; // rcx
  _QWORD *v8; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (char *)KeAbPreAcquire(BugCheckParameter2, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v5, BugCheckParameter2);
  if ( v6 )
    v6[10] = 1;
  v7 = *a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v8 = (_QWORD *)a2[1], (_QWORD *)*v8 != a2) )
    __fastfail(3u);
  *v8 = v7;
  *(_QWORD *)(v7 + 8) = v8;
  a2[2] = 0LL;
  if ( *(_QWORD *)(BugCheckParameter2 + 8) == BugCheckParameter2 + 8
    && (unsigned int)(*(_DWORD *)(BugCheckParameter2 + 1304) - 1) <= 0xFFFFFFFD )
  {
    SmHwAcceleratorMgrReleaseAccelerators(BugCheckParameter2);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  KeLeaveCriticalRegion();
}
