/*
 * XREFs of CmSiProcessTupleInitialize @ 0x1406689AC
 * Callers:
 *     CmpInitializeRegistryProcess @ 0x1407D8250 (CmpInitializeRegistryProcess.c)
 * Callees:
 *     <none>
 */

void CmSiProcessTupleInitialize()
{
  CmpRegistryProcess = 0LL;
  *(_OWORD *)&xmmword_140EF6E10 = 0LL;
  xmmword_140EF6E20 = 0LL;
}
