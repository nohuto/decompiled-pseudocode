/*
 * XREFs of _ApplicationContainerActivationPolicy::OnCreating_::_1_::dtor$1 @ 0x1806318F6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationContainerActivationPolicy::OnCreating_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>((__int64 *)(a2 + 48));
}
