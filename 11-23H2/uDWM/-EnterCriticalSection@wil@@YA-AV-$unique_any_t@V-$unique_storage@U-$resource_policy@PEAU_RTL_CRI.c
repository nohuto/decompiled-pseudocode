/*
 * XREFs of ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18002E12C
 * Callers:
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x18000A574 (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18002E0BC (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18009D92C (-Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSC.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x1800F36D4 (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall wil::EnterCriticalSection(
        struct _RTL_CRITICAL_SECTION **a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  EnterCriticalSection(a2);
  *a1 = a2;
  return a1;
}
