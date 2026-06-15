/*
 * XREFs of ?RegisterForEnvironmentalStateChangedNotifications@CAPOEnvironmentStateChangedNotificationsHandler@@AEAAJXZ @ 0x14005FDDC
 * Callers:
 *     ?AddNotificationClient@CAPOEnvironmentStateChangedNotificationsHandler@@QEAAJPEAVCAPOProcessingHostObject@@@Z @ 0x14005FAFC (-AddNotificationClient@CAPOEnvironmentStateChangedNotificationsHandler@@QEAAJPEAVCAPOProcessingH.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000ABF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCDeviceOrientationNotificationsHandler@@@Z @ 0x1400557C0 (--$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA-AV-$com_ptr_t@UIWeakRefer.c)
 *     ??$?4UIWeakReference@@Uerr_exception_policy@wil@@X@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@1@@Z @ 0x1400558C0 (--$-4UIWeakReference@@Uerr_exception_policy@wil@@X@-$com_ptr_t@UIWeakReference@@Uerr_returncode_.c)
 *     __security_check_cookie @ 0x140058DE0 (__security_check_cookie.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x14005C320 (--1-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@.c)
 *     ??4?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x14005C440 (--4-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUwnf_subscription_state_base@details@w.c)
 *     wil::details::make_wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_ @ 0x14005F76C (wil--details--make_wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler--Regi.c)
 *     wistd::function_void___cdecl(_CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_const_&)_::_function_void___cdecl(_CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_const_&)_ @ 0x14005F93C (wistd--function_void___cdecl(_CAPOEnvironmentStateChangedNotificationsHandler--RegisterForEnviro.c)
 */

__int64 __fastcall CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications(
        CAPOEnvironmentStateChangedNotificationsHandler *this)
{
  wil::details **v1; // rdi
  __int64 *v3; // rax
  __int64 v4; // rcx
  int v5; // r8d
  int v6; // eax
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  struct wil::details::wnf_subscription_state_base *v8; // rdx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-39h] BYREF
  __int64 v11; // [rsp+28h] [rbp-31h] BYREF
  _BYTE v12[8]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v13[14]; // [rsp+38h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v1 = (wil::details **)((char *)this + 88);
  if ( *((_QWORD *)this + 11) )
    return 0LL;
  v10 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))this;
  v3 = wil::com_weak_query<CDeviceOrientationNotificationsHandler *>(&v11, &v10);
  wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::operator=<IWeakReference,wil::err_exception_policy,void>(
    (__int64 *)this + 14,
    v3);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v11);
  v10 = 0LL;
  v13[0] = off_14009EDB0;
  v13[1] = this;
  v13[13] = v13;
  v6 = wil::details::make_wnf_subscription_state__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_(
         v4,
         (__int64)v12,
         v5,
         &v10);
  v7 = 0LL;
  if ( v6 >= 0 )
    v7 = v10;
  v10 = v7;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>>::operator=(
    v1,
    (wil::details **)&v10);
  wil::details::unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wil::details::wnf_subscription_state_base *,void (*)(wil::details::wnf_subscription_state_base *),&void wil::details::delete_wnf_subscription_state(wil::details::wnf_subscription_state_base *),wistd::integral_constant<unsigned __int64,2>,wil::details::wnf_subscription_state_base *,wil::details::wnf_subscription_state_base *,0,std::nullptr_t>>(
    (wil::details **)&v10,
    v8);
  wistd::function_void___cdecl__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_const____::_function_void___cdecl__CAPOEnvironmentStateChangedNotificationsHandler::RegisterForEnvironmentalStateChangedNotifications_::_2_::WnfPayload4k_const____((__int64)v12);
  if ( *v1 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\apoenvironmentnotificationshandler.cpp",
    (const char *)0x8007000ELL);
  return 2147942414LL;
}
