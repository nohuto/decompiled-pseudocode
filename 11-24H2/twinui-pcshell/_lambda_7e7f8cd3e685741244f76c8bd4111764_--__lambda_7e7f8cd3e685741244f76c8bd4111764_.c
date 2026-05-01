/*
 * XREFs of _lambda_7e7f8cd3e685741244f76c8bd4111764_::__lambda_7e7f8cd3e685741244f76c8bd4111764_ @ 0x18020B6B8
 * Callers:
 *     ?_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180180C28 (-_OnAltTab@CMultitaskingViewHotKeyHandler@@AEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___::_CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___ @ 0x18020B68C (CMultitaskingViewTaskCallback__lambda_7e7f8cd3e685741244f76c8bd4111764___--_CMultitaskingViewTas.c)
 *     _CMultitaskingViewHotKeyHandler::_OnAltTab_::_1_::dtor$3 @ 0x1806D5DDA (_CMultitaskingViewHotKeyHandler--_OnAltTab_--_1_--dtor$3.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_7e7f8cd3e685741244f76c8bd4111764_::__lambda_7e7f8cd3e685741244f76c8bd4111764_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 16));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 8));
}
