/*
 * XREFs of ?RegisterDeviceInterfaceNotification@PnpApiWrapper@@YAJAEBU_GUID@@P6AXW4DeviceEventId@1@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x1800E6AF0
 * Callers:
 *     ?Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z @ 0x18008D4BC (-Initialize@PnpDeviceWatcher@@QEAAJPEAVLampArrayRawInputProvider@@@Z.c)
 * Callees:
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId@2@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x1800E6864 (-RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId.c)
 */

__int64 __fastcall PnpApiWrapper::RegisterDeviceInterfaceNotification(
        PnpApiWrapper *this,
        const struct _GUID *a2,
        void (__high *a3)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *),
        _QWORD *a4)
{
  struct _CM_NOTIFY_FILTER *v6; // rdx
  __int64 v7; // rcx
  _DWORD v9[4]; // [rsp+20h] [rbp-1B8h] BYREF
  __int128 v10; // [rsp+30h] [rbp-1A8h]

  memset_0(v9, 0, 0x1A0uLL);
  v7 = 0x11CFF16F4D1E55B2LL - *(_QWORD *)&GUID_NULL.Data1;
  v9[0] = 416;
  if ( *(_QWORD *)&GUID_NULL.Data1 == 0x11CFF16F4D1E55B2LL )
    v7 = 0x300000111100CB88LL - *(_QWORD *)GUID_NULL.Data4;
  v9[2] = 0;
  v9[1] = v7 == 0;
  v10 = xmmword_180203D98;
  return PnpApiWrapper::Details::RegisterDeviceEventHandler((PnpApiWrapper::Details *)v9, v6, a3, a4);
}
