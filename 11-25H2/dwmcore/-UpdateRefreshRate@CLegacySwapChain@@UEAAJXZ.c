/*
 * XREFs of ?UpdateRefreshRate@CLegacySwapChain@@UEAAJXZ @ 0x180247850
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0RefreshRateInfo@@QEAA@AEBUDXGI_OUTPUT_DWM_DESC@@@Z @ 0x1801EF288 (--0RefreshRateInfo@@QEAA@AEBUDXGI_OUTPUT_DWM_DESC@@@Z.c)
 *     ?GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z @ 0x18020A2E0 (-GetDXGIOutput@CDisplayManager@@QEAAJU_LUID@@0IPEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?Update@RefreshRateInfo@@QEAA_NAEBV1@@Z @ 0x18021E824 (-Update@RefreshRateInfo@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::UpdateRefreshRate(CLegacySwapChain *this)
{
  CDisplayManager *v2; // rcx
  int DXGIOutput; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  bool v7; // di
  CGlobalComposition *v8; // rcx
  struct IDXGIOutputDWM *v9; // [rsp+30h] [rbp-128h] BYREF
  _BYTE v10[56]; // [rsp+38h] [rbp-120h] BYREF
  _BYTE v11[208]; // [rsp+70h] [rbp-E8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+0h]

  if ( *((_QWORD *)this + 33) )
  {
    v9 = 0LL;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v9);
    DXGIOutput = CDisplayManager::GetDXGIOutput(
                   v2,
                   *(struct _LUID *)((char *)this + 80),
                   *(struct _LUID *)((char *)this + 52),
                   *((_DWORD *)this + 12),
                   (struct IDXGIAdapter1 *)&v9);
    v4 = DXGIOutput;
    if ( DXGIOutput < 0 )
    {
      v5 = 156LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\global\\legacyswapchain.cpp",
        (const char *)(unsigned int)DXGIOutput);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
      return v4;
    }
    memset_0(v11, 0, 0xC8uLL);
    DXGIOutput = (*(__int64 (__fastcall **)(struct IDXGIOutputDWM *, _BYTE *))(*(_QWORD *)v9 + 32LL))(v9, v11);
    v4 = DXGIOutput;
    if ( DXGIOutput < 0 )
    {
      v5 = 159LL;
      goto LABEL_6;
    }
    v7 = *((_DWORD *)this + 32) > 1u;
    RefreshRateInfo::RefreshRateInfo((RefreshRateInfo *)v10, (const struct DXGI_OUTPUT_DWM_DESC *)v11);
    if ( RefreshRateInfo::Update((CLegacySwapChain *)((char *)this + 104), (const struct RefreshRateInfo *)v10) )
    {
      if ( *((_QWORD *)this + 19) )
        *((_QWORD *)this + 19) = 0LL;
      v8 = g_pComposition;
      if ( v7 != *((_DWORD *)this + 32) > 1u )
        *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 750LL) = 1;
      *(_BYTE *)(*((_QWORD *)v8 + 77) + 749LL) = 1;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v9);
  }
  return 0LL;
}
