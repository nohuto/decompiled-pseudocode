/*
 * XREFs of KasanTrackAddress @ 0x14044E740
 * Callers:
 *     MiMapContiguousMemory @ 0x14034B0DC (MiMapContiguousMemory.c)
 *     KcsanMarkAddressIgnored @ 0x14049F1A0 (KcsanMarkAddressIgnored.c)
 *     KasanDriverLoadImageInternal @ 0x1404B24C0 (KasanDriverLoadImageInternal.c)
 *     MmAllocateIsrStack @ 0x1407F72DC (MmAllocateIsrStack.c)
 *     KasanInitSystem @ 0x140C286E0 (KasanInitSystem.c)
 *     MiInitializeSharedUserData @ 0x140C50724 (MiInitializeSharedUserData.c)
 *     MiInitializeKasan @ 0x140C51BB4 (MiInitializeKasan.c)
 * Callees:
 *     MmKasanCommitRegion @ 0x14067AD88 (MmKasanCommitRegion.c)
 */

__int64 __fastcall KasanTrackAddress(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  if ( !byte_140FCECA8 || !a2 )
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
