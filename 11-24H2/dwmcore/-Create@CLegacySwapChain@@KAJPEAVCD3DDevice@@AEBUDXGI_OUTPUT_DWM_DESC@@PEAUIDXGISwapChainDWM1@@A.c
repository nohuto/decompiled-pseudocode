/*
 * XREFs of ?Create@CLegacySwapChain@@KAJPEAVCD3DDevice@@AEBUDXGI_OUTPUT_DWM_DESC@@PEAUIDXGISwapChainDWM1@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@FrontBufferRender@@PEAPEAV1@@Z @ 0x1801E4888
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x18023EA98 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ??0RefreshRateInfo@@QEAA@AEBUDXGI_OUTPUT_DWM_DESC@@@Z @ 0x1801E4A18 (--0RefreshRateInfo@@QEAA@AEBUDXGI_OUTPUT_DWM_DESC@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     memset_0 @ 0x180251AD8 (memset_0.c)
 *     ??0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRenderTargetInfo@@AEBVRefreshRateInfo@@IIU_LUID@@W4Enum@FrontBufferRender@@@Z @ 0x1802C97E4 (--0CLegacySwapChain@@IEAA@PEAVCD3DDevice@@PEAUIDXGISwapChainDWM1@@IAEBUPixelFormatInfo@@AEBVRend.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::Create(
        __int64 a1,
        const struct DXGI_OUTPUT_DWM_DESC *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 *a7)
{
  int v11; // eax
  unsigned int v12; // edi
  LPVOID v14; // rax
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  int v18; // [rsp+68h] [rbp-98h]
  _BYTE v19[48]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v20[40]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v21; // [rsp+C8h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+148h] [rbp+48h]

  v18 = a6;
  *a7 = 0LL;
  memset_0(v20, 0, 0x48uLL);
  v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a3 + 80LL))(a3, v20);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
  RefreshRateInfo::RefreshRateInfo((RefreshRateInfo *)v19, a2);
  v17 = 0LL;
  v14 = operator new(0x200uLL);
  if ( v14 )
    v14 = (LPVOID)CLegacySwapChain::CLegacySwapChain(
                    v14,
                    a1,
                    a3,
                    v21,
                    a4,
                    a5,
                    v19,
                    *((_DWORD *)a2 + 2),
                    *((_DWORD *)a2 + 3),
                    *(_QWORD *)a2,
                    v18);
  wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=(&v17, (__int64)v14);
  v15 = v17;
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 56LL))(v17);
  v12 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
      (const char *)(unsigned int)v16);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    return v12;
  }
  v17 = 0LL;
  *a7 = v15;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v17);
  return 0LL;
}
