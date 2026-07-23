/*
 * XREFs of HsaInvalidateRemappingTableEntries @ 0x140570844
 * Callers:
 *     HsaInvalidateRemappingTableEntry @ 0x1405708A0 (HsaInvalidateRemappingTableEntry.c)
 *     HsaUpdateRemappingDestination @ 0x140570EC0 (HsaUpdateRemappingDestination.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x1405712EC (HsaUpdateRemappingTableInDeviceTableEntry.c)
 * Callees:
 *     HsaIommuWaitCommand @ 0x14043E718 (HsaIommuWaitCommand.c)
 *     HsaIommuSendCommand @ 0x14043E74C (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaInvalidateRemappingTableEntries(__int64 *a1, __int64 a2, unsigned int a3)
{
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[1] = 0LL;
  v6[0] = 0x8000000000000000uLL;
  HsaIommuSendCommand(a1, v6, a3);
  return HsaIommuWaitCommand((__int64)a1, a3);
}
