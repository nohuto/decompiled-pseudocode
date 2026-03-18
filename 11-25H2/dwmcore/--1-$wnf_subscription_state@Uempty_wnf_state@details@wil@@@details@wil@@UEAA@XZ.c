/*
 * XREFs of ??1?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAA@XZ @ 0x180264D44
 * Callers:
 *     ??_E?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAAPEAXI@Z @ 0x1802655A0 (--_E-$wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$function@$$A6AXXZ@wistd@@QEAA@XZ @ 0x180238268 (--1-$function@$$A6AXXZ@wistd@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x1802669D8 (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 */

__int64 __fastcall wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::~wnf_subscription_state<wil::details::empty_wnf_state>(
        _QWORD *a1)
{
  *a1 = &wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::`vftable';
  wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
    a1 + 1,
    0LL);
  wistd::function<void (void)>::~function<void (void)>((__int64)(a1 + 2));
  *a1 = &wil::details::wnf_subscription_state_base::`vftable';
  return wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>(a1 + 1);
}
