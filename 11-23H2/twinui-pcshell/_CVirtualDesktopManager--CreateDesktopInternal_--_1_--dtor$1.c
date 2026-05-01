/*
 * XREFs of _CVirtualDesktopManager::CreateDesktopInternal_::_1_::dtor$1 @ 0x180600E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::CreateDesktopInternal_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 32));
}
