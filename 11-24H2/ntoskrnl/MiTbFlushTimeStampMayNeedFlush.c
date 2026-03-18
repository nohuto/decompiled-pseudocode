/*
 * XREFs of MiTbFlushTimeStampMayNeedFlush @ 0x1404519BC
 * Callers:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiReleasePteMappings @ 0x140241200 (MiReleasePteMappings.c)
 *     MiFreeSlabEntry @ 0x1402D2150 (MiFreeSlabEntry.c)
 *     MiGetPageChainSmallPageProcess @ 0x1402FBB90 (MiGetPageChainSmallPageProcess.c)
 *     MiGetPageChain @ 0x1402FCDC0 (MiGetPageChain.c)
 *     MiReleaseLargePdeMappings @ 0x140491DC4 (MiReleaseLargePdeMappings.c)
 *     MiDeleteStaleCacheMaps @ 0x140675880 (MiDeleteStaleCacheMaps.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiTbFlushTimeStampMayNeedFlush(int a1, int a2, int a3)
{
  unsigned int v3; // edx
  bool result; // al

  v3 = a3 & (a2 - a1);
  if ( v3 > 2 )
    return 0;
  result = 1;
  if ( (a1 & 1) == 0 )
    return v3 < 2;
  return result;
}
