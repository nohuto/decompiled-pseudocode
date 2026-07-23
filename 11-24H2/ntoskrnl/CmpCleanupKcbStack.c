/*
 * XREFs of CmpCleanupKcbStack @ 0x14090AD10
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmQueryLayeredKey @ 0x140457758 (CmQueryLayeredKey.c)
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpDoBuildVirtualStack @ 0x1407DBB34 (CmpDoBuildVirtualStack.c)
 *     CmpAssignKeySecurity @ 0x1407DCF10 (CmpAssignKeySecurity.c)
 *     CmpPartialPromoteSubkeys @ 0x1407E4250 (CmpPartialPromoteSubkeys.c)
 *     CmpSetKeySecurity @ 0x140830A20 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpSubtreeEnumeratorCleanup @ 0x140909A04 (CmpSubtreeEnumeratorCleanup.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 *     CmpPromoteKey @ 0x1409708BC (CmpPromoteKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 */

void __fastcall CmpCleanupKcbStack(__int64 a1)
{
  struct _PRIVILEGE_SET *v1; // rcx

  v1 = *(struct _PRIVILEGE_SET **)(a1 + 24);
  if ( v1 )
    CmSiFreeMemory(v1);
}
