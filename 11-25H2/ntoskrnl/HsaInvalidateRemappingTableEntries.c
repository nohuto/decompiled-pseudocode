/*
 * XREFs of HsaInvalidateRemappingTableEntries @ 0x1405700B4
 * Callers:
 *     HsaInvalidateRemappingTableEntry @ 0x140570110 (HsaInvalidateRemappingTableEntry.c)
 *     HsaUpdateRemappingDestination @ 0x140570730 (HsaUpdateRemappingDestination.c)
 *     HsaUpdateRemappingTableInDeviceTableEntry @ 0x140570B5C (HsaUpdateRemappingTableInDeviceTableEntry.c)
 * Callees:
 *     HsaIommuWaitCommand @ 0x1404491E8 (HsaIommuWaitCommand.c)
 *     HsaIommuSendCommand @ 0x14044921C (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaInvalidateRemappingTableEntries(unsigned __int64 *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[1] = 0LL;
  v6[0] = 0x8000000000000000uLL;
  HsaIommuSendCommand(a1, v6, a3);
  return HsaIommuWaitCommand((__int64)a1, a3);
}
