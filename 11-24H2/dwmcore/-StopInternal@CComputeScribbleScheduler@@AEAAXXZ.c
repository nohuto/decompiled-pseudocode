/*
 * XREFs of ?StopInternal@CComputeScribbleScheduler@@AEAAXXZ @ 0x1801C4E44
 * Callers:
 *     ?TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z @ 0x1801C4784 (-TurnOffScribblingForTarget@CSuperWetInkManager@@AEBAXPEAVIMonitorTarget@@@Z.c)
 *     ?Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z @ 0x1801C4AE8 (-Schedule@CComputeScribbleScheduler@@AEAAJAEBUScribbleFrame@1@II@Z.c)
 *     ?ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ @ 0x1801C5C48 (-ProcessScribbleFrame@CComputeScribbleScheduler@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x1801C4EA0 (-ClearScribbles@CComputeScribbleFramebuffer@@QEAAXXZ.c)
 */

void __fastcall CComputeScribbleScheduler::StopInternal(CComputeScribbleScheduler *this)
{
  CComputeScribbleFramebuffer **v1; // rsi
  CComputeScribbleFramebuffer **i; // rbx

  v1 = (CComputeScribbleFramebuffer **)*((_QWORD *)this + 17);
  for ( i = (CComputeScribbleFramebuffer **)*((_QWORD *)this + 16); i != v1; ++i )
    CComputeScribbleFramebuffer::ClearScribbles(*i);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 14);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 15);
}
