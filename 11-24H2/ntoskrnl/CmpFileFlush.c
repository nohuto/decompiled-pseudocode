/*
 * XREFs of CmpFileFlush @ 0x140982C0C
 * Callers:
 *     CmpSaveKeyByFileCopy @ 0x1407CEFE0 (CmpSaveKeyByFileCopy.c)
 *     CmpFileFlushAndPurge @ 0x140981014 (CmpFileFlushAndPurge.c)
 *     HvLoadHive @ 0x14098133C (HvLoadHive.c)
 *     HvWriteExternal @ 0x140A6D050 (HvWriteExternal.c)
 * Callees:
 *     CmpDoFileFlush @ 0x140490EF0 (CmpDoFileFlush.c)
 */

NTSTATUS __fastcall CmpFileFlush(__int64 a1, unsigned int a2)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8LL * a2 + 1544);
  if ( v2 )
    return CmpDoFileFlush(v2);
  else
    return 0;
}
