/*
 * XREFs of VfPoolInitPhase1 @ 0x140B9A3F0
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140B83980 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x140C3B1B8 (VerifierInitSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x14045FE80 (InitializeSListHead.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x140A22450 (PsCreateSystemThread.c)
 */

NTSTATUS VfPoolInitPhase1()
{
  NTSTATUS result; // eax
  struct _KTHREAD **v1; // rbx
  HANDLE v2; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  ThreadHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  if ( (VfRuleClasses & 0x400000) == 0 || (result = MmVerifierData, (MmVerifierData & 1) != 0) )
  {
    v1 = (struct _KTHREAD **)&unk_140E28878;
    do
    {
      KeInitializeEvent((PRKEVENT)v1 - 1, SynchronizationEvent, 0);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      result = PsCreateSystemThread(
                 &ThreadHandle,
                 0,
                 &ObjectAttributes,
                 0LL,
                 0LL,
                 ViPoolDelayFreeTrimThreadRoutine,
                 v1 - 5);
      if ( result >= 0 )
      {
        Object = 0LL;
        ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        v2 = ThreadHandle;
        *v1 = (struct _KTHREAD *)Object;
        ZwClose(v2);
        InitializeSListHead((PSLIST_HEADER)(v1 - 5));
        result = _InterlockedExchange((volatile __int32 *)v1 + 2, 1);
      }
      v1 += 8;
    }
    while ( (__int64)v1 < (__int64)&qword_140E288F8 );
  }
  return result;
}
