/*
 * XREFs of _PersistEnterprisePinDataToRegistry_::_1_::dtor$0 @ 0x1806D09C9
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PersistEnterprisePinDataToRegistry_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 80));
}
