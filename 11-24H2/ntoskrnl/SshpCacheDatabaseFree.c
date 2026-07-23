/*
 * XREFs of SshpCacheDatabaseFree @ 0x140A59C00
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1403E4650 (RtlDeleteElementGenericTableAvlEx.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140438B90 (CmpFreeTransientPoolWithTag.c)
 */

void __fastcall SshpCacheDatabaseFree(_RTL_AVL_TABLE *a1, PVOID a2)
{
  CmpFreeTransientPoolWithTag(a2, *((_DWORD *)a1->TableContext + 6));
}
