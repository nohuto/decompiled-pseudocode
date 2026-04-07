/*
 * XREFs of ?decrement_reference@implements_delegate_base@impl@winrt@@QEAAIXZ @ 0x1800E4214
 * Callers:
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_7747b62f378c0764cf1d4ae8045d1c0d___::Release @ 0x180087000 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--AnimationCompletedHandler__lambda_774.c)
 *     winrt::impl::implements_delegate_winrt::Udwm::Transitions::UnloadDelegate__lambda_824c6eb626f18db003f69816ba8f789d___::Release @ 0x1800E56D0 (winrt--impl--implements_delegate_winrt--Udwm--Transitions--UnloadDelegate__lambda_8_ea_1800E56D0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall winrt::impl::implements_delegate_base::decrement_reference(__int64 this)
{
  return winrt::impl::atomic_ref_count::operator--(this);
}
