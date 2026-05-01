/*
 * XREFs of _GetStoredEnterprisePinGeneration_::_1_::dtor$2 @ 0x1806E4445
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetStoredEnterprisePinGeneration_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 176));
}
