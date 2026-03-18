/*
 * XREFs of MiCreateRetpolineBitmap @ 0x140C557C0
 * Callers:
 *     MiInitializeRetpoline @ 0x140C558EC (MiInitializeRetpoline.c)
 * Callees:
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     MiReservePtes @ 0x14028FF10 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x1406794B8 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiCreateRetpolineBitmap(__int64 *a1)
{
  __int64 v2; // rdi

  v2 = MiReservePtes((__int64)&qword_140E37568, 0x10000u);
  if ( !v2 )
    return 3221225495LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap((__int64)&qword_140E2D758, v2 << 25 >> 16, 0x80000000LL, 7) )
  {
    MiReleasePtes((__int64)&qword_140E37568, (_QWORD *)v2, 0x10000u);
    return 3221225495LL;
  }
  *a1 = v2 << 25 >> 16;
  return 0LL;
}
