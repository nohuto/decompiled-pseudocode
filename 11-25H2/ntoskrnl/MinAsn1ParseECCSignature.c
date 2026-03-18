/*
 * XREFs of MinAsn1ParseECCSignature @ 0x1406942B4
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x140814B30 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     MinAsn1ParseRSAPublicKey @ 0x1408173F0 (MinAsn1ParseRSAPublicKey.c)
 */

__int64 __fastcall MinAsn1ParseECCSignature(__int64 a1, __int64 a2)
{
  return MinAsn1ParseRSAPublicKey(a1, a2);
}
