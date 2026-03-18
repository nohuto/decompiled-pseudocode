/*
 * XREFs of MinCryptDecodeHashAlgorithmIdentifier @ 0x140824850
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140824ED4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140826384 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x140826598 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140826868 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     MinCryptDecodeOid @ 0x1408248A4 (MinCryptDecodeOid.c)
 *     MinAsn1ParseAlgorithmIdentifier @ 0x140826E94 (MinAsn1ParseAlgorithmIdentifier.c)
 */

__int64 __fastcall MinCryptDecodeHashAlgorithmIdentifier(__int64 a1)
{
  _BYTE v2[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v3[32]; // [rsp+40h] [rbp-38h] BYREF

  if ( (int)MinAsn1ParseAlgorithmIdentifier(a1, v2) >= 0 )
    return MinCryptDecodeOid(byte_140B414E0, 20LL, v3);
  else
    return 0LL;
}
