/*
 * XREFs of HsaIommuWaitCommand @ 0x14043E718
 * Callers:
 *     HsaFlushTbInternal @ 0x14043E458 (HsaFlushTbInternal.c)
 *     HsaFlushDeviceTbOnly @ 0x140570080 (HsaFlushDeviceTbOnly.c)
 *     HsaInvalidateDTE @ 0x1405707F4 (HsaInvalidateDTE.c)
 *     HsaInvalidateRemappingTableEntries @ 0x140570844 (HsaInvalidateRemappingTableEntries.c)
 * Callees:
 *     HsaIommuSendCommand @ 0x14043E74C (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaIommuWaitCommand(__int64 a1, unsigned int a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 0LL;
  v3[0] = 0x1000000000000000LL;
  return HsaIommuSendCommand(a1, v3, a2);
}
