/*
 * XREFs of CmSiProcessTupleInitialize @ 0x14065CEDC
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407C8AB0 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

void CmSiProcessTupleInitialize()
{
  CmpRegistryProcess = 0LL;
  *(_OWORD *)&xmmword_140EF6A70 = 0LL;
  xmmword_140EF6A80 = 0LL;
}
