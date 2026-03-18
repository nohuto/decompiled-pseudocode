/*
 * XREFs of MiTbFlushTimeStampMayNeedFlush @ 0x14044FFB8
 * Callers:
 *     MiGetPageChain @ 0x140241940 (MiGetPageChain.c)
 *     MiChangePageAttribute @ 0x14024DE74 (MiChangePageAttribute.c)
 *     MiReleasePteMappings @ 0x1402BF490 (MiReleasePteMappings.c)
 *     MiGetPageChainSmallPageProcess @ 0x1402C7A50 (MiGetPageChainSmallPageProcess.c)
 *     MiFreeSlabEntry @ 0x1403B6480 (MiFreeSlabEntry.c)
 *     MiReleaseLargePdeMappings @ 0x140492BE8 (MiReleaseLargePdeMappings.c)
 *     MiDeleteStaleCacheMaps @ 0x140669E20 (MiDeleteStaleCacheMaps.c)
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
