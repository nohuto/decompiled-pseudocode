/*
 * XREFs of IommuDeviceCreate @ 0x1407014F0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuCreateDevice @ 0x14054AEFC (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x14054B4BC (HalpIommuDeleteDevice.c)
 *     HalpIommuFreeDeviceId @ 0x14054FB40 (HalpIommuFreeDeviceId.c)
 *     IommupCreateDeviceId @ 0x140564FBC (IommupCreateDeviceId.c)
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
