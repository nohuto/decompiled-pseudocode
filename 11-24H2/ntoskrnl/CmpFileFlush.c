/*
 * XREFs of CmpFileFlush @ 0x14096B41C
 * Callers:
 *     CmpSaveKeyByFileCopy @ 0x1407CF4D0 (CmpSaveKeyByFileCopy.c)
 *     CmpFileFlushAndPurge @ 0x140969824 (CmpFileFlushAndPurge.c)
 *     HvLoadHive @ 0x140969B4C (HvLoadHive.c)
 *     HvWriteExternal @ 0x140A66710 (HvWriteExternal.c)
 * Callees:
 *     CmpDoFileFlush @ 0x14048BB7C (CmpDoFileFlush.c)
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
