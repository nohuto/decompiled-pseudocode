/*
 * XREFs of MinAsn1ParseECCSignature @ 0x14069F654
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x140824950 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     MinAsn1ParseRSAPublicKey @ 0x1408271E4 (MinAsn1ParseRSAPublicKey.c)
 */

__int64 __fastcall MinAsn1ParseECCSignature(__int64 a1, __int64 a2)
{
  return MinAsn1ParseRSAPublicKey(a1, a2);
}
