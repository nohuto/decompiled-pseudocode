/*
 * XREFs of ?GetSize@CRenderTargetBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800DBCF0
 * Callers:
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800DAB4C (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z @ 0x1800DCF4C (-Initialize@CEffectIntermediateProducer@@QEAAXPEAVIBitmapRealization@@@Z.c)
 *     ?Initialize@CCachedImageProducer@@IEAAX$$QEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@Z @ 0x1800DD940 (-Initialize@CCachedImageProducer@@IEAAX$$QEAV-$unique_ptr@VCCachedRealization@CCachedImageProduc.c)
 *     ?GetSize@CAtlasBitmapResource@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180208DB0 (-GetSize@CAtlasBitmapResource@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CAtlasTexture@@QEBA?AUD2D_SIZE_U@@XZ @ 0x18020CDD8 (-GetSize@CAtlasTexture@@QEBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D30 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct D2D_SIZE_U __fastcall CRenderTargetBitmap::GetSize(CRenderTargetBitmap *this, _QWORD *a2)
{
  __int64 v2; // rcx
  void (*v4)(void); // rax

  v2 = *((_QWORD *)this + 4);
  if ( v2 )
  {
    v4 = *(void (**)(void))(*(_QWORD *)v2 + 88LL);
    if ( (char *)v4 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
      IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v2, a2);
    else
      v4();
  }
  else
  {
    *a2 = 0LL;
  }
  return (struct D2D_SIZE_U)a2;
}
