/*
 * XREFs of MiMakeSubsectionPte @ 0x140471750
 * Callers:
 *     MiInitializePrototypePtes @ 0x14093A344 (MiInitializePrototypePtes.c)
 *     MiBuildImageControlArea @ 0x140940EBC (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x1409429D8 (MiParseImageSectionHeaders.c)
 *     MiAllocatePerSessionProtos @ 0x140A58B44 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14021A0C0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * (*(_DWORD *)(a1 + 32) & 0x3E | (unsigned __int64)(a1 << 12) | 0x40));
}
