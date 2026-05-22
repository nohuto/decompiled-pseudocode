/*
 * XREFs of ?AddInterface@PnpDevice@@AEAAJPEAUHSTRING__@@@Z @ 0x1800E3C50
 * Callers:
 *     ?ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z @ 0x18006084C (-ProcessDeviceNotifications@PnpDeviceWatcher@@QEAAJPEAK@Z.c)
 * Callees:
 *     ?GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID@@@Z @ 0x180037AE0 (-GetDeviceGuidProperty@Details@PnpApiWrapper@@YAJP6AKPEAXPEBU_DEVPROPKEY@@PEAK0AEAI@Z01AEAU_GUID.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800695B4 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008EFF4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x1800957FC (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall PnpDevice::AddInterface(PnpDevice *this, HSTRING a2)
{
  int v3; // eax
  struct _GUID *v4; // rdx
  int v5; // eax
  __int64 result; // rax
  int v7; // eax
  unsigned int v8; // ebx
  struct _GUID *v9; // [rsp+20h] [rbp-38h] BYREF
  HSTRING v10; // [rsp+28h] [rbp-30h] BYREF
  struct _DEVPROPKEY v11; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v10 = a2;
  v3 = std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)this + 31);
  if ( !v3 )
    return 2147549183LL;
  v5 = v3 - 1;
  if ( v5 )
  {
    if ( (unsigned int)(v5 - 1) <= 1 )
      return 1LL;
    return 2147549183LL;
  }
  v9 = v4;
  v11.fmtid = 0LL;
  result = PnpApiWrapper::Details::GetDeviceGuidProperty(
             (PnpApiWrapper::Details *)PnpApiWrapper::Adapters::GetDeviceInterfaceProperty,
             (unsigned int (*)(void *, const struct _DEVPROPKEY *, unsigned int *, void *, unsigned int *))&v9,
             (void *)&DEVPKEY_DeviceInterface_ClassGuid,
             &v11);
  if ( (int)result < 0 )
    return result;
  if ( !*((_QWORD *)this + 4) )
  {
    v7 = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 4, &v10);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2EC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\pnpdevice.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    *(DEVPROPGUID *)((char *)this + 72) = v11.fmtid;
  }
  return 0LL;
}
