/*
 * XREFs of HalpIommuDeviceGetDomainTypes @ 0x14054DDE0
 * Callers:
 *     HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x1404D9CC4 (HalpIommuInvokeInterfaceStateChangeCallbacks.c)
 *     IommuDeviceQueryDomainTypes @ 0x140566370 (IommuDeviceQueryDomainTypes.c)
 *     IommuDomainAttachDeviceEx @ 0x140566590 (IommuDomainAttachDeviceEx.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x140566C30 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuRegisterInterfaceStateChangeCallbackLegacy @ 0x140566E30 (IommuRegisterInterfaceStateChangeCallbackLegacy.c)
 *     IommuDomainAttachPasidDevice @ 0x140703BC0 (IommuDomainAttachPasidDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IoGetDevicePropertyData @ 0x140A11F10 (IoGetDevicePropertyData.c)
 */

__int64 __fastcall HalpIommuDeviceGetDomainTypes(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _DEVICE_OBJECT *v5; // rcx
  unsigned int v6; // ebx
  NTSTATUS DevicePropertyData; // eax
  char v8; // di
  _DWORD *v9; // rcx
  int v11; // edx
  ULONG v12; // [rsp+40h] [rbp-30h] BYREF
  ULONG v13; // [rsp+44h] [rbp-2Ch] BYREF
  int v14; // [rsp+48h] [rbp-28h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF

  v12 = 0;
  v5 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v6 = 0;
  v13 = 0;
  v14 = 2;
  if ( v5 )
  {
    DevicePropertyData = IoGetDevicePropertyData(v5, &DEVPKEY_Device_IommuDomainPolicy, 0, 0, 4u, &v14, &v13, &v12);
    if ( DevicePropertyData < 0 )
    {
      if ( DevicePropertyData == -1073741772 )
        v6 = 2;
    }
    else if ( v12 == 7 && v13 == 4 )
    {
      if ( v14 )
      {
        if ( v14 != 1 )
          return v6;
      }
      else
      {
        v6 = 2;
      }
    }
  }
  v8 = *(_BYTE *)(a1 + 274);
  if ( !HalpHvIommu )
  {
    v11 = v8 != 0 ? 128 : 256;
    if ( (v11 & *(_DWORD *)(*(_QWORD *)(a1 + 32) + 472LL)) != v11 )
      return v6;
    if ( !v8 )
      goto LABEL_20;
    goto LABEL_26;
  }
  v9 = *(_DWORD **)a1;
  v15 = 0LL;
  if ( v8 )
  {
    if ( !HalpHvParaVirtIommuDomain )
      return v6;
  }
  else if ( !HalpHvIommuDeviceDomain )
  {
    return v6;
  }
  if ( *v9 == 1 && (int)guard_dispatch_icall_no_overrides(v9, &v15, a3, a4) >= 0 )
  {
    if ( !v8 )
    {
      if ( (v15 & 0x10) != 0 )
      {
LABEL_20:
        v6 |= 1u;
        return v6;
      }
      return v6;
    }
    if ( (v15 & 0x20) == 0 )
      return v6;
LABEL_26:
    v6 |= 8u;
  }
  return v6;
}
