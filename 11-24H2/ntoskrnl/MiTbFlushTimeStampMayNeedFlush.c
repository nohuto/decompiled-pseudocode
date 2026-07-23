/*
 * XREFs of MiTbFlushTimeStampMayNeedFlush @ 0x140446A68
 * Callers:
 *     MiReleasePteMappings @ 0x140209350 (MiReleasePteMappings.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiGetPageChainSmallPageProcess @ 0x140253A70 (MiGetPageChainSmallPageProcess.c)
 *     MiGetPageChain @ 0x140307540 (MiGetPageChain.c)
 *     MiFreeSlabEntry @ 0x1403533C8 (MiFreeSlabEntry.c)
 *     MiReleaseLargePdeMappings @ 0x14048CC64 (MiReleaseLargePdeMappings.c)
 *     MiDeleteStaleCacheMaps @ 0x140676A50 (MiDeleteStaleCacheMaps.c)
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
