/*
 * XREFs of ?UnsubscribeProcessWideUsageFlush@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x14007E060
 * Callers:
 *     ??1?$unique_storage@U?$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAU1@@Z$1?UnsubscribeProcessWideUsageFlush@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1400584FC (--1-$unique_storage@U-$resource_policy@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAU1@@Z$1-U.c)
 * Callees:
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x14007DFCC (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 */

void __fastcall wil::details::UnsubscribeProcessWideUsageFlush(
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *this,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a2)
{
  if ( this )
  {
    if ( qword_1400C3590 )
      wil::details_abi::SubscriptionList::Unsubscribe(
        (struct _RTL_CRITICAL_SECTION *)qword_1400C3590 + 5,
        (RTL_SRWLOCK *)qword_1400C3590,
        this);
  }
}
