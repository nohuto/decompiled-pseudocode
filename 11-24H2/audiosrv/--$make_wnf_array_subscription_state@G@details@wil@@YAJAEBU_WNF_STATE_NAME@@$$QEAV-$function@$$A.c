/*
 * XREFs of ??$make_wnf_array_subscription_state@G@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXPEBG_K@Z@wistd@@KPEAPEAU?$wnf_array_subscription_state@G@01@@Z @ 0x180075A70
 * Callers:
 *     ?SubscribeToWnfAudioRenderEndpointChanges@CAudioRenderEndpointChangeDelegator@@QEAAJXZ @ 0x18009D5A4 (-SubscribeToWnfAudioRenderEndpointChanges@CAudioRenderEndpointChangeDelegator@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$wnf_subscription_state@W4_PO_STANDBY_AUDIO_POLICY@@@details@wil@@QEAA@$$QEAV?$function@$$A6AXAEBW4_PO_STANDBY_AUDIO_POLICY@@@Z@wistd@@@Z @ 0x1800B64EC (--0-$wnf_subscription_state@W4_PO_STANDBY_AUDIO_POLICY@@@details@wil@@QEAA@$$QEAV-$function@$$A6.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfStateChangeNotification@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800B6860 (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::make_wnf_array_subscription_state<unsigned short>(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  void *v6; // rax
  void (__fastcall ***v7)(_QWORD, __int64); // rbx
  __int64 v8; // r8
  int v9; // edi
  __int64 v10; // rdx
  int v12; // edi
  unsigned int v13; // [rsp+40h] [rbp-28h] BYREF
  void (__fastcall ***v14)(_QWORD, _QWORD); // [rsp+48h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp-18h] BYREF
  char v16; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  int v18; // [rsp+80h] [rbp+18h] BYREF

  v18 = a3;
  v13 = -1;
  *a4 = 0LL;
  v6 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6
    && (v7 = (void (__fastcall ***)(_QWORD, __int64))wil::details::wnf_subscription_state<enum _PO_STANDBY_AUDIO_POLICY>::wnf_subscription_state<enum _PO_STANDBY_AUDIO_POLICY>(
                                                       v6,
                                                       a2)) != 0LL )
  {
    v8 = v13;
    if ( v13 == -1 )
    {
      v18 = 0;
      v9 = NtQueryWnfStateData(&WNF_AUDC_RENDER, 0LL, 0LL, &v13, 0LL, &v18) | 0x10000000;
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -805306333 )
      {
        v10 = 1020LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
          (const char *)(unsigned int)v9);
        (**v7)(v7, 1LL);
        return (unsigned int)v9;
      }
      v8 = v13;
    }
    v14 = v7 + 1;
    v15 = 0LL;
    v16 = 1;
    v12 = RtlSubscribeWnfStateChangeNotification(
            &v15,
            WNF_AUDC_RENDER,
            v8,
            _lambda_2bd7833d1bf4bcca2b9a6ef873308bfb_::_lambda_invoker_cdecl_);
    wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfStateChangeNotification(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>(&v14);
    v9 = v12 | 0x10000000;
    if ( v9 < 0 )
    {
      v10 = 1029LL;
      goto LABEL_7;
    }
    *a4 = v7;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3F5,
      (int)"onecore\\internal\\sdk\\inc\\wil\\resource.h",
      (const char *)0x8007000ELL);
    return 2147942414LL;
  }
}
