/*
 * XREFs of ?ConvertSingleAppPlane@CConversionSwapChain@@IEAAJAEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@@Z @ 0x1802CB158
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800662F0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAVIOverlayPlaneResource@@PEAUD2D_SIZE_U@@PEAW4DXGI_FORMAT@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18006423C (-GetAppOverlayShaderResourceView@CConversionSwapChain@@IEAAJPEAVIOverlayPlaneResource@@PEAUD2D_S.c)
 *     ?ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@33@Z @ 0x1800650EC (-ConvertSingleResource@CConversionSwapChain@@IEAAJPEAUID3D11ShaderResourceView@@AEBUD2D_SIZE_U@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

__int64 __fastcall CConversionSwapChain::ConvertSingleAppPlane(
        CD3DDevice **this,
        const struct DWM_PRESENT_MULTIPLANE_OVERLAY *a2)
{
  unsigned int v2; // ebx
  enum DXGI_FORMAT v5; // eax
  _DWORD *v6; // r14
  __int128 v7; // xmm0
  int AppOverlayShaderResourceView; // eax
  __int128 v9; // xmm1
  int v10; // eax
  void *v12; // [rsp+28h] [rbp-21h]
  struct ID3D11ShaderResourceView *v13; // [rsp+40h] [rbp-9h] BYREF
  struct D2D_SIZE_U v14; // [rsp+48h] [rbp-1h] BYREF
  __int128 v15; // [rsp+50h] [rbp+7h] BYREF
  __int128 v16; // [rsp+60h] [rbp+17h] BYREF
  enum DXGI_FORMAT v17[4]; // [rsp+70h] [rbp+27h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 904) )
  {
    v5 = *((_DWORD *)a2 + 23);
    v6 = this + 111;
    v7 = *(_OWORD *)((char *)a2 + 52);
    v13 = 0LL;
    v17[0] = DXGI_FORMAT_UNKNOWN;
    v14 = 0LL;
    *(_OWORD *)(this + 111) = v7;
    v17[1] = DXGI_FORMAT_R32G32B32A32_UINT;
    v17[2] = v5;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v13);
    AppOverlayShaderResourceView = CConversionSwapChain::GetAppOverlayShaderResourceView(
                                     this,
                                     *((struct IOverlayPlaneResource **)a2 + 1),
                                     &v14,
                                     v17,
                                     &v13);
    v2 = AppOverlayShaderResourceView;
    if ( AppOverlayShaderResourceView < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, AppOverlayShaderResourceView, 0x2B0u, 0LL);
    }
    else
    {
      v9 = *(_OWORD *)((char *)a2 + 20);
      LODWORD(v12) = *((_DWORD *)a2 + 17);
      v15 = *(_OWORD *)((char *)a2 + 36);
      v16 = v9;
      v10 = CConversionSwapChain::ConvertSingleResource(
              (__int64)this,
              (__int64)v13,
              (__int64)&v14,
              (__int64)v17,
              (__int64)&v16,
              v12,
              (__int64)&v15,
              v6);
      v2 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x2B8u, 0LL);
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v13);
  }
  return v2;
}
