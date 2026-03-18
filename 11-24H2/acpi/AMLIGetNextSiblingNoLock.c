/*
 * XREFs of AMLIGetNextSiblingNoLock @ 0x140040F68
 * Callers:
 *     AMLIGetNextSibling @ 0x140040F18 (AMLIGetNextSibling.c)
 *     AcpiAddTriageNSTree @ 0x14005F5BC (AcpiAddTriageNSTree.c)
 * Callees:
 *     CreateObjectHandle @ 0x14001A7CC (CreateObjectHandle.c)
 */

__int64 __fastcall AMLIGetNextSiblingNoLock(__int64 **a1)
{
  __int64 *v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx

  v1 = *a1;
  v2 = 0LL;
  v3 = v1[2];
  if ( v3 )
  {
    v4 = *v1;
    if ( v4 != v3 + 24 )
      return CreateObjectHandle(v4);
  }
  return v2;
}
