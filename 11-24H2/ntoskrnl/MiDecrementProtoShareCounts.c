/*
 * XREFs of MiDecrementProtoShareCounts @ 0x14067B8D4
 * Callers:
 *     MiCreateFileOnlyPfns @ 0x1407F06F4 (MiCreateFileOnlyPfns.c)
 * Callees:
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiLockPageInline @ 0x1402A1150 (MiLockPageInline.c)
 *     MiUnlockPage @ 0x1402A11F0 (MiUnlockPage.c)
 */

void __fastcall MiDecrementProtoShareCounts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int8 v6; // bl
  __int64 v7; // r8
  __int64 v8; // r9

  if ( a2 )
  {
    v4 = a2;
    v5 = 48 * a1 - 0x220000000000LL;
    do
    {
      v6 = MiLockPageInline(v5, a2, a3, a4);
      MiDecrementShareCountEx(v5, 0LL, v7, v8);
      MiUnlockPage(v5, v6);
      v5 += 48LL;
      --v4;
    }
    while ( v4 );
  }
}
