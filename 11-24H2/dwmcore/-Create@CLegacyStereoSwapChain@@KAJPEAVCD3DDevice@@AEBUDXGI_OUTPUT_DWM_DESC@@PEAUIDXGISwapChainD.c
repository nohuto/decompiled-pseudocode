/*
 * XREFs of ?Create@CLegacyStereoSwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1802CA7E8
 * Callers:
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacyStereoSwapChain@@@Z @ 0x1802B9C2C (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Initialize@CLegacySwapChain@@MEAAJXZ @ 0x180227AC0 (-Initialize@CLegacySwapChain@@MEAAJXZ.c)
 *     ??1?$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180250300 (--1-$com_ptr_t@VCLegacyStereoSwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x1802C97E4 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRend.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyStereoSwapChain::Create(
        struct CD3DDevice *a1,
        struct _LUID *a2,
        struct IDXGISwapChainDWM1 *a3,
        const struct PixelFormatInfo *a4,
        const struct RenderTargetInfo *a5,
        struct CLegacyStereoSwapChain **a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  _QWORD *v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // edi
  _QWORD *v18; // [rsp+60h] [rbp-89h] BYREF
  _QWORD v19[3]; // [rsp+68h] [rbp-81h] BYREF
  int v20; // [rsp+80h] [rbp-69h]
  int v21; // [rsp+84h] [rbp-65h]
  __int64 v22; // [rsp+88h] [rbp-61h]
  __int64 v23; // [rsp+90h] [rbp-59h]
  _BYTE v24[8]; // [rsp+A0h] [rbp-49h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-41h]
  int v26; // [rsp+C8h] [rbp-21h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+4Fh]

  *a6 = 0LL;
  memset_0(v24, 0, 0x48uLL);
  v10 = (*(__int64 (__fastcall **)(struct IDXGISwapChainDWM1 *, _BYTE *))(*(_QWORD *)a3 + 80LL))(a3, v24);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v19[1] = 0LL;
    v19[2] = 0LL;
    v21 = 0;
    v22 = 0LL;
    v23 = 0LL;
    v19[0] = v25;
    v20 = 1;
    v13 = operator new(0x208uLL);
    if ( v13 )
    {
      CLegacySwapChain::CLegacySwapChain(
        (__int64)v13,
        a1,
        (__int64)a3,
        v26,
        a4,
        a5,
        (struct RefreshRateInfo *)v19,
        a2[1].LowPart,
        a2[1].HighPart,
        *a2,
        0);
      v18 = v13;
      *v13 = &CLegacyStereoSwapChain::`vftable'{for `COverlaySwapChain'};
      v13[3] = &CLegacyStereoSwapChain::`vftable'{for `IDeviceResource'};
      v13[4] = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
      v13[32] = &CConversionSwapChain::`vftable'{for `IScribbleSwapChain'};
      v13[35] = &CLegacyStereoSwapChain::`vftable';
      v13[64] = 0LL;
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v13 + 1));
    }
    else
    {
      v13 = 0LL;
      v18 = 0LL;
    }
    v14 = CLegacySwapChain::Initialize((CLegacySwapChain *)v13);
    v17 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x27u, 0LL);
    }
    else
    {
      v18 = 0LL;
      *a6 = (struct CLegacyStereoSwapChain *)v13;
    }
    wil::com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>::~com_ptr_t<CLegacyStereoSwapChain,wil::err_returncode_policy>(
      (__int64 *)&v18,
      v15,
      v16);
    return v17;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacystereoswapchain.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
}
