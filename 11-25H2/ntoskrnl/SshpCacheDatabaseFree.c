/*
 * XREFs of SshpCacheDatabaseFree @ 0x140A60170
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x1403EAAD0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1403EADF0 (RtlDeleteElementGenericTableAvlEx.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall SshpCacheDatabaseFree(_RTL_AVL_TABLE *a1, PVOID a2)
{
  CmpFreeTransientPoolWithTag(a2, *((_DWORD *)a1->TableContext + 6));
}
