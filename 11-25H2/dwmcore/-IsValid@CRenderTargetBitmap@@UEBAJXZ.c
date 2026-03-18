/*
 * XREFs of ?IsValid@CRenderTargetBitmap@@UEBAJXZ @ 0x1800B2630
 * Callers:
 *     ?InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInfo@@_N@Z @ 0x18003FC5C (-InvalidateCachedBlur@CBlurredBackdropCache@@QEAA_NPEBVCBackdropVisualImage@@AEBVRenderTargetInf.c)
 *     ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800B22A0 (-RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x180108AF4 (-HasValidRenderingRealization@CWindowBackgroundTreatment@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 *     ?HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z @ 0x180108BD0 (-HasValidRealization@CWindowBackgroundBitmapProducer@@QEBA_NAEBVRenderTargetInfo@@_N@Z.c)
 *     ?GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801B5730 (-GetDeviceTexture@CCachedImageProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x1801CCDF0 (-FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ.c)
 *     ?EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealization@1@@Z @ 0x1801DB664 (-EnsureRealizationInternal@CCachedImageProducer@@IEAAJPEAVCDrawingContext@@PEAPEBVCCachedRealiza.c)
 *     ?FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo@@@Z @ 0x1801DBA64 (-FindRealizationInternal@CCachedImageProducer@@IEBAPEAVCCachedRealization@1@AEBVRenderTargetInfo.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x1802E1604 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18001E0A0 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x180147A00 (-GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::IsValid(CRenderTargetBitmap *this)
{
  CD2DBitmap *v1; // rbx
  __int64 (__fastcall *v2)(CD2DBitmap *__hidden); // rax
  struct CD3DDevice *(__fastcall *v4)(CD2DResource *); // rax
  CD3DDevice *Device; // rax

  v1 = (CD2DBitmap *)*((_QWORD *)this + 5);
  if ( !v1 )
    return 2291674884LL;
  v2 = *(__int64 (__fastcall **)(CD2DBitmap *__hidden))(*(_QWORD *)v1 + 24LL);
  if ( v2 == CD2DBitmap::IsValid )
  {
    if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)v1 + 13) )
    {
      v4 = *(struct CD3DDevice *(__fastcall **)(CD2DResource *))(*(_QWORD *)v1 + 40LL);
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
  else if ( (char *)v2 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
  {
    return CD2DBitmap::IsValid(v1);
  }
  else
  {
    return v2(v1);
  }
}
