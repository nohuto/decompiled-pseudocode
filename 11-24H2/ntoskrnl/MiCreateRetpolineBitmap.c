/*
 * XREFs of MiCreateRetpolineBitmap @ 0x140C57950
 * Callers:
 *     MiInitializeRetpoline @ 0x140C57A7C (MiInitializeRetpoline.c)
 * Callees:
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14029FB10 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiCreateRetpolineBitmap(__int64 *a1)
{
  __int64 v2; // rdi

  v2 = MiReservePtes((__int64)&qword_140E376A8, 0x10000u);
  if ( !v2 )
    return 3221225495LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap((__int64)&qword_140E2D898, v2 << 25 >> 16, 0x80000000LL, 7) )
  {
    MiReleasePtes((__int64)&qword_140E376A8, (_QWORD *)v2, 0x10000u);
    return 3221225495LL;
  }
  *a1 = v2 << 25 >> 16;
  return 0LL;
}
