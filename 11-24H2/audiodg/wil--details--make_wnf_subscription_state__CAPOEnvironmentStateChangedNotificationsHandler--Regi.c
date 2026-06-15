/*
 * XREFs of wil::details::make_wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_ @ 0x14005F67C
 * Callers:
 *     ?RegisterForEnvironmentalStateChangedNotifications@CAPOEnvironmentStateChangedNotificationsHandler@@AEAAJXZ @ 0x14005FCEC (-RegisterForEnvironmentalStateChangedNotifications@CAPOEnvironmentStateChangedNotificationsHandl.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058D58 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x14005C1E8 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x14005DF14 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rdi
  __int64 v8; // r8
  unsigned int v9; // ebx
  int v10; // ebx
  void *v11; // rdx
  __int64 v12; // r8
  unsigned int v14; // [rsp+40h] [rbp-28h] BYREF
  void (__fastcall ***v15)(_QWORD, _QWORD); // [rsp+48h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF
  char v17; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v19; // [rsp+80h] [rbp+18h] BYREF

  v19 = a3;
  v14 = 0;
  *a4 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = (void (__fastcall ***)(_QWORD, __int64))v6;
  if ( !v6 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8007000ELL);
    return v9;
  }
  v6[1] = 0LL;
  *v6 = &off_14009EDA8;
  if ( *(_QWORD *)(a2 + 112) )
  {
    v6[16] = v6 + 3;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 16LL))(*(_QWORD *)(a2 + 112));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 24LL))(*(_QWORD *)(a2 + 112));
    *(_QWORD *)(a2 + 112) = 0LL;
  }
  else
  {
    v6[16] = 0LL;
  }
  v8 = v14;
  if ( v14 != -1 )
    goto LABEL_11;
  v19 = 0;
  v9 = NtQueryWnfStateData(&WNF_AUDC_SPATIAL_STATUS, 0LL, 0LL, &v14, 0LL, &v19) | 0x10000000;
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -805306333 )
  {
    v8 = v14;
LABEL_11:
    v15 = v7 + 1;
    v16 = 0LL;
    v17 = 1;
    v10 = RtlSubscribeWnfStateChangeNotification(
            &v16,
            WNF_AUDC_SPATIAL_STATUS,
            v8,
            lambda_fcafbedef24e81d133269090a4833dfd_::_lambda_invoker_cdecl_);
    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>((__int64)&v15);
    if ( v10 >= 0 )
    {
      *a4 = v7;
      return 0LL;
    }
    v9 = wil::details::in1diag3::Return_NtStatus(retaddr, v11, v12, (const char *)(unsigned int)v10);
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B8,
    (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
    (const char *)v9);
LABEL_9:
  (**v7)(v7, 1LL);
  return v9;
}
