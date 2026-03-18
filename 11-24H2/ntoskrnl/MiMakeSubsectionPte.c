/*
 * XREFs of MiMakeSubsectionPte @ 0x14022929C
 * Callers:
 *     MiBuildImageControlArea @ 0x1409451C0 (MiBuildImageControlArea.c)
 *     MiParseImageSectionHeaders @ 0x1409459C0 (MiParseImageSectionHeaders.c)
 *     MiInitializePrototypePtes @ 0x140946874 (MiInitializePrototypePtes.c)
 *     MiAllocatePerSessionProtos @ 0x140A4FFC0 (MiAllocatePerSessionProtos.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14022A3B0 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiMakeSubsectionPte(__int64 a1)
{
  return MiSwizzleInvalidPte(16 * (*(_DWORD *)(a1 + 32) & 0x3E | (unsigned __int64)(a1 << 12) | 0x40));
}
