/*
 * XREFs of CmSiProcessTupleInitialize @ 0x140669B84
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407D87A0 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

void CmSiProcessTupleInitialize()
{
  CmpRegistryProcess = 0LL;
  *(_OWORD *)&xmmword_140EF7050 = 0LL;
  xmmword_140EF7060 = 0LL;
}
