/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180009DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180096A54 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_18024E738);
  qword_18024E780 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_18024E788);
  qword_18024E7F0 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_18024E7D0 = 0LL;
  xmmword_18024E7E0 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
