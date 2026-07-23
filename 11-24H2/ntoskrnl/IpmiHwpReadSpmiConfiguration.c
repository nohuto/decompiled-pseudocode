/*
 * XREFs of IpmiHwpReadSpmiConfiguration @ 0x1406A09C0
 * Callers:
 *     IpmiHwInitializeContext @ 0x1406A078C (IpmiHwInitializeContext.c)
 * Callees:
 *     IpmiHwpParseSpmiTable @ 0x1406A0908 (IpmiHwpParseSpmiTable.c)
 *     ExGetSystemFirmwareTable @ 0x1407B4550 (ExGetSystemFirmwareTable.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IpmiHwpReadSpmiConfiguration(__int64 a1)
{
  void *Pool2; // rdi
  __int64 v2; // rcx
  int SystemFirmwareTable; // ebx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+44h] [rbp+Ch]

  v6 = HIDWORD(a1);
  Pool2 = 0LL;
  v5 = 0;
  SystemFirmwareTable = ExGetSystemFirmwareTable(1094930505LL, 1229803603LL, 0LL, 0LL, &v5);
  if ( SystemFirmwareTable == -1073741789 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL, v5, 0x494D5049u);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    SystemFirmwareTable = ExGetSystemFirmwareTable(1094930505LL, 1229803603LL, Pool2, v5, &v5);
  }
  if ( SystemFirmwareTable >= 0 )
    SystemFirmwareTable = IpmiHwpParseSpmiTable(v2, (__int64)Pool2);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x494D5049u);
  return (unsigned int)SystemFirmwareTable;
}
