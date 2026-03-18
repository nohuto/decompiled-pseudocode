/*
 * XREFs of ?ClipWithRect@CShape@@SAJAEBV1@AEBUtagRECT@@PEAPEAV1@@Z @ 0x180258C24
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801D9FFC (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 * Callees:
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180017470 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x180017B4C (--1CRegionShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800CB180 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::ClipWithRect(const struct CShape *a1, const struct tagRECT *a2, struct CShape **a3)
{
  __int128 v3; // xmm0
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-78h] BYREF
  int v12; // [rsp+58h] [rbp-60h] BYREF
  __int64 v13; // [rsp+98h] [rbp-20h]

  v3 = (__int128)*a2;
  v11[1] = 0LL;
  v11[0] = &CRegionShape::`vftable';
  v11[2] = &v12;
  v12 = 0;
  v13 = 0LL;
  v10 = v3;
  CRegionShape::BuildFromRects((__int64)v11, (__int64)&v10, 1u);
  v7 = CShape::Combine((__int64)a1, v6, (__int64)v11, 0LL, 1, a3);
  v8 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xB1u, 0LL);
  CRegionShape::~CRegionShape((CRegionShape *)v11);
  return v8;
}
