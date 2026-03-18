/*
 * XREFs of AMLIGetParentNoLock @ 0x140016104
 * Callers:
 *     AMLIGetParent @ 0x1400160B8 (AMLIGetParent.c)
 *     AcpiAddTriageNSTree @ 0x14005F5BC (AcpiAddTriageNSTree.c)
 * Callees:
 *     CreateObjectHandle @ 0x14001A7CC (CreateObjectHandle.c)
 */

__int64 __fastcall AMLIGetParentNoLock(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 16LL);
  result = 0LL;
  if ( v1 )
    return CreateObjectHandle(v1);
  return result;
}
