/*
 * XREFs of ?Create@CBitmapResource@@SAJPEAVCComposition@@PEAVIBitmapRealization@@PEAPEAV1@@Z @ 0x1802560B8
 * Callers:
 *     ?CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z @ 0x180102D80 (-CreateSectionBitmapSubRects@CGdiSpriteBitmap@@AEAAJII@Z.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCSurfaceBrush@@@Z @ 0x180113AB0 (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVIBitmapResource@@AEBV-$TMi.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBitmapResource@@IEAA@PEAVCComposition@@PEAVIBitmapRealization@@@Z @ 0x1801CB678 (--0CBitmapResource@@IEAA@PEAVCComposition@@PEAVIBitmapRealization@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBitmapResource::Create(
        struct CComposition *a1,
        struct IBitmapRealization *a2,
        struct CBitmapResource **a3)
{
  unsigned int v3; // ebx
  CBitmapResource *v7; // rax
  CBitmapResource *v8; // rax
  struct CBitmapResource *v9; // rdi

  v3 = 0;
  *a3 = 0LL;
  v7 = (CBitmapResource *)DefaultHeap::AllocClear(0x70uLL);
  if ( v7 && (v8 = CBitmapResource::CBitmapResource(v7, a1, a2), (v9 = v8) != 0LL) )
  {
    (*(void (__fastcall **)(CBitmapResource *))(*(_QWORD *)v8 + 8LL))(v8);
    *a3 = v9;
  }
  else
  {
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x1Bu, 0LL);
  }
  return v3;
}
