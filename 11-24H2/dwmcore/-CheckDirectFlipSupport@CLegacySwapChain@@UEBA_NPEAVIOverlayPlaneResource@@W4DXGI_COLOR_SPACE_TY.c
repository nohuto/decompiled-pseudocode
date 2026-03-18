/*
 * XREFs of ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800602A0
 * Callers:
 *     ?IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@@Z @ 0x18005ED4C (-IsDirectFlipSupportedOnTarget@COverlayContext@@AEBA_NPEAVCCompositionSurfaceInfo@@PEAVISwapChai.c)
 *     ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x180068270 (-CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z.c)
 * Callees:
 *     ?GetBackBuffer@CLegacySwapChain@@UEBAPEAVIDeviceTarget@@XZ @ 0x180058490 (-GetBackBuffer@CLegacySwapChain@@UEBAPEAVIDeviceTarget@@XZ.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800607B0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?DXGIPlaneFromDwmPlane@@YA?AUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@@Z @ 0x18006724C (-DXGIPlaneFromDwmPlane@@YA-AUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@AEBUDWM_CHECK_MULTI.c)
 *     ?AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z @ 0x180068194 (-AddCheckMPOCache@CD3DDevice@@QEAAXPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@I_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ?CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z @ 0x1802B8D4C (-CheckMPOCache@CD3DDevice@@QEAA_NPEBUDWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO@@IPEA_N@Z.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAE0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CLegacySwapChain::CheckDirectFlipSupport(
        CLegacySwapChain *this,
        __int64 a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        int *a4,
        _DWORD *a5)
{
  float v5; // xmm2_4
  char v6; // di
  int v10; // r15d
  char v11; // r12
  struct IDeviceTarget *(__fastcall *v12)(CLegacySwapChain *); // rax
  struct IDeviceTarget *BackBuffer; // rax
  struct IDeviceTarget *v14; // rcx
  void (__fastcall *v15)(struct IDeviceTarget *, int *); // rax
  struct IDeviceTarget *(__fastcall *v16)(CLegacySwapChain *); // rax
  struct IDeviceTarget *v17; // rax
  struct IDeviceTarget *v18; // rcx
  void (__fastcall *v19)(struct IDeviceTarget *, int *); // rax
  CD3DDevice *v20; // rcx
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, _QWORD, __int64, int *); // rbx
  __int64 v24; // rax
  int v25; // eax
  _OWORD *v26; // rax
  int v27; // eax
  bool v28; // di
  bool v29; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+34h] [rbp-CCh] BYREF
  int v31; // [rsp+38h] [rbp-C8h] BYREF
  int v32; // [rsp+3Ch] [rbp-C4h]
  __int64 v33; // [rsp+40h] [rbp-C0h]
  _BYTE v34[152]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v35[8]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v36; // [rsp+E8h] [rbp-18h]
  int v37; // [rsp+F0h] [rbp-10h]
  int v38; // [rsp+F8h] [rbp-8h]
  int v39; // [rsp+FCh] [rbp-4h]
  int v40; // [rsp+100h] [rbp+0h]
  int v41; // [rsp+104h] [rbp+4h]
  int v42; // [rsp+108h] [rbp+8h]
  __int128 v43; // [rsp+10Ch] [rbp+Ch]
  __int128 v44; // [rsp+11Ch] [rbp+1Ch]
  __int64 v45; // [rsp+12Ch] [rbp+2Ch]
  int v46; // [rsp+134h] [rbp+34h]
  __int64 v47; // [rsp+138h] [rbp+38h]
  int v48; // [rsp+140h] [rbp+40h]
  enum DXGI_COLOR_SPACE_TYPE v49; // [rsp+144h] [rbp+44h]
  int v50; // [rsp+148h] [rbp+48h]
  int v51; // [rsp+158h] [rbp+58h]
  int v52; // [rsp+160h] [rbp+60h]
  _OWORD v53[9]; // [rsp+170h] [rbp+70h] BYREF

  v5 = *((float *)this + 24);
  v6 = 0;
  v33 = a2;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v5 - 1.0) & _xmm) < 0.0000011920929 || IsDXGIColorSpaceHDR(a3) )
    v10 = 0;
  else
    v10 = (int)(float)(v5 * 80.0);
  if ( *((_DWORD *)this + 16) == 2 || (v11 = 0, v10) )
    v11 = 1;
  v12 = *(struct IDeviceTarget *(__fastcall **)(CLegacySwapChain *))(*(_QWORD *)this + 104LL);
  if ( v12 == CLegacySwapChain::GetBackBuffer )
    BackBuffer = CLegacySwapChain::GetBackBuffer(this);
  else
    BackBuffer = v12(this);
  v14 = BackBuffer;
  v15 = *(void (__fastcall **)(struct IDeviceTarget *, int *))(*(_QWORD *)BackBuffer + 88LL);
  if ( (char *)v15 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
    IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v14, &v31);
  else
    v15(v14, &v31);
  if ( *a4 || a4[1] || a4[2] - *a4 != v31 || a4[3] - a4[1] != v32 )
    goto LABEL_27;
  v16 = *(struct IDeviceTarget *(__fastcall **)(CLegacySwapChain *))(*(_QWORD *)this + 104LL);
  v17 = v16 == CLegacySwapChain::GetBackBuffer ? CLegacySwapChain::GetBackBuffer(this) : v16(this);
  v18 = v17;
  v19 = *(void (__fastcall **)(struct IDeviceTarget *, int *))(*(_QWORD *)v17 + 88LL);
  if ( (char *)v19 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
    IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v18, &v31);
  else
    v19(v18, &v31);
  if ( *a5 || a5[1] || a5[2] - *a5 != v31 || a5[3] - a5[1] != v32 )
LABEL_27:
    v6 = 1;
  if ( !v11 && !v6 )
  {
    if ( (unsigned int)a3 <= DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    {
      v22 = *((_QWORD *)this + 33);
      v30 = 0;
      v23 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, int *))(*(_QWORD *)v22 + 144LL);
      v24 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v33 + 40LL))(v33, 0LL);
      v25 = v23(v22, 0LL, v24, &v30);
      if ( v25 >= 0 )
        return v30 != 0;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0x186u, 0LL);
    }
    return 0;
  }
  if ( *((int *)this + 16) < 1 )
    return 0;
  memset_0(v35, 0, 0x90uLL);
  v37 = *((_DWORD *)this + 12);
  v36 = v33;
  v20 = (CD3DDevice *)*((_QWORD *)this + 5);
  v46 = 0;
  v38 = v6 != 0 ? 4 : 0;
  v39 = *a4;
  v40 = a4[1];
  v41 = a4[2];
  v42 = a4[3];
  v43 = *(_OWORD *)a5;
  v45 = 1LL;
  v47 = 0LL;
  v44 = v43;
  v48 = 0;
  v49 = a3;
  v50 = 0;
  v51 = 2;
  v52 = v10;
  v29 = 0;
  if ( CD3DDevice::CheckMPOCache(v20, (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)v35, 1u, &v29) )
    return v29;
  v30 = 0;
  v31 = 0;
  v26 = (_OWORD *)DXGIPlaneFromDwmPlane(v34, v35);
  v53[0] = *v26;
  v53[1] = v26[1];
  v53[2] = v26[2];
  v53[3] = v26[3];
  v53[4] = v26[4];
  v53[5] = v26[5];
  v53[6] = v26[6];
  v53[7] = v26[7];
  v53[8] = v26[8];
  v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, _OWORD *, int *, int *))(**((_QWORD **)this + 33) + 176LL))(
          *((_QWORD *)this + 33),
          1LL,
          v53,
          &v30,
          &v31);
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x16Eu, 0LL);
    return 0;
  }
  v28 = v30 == 1;
  if ( !v31 )
    CD3DDevice::AddCheckMPOCache(
      *((CD3DDevice **)this + 5),
      (const struct DWM_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE_INFO *)v35,
      1u,
      v30 == 1);
  return v28;
}
