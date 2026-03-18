/*
 * XREFs of HalpQueryIommuReservedRegionInformation @ 0x1406FF184
 * Callers:
 *     HaliQuerySystemInformation @ 0x140B6B760 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpIommuFreeDeviceId @ 0x140552200 (HalpIommuFreeDeviceId.c)
 *     HalpIommuGetDeviceId @ 0x140552280 (HalpIommuGetDeviceId.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpIommuLocateFromDevice @ 0x1406FF0B0 (HalpIommuLocateFromDevice.c)
 */

__int64 __fastcall HalpQueryIommuReservedRegionInformation(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  int DeviceId; // ebx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+40h] [rbp+18h] BYREF
  ULONG_PTR *v11; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 < 0x10 )
    return 3221225485LL;
  v4 = *(_QWORD *)a1;
  v10 = 0LL;
  v11 = 0LL;
  DeviceId = HalpIommuGetDeviceId(v4, &v10);
  if ( DeviceId >= 0 )
  {
    DeviceId = HalpIommuLocateFromDevice(v10, &v11, v6);
    if ( DeviceId >= 0 )
    {
      if ( v11 )
      {
        if ( v11[39] )
          *(_BYTE *)(a1 + 8) = guard_dispatch_icall_no_overrides(v10, v7, v8, v9);
        else
          DeviceId = -1073741595;
      }
      else
      {
        DeviceId = -1073741810;
      }
    }
  }
  if ( v10 )
    HalpIommuFreeDeviceId(v10);
  return (unsigned int)DeviceId;
}
