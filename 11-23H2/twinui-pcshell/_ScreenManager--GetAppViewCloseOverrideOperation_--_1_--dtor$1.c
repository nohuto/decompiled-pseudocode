/*
 * XREFs of _ScreenManager::GetAppViewCloseOverrideOperation_::_1_::dtor$1 @ 0x1805C5A5D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ScreenManager::GetAppViewCloseOverrideOperation_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IApplicationView>::~ComPtr<IApplicationView>((__int64 *)(a2 + 128));
}
