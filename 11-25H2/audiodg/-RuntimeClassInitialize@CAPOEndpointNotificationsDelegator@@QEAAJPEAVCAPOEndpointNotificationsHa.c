/*
 * XREFs of ?RuntimeClassInitialize@CAPOEndpointNotificationsDelegator@@QEAAJPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140055768
 * Callers:
 *     ??$MakeAndInitialize@VCAPOEndpointNotificationsDelegator@@V1@PEAVCAPOEndpointNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAPOEndpointNotificationsDelegator@@$$QEAPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x14004CB18 (--$MakeAndInitialize@VCAPOEndpointNotificationsDelegator@@V1@PEAVCAPOEndpointNotificationsHandle.c)
 * Callees:
 *     ??$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCDeviceOrientationNotificationsHandler@@@Z @ 0x1400557C0 (--$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA-AV-$com_ptr_t@UIWeakRefer.c)
 *     ??$?4UIWeakReference@@Uerr_exception_policy@wil@@X@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@1@@Z @ 0x1400558C0 (--$-4UIWeakReference@@Uerr_exception_policy@wil@@X@-$com_ptr_t@UIWeakReference@@Uerr_returncode_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAPOEndpointNotificationsDelegator::RuntimeClassInitialize(
        CAPOEndpointNotificationsDelegator *this,
        struct CAPOEndpointNotificationsHandler *a2)
{
  __int64 v3; // rax
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+18h]

  try
  {
    v3 = wil::com_weak_query<CDeviceOrientationNotificationsHandler *>();
    wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::operator=<IWeakReference,wil::err_exception_policy,void>(
      (char *)this + 16,
      v3);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xF,
                           (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpointnotificationshandler.cpp",
                           v4);
  }
  return result;
}
