/*
 * XREFs of ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z @ 0x1801C7F48
 * Callers:
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C7C60 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?RemoveStaleRealization@CWindowBackgroundBitmapProducer@@QEAAXAEBVRenderTargetInfo@@@Z @ 0x1801C7EF4 (-RemoveStaleRealization@CWindowBackgroundBitmapProducer@@QEAAXAEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18001D570 (-IsValid@CRenderTargetBitmap@@UEBAJXZ.c)
 *     ?IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x1801C81A0 (-IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 *     ?AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1801C8384 (-AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct CCachedImageProducer::CCachedRealization *__fastcall CCachedImageProducer::FindRealizationInternal(
        CCachedImageProducer *this,
        const struct RenderTargetInfo *a2)
{
  CCachedImageProducer::CCachedRealization **v3; // rbx
  CCachedImageProducer::CCachedRealization **v4; // rsi
  char v5; // bp
  CRenderTargetBitmap *v6; // rcx
  __int64 (*v7)(void); // rax
  int IsValid; // eax

  v3 = (CCachedImageProducer::CCachedRealization **)*((_QWORD *)this + 4);
  v4 = (CCachedImageProducer::CCachedRealization **)*((_QWORD *)this + 5);
  v5 = *((_BYTE *)g_pComposition + 6466);
  while ( v3 != v4 )
  {
    v6 = *(CRenderTargetBitmap **)*v3;
    v7 = *(__int64 (**)(void))(*(_QWORD *)v6 + 24LL);
    if ( (char *)v7 == (char *)CRenderTargetBitmap::IsValid )
      IsValid = CRenderTargetBitmap::IsValid(v6);
    else
      IsValid = v7();
    if ( IsValid >= 0
      && CCachedImageProducer::CCachedRealization::IsUsableOnTarget(*v3, a2, v5)
      && CCachedImageProducer::CCachedRealization::AttributesMatch(*v3, a2) )
    {
      return *v3;
    }
    ++v3;
  }
  return 0LL;
}
