/*
 * XREFs of ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18016A964
 * Callers:
 *     ?IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180168C64 (-IsValidVisual@CProjectedShadowScene@@CA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z @ 0x180168EF4 (-IsValidCoordinateSpace@CCompositionLight@@IEBA_NPEBVCVisualTree@@PEBVCVisual@@PEAV3@@Z.c)
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18016A364 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 *     ?IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801D9010 (-IsValid@CCompositionSpotLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 *     ?IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z @ 0x1801D9940 (-IsValid@CCompositionPointLight@@UEBA_NPEBVCVisualTree@@PEBVCVisual@@@Z.c)
 * Callees:
 *     <none>
 */

float __fastcall Windows::Foundation::Numerics::determinant(
        Windows::Foundation::Numerics *this,
        const struct Windows::Foundation::Numerics::float4x4 *a2)
{
  float v2; // xmm3_4
  float v3; // xmm4_4
  float v4; // xmm5_4
  float v5; // xmm7_4
  float v6; // xmm1_4
  float v7; // xmm0_4

  v2 = (float)(*((float *)this + 15) * *((float *)this + 10)) - (float)(*((float *)this + 14) * *((float *)this + 11));
  v3 = (float)(*((float *)this + 15) * *((float *)this + 9)) - (float)(*((float *)this + 13) * *((float *)this + 11));
  v4 = (float)(*((float *)this + 15) * *((float *)this + 8)) - (float)(*((float *)this + 12) * *((float *)this + 11));
  v5 = (float)(*((float *)this + 14) * *((float *)this + 8)) - (float)(*((float *)this + 12) * *((float *)this + 10));
  v6 = (float)(*((float *)this + 14) * *((float *)this + 9)) - (float)(*((float *)this + 13) * *((float *)this + 10));
  v7 = (float)(*((float *)this + 13) * *((float *)this + 8)) - (float)(*((float *)this + 12) * *((float *)this + 9));
  return (float)((float)((float)((float)((float)((float)(v2 * *((float *)this + 5)) - (float)(v3 * *((float *)this + 6)))
                                       + (float)(v6 * *((float *)this + 7)))
                               * *(float *)this)
                       - (float)((float)((float)((float)(v2 * *((float *)this + 4)) - (float)(v4 * *((float *)this + 6)))
                                       + (float)(v5 * *((float *)this + 7)))
                               * *((float *)this + 1)))
               + (float)((float)((float)((float)(v3 * *((float *)this + 4)) - (float)(v4 * *((float *)this + 5)))
                               + (float)(v7 * *((float *)this + 7)))
                       * *((float *)this + 2)))
       - (float)((float)((float)((float)(v6 * *((float *)this + 4)) - (float)(v5 * *((float *)this + 5)))
                       + (float)(v7 * *((float *)this + 6)))
               * *((float *)this + 3));
}
