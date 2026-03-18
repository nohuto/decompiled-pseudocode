/*
 * XREFs of ?GetRenderTargetInfo@CRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ @ 0x1800B1630
 * Callers:
 *     ?IsUsableOnTargetWorker@CBlurredBackdropCache@@CA_NPEAVIRenderTargetBitmap@@AEBVRenderTargetInfo@@_N@Z @ 0x180040058 (-IsUsableOnTargetWorker@CBlurredBackdropCache@@CA_NPEAVIRenderTargetBitmap@@AEBVRenderTargetInfo.c)
 *     ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800B22A0 (-RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x180108CA4 (-IsUsableOnTarget@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 *     ?AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180108E84 (-AttributesMatch@CCachedRealization@CCachedImageProducer@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801B5730 (-GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x1801DB664 (-EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealiza.c)
 * Callees:
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180145C30 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA?AU_LUID@@XZ @ 0x180147010 (-GetAdapterLuid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA-AU_LUID@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  void (__fastcall *v4)(__int64); // rax

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    v4 = *(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 120LL);
    if ( (char *)v4 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
    {
      IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetAdapterLuid(v2 - 240, a2);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(v2 - 12);
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(v2 + 40);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(v2 + 44);
      *(_BYTE *)(a2 + 20) = CDeviceTextureTarget::IsHardwareProtected((CDeviceTextureTarget *)(v2 - 240));
      *(_WORD *)(a2 + 21) = 0;
      *(_BYTE *)(a2 + 23) = 0;
    }
    else
    {
      v4(v2 + 16);
    }
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 12) = 0LL;
    *(_BYTE *)(a2 + 20) = 0;
    *(_DWORD *)(a2 + 8) = -2;
    *(_WORD *)(a2 + 21) = 0;
    *(_BYTE *)(a2 + 23) = 0;
  }
  return a2;
}
