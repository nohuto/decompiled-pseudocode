/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180009830
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18009684C (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180244738);
  qword_180244780 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180244788);
  qword_1802447F0 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1802447D0 = 0LL;
  xmmword_1802447E0 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
