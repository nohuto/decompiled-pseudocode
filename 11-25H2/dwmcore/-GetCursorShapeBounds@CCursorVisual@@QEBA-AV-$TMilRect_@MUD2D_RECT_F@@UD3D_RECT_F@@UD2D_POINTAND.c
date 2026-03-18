/*
 * XREFs of ?GetCursorShapeBounds@CCursorVisual@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCDesktopTree@@@Z @ 0x180239480
 * Callers:
 *     ?BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z @ 0x18023C6A8 (-BeginOverlayCandidateCollection@COverlayContext@@QEAA_NPEBVCRegion@@PEAV2@@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x18023CA68 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180277784 (-TryEnableHardwareCursor@COverlayContext@@QEAA_NPEAVCCursorVisual@@AEBVCMILMatrix@@PEBV-$TMilRec.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x18000B7B0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B6CE0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z @ 0x1800B74B0 (-_IsInTree@CVisualTree@@IEBA_NPEBVCVisual@@W4IsInTreeFlags@1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

__m128i *__fastcall CCursorVisual::GetCursorShapeBounds(CVisual *a1, __m128i *a2, const struct CVisualTree *a3)
{
  __m128i v6; // xmm6
  _BYTE v8[64]; // [rsp+30h] [rbp-98h] BYREF
  int v9; // [rsp+70h] [rbp-58h]
  struct D2D_RECT_F v10; // [rsp+80h] [rbp-48h] BYREF

  if ( CVisualTree::_IsInTree((__int64)a3, (__int64)a1, 0) )
  {
    v6 = _mm_loadu_si128((const __m128i *)(*((_QWORD *)a1 + 87) + 128LL));
    v10 = (struct D2D_RECT_F)v6;
    if ( !IsEmpty(&v10) )
    {
      v9 = 0;
      if ( (int)CVisual::GetWorldTransform(a1, a3, 0, (__int64)v8, 0LL, 0LL) >= 0 )
      {
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)v8, &v10, &v10.left);
        v6 = (__m128i)v10;
      }
    }
    *a2 = v6;
  }
  else
  {
    *a2 = (__m128i)DirectX::g_XMZero;
  }
  return a2;
}
