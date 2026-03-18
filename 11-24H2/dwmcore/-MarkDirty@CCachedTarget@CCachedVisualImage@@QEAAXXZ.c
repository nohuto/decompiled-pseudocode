/*
 * XREFs of ?MarkDirty@CCachedTarget@CCachedVisualImage@@QEAAXXZ @ 0x18000C220
 * Callers:
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000ACA0 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000B988 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18000C2D4 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 * Callees:
 *     ?OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x18000C270 (-OnCachedTargetInvalidated@CBackdropVisualImage@@EEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCachedVisualImage::CCachedTarget::MarkDirty(CBackdropVisualImage **this)
{
  CBackdropVisualImage *v2; // rcx
  void (__fastcall *v3)(CBackdropVisualImage *__hidden, const struct CCachedVisualImage::CCachedTarget *); // rax

  if ( !*((_BYTE *)this + 56) )
  {
    v2 = *this;
    v3 = *(void (__fastcall **)(CBackdropVisualImage *__hidden, const struct CCachedVisualImage::CCachedTarget *))(*(_QWORD *)v2 + 248LL);
    if ( v3 == CBackdropVisualImage::OnCachedTargetInvalidated )
      CBackdropVisualImage::OnCachedTargetInvalidated(v2, (const struct CCachedVisualImage::CCachedTarget *)this);
    else
      v3(v2, (const struct CCachedVisualImage::CCachedTarget *)this);
    *((_BYTE *)this + 56) = 1;
  }
}
