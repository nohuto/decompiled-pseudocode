/*
 * XREFs of ?GetHardwareShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x18029057C
 * Callers:
 *     ?GetCursorBounds@COverlayContext@@AEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18026BF8C (-GetCursorBounds@COverlayContext@@AEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZ.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000A2C0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x180037500 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800C35D0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

struct D2D_RECT_F *__fastcall CCursorVisual::GetHardwareShapeBounds(
        _QWORD *a1,
        struct D2D_RECT_F *a2,
        const struct CVisualTree *a3)
{
  struct D2D_RECT_F v6; // xmm0
  __int64 v7; // rax
  __m128i v8; // xmm0
  float v9; // xmm2_4
  float v10; // xmm3_4
  struct D2D_RECT_F *result; // rax
  _BYTE v12[64]; // [rsp+30h] [rbp-29h] BYREF
  int v13; // [rsp+70h] [rbp+17h]
  struct D2D_RECT_F v14; // [rsp+80h] [rbp+27h] BYREF

  if ( CVisualTree::_IsInTree((__int64)a3, (__int64)a1, 0) )
  {
    v7 = a1[88];
    v8 = _mm_loadu_si128((const __m128i *)(v7 + 128));
    v9 = *(float *)(v7 + 212);
    v10 = *(float *)(v7 + 216);
    v14.left = *(float *)v8.m128i_i32 + v9;
    v14.right = *(float *)&v8.m128i_i32[2] + v9;
    v14.top = *(float *)&v8.m128i_i32[1] + v10;
    v14.bottom = *(float *)&v8.m128i_i32[3] + v10;
    if ( !IsEmpty(&v14) )
    {
      v13 = 0;
      if ( (int)CVisual::GetWorldTransform(a1, a3, 0, (__int64)v12, 0LL, 0LL) >= 0 )
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)v12, &v14, &v14.left);
    }
    v6 = v14;
  }
  else
  {
    v6 = (struct D2D_RECT_F)DirectX::g_XMZero;
  }
  result = a2;
  *a2 = v6;
  return result;
}
