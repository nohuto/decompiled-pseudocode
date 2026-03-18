/*
 * XREFs of ?BuildFromRectFs@CShape@@SAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IPEAPEAV1@@Z @ 0x180258AAC
 * Callers:
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_F@@AEBU4@PEAVCBrush@@PEBVCShape@@_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801D9FFC (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@PEBUD2D_SIZE_.c)
 * Callees:
 *     ?BuildFromRects@CRegionShape@@QEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180017470 (-BuildFromRects@CRegionShape@@QEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18014FAAC (-IsPixelAligned@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?CMilRectLFromD2D_RECT_F@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180172828 (-CMilRectLFromD2D_RECT_F@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRe.c)
 *     ?Alloc@?$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z @ 0x180175100 (-Alloc@-$CThreadLocalObjectCache@VCRectanglesShape@@V1@@@SAPEAX_K@Z.c)
 *     ?BuildFromRectFs@CRectanglesShape@@QEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180175F00 (-BuildFromRectFs@CRectanglesShape@@QEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1801AAAD0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CShape::BuildFromRectFs(const struct D2D_RECT_F *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int i; // r9d
  int v7; // r9d
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *v10; // rax
  unsigned int v12; // [rsp+20h] [rbp-88h]
  int v13[4]; // [rsp+30h] [rbp-78h] BYREF
  char v14[64]; // [rsp+40h] [rbp-68h] BYREF

  v3 = 0;
  for ( i = 0; !i; i = v7 + 1 )
  {
    if ( !IsPixelAligned(a1) )
    {
      v8 = CThreadLocalObjectCache<CRectanglesShape,CRectanglesShape>::Alloc();
      v9 = v8;
      if ( v8 )
      {
        v8[1] = 0LL;
        *v8 = &CRectanglesShape::`vftable';
        v8[2] = v8 + 5;
        v8[3] = v8 + 5;
        v8[4] = v8 + 7;
        v8[7] = 0LL;
        CRectanglesShape::BuildFromRectFs(v8, (unsigned __int64)a1, 1LL);
LABEL_10:
        *a3 = v9;
        goto LABEL_13;
      }
      v12 = 82;
      goto LABEL_12;
    }
  }
  `vector constructor iterator'(
    v14,
    16LL,
    4LL,
    (CDirtyRegionAnnotation *(__fastcall *)(CDirtyRegionAnnotation *))TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>::TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>);
  *(_OWORD *)v14 = *(_OWORD *)CMilRectLFromD2D_RECT_F(v13, (__int64)a1);
  v10 = MIDL_user_allocate(0x60uLL);
  v9 = v10;
  if ( v10 )
  {
    v10[1] = 0LL;
    *v10 = &CRegionShape::`vftable';
    v10[2] = v10 + 3;
    *((_DWORD *)v10 + 6) = 0;
    v10[11] = 0LL;
    CRegionShape::BuildFromRects((__int64)v10, (__int64)v14, 1u);
    goto LABEL_10;
  }
  v12 = 74;
LABEL_12:
  v3 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, v12, 0LL);
LABEL_13:
  operator delete(0LL);
  return v3;
}
