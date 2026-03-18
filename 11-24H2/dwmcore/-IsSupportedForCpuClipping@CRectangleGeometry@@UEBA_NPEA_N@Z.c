/*
 * XREFs of ?IsSupportedForCpuClipping@CRectangleGeometry@@UEBA_NPEA_N@Z @ 0x18001C620
 * Callers:
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x18001C710 (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::IsSupportedForCpuClipping(CRectangleGeometry *this, bool *a2)
{
  unsigned __int8 v2; // r9
  bool v3; // r10
  char v4; // al
  bool v5; // r8
  __int64 result; // rax

  v2 = 0;
  v3 = 0;
  v4 = *((float *)this + 38) > 0.0 && *((float *)this + 39) > 0.0;
  if ( !*((_BYTE *)this + 188) )
  {
    v5 = *((float *)this + 40) > 0.0 && *((float *)this + 41) > 0.0
      || *((float *)this + 44) > 0.0 && *((float *)this + 45) > 0.0
      || *((float *)this + 42) > 0.0 && *((float *)this + 43) > 0.0;
    v4 |= v5;
  }
  if ( !v4 )
    goto LABEL_10;
  if ( CCommonRegistryData::m_flCpuClipFlatteningTolerance > 0.0 )
  {
    if ( !*((_BYTE *)this + 192) )
    {
LABEL_10:
      v2 = 1;
      goto LABEL_11;
    }
    if ( CCommonRegistryData::LayerClippingMode != 1 )
    {
      v3 = CCommonRegistryData::LayerClippingMode == 2;
      goto LABEL_10;
    }
  }
LABEL_11:
  result = v2;
  if ( a2 )
    *a2 = v3;
  return result;
}
