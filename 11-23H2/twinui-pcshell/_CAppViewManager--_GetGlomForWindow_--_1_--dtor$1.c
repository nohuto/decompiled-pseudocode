/*
 * XREFs of _CAppViewManager::_GetGlomForWindow_::_1_::dtor$1 @ 0x1803B6278
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppViewManager::_GetGlomForWindow_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 112));
}
