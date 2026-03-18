/*
 * XREFs of KiXSavesManagesIpt @ 0x1405B4F2C
 * Callers:
 *     KiQueryIptSupport @ 0x140B47280 (KiQueryIptSupport.c)
 * Callees:
 *     <none>
 */

bool KiXSavesManagesIpt()
{
  return (_bittest64(&KeEnabledSupervisorXStateFeatures, 8u) & _bittest64(&KeFeatureBits, 0x17u)) != 0;
}
