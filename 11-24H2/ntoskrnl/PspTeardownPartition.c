/*
 * XREFs of PspTeardownPartition @ 0x14077AF00
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x14022B3F0 (PsDereferencePartition.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     PsTerminateMinimalProcess @ 0x140778D58 (PsTerminateMinimalProcess.c)
 *     ExpPartitionDestroy @ 0x1407C00FC (ExpPartitionDestroy.c)
 *     MiDeletePartition @ 0x1407ECBFC (MiDeletePartition.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 */

LONG_PTR __fastcall PspTeardownPartition(_QWORD *Object)
{
  void *v2; // rcx
  void *v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  char *v5; // rax
  char *v6; // r14
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
  v5 = (char *)KeAbPreAcquire((__int64)(Object + 14), 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)Object + 28, 0LL) )
    ExfAcquirePushLockExclusiveEx(Object + 14, v5, (__int64)(Object + 14));
  if ( v6 )
    v6[10] = 1;
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
