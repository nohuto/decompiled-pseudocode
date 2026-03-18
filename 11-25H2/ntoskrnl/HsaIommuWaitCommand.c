/*
 * XREFs of HsaIommuWaitCommand @ 0x1404491E8
 * Callers:
 *     HsaFlushTbInternal @ 0x140448F28 (HsaFlushTbInternal.c)
 *     HsaFlushDeviceTbOnly @ 0x14056F8F0 (HsaFlushDeviceTbOnly.c)
 *     HsaInvalidateDTE @ 0x140570064 (HsaInvalidateDTE.c)
 *     HsaInvalidateRemappingTableEntries @ 0x1405700B4 (HsaInvalidateRemappingTableEntries.c)
 * Callees:
 *     HsaIommuSendCommand @ 0x14044921C (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaIommuWaitCommand(__int64 a1, unsigned int a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 0LL;
  v3[0] = 0x1000000000000000LL;
  return HsaIommuSendCommand(a1, v3, a2);
}
