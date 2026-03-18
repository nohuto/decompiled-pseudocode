/*
 * XREFs of KasanTrackAddress @ 0x140459A10
 * Callers:
 *     MiMapContiguousMemory @ 0x1402E9A9C (MiMapContiguousMemory.c)
 *     KcsanMarkAddressIgnored @ 0x1404A4410 (KcsanMarkAddressIgnored.c)
 *     KasanDriverLoadImageInternal @ 0x1404B7B70 (KasanDriverLoadImageInternal.c)
 *     MmAllocateIsrStack @ 0x1407F6B68 (MmAllocateIsrStack.c)
 *     KasanInitSystem @ 0x140C26690 (KasanInitSystem.c)
 *     MiInitializeSharedUserData @ 0x140C4E594 (MiInitializeSharedUserData.c)
 *     MiInitializeKasan @ 0x140C4FA24 (MiInitializeKasan.c)
 * Callees:
 *     MmKasanCommitRegion @ 0x140679BA8 (MmKasanCommitRegion.c)
 */

__int64 __fastcall KasanTrackAddress(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  if ( !byte_140FCDC28 || !a2 )
    return 0LL;
  if ( a1 < 0xFFFF800000000000uLL )
    return 3221225711LL;
  if ( a1 + a2 < a1 )
    return 3221225621LL;
  if ( (unsigned int)a3 <= (unsigned __int16)KeNumberNodes )
    return MmKasanCommitRegion(
             KasaniShadow + ((a1 + 0x800000000000LL) >> 3),
             KasaniShadow + ((a1 - (((_BYTE)a2 - 1) & 7) + 0x800000000006LL + a2) >> 3),
             a3);
  return 3221225713LL;
}
