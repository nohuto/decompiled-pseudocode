/*
 * XREFs of ?Create@CConversionSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCLegacySwapChain@@@Z @ 0x1802D4508
 * Callers:
 *     ?CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacySwapChain@@@Z @ 0x1802C2624 (-CreateConversionSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18025B950 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@U_LUID@@III@Z @ 0x1802D40DC (--0CConversionSwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVR.c)
 *     ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x1802D4880 (-Initialize@CConversionSwapChain@@MEAAJXZ.c)
 *     ?IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802D4940 (-IsSupportedFakeOverlayColorSpace@CConversionSwapChain@@SA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  unsigned int v16; // [rsp+20h] [rbp-B9h]
  CConversionSwapChain *v17; // [rsp+50h] [rbp-89h] BYREF
  _QWORD v18[3]; // [rsp+58h] [rbp-81h] BYREF
  int v19; // [rsp+70h] [rbp-69h]
  int v20; // [rsp+74h] [rbp-65h]
  __int64 v21; // [rsp+78h] [rbp-61h]
  __int64 v22; // [rsp+80h] [rbp-59h]
  _BYTE v23[8]; // [rsp+90h] [rbp-49h] BYREF
  __int64 v24; // [rsp+98h] [rbp-41h]
  unsigned int v25; // [rsp+B8h] [rbp-21h]

  v17 = 0LL;
  *a6 = 0LL;
  memset_0(v23, 0, 0x48uLL);
  v10 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _BYTE *))(*(_QWORD *)a3 + 80LL))(a3, v23);
  v11 = v10;
  if ( v10 < 0 )
  {
    v16 = 57;
    goto LABEL_12;
  }
  if ( !CConversionSwapChain::IsSupportedFakeOverlayColorSpace(a4[2]) )
  {
    v11 = -2003292288;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003292288, 0x51u, 0LL);
    goto LABEL_13;
  }
  v18[1] = 0LL;
  v18[2] = 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = 0LL;
  v18[0] = v24;
  v19 = 1;
  v12 = (CConversionSwapChain *)operator new(0x390uLL);
  if ( v12 )
  {
    v13 = CConversionSwapChain::CConversionSwapChain(
            v12,
            a1,
            a3,
            (const struct PixelFormatInfo *)a4,
            a5,
            (const struct RefreshRateInfo *)v18,
            *a2,
            v25,
            a2[1].LowPart,
            a2[1].HighPart);
    v17 = v13;
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
    v16 = 75;
LABEL_12:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v16, 0LL);
    goto LABEL_13;
  }
  v17 = 0LL;
  *a6 = v14;
LABEL_13:
  wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>((__int64 *)&v17);
  return v11;
}
