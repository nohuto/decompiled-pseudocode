/*
 * XREFs of NtShutdownWorkerFactory @ 0x1402C6730
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140275CD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402C6A90 (ExWaitForRundownProtectionRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D8540 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExpShutdownWorkerFactory @ 0x1403BF0B0 (ExpShutdownWorkerFactory.c)
 *     ExSystemExceptionFilter @ 0x1407B6F80 (ExSystemExceptionFilter.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtShutdownWorkerFactory(void *a1, volatile signed __int32 *a2)
{
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v4; // esi
  struct _EX_RUNDOWN_REF *v5; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  struct _EX_RUNDOWN_REF *v9; // [rsp+78h] [rbp+20h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && ((unsigned __int8)a2 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  Object = 0LL;
  v4 = ObReferenceObjectByHandle(a1, 0x20u, ExpWorkerFactoryObjectType, PreviousMode, &Object, 0LL);
  if ( v4 >= 0 )
  {
    v5 = (struct _EX_RUNDOWN_REF *)Object;
    ExpShutdownWorkerFactory(Object);
    ExWaitForRundownProtectionRelease(v5 + 13);
    v5 += 49;
    v9 = v5;
    _InterlockedAdd(a2, v5->Count);
    KeAcquireInStackQueuedSpinLock(*((PKSPIN_LOCK *)Object + 2), &LockHandle);
    LODWORD(v5->Count) = 0;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ObfDereferenceObjectWithTag(Object, 0x746C6644u);
  }
  return (unsigned int)v4;
}
