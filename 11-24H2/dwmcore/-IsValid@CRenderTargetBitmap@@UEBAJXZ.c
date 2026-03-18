/*
 * XREFs of ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x18001D570
 * Callers:
 *     ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x18001BFC0 (-EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealiza.c)
 *     ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18001D1E0 (-RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801AB340 (-GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x1801AFE90 (-FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ.c)
 *     ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z @ 0x1801C7F48 (-FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo.c)
 *     ?HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x1801C7FF0 (-HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x1801C80CC (-HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802D8364 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x18010BDC0 (-GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::IsValid(CRenderTargetBitmap *this)
{
  CD2DBitmap *v1; // rbx
  __int64 (__fastcall *v2)(); // rax
  struct CD3DDevice *(__fastcall *v4)(CD2DResource *__hidden); // rax
  CD3DDevice *Device; // rax

  v1 = (CD2DBitmap *)*((_QWORD *)this + 5);
  if ( !v1 )
    return 2291674884LL;
  v2 = *(__int64 (__fastcall **)())(*(_QWORD *)v1 + 24LL);
  if ( (char *)v2 == (char *)CD2DBitmap::IsValid )
  {
    if ( (unsigned __int8)wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((char *)v1 + 104, 0LL) )
    {
      v4 = *(struct CD3DDevice *(__fastcall **)(CD2DResource *__hidden))(*(_QWORD *)v1 + 40LL);
      if ( v4 == CD2DResource::GetDevice )
        Device = CD2DContext::GetDevice(*(CD2DContext **)(*((_QWORD *)v1 + 5) + 24LL));
      else
        Device = v4(v1);
      return CD3DDevice::IsValid(Device);
    }
    else
    {
      return 2291674892LL;
    }
  }
  else if ( (char *)v2 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
  {
    return IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(v1);
  }
  else if ( v2 == IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
  {
    return CD2DBitmap::IsValid(v1);
  }
  else
  {
    return ((__int64 (__fastcall *)(CD2DBitmap *))v2)(v1);
  }
}
