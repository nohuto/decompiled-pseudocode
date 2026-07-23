/*
 * XREFs of MinAsn1ParseECCSignature @ 0x1406A0758
 * Callers:
 *     MinCryptVerifySignedHash2 @ 0x140825124 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     MinAsn1ParseRSAPublicKey @ 0x1408279B4 (MinAsn1ParseRSAPublicKey.c)
 */

__int64 __fastcall MinAsn1ParseECCSignature(__int64 a1, __int64 a2)
{
  return MinAsn1ParseRSAPublicKey(a1, a2);
}
