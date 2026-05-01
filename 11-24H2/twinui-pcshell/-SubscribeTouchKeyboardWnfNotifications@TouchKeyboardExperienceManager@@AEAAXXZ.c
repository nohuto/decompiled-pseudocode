/*
 * XREFs of ?SubscribeTouchKeyboardWnfNotifications@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1802538BC
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??1?$function@$$A6A_NJ@Z@wistd@@QEAA@XZ @ 0x1800BC4BC (--1-$function@$$A6A_NJ@Z@wistd@@QEAA@XZ.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800EEF7C (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_b_ea_1800EEF7C.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1800EEFFC (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?IsAnyOOBE@@YA_NXZ @ 0x18010493C (-IsAnyOOBE@@YA_NXZ.c)
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x180113690 (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 *     ??$make_wnf_subscription@$$BY0CA@E@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@K@Z @ 0x1801C8770 (--$make_wnf_subscription@$$BY0CA@E@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy.c)
 *     ??$make_wnf_subscription@E@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBE@Z@wistd@@K@Z @ 0x1801E9B78 (--$make_wnf_subscription@E@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     ??$make_wnf_subscription@K@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@K@Z @ 0x1802AED90 (--$make_wnf_subscription@K@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall TouchKeyboardExperienceManager::SubscribeTouchKeyboardWnfNotifications(wil::details **this)
{
  wil::details **v2; // rax
  struct wil::details::wnf_subscription_state_base *v3; // rdx
  wil::details **v4; // rax
  struct wil::details::wnf_subscription_state_base *v5; // rdx
  wil::details **v6; // rax
  struct wil::details::wnf_subscription_state_base *v7; // rdx
  wil::details **v8; // rax
  struct wil::details::wnf_subscription_state_base *v9; // rdx
  wil::details **v10; // rax
  struct wil::details::wnf_subscription_state_base *v11; // rdx
  wil::details **v12; // rax
  struct wil::details::wnf_subscription_state_base *v13; // rdx
  wil::details **v14; // rax
  struct wil::details::wnf_subscription_state_base *v15; // rdx
  wil::details **v16; // rax
  struct wil::details::wnf_subscription_state_base *v17; // rdx
  wil::details **wnf; // rax
  struct wil::details::wnf_subscription_state_base *v19; // rdx
  wil::details **v20; // rax
  struct wil::details::wnf_subscription_state_base *v21; // rdx
  wil::details **v22; // rax
  struct wil::details::wnf_subscription_state_base *v23; // rdx
  wil::details **v24; // rax
  struct wil::details::wnf_subscription_state_base *v25; // rdx
  const char *v26; // r9
  wil::details **v27; // rax
  struct wil::details::wnf_subscription_state_base *v28; // rdx
  wil::details **v29; // rax
  struct wil::details::wnf_subscription_state_base *v30; // rdx
  wil::details **v31; // rax
  struct wil::details::wnf_subscription_state_base *v32; // rdx
  wil::details **v33; // rax
  struct wil::details::wnf_subscription_state_base *v34; // rdx
  __int64 v35; // rdx
  wil::details **v36; // rax
  struct wil::details::wnf_subscription_state_base *v37; // rdx
  wil::details *v38; // [rsp+20h] [rbp-39h] BYREF
  _BYTE v39[8]; // [rsp+28h] [rbp-31h] BYREF
  __int64 (__fastcall **v40)(); // [rsp+30h] [rbp-29h] BYREF
  wil::details **v41; // [rsp+38h] [rbp-21h]
  __int64 (__fastcall ***v42)(); // [rsp+98h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v40 = off_1807224A0;
  v41 = this;
  v42 = &v40;
  v2 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                          &v38,
                          (__int64)&WNF_ENTR_FULLLAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                          (__int64)v39,
                          0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 278,
    v2);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v3);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_180723538;
  v41 = this;
  v42 = &v40;
  v4 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                          &v38,
                          (__int64)&WNF_ENTR_WIDELAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                          (__int64)v39,
                          0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 280,
    v4);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v5);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_180722DB0;
  v41 = this;
  v42 = &v40;
  v6 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                          &v38,
                          (__int64)&WNF_ENTR_NARROWLAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                          (__int64)v39,
                          0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 279,
    v6);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v7);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_18072BB18;
  v41 = this;
  v42 = &v40;
  v8 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                          &v38,
                          (__int64)&WNF_ENTR_HANDWRITING_AVAILABILITY_POLICY_VALUE_CHANGED,
                          (__int64)v39,
                          0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 281,
    v8);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v9);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_180722DD8;
  v41 = this;
  v42 = &v40;
  v10 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           &v38,
                           (__int64)&WNF_ENTR_SPLITLAYOUT_AVAILABILITY_POLICY_VALUE_CHANGED,
                           (__int64)v39,
                           0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 282,
    v10);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v11);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_18072BB40;
  v41 = this;
  v42 = &v40;
  v12 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           &v38,
                           (__int64)&WNF_ENTR_EMOJI_AVAILABILITY_POLICY_VALUE_CHANGED,
                           (__int64)v39,
                           0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 283,
    v12);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v13);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_18072BB90;
  v41 = this;
  v42 = &v40;
  v14 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           &v38,
                           (__int64)&WNF_ENTR_FORCEDOCKED_TOUCHKEYBOARD_POLICY_VALUE_CHANGED,
                           (__int64)v39,
                           0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 284,
    v14);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v15);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_18072BBE0;
  v41 = this;
  v42 = &v40;
  v16 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           &v38,
                           (__int64)&WNF_ENTR_TOUCHKEYBOARDDICTATION_POLICY_VALUE_CHANGED,
                           (__int64)v39,
                           0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 285,
    v16);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v17);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_18072BB68;
  v41 = this;
  v42 = &v40;
  wnf = (wil::details **)wil::make_wnf_subscription<unsigned long>(&v38, &WNF_ACC_EC_ENABLED, v39, 0LL);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 286,
    wnf);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v19);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_180722E00;
  v41 = this;
  v42 = &v40;
  v20 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           &v38,
                           (__int64)&WNF_ENTR_ALLOWLINGUISTICDATACOLLECTION_POLICY_VALUE_CHANGED,
                           (__int64)v39,
                           0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 289,
    v20);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v21);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_180742CA0;
  v41 = this;
  v42 = &v40;
  v22 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           &v38,
                           (__int64)&WNF_ENTR_TEXTINPUTSUGGESTIONUPDATE_POLICY_VALUE_CHANGED,
                           (__int64)v39,
                           0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 288,
    v22);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v23);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_18072BBB8;
  v41 = this;
  v42 = &v40;
  v24 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           &v38,
                           (__int64)&WNF_SPCH_ALLOW_REMOTE_SPEECH_SERVICES,
                           (__int64)v39,
                           0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 293,
    v24);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v25);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  if ( IsAnyOOBE()
    && !(unsigned int)RegisterWaitUntilOOBECompleted(
                        TouchKeyboardExperienceManager::OobeCompletedCallback,
                        this,
                        this + 120) )
  {
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0x9BF,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      v26);
  }
  v40 = off_180722E28;
  v41 = this;
  v42 = &v40;
  v27 = (wil::details **)wil::make_wnf_subscription<unsigned char [32]>(
                           &v38,
                           (__int64)&WNF_TKBN_TOUCH_EVENT,
                           (__int64)v39);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 290,
    v27);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v28);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_180722E28;
  v41 = this;
  v42 = &v40;
  v29 = (wil::details **)wil::make_wnf_subscription<unsigned char [32]>(
                           &v38,
                           (__int64)&WNF_TKBN_RESTRICTED_TOUCH_EVENT,
                           (__int64)v39);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 291,
    v29);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v30);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_180722E28;
  v41 = this;
  v42 = &v40;
  v31 = (wil::details **)wil::make_wnf_subscription<unsigned char [32]>(
                           &v38,
                           (__int64)&WNF_TKBN_SYSTEM_TOUCH_EVENT,
                           (__int64)v39);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 292,
    v31);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v32);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_18072BC08;
  v41 = this;
  v42 = &v40;
  v33 = (wil::details **)wil::make_wnf_subscription<wil::details::empty_wnf_state>(
                           &v38,
                           (__int64)&WNF_CDP_ALLOW_CLIPBOARDHISTORY_POLICY_CHANGE,
                           (__int64)v39,
                           0);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 295,
    v33);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v34);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
  v40 = off_180742CC8;
  v41 = this;
  v42 = &v40;
  v36 = (wil::details **)wil::make_wnf_subscription<unsigned char>(&v38, v35, (__int64)v39);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    this + 296,
    v36);
  if ( v38 )
    wil::details::delete_wnf_subscription_state(v38, v37);
  wistd::function<bool (long)>::~function<bool (long)>((__int64)v39);
}
