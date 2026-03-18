/*
 * XREFs of MiDecrementProtoShareCounts @ 0x14066EF34
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x1407E0284 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiUnlockPage @ 0x14032B850 (MiUnlockPage.c)
 *     MiLockPageInline @ 0x14032B8A0 (MiLockPageInline.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 */

void __fastcall MiDecrementProtoShareCounts(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rdi
  unsigned __int8 v4; // bl

  if ( a2 )
  {
    v2 = a2;
    v3 = 48 * a1 - 0x220000000000LL;
    do
    {
      v4 = MiLockPageInline(v3);
      MiDecrementShareCountEx(v3, 0LL);
      MiUnlockPage(v3, v4);
      v3 += 48LL;
      --v2;
    }
    while ( v2 );
  }
}
