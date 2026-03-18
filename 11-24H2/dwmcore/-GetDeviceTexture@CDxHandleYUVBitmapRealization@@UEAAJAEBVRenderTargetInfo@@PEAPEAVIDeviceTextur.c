/*
 * XREFs of ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180198FC0
 * Callers:
 *     ?RecordUse@?$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@UEAAJPEAVCDrawingContext@@@Z @ 0x180197AC0 (-RecordUse@-$IBitmapRealizationMethodsT@VCDxHandleBitmapRealization@@VIGDIBitmapRealization@@@@U.c)
 *     ?RecordUse@CBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z @ 0x180197D70 (-RecordUse@CBitmapRealization@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetDeviceTexture@CDxHandleYUVBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1802D9220 (-GetDeviceTexture@CDxHandleYUVBitmapRealization@@WBAA@EAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTe.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x18005D3C0 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x18010BFE0 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ @ 0x18019907C (-GetStockBlackBitmap@CComposition@@QEAAPEAVIBitmapResource@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDxHandleYUVBitmapRealization::GetDeviceTexture(
        CDxHandleYUVBitmapRealization *this,
        const struct RenderTargetInfo *a2,
        struct IDeviceTexture **a3)
{
  int v6; // eax
  unsigned int DeviceTexture; // ebx
  struct IBitmapResource *StockBlackBitmap; // rdi
  __int64 (__fastcall *v10)(struct IBitmapResource *, __int64 *); // rbx
  int v11; // eax
  int v12; // eax
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  if ( *((_BYTE *)this + 313) )
  {
    v6 = CDxHandleYUVBitmapRealization::VPBltToDecodeBitmap((CDxHandleYUVBitmapRealization *)((char *)this - 80));
    DeviceTexture = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x12Bu, 0LL);
      return DeviceTexture;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 26) + 136LL) )
    {
      DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(
                        (CRenderTargetBitmap *)(*((_QWORD *)this + 26) + 88LL),
                        a2,
                        a3);
      if ( (DeviceTexture & 0x80000000) == 0 )
        return DeviceTexture;
    }
    else
    {
      *a3 = 0LL;
      DeviceTexture = -2003292412;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DeviceTexture, 0x12Du, 0LL);
    return DeviceTexture;
  }
  v13 = 0LL;
  StockBlackBitmap = CComposition::GetStockBlackBitmap(this);
  v10 = *(__int64 (__fastcall **)(struct IBitmapResource *, __int64 *))(*(_QWORD *)StockBlackBitmap + 64LL);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v13);
  v11 = v10(StockBlackBitmap, &v13);
  DeviceTexture = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x134u, 0LL);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, const struct RenderTargetInfo *, struct IDeviceTexture **))(*(_QWORD *)v13 + 96LL))(
            v13,
            a2,
            a3);
    DeviceTexture = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x136u, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
  return DeviceTexture;
}
