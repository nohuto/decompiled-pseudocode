/*
 * XREFs of wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001EF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18001E93C (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

int wil::details::_dynamic_initializer_for__g_featureStateManager__()
{
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_1800630D0);
  qword_180063118 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList((wil::details_abi::SubscriptionList *)&unk_180063120);
  qword_180063188 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_180063168 = 0LL;
  xmmword_180063178 = 0LL;
  return atexit((void (__cdecl *)())wil::details::_dynamic_atexit_destructor_for__g_featureStateManager__);
}
