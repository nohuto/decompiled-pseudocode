/*
 * XREFs of PspReferenceCpuPartitionByHandle @ 0x140776EF0
 * Callers:
 *     NtCreateCpuPartition @ 0x1407757E0 (NtCreateCpuPartition.c)
 *     NtQueryInformationCpuPartition @ 0x140775CD0 (NtQueryInformationCpuPartition.c)
 *     NtSetInformationCpuPartition @ 0x140775EC0 (NtSetInformationCpuPartition.c)
 *     PspAssignCpuPartitionsToProcess @ 0x140776964 (PspAssignCpuPartitionsToProcess.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     SeCreateAccessState @ 0x14083F490 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084B7E0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCheckObjectAccess @ 0x14087A740 (ObCheckObjectAccess.c)
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
    if ( (unsigned __int8)ObCheckObjectAccess((ULONG_PTR)PspSystemCpuPartition, &AccessState, v8) )
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
