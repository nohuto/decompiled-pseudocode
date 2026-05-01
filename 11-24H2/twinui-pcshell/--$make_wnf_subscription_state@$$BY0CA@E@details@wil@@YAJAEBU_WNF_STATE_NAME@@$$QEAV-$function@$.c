/*
 * XREFs of ??$make_wnf_subscription_state@$$BY0CA@E@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@KPEAPEAU?$wnf_subscription_state@$$BY0CA@E@01@@Z @ 0x1801C87C8
 * Callers:
 *     ??$make_wnf_subscription@$$BY0CA@E@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@K@Z @ 0x1801C8770 (--$make_wnf_subscription@$$BY0CA@E@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_WNF_USER_SUBSCRIPTION@@@Z @ 0x180193FBC (-reset@-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1-RtlUnsubsc.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CD890 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<unsigned char [32]>(
        _QWORD *a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // r8
  int v10; // ebx
  unsigned int v12; // ebx
  int v13; // [rsp+20h] [rbp-40h]
  unsigned int v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 *v15; // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h] BYREF
  char v17; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  int v19; // [rsp+90h] [rbp+30h] BYREF

  v19 = a3;
  v14 = 0;
  *a4 = 0LL;
  v7 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( !v7 )
  {
    v12 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B1,
      (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
      (const char *)0x8007000ELL);
    return v12;
  }
  v7[1] = 0LL;
  *v7 = &wil::details::wnf_subscription_state<int>::`vftable';
  if ( *(_QWORD *)(a2 + 112) )
  {
    v7[16] = v7 + 3;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 16LL))(*(_QWORD *)(a2 + 112));
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 112) + 24LL))(*(_QWORD *)(a2 + 112));
    *(_QWORD *)(a2 + 112) = 0LL;
  }
  else
  {
    v7[16] = 0LL;
  }
  v9 = v14;
  if ( v14 != -1 )
    goto LABEL_5;
  v19 = 0;
  v12 = NtQueryWnfStateData(a1, 0LL, 0LL, &v14, 0LL, &v19) | 0x10000000;
  if ( (int)(v12 + 0x80000000) < 0 || v12 == -805306333 )
  {
    v9 = v14;
LABEL_5:
    v15 = v8 + 1;
    v16 = 0LL;
    v17 = 1;
    v10 = RtlSubscribeWnfStateChangeNotification(
            &v16,
            *a1,
            v9,
            _lambda_024856d2eaa26e7e4864a7fffc39e281_::_lambda_invoker_cdecl_,
            v8,
            0LL,
            0,
            0);
    if ( v17 )
      wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>::reset(
        v15,
        v16);
    if ( v10 >= 0 )
    {
      *a4 = v8;
      return 0LL;
    }
    v12 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x3C7,
            (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
            (const char *)(unsigned int)v10,
            v13);
    goto LABEL_11;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B8,
    (int)"onecore\\internal\\sdk\\inc\\wil\\Resource.h",
    (const char *)v12);
LABEL_11:
  (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
  return v12;
}
