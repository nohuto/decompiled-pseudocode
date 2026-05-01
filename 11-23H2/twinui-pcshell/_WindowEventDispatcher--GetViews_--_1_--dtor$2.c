/*
 * XREFs of _WindowEventDispatcher::GetViews_::_1_::dtor$2 @ 0x1802D7915
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WindowEventDispatcher::GetViews_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((void *)(a2 + 80));
}
