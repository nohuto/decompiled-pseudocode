/*
 * XREFs of ?IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z @ 0x18016E7C4
 * Callers:
 *     ?DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x18024E820 (-DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAV.c)
 * Callees:
 *     ?GetVisualTree@CCachedVisualImage@@MEBAPEAVCVisualTree@@XZ @ 0x18016F0C0 (-GetVisualTree@CCachedVisualImage@@MEBAPEAVCVisualTree@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCachedVisualImage::IsSameVisualTree(CCachedVisualImage *this, const struct CVisualTree *a2)
{
  __int64 (*v3)(void); // rax
  struct CVisualTree *VisualTree; // rax

  v3 = *(__int64 (**)(void))(*(_QWORD *)this + 216LL);
  if ( (char *)v3 == (char *)CCachedVisualImage::GetVisualTree )
    VisualTree = CCachedVisualImage::GetVisualTree(this);
  else
    VisualTree = (struct CVisualTree *)v3();
  return VisualTree == a2;
}
