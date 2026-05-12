/*
 * XREFs of RaidRegGetDeviceDumpCustomGPLogPage @ 0x1400178C4
 * Callers:
 *     RaidSelectDeviceDumpCollectionMode @ 0x140017F90 (RaidSelectDeviceDumpCollectionMode.c)
 * Callees:
 *     PortRegistryReadDeviceKey @ 0x1401B8954 (PortRegistryReadDeviceKey.c)
 */

__int64 __fastcall RaidRegGetDeviceDumpCustomGPLogPage(__int64 a1, __int64 a2)
{
  struct _UNICODE_STRING v4; // [rsp+30h] [rbp-18h] BYREF
  int KeyHandle; // [rsp+50h] [rbp+8h] BYREF
  __int64 v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = a2;
  KeyHandle = 4;
  v4 = 0LL;
  RtlInitUnicodeString(&v4, L"DeviceDumpVendorGPLogAddress");
  return PortRegistryReadDeviceKey(*(_QWORD *)(a1 + 8), 0, (int)&v4, 4, (__int64)&v6, &KeyHandle);
}
