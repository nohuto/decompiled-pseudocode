/*
 * XREFs of _lambda_7e7f8cd3e685741244f76c8bd4111764_::__lambda_7e7f8cd3e685741244f76c8bd4111764_ @ 0x180552DBC
 * Callers:
 *     _CMultitaskingViewHotKeyHandler::_OnAltTab_::_1_::dtor$3 @ 0x1805533AC (_CMultitaskingViewHotKeyHandler--_OnAltTab_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_7e7f8cd3e685741244f76c8bd4111764_::__lambda_7e7f8cd3e685741244f76c8bd4111764_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)(a1 + 16));
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(a1 + 8));
}
