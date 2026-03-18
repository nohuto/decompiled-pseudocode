/*
 * XREFs of PspReferenceCpuPartitionByHandle @ 0x140767520
 * Callers:
 *     NtCreateCpuPartition @ 0x140765E10 (NtCreateCpuPartition.c)
 *     NtQueryInformationCpuPartition @ 0x140766300 (NtQueryInformationCpuPartition.c)
 *     NtSetInformationCpuPartition @ 0x1407664F0 (NtSetInformationCpuPartition.c)
 *     PspAssignCpuPartitionsToProcess @ 0x140766F94 (PspAssignCpuPartitionsToProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCheckObjectAccess @ 0x14086E090 (ObCheckObjectAccess.c)
 *     SeCreateAccessState @ 0x1409154F0 (SeCreateAccessState.c)
 */

__int64 __fastcall PspReferenceCpuPartitionByHandle(
        ULONG_PTR BugCheckParameter1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 result; // rax
  NTSTATUS v8[4]; // [rsp+40h] [rbp-1B8h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+50h] [rbp-1A8h] BYREF
  _BYTE v10[224]; // [rsp+F0h] [rbp-108h] BYREF

  memset_0(&AccessState, 0, sizeof(AccessState));
  memset_0(v10, 0, sizeof(v10));
  if ( BugCheckParameter1 != -1LL )
    return ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x50707350u, (__int64)a5, 0LL, 0LL);
  result = SeCreateAccessState(&AccessState, v10, a2, &PsCpuPartitionType->TypeInfo.GenericMapping);
  v8[0] = result;
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int8)ObCheckObjectAccess(PspSystemCpuPartition, &AccessState, v8) )
    {
      v8[0] = 0;
      ObfReferenceObjectWithTag(PspSystemCpuPartition, 0x50707350u);
      *a5 = PspSystemCpuPartition;
    }
    SeDeleteAccessState(&AccessState);
    return (unsigned int)v8[0];
  }
  return result;
}
