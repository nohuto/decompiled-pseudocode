/*
 * XREFs of ?OnVisualChanged@CVisualBitmap@@IEAAXXZ @ 0x1801D9348
 * Callers:
 *     ?SetVisual@?$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@QEAAJPEAVCVisual@@@Z @ 0x1801D92CC (-SetVisual@-$CVisualBitmapGeneratedT@VCVisualBitmap@@VCContent@@@@QEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180039A04 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ??$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z @ 0x1801240CC (--$ReleaseInterface@UIDXGIFactory7@@@@YAXAEAPEAUIDXGIFactory7@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CVisualBitmap::OnVisualChanged(CVisualBitmap *this)
{
  __int64 v2; // rcx
  CVisual *v3; // rcx

  v2 = *((_QWORD *)this + 12);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 12) = 0LL;
  }
  ReleaseInterface<IDXGIFactory7>((__int64 *)this + 11);
  v3 = (CVisual *)*((_QWORD *)this + 9);
  if ( v3 )
    CVisual::GetVisualTree(v3, (struct CVisualTree **)this + 11);
  CResource::NotifyOnChanged(this, 0LL, 0LL);
}
