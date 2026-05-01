/*
 * XREFs of _lambda_3a6d53bdb7b70071c869d320bc39bec7_::operator() @ 0x1805C3114
 * Callers:
 *     wil::details::ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___::_ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___ @ 0x1805C2F74 (wil--details--ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___--_ScopeExitFn__lambda_3a6d.c)
 *     ?ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEAUtagRECT@@PEAUtagPOINT@@2W4SHOW_WINDOW_ARRANGEMENT_VIEW_MODE@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputSource@@@Z @ 0x1805C4460 (-ShowWindowArrangementView@TabletModeViewManager@@AEAAJPEAUIApplicationView@@PEAUIAppLayout@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

HRESULT __fastcall lambda_3a6d53bdb7b70071c869d320bc39bec7_::operator()(IUnknown ***a1)
{
  IUnknown *v2; // rcx

  v2 = (*a1)[19];
  if ( v2 )
  {
    ((void (__fastcall *)(IUnknown *))v2->lpVtbl[2].AddRef)(v2);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)*a1 + 19);
  }
  return IUnknown_SetSite(*a1[1], 0LL);
}
