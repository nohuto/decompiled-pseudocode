/*
 * XREFs of KiXSavesManagesIpt @ 0x1405B632C
 * Callers:
 *     KiQueryIptSupport @ 0x140B592A0 (KiQueryIptSupport.c)
 * Callees:
 *     <none>
 */

bool KiXSavesManagesIpt()
{
  return (_bittest64(&KeEnabledSupervisorXStateFeatures, 8u) & _bittest64(&KeFeatureBits, 0x17u)) != 0;
}
