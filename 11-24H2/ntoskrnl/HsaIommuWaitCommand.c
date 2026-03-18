/*
 * XREFs of HsaIommuWaitCommand @ 0x140446368
 * Callers:
 *     HsaFlushTbInternal @ 0x1404460A8 (HsaFlushTbInternal.c)
 *     HsaFlushDeviceTbOnly @ 0x140572BF0 (HsaFlushDeviceTbOnly.c)
 *     HsaInvalidateDTE @ 0x140573364 (HsaInvalidateDTE.c)
 *     HsaInvalidateRemappingTableEntries @ 0x1405733B4 (HsaInvalidateRemappingTableEntries.c)
 * Callees:
 *     HsaIommuSendCommand @ 0x14044639C (HsaIommuSendCommand.c)
 */

__int64 __fastcall HsaIommuWaitCommand(__int64 a1, unsigned int a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = 0LL;
  v3[0] = 0x1000000000000000LL;
  return HsaIommuSendCommand(a1, v3, a2);
}
