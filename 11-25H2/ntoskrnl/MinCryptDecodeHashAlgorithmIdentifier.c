/*
 * XREFs of MinCryptDecodeHashAlgorithmIdentifier @ 0x140814A30
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408150B4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140816590 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x1408167A4 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140816A74 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MinCryptDecodeOid @ 0x140814A84 (MinCryptDecodeOid.c)
 *     MinAsn1ParseAlgorithmIdentifier @ 0x1408170A0 (MinAsn1ParseAlgorithmIdentifier.c)
 */

__int64 __fastcall MinCryptDecodeHashAlgorithmIdentifier(__int64 a1)
{
  _BYTE v2[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v3[32]; // [rsp+40h] [rbp-38h] BYREF

  if ( (int)MinAsn1ParseAlgorithmIdentifier(a1, v2) >= 0 )
    return MinCryptDecodeOid(byte_140B32210, 20LL, v3);
  else
    return 0LL;
}
