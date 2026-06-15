/*
 * XREFs of ?RuntimeClassInitialize@CMicBoostNotificationsDelegator@@QEAAJPEAVCMicBoostNotificationsHandler@@@Z @ 0x140060870
 * Callers:
 *     ??$MakeAndInitialize@VCMicBoostNotificationsDelegator@@V1@PEAVCMicBoostNotificationsHandler@@@Details@WRL@Microsoft@@YAJPEAPEAVCMicBoostNotificationsDelegator@@$$QEAPEAVCMicBoostNotificationsHandler@@@Z @ 0x1400600AC (--$MakeAndInitialize@VCMicBoostNotificationsDelegator@@V1@PEAVCMicBoostNotificationsHandler@@@De.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006C80 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@0@$$QEAPEAVCDeviceOrientationNotificationsHandler@@@Z @ 0x1400557C0 (--$com_weak_query@PEAVCDeviceOrientationNotificationsHandler@@@wil@@YA-AV-$com_ptr_t@UIWeakRefer.c)
 *     ??$?4UIWeakReference@@Uerr_exception_policy@wil@@X@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@1@@Z @ 0x1400558C0 (--$-4UIWeakReference@@Uerr_exception_policy@wil@@X@-$com_ptr_t@UIWeakReference@@Uerr_returncode_.c)
 */

__int64 __fastcall CMicBoostNotificationsDelegator::RuntimeClassInitialize(
        CMicBoostNotificationsDelegator *this,
        struct CMicBoostNotificationsHandler *a2)
{
  __int64 *v3; // rax
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
      (__int64 *)this + 2,
      v3);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v8);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3D,
                           (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
                           v4);
  }
  return result;
}
