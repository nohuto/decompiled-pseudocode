/*
 * XREFs of NtTerminateJobObject @ 0x1408EA3F0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     EtwTraceJob @ 0x1408EAEF8 (EtwTraceJob.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1408EAFCC (PspTerminateAllProcessesInJobHierarchy.c)
 */

__int64 __fastcall NtTerminateJobObject(void *a1)
{
  NTSTATUS v1; // eax
  unsigned int v2; // ebx
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  Object = 0LL;
  v1 = ObReferenceObjectByHandle(a1, 8u, (POBJECT_TYPE)PsJobType, KeGetCurrentThread()->PreviousMode, &Object, 0LL);
  v2 = v1;
  if ( v1 < 0 )
  {
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJob(0LL, 0LL, (unsigned int)v1, 1825LL);
  }
  else
  {
    PspTerminateAllProcessesInJobHierarchy((PRKEVENT)Object);
    ObfDereferenceObject(Object);
  }
  return v2;
}
