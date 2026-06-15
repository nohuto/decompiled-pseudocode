/*
 * XREFs of ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAAJPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140055798
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSystemEffectsPropertyChangeNotificationsDelegator@@$$QEAPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140016D88 (--$MakeAndInitialize@VCAudioSystemEffectsPropertyChangeNotificationsDelegator@@V1@PEAVCAudioSyst.c)
 * Callees:
 *     ??$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCDeviceOrientationNotificationsHandler@@@Z @ 0x1400556F0 (--$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA-AV-$com_ptr_t@UIWeakRefer.c)
 *     ??$?4UIWeakReference@@Uerr_exception_policy@wil@@X@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@1@@Z @ 0x1400557F0 (--$-4UIWeakReference@@Uerr_exception_policy@wil@@X@-$com_ptr_t@UIWeakReference@@Uerr_returncode_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSystemEffectsPropertyChangeNotificationsDelegator::RuntimeClassInitialize(
        CAudioSystemEffectsPropertyChangeNotificationsDelegator *this,
        struct CAudioSystemEffectsPropertyChangeNotificationsHandler *a2)
{
  _QWORD *v3; // rax
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a2;
  try
  {
    v3 = wil::com_weak_query<CDeviceOrientationNotificationsHandler *>(&v8, &v7);
    wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::operator=<IWeakReference,wil::err_exception_policy,void>(
      (char *)this + 16,
      v3);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD,
                           (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiosystemeffectspropertychangenotifi"
                                         "cationshandler.cpp",
                           v4);
  }
  return result;
}
