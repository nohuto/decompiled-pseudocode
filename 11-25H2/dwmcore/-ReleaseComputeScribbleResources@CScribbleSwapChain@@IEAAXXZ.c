/*
 * XREFs of ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x1802187B4
 * Callers:
 *     ?TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ @ 0x1801C5A68 (-TransitionAwayCurrentPrimaries@CDDisplaySwapChain@@IEAAXXZ.c)
 *     ?PostPresentForComputeScribble@CScribbleSwapChain@@IEAAX_N@Z @ 0x180247740 (-PostPresentForComputeScribble@CScribbleSwapChain@@IEAAX_N@Z.c)
 *     ??1CDDisplaySwapChain@@MEAA@XZ @ 0x1802C7940 (--1CDDisplaySwapChain@@MEAA@XZ.c)
 *     ?CleanupComputeScribble@CDDisplaySwapChain@@UEAAX_N@Z @ 0x1802C7D10 (-CleanupComputeScribble@CDDisplaySwapChain@@UEAAX_N@Z.c)
 *     ??1CLegacySwapChain@@MEAA@XZ @ 0x1802D2C58 (--1CLegacySwapChain@@MEAA@XZ.c)
 *     ?CleanupComputeScribble@CLegacySwapChain@@UEAAX_N@Z @ 0x1802D2E50 (-CleanupComputeScribble@CLegacySwapChain@@UEAAX_N@Z.c)
 *     ?NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802D3030 (-NotifyInvalidResource@CLegacySwapChain@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@VCComputeScribbleRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021882C (-reset@-$com_ptr_t@VCComputeScribbleRenderer@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScribbleSwapChain::ReleaseComputeScribbleResources(CScribbleSwapChain *this)
{
  unsigned int i; // edi
  __int64 v3; // rax

  wil::com_ptr_t<CComputeScribbleRenderer,wil::err_returncode_policy>::reset((char *)this + 264);
  for ( i = 0; i < (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this + 3) + 88LL))((char *)this + 24); ++i )
  {
    v3 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 3) + 208LL))((char *)this + 24, i);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3);
  }
}
