/*
 * XREFs of KcsanMarkAddressIgnored @ 0x14049F1A0
 * Callers:
 *     MiAllocateSlabEntry @ 0x14049F108 (MiAllocateSlabEntry.c)
 *     MiInitializeDecayPfns @ 0x140C5E468 (MiInitializeDecayPfns.c)
 * Callees:
 *     KasanTrackAddress @ 0x14044E740 (KasanTrackAddress.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void __fastcall KcsanMarkAddressIgnored(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  int v4; // eax
  int v5; // edx
  size_t v6; // rdi

  if ( KcsaniEnabled )
  {
    v4 = KasanTrackAddress(BugCheckParameter3, BugCheckParameter4, 0LL);
    if ( v4 < 0 )
      KeBugCheckEx(0x1F1u, 4uLL, 5uLL, v4, 2uLL);
    if ( byte_140FCECA8 )
    {
      if ( BugCheckParameter3 < 0xFFFF800000000000uLL )
        KeBugCheckEx(0x1F1u, 2uLL, 1uLL, BugCheckParameter3, 0LL);
      if ( (BugCheckParameter3 & 7) != 0 )
        KeBugCheckEx(0x1F1u, 2uLL, 2uLL, BugCheckParameter3, 8uLL);
      if ( BugCheckParameter3 + BugCheckParameter4 < BugCheckParameter3 )
        KeBugCheckEx(0x1F1u, 2uLL, 3uLL, BugCheckParameter3, BugCheckParameter4);
      v6 = (BugCheckParameter4 - (((_BYTE)BugCheckParameter4 - 1) & 7) + 7) >> 3;
      if ( v6 )
      {
        LOBYTE(v5) = 8;
        memset_0((void *)(KasaniShadow + ((BugCheckParameter3 + 0x800000000000LL) >> 3)), v5, v6);
      }
    }
  }
}
