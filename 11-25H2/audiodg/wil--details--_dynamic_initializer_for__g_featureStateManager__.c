/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1400028D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x14004B6D4 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1400C35C0);
  qword_1400C3608 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1400C3610);
  qword_1400C3678 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1400C3658 = 0LL;
  xmmword_1400C3668 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
