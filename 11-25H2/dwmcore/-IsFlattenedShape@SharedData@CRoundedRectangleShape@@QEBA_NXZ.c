/*
 * XREFs of ?IsFlattenedShape@SharedData@CRoundedRectangleShape@@QEBA_NXZ @ 0x1800B201C
 * Callers:
 *     ?Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2D1_ANTIALIAS_MODE@@PEA_N@Z @ 0x1800B17D0 (-Update@CpuClipRealization@CCpuClippingData@@QEAAJPEAVCVisual@@PEBVCShape@@AEBVCMILMatrix@@1W4D2.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRoundedRectangleShape::SharedData::IsFlattenedShape(CRoundedRectangleShape::SharedData *this)
{
  return *((float *)this + 16) > 0.0;
}
