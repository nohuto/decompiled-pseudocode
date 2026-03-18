/*
 * XREFs of KasanTrackAddress @ 0x140414470
 * Callers:
 *     MiMapContiguousMemory @ 0x140413F8C (MiMapContiguousMemory.c)
 *     KcsanMarkAddressIgnored @ 0x1404A4140 (KcsanMarkAddressIgnored.c)
 *     KasanDriverLoadImageInternal @ 0x1404B82E0 (KasanDriverLoadImageInternal.c)
 *     MmAllocateIsrStack @ 0x1407E6CD8 (MmAllocateIsrStack.c)
 *     KasanInitSystem @ 0x140C15600 (KasanInitSystem.c)
 *     MiInitializeSharedUserData @ 0x140C3D30C (MiInitializeSharedUserData.c)
 *     MiInitializeKasan @ 0x140C3E7F4 (MiInitializeKasan.c)
 * Callees:
 *     MmKasanCommitRegion @ 0x14066E2FC (MmKasanCommitRegion.c)
 */

__int64 __fastcall KasanTrackAddress(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  if ( !byte_140FCDC68 || !a2 )
    return 0LL;
  if ( a1 < 0xFFFF800000000000uLL )
    return 3221225711LL;
  if ( a1 + a2 < a1 )
    return 3221225621LL;
  if ( a3 <= (unsigned __int16)KeNumberNodes )
    return MmKasanCommitRegion(
             KasaniShadow + ((a1 + 0x800000000000LL) >> 3),
             KasaniShadow + ((a1 - (((_BYTE)a2 - 1) & 7) + 0x800000000006LL + a2) >> 3));
  return 3221225713LL;
}
