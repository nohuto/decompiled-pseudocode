/*
 * XREFs of ??1?$unique_ptr@UDeviceNotificationRegistrationData@Details@PnpApiWrapper@@U?$default_delete@UDeviceNotificationRegistrationData@Details@PnpApiWrapper@@@std@@@std@@QEAA@XZ @ 0x1800E6794
 * Callers:
 *     ?RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId@2@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x1800E6864 (-RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::unique_ptr<PnpApiWrapper::Details::DeviceNotificationRegistrationData>::~unique_ptr<PnpApiWrapper::Details::DeviceNotificationRegistrationData>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x18);
}
