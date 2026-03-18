/*
 * XREFs of MiCreateRetpolineBitmap @ 0x140C444D8
 * Callers:
 *     MiInitializeRetpoline @ 0x140C44604 (MiInitializeRetpoline.c)
 * Callees:
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14032A200 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x14066DC0C (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiCreateRetpolineBitmap(__int64 *a1)
{
  __int64 v2; // rdi

  v2 = MiReservePtes((__int64)&qword_140E37328, 0x10000u);
  if ( !v2 )
    return 3221225495LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap((__int64)&qword_140E2D518, v2 << 25 >> 16, 0x80000000LL, 7) )
  {
    MiReleasePtes((__int64)&qword_140E37328, (unsigned __int64 *)v2, 0x10000u);
    return 3221225495LL;
  }
  *a1 = v2 << 25 >> 16;
  return 0LL;
}
