/*
 * XREFs of ?RegisterDeviceEventHandler@Details@PnpApiWrapper@@YAJAEAU_CM_NOTIFY_FILTER@@P6AXW4DeviceEventId@2@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x1800E6864
 * Callers:
 *     ?RegisterDeviceHandleNotification@PnpApiWrapper@@YAJPEAXP6AXW4DeviceEventId@1@PEAUHSTRING__@@0@Z0AEAPEAX@Z @ 0x1800E6968 (-RegisterDeviceHandleNotification@PnpApiWrapper@@YAJPEAXP6AXW4DeviceEventId@1@PEAUHSTRING__@@0@Z.c)
 *     ?RegisterDeviceInstanceNotification@PnpApiWrapper@@YAJPEAUHSTRING__@@P6AXW4DeviceEventId@1@0PEAX@Z2AEAPEAX@Z @ 0x1800E6A00 (-RegisterDeviceInstanceNotification@PnpApiWrapper@@YAJPEAUHSTRING__@@P6AXW4DeviceEventId@1@0PEAX.c)
 *     ?RegisterDeviceInterfaceNotification@PnpApiWrapper@@YAJAEBU_GUID@@P6AXW4DeviceEventId@1@PEAUHSTRING__@@PEAX@Z3AEAPEAX@Z @ 0x1800E6AF0 (-RegisterDeviceInterfaceNotification@PnpApiWrapper@@YAJAEBU_GUID@@P6AXW4DeviceEventId@1@PEAUHSTR.c)
 * Callees:
 *     ?ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z @ 0x1800349D8 (-ConfigretToHresult@Details@PnpApiWrapper@@YAJK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E848 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$unique_ptr@UDeviceNotificationRegistrationData@Details@PnpApiWrapper@@U?$default_delete@UDeviceNotificationRegistrationData@Details@PnpApiWrapper@@@std@@@std@@QEAA@XZ @ 0x1800E6794 (--1-$unique_ptr@UDeviceNotificationRegistrationData@Details@PnpApiWrapper@@U-$default_delete@UDe.c)
 */

__int64 __fastcall PnpApiWrapper::Details::RegisterDeviceEventHandler(
        PnpApiWrapper::Details *this,
        struct _CM_NOTIFY_FILTER *a2,
        void (__high *a3)(enum PnpApiWrapper::DeviceEventId, HSTRING, void *),
        _QWORD *a4)
{
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  unsigned int v9; // eax
  int v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // esi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v15; // [rsp+38h] [rbp+10h] BYREF

  v15 = a2;
  *a4 = 0LL;
  v7 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  if ( v7 )
  {
    v15 = v7;
    *(_OWORD *)v7 = 0LL;
    v7[1] = PnpDeviceWatcher::OnPnpNotification;
    v7[2] = a3;
    v9 = CM_Register_Notification(this, v7, PnpApiWrapper::Details::OnDeviceNotification, v7);
    v10 = PnpApiWrapper::Details::ConfigretToHresult((PnpApiWrapper::Details *)v9);
    v11 = -2147023728;
    v12 = v10;
    if ( v10 != -2147023728 )
    {
      if ( v10 >= 0 )
      {
        v15 = 0LL;
        v11 = 0;
        *a4 = v8;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x297,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
          (const char *)(unsigned int)v10);
        v11 = v12;
      }
    }
  }
  else
  {
    v15 = 0LL;
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpapiwrapper.cpp",
      (const char *)0x8007000ELL);
  }
  std::unique_ptr<PnpApiWrapper::Details::DeviceNotificationRegistrationData>::~unique_ptr<PnpApiWrapper::Details::DeviceNotificationRegistrationData>(&v15);
  return v11;
}
