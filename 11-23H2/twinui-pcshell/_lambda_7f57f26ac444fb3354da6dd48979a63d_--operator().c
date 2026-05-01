/*
 * XREFs of _lambda_7f57f26ac444fb3354da6dd48979a63d_::operator() @ 0x1805C3174
 * Callers:
 *     wil::details::ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___::_ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___ @ 0x1805C2FC4 (wil--details--ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___--_ScopeExitFn__lambda_7f57.c)
 *     ?ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT@@@Z @ 0x1805C3FF0 (-ShowAppResizeView@TabletModeViewManager@@UEAAJPEAUIApplicationView@@W4MOVE_SIZE_TYPE@@UtagPOINT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

HRESULT __fastcall lambda_7f57f26ac444fb3354da6dd48979a63d_::operator()(IUnknown ***a1)
{
  ((void (__fastcall *)(IUnknown *))(*a1)[19]->lpVtbl[2].AddRef)((*a1)[19]);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)*a1 + 19);
  return IUnknown_SetSite(*a1[1], 0LL);
}
