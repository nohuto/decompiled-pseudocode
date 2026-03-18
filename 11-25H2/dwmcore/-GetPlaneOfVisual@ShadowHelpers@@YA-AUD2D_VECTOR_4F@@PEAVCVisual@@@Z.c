/*
 * XREFs of ?GetPlaneOfVisual@ShadowHelpers@@YA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z @ 0x1801EA278
 * Callers:
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x1801E9854 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 * Callees:
 *     ?CalculatePlane@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x18011F0E4 (-CalculatePlane@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

struct D2D_VECTOR_4F *__fastcall ShadowHelpers::GetPlaneOfVisual(
        struct D2D_VECTOR_4F *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        struct CVisual *a3)
{
  float x; // xmm2_4
  float y; // xmm1_4
  struct D2D_VECTOR_4F v7; // [rsp+20h] [rbp-40h] BYREF
  struct D2D_VECTOR_4F v8; // [rsp+30h] [rbp-30h] BYREF
  struct D2D_VECTOR_4F v9; // [rsp+40h] [rbp-20h] BYREF

  x = retstr[9].x;
  y = retstr[9].y;
  if ( x == 0.0 )
    x = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  if ( y == 0.0 )
    y = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
  v8.x = 0.0;
  v8.z = 0.0;
  v9.z = 0.0;
  v7 = *(struct D2D_VECTOR_4F *)&_xmm.r;
  v8.w = 1.0;
  v8.y = y;
  v9.x = x;
  v9.y = y;
  v9.w = 1.0;
  D2DVectorHelper::CalculatePlane(this, &v7, &v8, &v9);
  return this;
}
