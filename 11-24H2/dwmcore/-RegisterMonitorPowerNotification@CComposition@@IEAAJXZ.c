/*
 * XREFs of ?RegisterMonitorPowerNotification@CComposition@@IEAAJXZ @ 0x1802474A4
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800EFA80 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x180247668 (--$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAM.c)
 *     ?replace@?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@IEAAX$$QEAV123@@Z @ 0x180247840 (-replace@-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPE.c)
 *     ?delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z @ 0x1802478A4 (-delete_wnf_subscription_state@details@wil@@YAXPEAUwnf_subscription_state_base@12@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AKPEAX@Z$1?PowerSettingUnregisterNotification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x18024990C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AKPEAX@Z$1-PowerSettingUnregisterNotification@@.c)
 *     ??1?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AKPEAX@Z$1?PowerSettingUnregisterNotification@@YAK0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18024F1AC (--1-$out_param_t@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAXP6AKPEAX@Z$1-PowerSett.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CComposition::RegisterMonitorPowerNotification(CComposition *this, __int64 a2, __int64 a3)
{
  int v4; // eax
  wil::details *v5; // rcx
  wil::details **v6; // rdx
  signed int v7; // eax
  signed int v8; // ebx
  __int64 v9; // rdx
  int SystemMetrics; // eax
  GUID *v12; // rcx
  signed int v13; // eax
  wil::details *v14; // [rsp+20h] [rbp-69h] BYREF
  char *v15; // [rsp+28h] [rbp-61h] BYREF
  HPOWERNOTIFY RegistrationHandle; // [rsp+30h] [rbp-59h] BYREF
  char v17; // [rsp+38h] [rbp-51h]
  wil::details *v18; // [rsp+40h] [rbp-49h] BYREF
  _QWORD Recipient[2]; // [rsp+48h] [rbp-41h] BYREF
  _BYTE v20[8]; // [rsp+58h] [rbp-31h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+60h] [rbp-29h] BYREF
  __int64 (__fastcall ***v22)(); // [rsp+C8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v18 = 0LL;
  v21 = off_180303B30;
  v22 = &v21;
  v4 = wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(this, v20, a3, &v18);
  v5 = 0LL;
  v6 = &v14;
  if ( v4 >= 0 )
    v5 = v18;
  v14 = v5;
  if ( (wil::details **)((char *)this + 6424) != &v14 )
  {
    wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::replace(
      (char *)this + 6424,
      &v14);
    v5 = v14;
  }
  if ( v5 )
    wil::details::delete_wnf_subscription_state(v5, (struct wil::details::wnf_subscription_state_base *)v6);
  if ( v22 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(), wil::details **))(*v22)[3])(v22, v6);
  Recipient[1] = 0LL;
  RegistrationHandle = 0LL;
  Recipient[0] = CComposition::s_PowerNotification;
  v17 = 1;
  v15 = (char *)this + 6432;
  v7 = PowerSettingRegisterNotification(&GUID_LOW_POWER_EPOCH, 2u, Recipient, &RegistrationHandle);
  v8 = v7;
  if ( v7 > 0 )
    v8 = (unsigned __int16)v7 | 0x80070000;
  if ( v17 )
    wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      v15,
      RegistrationHandle);
  if ( v8 < 0 )
  {
    v9 = 2803LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\composition.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  RegistrationHandle = 0LL;
  v15 = (char *)this + 6440;
  v17 = 1;
  SystemMetrics = GetSystemMetrics(6144);
  v12 = &GUID_SESSION_DISPLAY_STATUS;
  if ( !SystemMetrics )
    v12 = &GUID_CONSOLE_DISPLAY_STATE;
  v13 = PowerSettingRegisterNotification(v12, 2u, Recipient, &RegistrationHandle);
  v8 = v13;
  if ( v13 > 0 )
    v8 = (unsigned __int16)v13 | 0x80070000;
  wil::details::out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>::~out_param_t<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,unsigned long (*)(void *),&unsigned long PowerSettingUnregisterNotification(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>>>(&v15);
  if ( v8 < 0 )
  {
    v9 = 2810LL;
    goto LABEL_15;
  }
  return 0LL;
}
