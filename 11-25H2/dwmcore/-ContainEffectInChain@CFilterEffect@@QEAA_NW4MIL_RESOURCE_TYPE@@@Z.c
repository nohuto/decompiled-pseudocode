/*
 * XREFs of ?ContainEffectInChain@CFilterEffect@@QEAA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18022E110
 * Callers:
 *     ?Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEBVCVisual@@AEBUD2D_POINTANDSIZE_F@@PEAPEAV1@@Z @ 0x18022DF68 (-Create@CFilterEffectLayer@@SAJPEAVIDeviceTarget@@AEBUD2D_POINTANDSIZE_L@@PEAVCFilterEffect@@PEB.c)
 * Callees:
 *     ?ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z @ 0x18022E12C (-ContainEffectInChainInputs@CFilterEffect@@QEAAJW4MIL_RESOURCE_TYPE@@@Z.c)
 */

bool CFilterEffect::ContainEffectInChain()
{
  return (int)CFilterEffect::ContainEffectInChainInputs() >= 0;
}
