/*
 * XREFs of CmpCleanupKcbStack @ 0x1409172A0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041AAA8 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x140462148 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407CDBFC (CmSaveKey.c)
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407DB5E4 (CmpDoBuildVirtualStack.c)
 *     CmpAssignKeySecurity @ 0x1407DC9C0 (CmpAssignKeySecurity.c)
 *     CmpPartialPromoteSubkeys @ 0x1407E3D00 (CmpPartialPromoteSubkeys.c)
 *     CmDeleteKey @ 0x140869BFC (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140915F94 (CmpSubtreeEnumeratorCleanup.c)
 *     CmSetLastWriteTimeKey @ 0x14097A430 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x14097AE70 (CmSetKeyFlags.c)
 *     CmpPromoteKey @ 0x1409880D8 (CmpPromoteKey.c)
 *     CmpSetKeySecurity @ 0x14099FAEC (CmpSetKeySecurity.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 */

void __fastcall CmpCleanupKcbStack(__int64 a1)
{
  struct _PRIVILEGE_SET *v1; // rcx

  v1 = *(struct _PRIVILEGE_SET **)(a1 + 24);
  if ( v1 )
    CmSiFreeMemory(v1);
}
