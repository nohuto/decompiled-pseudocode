/*
 * XREFs of NtAssignProcessToJobObject @ 0x140A0E5B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     EtwTraceJobAssignProcess @ 0x140A0E6D8 (EtwTraceJobAssignProcess.c)
 *     PsAssignProcessToJobObject @ 0x140A0E780 (PsAssignProcessToJobObject.c)
 */

NTSTATUS __cdecl NtAssignProcessToJobObject(HANDLE JobHandle, HANDLE ProcessHandle)
{
  KPROCESSOR_MODE PreviousMode; // bp
  NTSTATUS v4; // esi
  PVOID v5; // rdi
  PVOID v6; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v9; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 0LL;
  v4 = ObReferenceObjectByHandle(JobHandle, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, &v9, 0LL);
  if ( v4 >= 0
    && (ProcessHandle == (HANDLE)-7LL
     || (v4 = ObpReferenceObjectByHandleWithTag(
                (ULONG_PTR)ProcessHandle,
                257,
                (__int64)PsProcessType,
                PreviousMode,
                0x624A7350u,
                &Object,
                0LL,
                0LL),
         v4 >= 0)) )
  {
    v5 = Object;
    v6 = v9;
    v4 = PsAssignProcessToJobObject(v9, (ULONG_PTR)Object);
  }
  else
  {
    v5 = Object;
    v6 = v9;
  }
  if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
    EtwTraceJobAssignProcess(v6, v5, (unsigned int)v4);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x624A7350u);
  if ( v6 )
    ObfDereferenceObject(v6);
  return v4;
}
