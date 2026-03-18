/*
 * XREFs of SshpCacheDatabaseFree @ 0x140A61420
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1403F0930 (RtlDeleteElementGenericTableAvlEx.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140441FC0 (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall SshpCacheDatabaseFree(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  CmpFreeTransientPoolWithTag(Buffer, *((_DWORD *)Table->TableContext + 6));
}
