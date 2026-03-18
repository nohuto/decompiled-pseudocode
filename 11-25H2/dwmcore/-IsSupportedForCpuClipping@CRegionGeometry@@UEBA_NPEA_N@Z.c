/*
 * XREFs of ?IsSupportedForCpuClipping@CRegionGeometry@@UEBA_NPEA_N@Z @ 0x1801E9780
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@PEBVCMILMatrix@@PEBV1@W4D2D1_ANTIALIAS_MODE@@W4CpuClippingScopeMode@@@Z @ 0x18001BD40 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@AEBVCScopedClipStack@@PEBVCShape@@P.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRegionGeometry::IsSupportedForCpuClipping(CRegionGeometry *this, bool *a2)
{
  if ( a2 )
    *a2 = 0;
  return (unsigned __int64)((__int64)(*((_QWORD *)this + 18) - *((_QWORD *)this + 17)) >> 4) <= 1;
}
