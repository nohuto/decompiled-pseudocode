/*
 * XREFs of ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCLegacySwapChain@@@Z @ 0x1802CB298
 * Callers:
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacySwapChain@@@Z @ 0x1802B8FE4 (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180250300 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@U_LUID@@III@Z @ 0x1802CAE6C (--0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVR.c)
 *     ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x1802CB610 (-Initialize@CConversionSwapChain@@MEAAJXZ.c)
 *     ?IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802CB6D0 (-IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::Create(
        struct CD3DDevice *a1,
        struct _LUID *a2,
        struct IDXGISwapChainDWM1 *a3,
        enum DXGI_COLOR_SPACE_TYPE *a4,
        const struct RenderTargetInfo *a5,
        struct CLegacySwapChain **a6)
{
  int v10; // eax
  unsigned int v11; // edi
  CConversionSwapChain *v12; // rax
  CConversionSwapChain *v13; // rax
  CConversionSwapChain *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v18; // [rsp+20h] [rbp-B9h]
  CConversionSwapChain *v19; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v20[3]; // [rsp+58h] [rbp-81h] BYREF
  int v21; // [rsp+70h] [rbp-69h]
  int v22; // [rsp+74h] [rbp-65h]
  __int64 v23; // [rsp+78h] [rbp-61h]
  __int64 v24; // [rsp+80h] [rbp-59h]
  _BYTE v25[8]; // [rsp+90h] [rbp-49h] BYREF
  __int64 v26; // [rsp+98h] [rbp-41h]
  unsigned int v27; // [rsp+B8h] [rbp-21h]

  v19 = 0LL;
  *a6 = 0LL;
  memset_0(v25, 0, 0x48uLL);
  v10 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _BYTE *))(*(_QWORD *)a3 + 80LL))(a3, v25);
  v11 = v10;
  if ( v10 < 0 )
  {
    v18 = 57;
    goto LABEL_12;
  }
  if ( !CConversionSwapChain::IsSupportedFakeOverlayColorSpace(a4[2]) )
  {
    v11 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292288, 0x51u, 0LL);
    goto LABEL_13;
  }
  v20[1] = 0LL;
  v20[2] = 0LL;
  v22 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v20[0] = v26;
  v21 = 1;
  v12 = (CConversionSwapChain *)operator new(0x390uLL);
  if ( v12 )
  {
    v13 = CConversionSwapChain::CConversionSwapChain(
            v12,
            a1,
            a3,
            (const struct PixelFormatInfo *)a4,
            a5,
            (const struct RefreshRateInfo *)v20,
            *a2,
            v27,
            a2[1].LowPart,
            a2[1].HighPart);
    v19 = v13;
    v14 = v13;
    if ( v13 )
      CMILRefCountImpl::AddReference((CConversionSwapChain *)((char *)v13 + 8));
  }
  else
  {
    v14 = 0LL;
  }
  v10 = CConversionSwapChain::Initialize(v14);
  v11 = v10;
  if ( v10 < 0 )
  {
    v18 = 75;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v18, 0LL);
    goto LABEL_13;
  }
  v19 = 0LL;
  *a6 = v14;
LABEL_13:
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>(
    (__int64 *)&v19,
    v15,
    v16);
  return v11;
}
