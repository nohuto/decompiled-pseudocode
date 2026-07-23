/*
 * XREFs of MiMakeSubsectionPte @ 0x1402FC49C
 * Callers:
 *     MiInitializePrototypePtes @ 0x140989EA4 (MiInitializePrototypePtes.c)
 *     MiBuildImageControlArea @ 0x14098F030 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x14098F6FC (MiParseImageSectionHeaders.c)
 *     MiAllocatePerSessionProtos @ 0x140A46D70 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1, __int64 a2)
{
  return MiSwizzleInvalidPte(16 * (*(_DWORD *)(a1 + 32) & 0x3E | (unsigned __int64)(a1 << 12) | 0x40), a2);
}
