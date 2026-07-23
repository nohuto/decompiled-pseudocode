/*
 * XREFs of MinCryptDecodeHashAlgorithmIdentifier @ 0x140824FB0
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140826B54 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x140826D68 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MinCryptDecodeOid @ 0x140825004 (MinCryptDecodeOid.c)
 *     MinAsn1ParseAlgorithmIdentifier @ 0x140827664 (MinAsn1ParseAlgorithmIdentifier.c)
 */

__int64 __fastcall MinCryptDecodeHashAlgorithmIdentifier(__int64 a1)
{
  _BYTE v2[32]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v3[32]; // [rsp+40h] [rbp-38h] BYREF

  if ( (int)MinAsn1ParseAlgorithmIdentifier(a1, v2) >= 0 )
    return MinCryptDecodeOid(byte_140B432E0, 20LL, v3);
  else
    return 0LL;
}
