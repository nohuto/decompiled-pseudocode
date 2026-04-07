/*
 * XREFs of ?construct@?$manually_managed_shutdown_aware_object@VFeatureStateManager@details@wil@@@wil@@QEAAXXZ @ 0x18001F748
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001040 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 * Callees:
 *     ??0SubscriptionList@details_abi@wil@@QEAA@XZ @ 0x18001F70C (--0SubscriptionList@details_abi@wil@@QEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *wil::manually_managed_shutdown_aware_object<wil::details::FeatureStateManager>::construct()
{
  struct _RTL_CRITICAL_SECTION *result; // rax

  word_180148518 = 0;
  qword_1801484E0 = (__int64)"WilStaging_02";
  wil::details::g_featureStateManager = 0;
  xmmword_1801484E8 = 0LL;
  xmmword_1801484F8 = 0LL;
  xmmword_180148508 = 0LL;
  wil::details_abi::SubscriptionList::SubscriptionList(&stru_180148520);
  qword_180148568 = 0LL;
  result = wil::details_abi::SubscriptionList::SubscriptionList(&stru_180148570);
  qword_1801485D8 = 0LL;
  wil::details::g_featureStateManager = 1;
  xmmword_1801485B8 = 0LL;
  xmmword_1801485C8 = 0LL;
  return result;
}
