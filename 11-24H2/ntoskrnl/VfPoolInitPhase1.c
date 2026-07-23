/*
 * XREFs of VfPoolInitPhase1 @ 0x140B9C3F0
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140B85980 (VfInitSystemNoRebootNeeded.c)
 *     VerifierInitSystem @ 0x140C3D310 (VerifierInitSystem.c)
 * Callees:
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     InitializeSListHead @ 0x140454D40 (InitializeSListHead.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     PsCreateSystemThread @ 0x1408F8C00 (PsCreateSystemThread.c)
 */

NTSTATUS VfPoolInitPhase1()
{
  NTSTATUS result; // eax
  unsigned int *v1; // rbx
  HANDLE v2; // rcx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID Object; // [rsp+98h] [rbp+28h] BYREF

  ThreadHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  if ( (VfRuleClasses & 0x400000) == 0 || (result = MmVerifierData, (MmVerifierData & 1) != 0) )
  {
    v1 = (unsigned int *)&unk_140E28A68;
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
                 v1 - 10);
      if ( result >= 0 )
      {
        Object = 0LL;
        ObReferenceObjectByHandle(ThreadHandle, 0, (POBJECT_TYPE)PsThreadType, 0, &Object, 0LL);
        v2 = ThreadHandle;
        *(_QWORD *)v1 = Object;
        ZwClose(v2);
        InitializeSListHead((PSLIST_HEADER)(v1 - 10));
        result = _InterlockedExchange((volatile __int32 *)v1 + 2, 1);
      }
      v1 += 16;
    }
    while ( (__int64)v1 < (__int64)&ViHalWaitBlockLookaside.L.Tag );
  }
  return result;
}
