/*
 * XREFs of NtAssignProcessToJobObject @ 0x140A17020
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     EtwTraceJobAssignProcess @ 0x140A17148 (EtwTraceJobAssignProcess.c)
 *     PsAssignProcessToJobObject @ 0x140A171F0 (PsAssignProcessToJobObject.c)
 */

__int64 __fastcall NtAssignProcessToJobObject(void *a1, ULONG_PTR a2)
{
  KPROCESSOR_MODE PreviousMode; // bp
  int v4; // esi
  PVOID v5; // rdi
  PVOID v6; // rbx
  PVOID Object; // [rsp+70h] [rbp+18h] BYREF
  PVOID v9; // [rsp+78h] [rbp+20h] BYREF

  Object = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v9 = 0LL;
  v4 = ObReferenceObjectByHandle(a1, 1u, (POBJECT_TYPE)PsJobType, PreviousMode, &v9, 0LL);
  if ( v4 >= 0
    && (a2 == -7LL
     || (v4 = ObpReferenceObjectByHandleWithTag(
                a2,
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
  return (unsigned int)v4;
}
