/*
 * XREFs of MinCryptVerifySignedHash @ 0x140824928
 * Callers:
 *     MinCryptCheckCertsAndKeys @ 0x14069F3E8 (MinCryptCheckCertsAndKeys.c)
 * Callees:
 *     MinCryptVerifySignedHash2 @ 0x140824950 (MinCryptVerifySignedHash2.c)
 */

__int64 __fastcall MinCryptVerifySignedHash(int a1, int a2, int a3, int a4, __int64 a5)
{
  return MinCryptVerifySignedHash2(a1, a2, a3, a4, a5, 0LL);
}
