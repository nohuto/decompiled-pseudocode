/*
 * XREFs of HalpIommuDeviceGetDomainTypes @ 0x14054B68C
 * Callers:
 *     HalpIommuInvokeInterfaceStateChangeCallbacks @ 0x1404D3740 (HalpIommuInvokeInterfaceStateChangeCallbacks.c)
 *     IommuDeviceQueryDomainTypes @ 0x140564070 (IommuDeviceQueryDomainTypes.c)
 *     IommuDomainAttachDeviceEx @ 0x140564290 (IommuDomainAttachDeviceEx.c)
 *     IommuRegisterInterfaceStateChangeCallback @ 0x140564930 (IommuRegisterInterfaceStateChangeCallback.c)
 *     IommuDomainAttachPasidDevice @ 0x140701780 (IommuDomainAttachPasidDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IoGetDevicePropertyData @ 0x1409C0320 (IoGetDevicePropertyData.c)
 */

__int64 __fastcall HalpIommuDeviceGetDomainTypes(__int64 a1)
{
  struct _DEVICE_OBJECT *v2; // rcx
  unsigned int v3; // ebx
  NTSTATUS DevicePropertyData; // eax
  char v5; // di
  _DWORD *v6; // rcx
  int v8; // edx
  ULONG v9; // [rsp+40h] [rbp-30h] BYREF
  ULONG v10; // [rsp+44h] [rbp-2Ch] BYREF
  int v11; // [rsp+48h] [rbp-28h] BYREF
  __int128 v12; // [rsp+50h] [rbp-20h] BYREF

  v9 = 0;
  v2 = *(struct _DEVICE_OBJECT **)(a1 + 8);
  v3 = 0;
  v10 = 0;
  v11 = 2;
  if ( v2 )
  {
    DevicePropertyData = IoGetDevicePropertyData(v2, &DEVPKEY_Device_IommuDomainPolicy, 0, 0, 4u, &v11, &v10, &v9);
    if ( DevicePropertyData < 0 )
    {
      if ( DevicePropertyData == -1073741772 )
        v3 = 2;
    }
    else if ( v9 == 7 && v10 == 4 )
    {
      if ( v11 )
      {
        if ( v11 != 1 )
          return v3;
      }
      else
      {
        v3 = 2;
      }
    }
  }
  v5 = *(_BYTE *)(a1 + 274);
  if ( !HalpHvIommu )
  {
    v8 = v5 != 0 ? 128 : 256;
    if ( (v8 & *(_DWORD *)(*(_QWORD *)(a1 + 32) + 472LL)) != v8 )
      return v3;
    if ( !v5 )
      goto LABEL_20;
    goto LABEL_26;
  }
  v6 = *(_DWORD **)a1;
  v12 = 0LL;
  if ( v5 )
  {
    if ( !HalpHvParaVirtIommuDomain )
      return v3;
  }
  else if ( !HalpHvIommuDeviceDomain )
  {
    return v3;
  }
  if ( *v6 == 1 && (int)guard_dispatch_icall_no_overrides(v6, &v12) >= 0 )
  {
    if ( !v5 )
    {
      if ( (v12 & 0x10) != 0 )
      {
LABEL_20:
        v3 |= 1u;
        return v3;
      }
      return v3;
    }
    if ( (v12 & 0x20) == 0 )
      return v3;
LABEL_26:
    v3 |= 8u;
  }
  return v3;
}
