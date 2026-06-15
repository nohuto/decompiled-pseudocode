/*
 * XREFs of ??$?4UIWeakReference@@Uerr_exception_policy@wil@@X@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV?$com_ptr_t@UIWeakReference@@Uerr_exception_policy@wil@@@1@@Z @ 0x1400557F0
 * Callers:
 *     ?RuntimeClassInitialize@CAPOEndpointNotificationsDelegator@@QEAAJPEAVCAPOEndpointNotificationsHandler@@@Z @ 0x140055698 (-RuntimeClassInitialize@CAPOEndpointNotificationsDelegator@@QEAAJPEAVCAPOEndpointNotificationsHa.c)
 *     ?RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAAJPEAVCAudioSystemEffectsPropertyChangeNotificationsHandler@@@Z @ 0x140055798 (-RuntimeClassInitialize@CAudioSystemEffectsPropertyChangeNotificationsDelegator@@QEAAJPEAVCAudio.c)
 *     ?RegisterDeviceOrientationNotification@CDeviceOrientationNotificationsHandler@@AEAAJXZ @ 0x14005D9A4 (-RegisterDeviceOrientationNotification@CDeviceOrientationNotificationsHandler@@AEAAJXZ.c)
 *     ?RegisterForEnvironmentalStateChangedNotifications@CAPOEnvironmentStateChangedNotificationsHandler@@AEAAJXZ @ 0x14005FCEC (-RegisterForEnvironmentalStateChangedNotifications@CAPOEnvironmentStateChangedNotificationsHandl.c)
 *     ?RuntimeClassInitialize@CMicBoostNotificationsDelegator@@QEAAJPEAVCMicBoostNotificationsHandler@@@Z @ 0x140060780 (-RuntimeClassInitialize@CMicBoostNotificationsDelegator@@QEAAJPEAVCMicBoostNotificationsHandler@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::operator=<IWeakReference,wil::err_exception_policy,void>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
