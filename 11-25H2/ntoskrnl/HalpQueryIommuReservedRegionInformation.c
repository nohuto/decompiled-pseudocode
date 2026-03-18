/*
 * XREFs of HalpQueryIommuReservedRegionInformation @ 0x1406F3394
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B5BC60 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpIommuFreeDeviceId @ 0x14054F900 (HalpIommuFreeDeviceId.c)
 *     HalpIommuGetDeviceId @ 0x14054F980 (HalpIommuGetDeviceId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuLocateFromDevice @ 0x1406F32C0 (HalpIommuLocateFromDevice.c)
 */

__int64 __fastcall HalpQueryIommuReservedRegionInformation(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  int DeviceId; // ebx
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  ULONG_PTR *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 < 0x10 )
    return 3221225485LL;
  v4 = *(_QWORD *)a1;
  v6 = 0LL;
  v7 = 0LL;
  DeviceId = HalpIommuGetDeviceId(v4, &v6);
  if ( DeviceId >= 0 )
  {
    DeviceId = HalpIommuLocateFromDevice(v6, &v7);
    if ( DeviceId >= 0 )
    {
      if ( v7 )
      {
        if ( v7[39] )
          *(_BYTE *)(a1 + 8) = guard_dispatch_icall_no_overrides(v6);
        else
          DeviceId = -1073741595;
      }
      else
      {
        DeviceId = -1073741810;
      }
    }
  }
  if ( v6 )
    HalpIommuFreeDeviceId(v6);
  return (unsigned int)DeviceId;
}
