/*
 * XREFs of IvtInvalidateRemappingTableEntries @ 0x140447210
 * Callers:
 *     IvtInvalidateRemappingTableEntry @ 0x1404471F0 (IvtInvalidateRemappingTableEntry.c)
 *     IvtUpdateRemappingDestination @ 0x14056E290 (IvtUpdateRemappingDestination.c)
 *     IvtInitializeIommu @ 0x140B41B90 (IvtInitializeIommu.c)
 * Callees:
 *     IvtIommuWaitCommand @ 0x140447284 (IvtIommuWaitCommand.c)
 *     IvtIommuSendCommand @ 0x1404473D4 (IvtIommuSendCommand.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall IvtInvalidateRemappingTableEntries(__int64 a1, _DWORD *a2)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  v4[1] = 0LL;
  v4[0] = 4LL;
  if ( a2 )
    v4[0] = ((unsigned __int64)(unsigned __int16)*a2 << 32) | 0x14;
  IvtIommuSendCommand(a1, v4, 0LL);
  return IvtIommuWaitCommand(a1, 0LL, 0LL);
}
