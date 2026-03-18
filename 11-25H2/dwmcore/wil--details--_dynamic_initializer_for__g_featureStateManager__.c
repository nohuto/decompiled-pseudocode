/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180007180
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x180231E70 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180405088);
  qword_1804050D0 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1804050D8);
  qword_180405140 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180405120 = 0LL;
  xmmword_180405130 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
