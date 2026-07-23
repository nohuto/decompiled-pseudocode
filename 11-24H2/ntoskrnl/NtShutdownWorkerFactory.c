/*
 * XREFs of NtShutdownWorkerFactory @ 0x1402BB2B0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpShutdownWorkerFactory @ 0x1403ADC94 (ExpShutdownWorkerFactory.c)
 *     ExSystemExceptionFilter @ 0x1407B73D0 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtShutdownWorkerFactory(HANDLE WorkerFactoryHandle, LONG *PendingWorkerCount)
{
  KPROCESSOR_MODE PreviousMode; // r9
  int v4; // esi
  struct _EX_RUNDOWN_REF *v5; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  struct _EX_RUNDOWN_REF *v9; // [rsp+78h] [rbp+20h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)PendingWorkerCount & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(WorkerFactoryHandle, 0x20u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)Object;
    ExpShutdownWorkerFactory(Object);
    ExWaitForRundownProtectionRelease(v5 + 13);
    v5 += 49;
    v9 = v5;
    _InterlockedAdd(PendingWorkerCount, v5->Count);
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    LODWORD(v5->Count) = 0;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  return v4;
}
