/*
 * XREFs of IommuDeviceCreate @ 0x140703920
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuCreateDevice @ 0x14054D63C (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054DC10 (HalpIommuDeleteDevice.c)
 *     HalpIommuFreeDeviceId @ 0x140552200 (HalpIommuFreeDeviceId.c)
 *     IommupCreateDeviceId @ 0x140567530 (IommupCreateDeviceId.c)
 */

__int64 __fastcall IommuDeviceCreate(void *a1, __int64 a2, _QWORD *a3)
{
  int DeviceId; // edi
  void *v8; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v9; // [rsp+68h] [rbp+20h] BYREF

  *a3 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  DeviceId = IommupCreateDeviceId((__int64)a1, a2, (__int64 *)&v8);
  if ( DeviceId >= 0 )
  {
    DeviceId = HalpIommuCreateDevice(v8, a1, a2, 0, (__int64 *)&v9);
    if ( DeviceId >= 0 )
    {
      *a3 = v9;
      return (unsigned int)DeviceId;
    }
    if ( v9 )
      HalpIommuDeleteDevice(v9);
  }
  if ( v8 )
    HalpIommuFreeDeviceId((__int64)v8);
  return (unsigned int)DeviceId;
}
