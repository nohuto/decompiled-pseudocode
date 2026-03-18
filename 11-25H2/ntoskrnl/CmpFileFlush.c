/*
 * XREFs of CmpFileFlush @ 0x1409F9B2C
 * Callers:
 *     CmpSaveKeyByFileCopy @ 0x1407BF7D0 (CmpSaveKeyByFileCopy.c)
 *     HvWriteExternal @ 0x1409F6CF4 (HvWriteExternal.c)
 *     CmpFileFlushAndPurge @ 0x1409F83E8 (CmpFileFlushAndPurge.c)
 *     HvLoadHive @ 0x1409F8C4C (HvLoadHive.c)
 * Callees:
 *     CmpDoFileFlush @ 0x140491E3C (CmpDoFileFlush.c)
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
