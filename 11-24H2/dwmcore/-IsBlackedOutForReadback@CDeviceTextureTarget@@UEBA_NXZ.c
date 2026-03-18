/*
 * XREFs of ?IsBlackedOutForReadback@CDeviceTextureTarget@@UEBA_NXZ @ 0x18001E4A0
 * Callers:
 *     ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x18001BFC0 (-EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealiza.c)
 *     ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001D1E0 (-RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x1801C81A0 (-IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDeviceTextureTarget::IsBlackedOutForReadback(CDeviceTextureTarget *this)
{
  return *((_BYTE *)this + 51);
}
