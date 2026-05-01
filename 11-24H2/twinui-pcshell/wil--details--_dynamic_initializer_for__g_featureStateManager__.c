/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x1801E6BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x1801E6C20 (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1808C51A0);
  qword_1808C51E8 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1808C51F0);
  qword_1808C5258 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1808C5238 = 0LL;
  xmmword_1808C5248 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
