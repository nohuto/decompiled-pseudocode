/*
 * XREFs of ?GetCachedBrushCVINoRef@CImageLegacyMilBrush@@QEAAPEAVCCachedVisualImage@@XZ @ 0x1801E408C
 * Callers:
 *     ?DrawRectangle@COcclusionContext@@UEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAVCLegacyMilBrush@@@Z @ 0x1801E3E00 (-DrawRectangle@COcclusionContext@@UEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDS.c)
 *     ?DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z @ 0x1801E3F70 (-DrawGeometry@COcclusionContext@@UEAAJPEAVCLegacyMilBrush@@PEAVCGeometry@@@Z.c)
 * Callees:
 *     ?IsOfType@CCachedVisualImage@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801E4210 (-IsOfType@CCachedVisualImage@@MEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CCachedVisualImage *__fastcall CImageLegacyMilBrush::GetCachedBrushCVINoRef(CImageLegacyMilBrush *this)
{
  __int64 v1; // rdi
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, __int64); // rax
  __int64 v4; // rcx
  char v5; // al

  v1 = *((_QWORD *)this + 24);
  v2 = 0LL;
  if ( v1 )
  {
    v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 64LL);
    v4 = *((_QWORD *)this + 24);
    if ( v3 == CCachedVisualImage::IsOfType )
      v5 = CCachedVisualImage::IsOfType(v4, 18LL);
    else
      v5 = v3(v4, 18LL);
    if ( v5 )
      return (struct CCachedVisualImage *)v1;
  }
  return (struct CCachedVisualImage *)v2;
}
