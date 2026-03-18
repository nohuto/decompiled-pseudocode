/*
 * XREFs of ?IsCpuClipFlatteningEnabled@CCommonRegistryData@@SA_NXZ @ 0x1801EB988
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x18001BD40 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     <none>
 */

bool CCommonRegistryData::IsCpuClipFlatteningEnabled(void)
{
  return CCommonRegistryData::m_flCpuClipFlatteningTolerance > 0.0;
}
