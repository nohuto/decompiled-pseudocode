/*
 * XREFs of AMLIGetFirstChildNoLock @ 0x140040FEC
 * Callers:
 *     AMLIGetFirstChild @ 0x140040FA0 (AMLIGetFirstChild.c)
 *     AcpiAddTriageNSTree @ 0x14005F5BC (AcpiAddTriageNSTree.c)
 * Callees:
 *     CreateObjectHandle @ 0x14001A7CC (CreateObjectHandle.c)
 */

__int64 __fastcall AMLIGetFirstChildNoLock(_QWORD *a1)
{
  __int64 *v1; // rax

  v1 = (__int64 *)(*a1 + 24LL);
  if ( (__int64 *)*v1 == v1 )
    return 0LL;
  else
    return CreateObjectHandle(*v1);
}
