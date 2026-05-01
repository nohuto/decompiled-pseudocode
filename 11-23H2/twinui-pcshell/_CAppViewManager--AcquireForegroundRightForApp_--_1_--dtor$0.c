/*
 * XREFs of _CAppViewManager::AcquireForegroundRightForApp_::_1_::dtor$0 @ 0x1803AD76B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::AcquireForegroundRightForApp_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)(a2 + 72));
}
