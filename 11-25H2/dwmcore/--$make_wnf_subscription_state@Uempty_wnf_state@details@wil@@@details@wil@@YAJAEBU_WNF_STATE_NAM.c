/*
 * XREFs of ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x1802525E4
 * Callers:
 *     ?RegisterMonitorPowerNotification@CComposition@@IEAAJXZ @ 0x180252420 (-RegisterMonitorPowerNotification@CComposition@@IEAAJXZ.c)
 * Callees:
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18020B324 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180238224 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
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
  unsigned int v12; // [rsp+40h] [rbp-28h] BYREF
  void (__fastcall ***v13)(_QWORD, _QWORD); // [rsp+48h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  char v15; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v17; // [rsp+80h] [rbp+18h] BYREF

  v17 = a3;
  v12 = 0;
  *a4 = 0LL;
  v6 = MIDL_user_allocate(0x88uLL);
  v7 = (void (__fastcall ***)(_QWORD, __int64))v6;
  if ( !v6 )
  {
    v9 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (int)"onecore\\internal\\sdk\\inc\\wil/resource.h",
      (const char *)0x8007000ELL);
    return v9;
  }
  v6[1] = 0LL;
  *v6 = &wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::`vftable';
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
  v8 = v12;
  if ( v12 != -1 )
    goto LABEL_11;
  v17 = 0;
  v9 = NtQueryWnfStateData(&WNF_PO_MODERN_STANDBY_EXIT_INITIATED, 0LL, 0LL, &v12, 0LL, &v17) | 0x10000000;
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -805306333 )
  {
    v8 = v12;
LABEL_11:
    v13 = v7 + 1;
    v14 = 0LL;
    v15 = 1;
    v10 = RtlSubscribeWnfStateChangeNotification(
            &v14,
            WNF_PO_MODERN_STANDBY_EXIT_INITIATED,
            v8,
            _lambda_d93655bd33d44513d4ad201382c30aa7_::_lambda_invoker_cdecl_,
            v7,
            0LL,
            0,
            0);
    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>((__int64)&v13);
    if ( v10 >= 0 )
    {
      *a4 = v7;
      return 0LL;
    }
    v9 = wil::details::in1diag3::Return_NtStatus(
           retaddr,
           (void *)0x3C7,
           (int)"onecore\\internal\\sdk\\inc\\wil/resource.h",
           (const char *)(unsigned int)v10);
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B8,
    (int)"onecore\\internal\\sdk\\inc\\wil/resource.h",
    (const char *)v9);
LABEL_9:
  (**v7)(v7, 1LL);
  return v9;
}
