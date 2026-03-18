/*
 * XREFs of MiFreeForkMappingPte @ 0x1406FBF5C
 * Callers:
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiUnmapSinglePage @ 0x1404CA48C (MiUnmapSinglePage.c)
 */

unsigned __int64 __fastcall MiFreeForkMappingPte(__int64 a1)
{
  unsigned __int64 result; // rax

  result = *(_QWORD *)(a1 + 56);
  if ( result )
    return MiUnmapSinglePage(*(_QWORD *)(a1 + 56));
  if ( *(_BYTE *)(a1 + 192) )
    return MiDeleteUltraThreadContext(a1 + 72);
  return result;
}
