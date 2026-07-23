/*
 * XREFs of SshpCacheDatabaseAllocate @ 0x140A62900
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x1403EA890 (RtlInsertElementGenericTableAvl.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1403EB080 (RtlInsertElementGenericTableFullAvl.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall SshpCacheDatabaseAllocate(_RTL_AVL_TABLE *a1)
{
  return ExAllocatePool2(0x100uLL);
}
