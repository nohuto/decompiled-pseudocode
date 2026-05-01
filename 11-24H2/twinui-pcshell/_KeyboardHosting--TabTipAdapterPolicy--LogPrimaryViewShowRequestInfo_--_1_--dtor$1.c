/*
 * XREFs of _KeyboardHosting::TabTipAdapterPolicy::LogPrimaryViewShowRequestInfo_::_1_::dtor$1 @ 0x1806EDCEB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::LogPrimaryViewShowRequestInfo_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(a2 + 384));
}
