/*
 * XREFs of ?IsBlackedOutForReadback@CDeviceTextureTarget@@UEBA_NXZ @ 0x1800B1620
 * Callers:
 *     ?IsUsableOnTargetWorker@CBlurredBackdropCache@@CA_NPEAVIRenderTargetBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x180040058 (-IsUsableOnTargetWorker@CBlurredBackdropCache@@CA_NPEAVIRenderTargetBitmap@@AEBVRenderTargetInfo.c)
 *     ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800B22A0 (-RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x180108CA4 (-IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 *     ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x1801DB664 (-EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealiza.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsBlackedOutForReadback(CDeviceTextureTarget *this)
{
  return *((_BYTE *)this + 51);
}
