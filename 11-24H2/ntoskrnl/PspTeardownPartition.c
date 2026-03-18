/*
 * XREFs of PspTeardownPartition @ 0x14077B050
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     PsDereferencePartition @ 0x140275E60 (PsDereferencePartition.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     PsTerminateMinimalProcess @ 0x140778C58 (PsTerminateMinimalProcess.c)
 *     ExpPartitionDestroy @ 0x1407BFCAC (ExpPartitionDestroy.c)
 *     MiDeletePartition @ 0x1407EC62C (MiDeletePartition.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 */

LONG_PTR __fastcall PspTeardownPartition(_QWORD *Object)
{
  void *v2; // rcx
  void *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // r14
  __int64 v7; // r15
  struct _KPROCESS *v8; // r14
  void *v9; // r12
  PVOID v10; // rax

  if ( Object == PspSystemPartition )
    KeBugCheckEx(0x18Eu, 1uLL, (ULONG_PTR)Object, 0LL, 0LL);
  v2 = (void *)*Object;
  if ( v2 )
  {
    MiDeletePartition(v2);
    *Object = 0LL;
  }
  v3 = (void *)Object[2];
  if ( v3 )
  {
    ExpPartitionDestroy(v3);
    Object[2] = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)(Object + 14), 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)Object + 28, 0LL) )
    ExfAcquirePushLockExclusiveEx(Object + 14, (__int64)v5, (__int64)(Object + 14));
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = Object[9];
  v8 = (struct _KPROCESS *)Object[15];
  v9 = (void *)Object[16];
  Object[9] = MmBadPointer;
  v10 = MmBadPointer;
  Object[16] = 0LL;
  Object[15] = v10;
  if ( (_InterlockedExchangeAdd64(Object + 14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(Object + 14);
  KeAbPostRelease((ULONG_PTR)(Object + 14));
  KeLeaveCriticalRegion();
  if ( v8 )
  {
    PsTerminateMinimalProcess(v8, 0);
    KeWaitForSingleObject(v8, Executive, 0, 0, 0LL);
    ObfDereferenceObject(v8);
    ObCloseHandle(v9, 0);
  }
  PsDereferencePartition(v7);
  return ObfDereferenceObjectWithTag(Object, 0x64726148u);
}
