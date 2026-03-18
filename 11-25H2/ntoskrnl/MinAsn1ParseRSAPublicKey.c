/*
 * XREFs of MinAsn1ParseRSAPublicKey @ 0x1408173F0
 * Callers:
 *     SecureDump_ConvertToRsaBlob @ 0x14059DF00 (SecureDump_ConvertToRsaBlob.c)
 *     MinCryptIsKeyPresent @ 0x1406941DC (MinCryptIsKeyPresent.c)
 *     MinAsn1ParseECCSignature @ 0x1406942B4 (MinAsn1ParseECCSignature.c)
 *     MinCryptVerifySignedHash2 @ 0x140814B30 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     MinAsn1ExtractValues @ 0x140818620 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall MinAsn1ParseRSAPublicKey(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 3;
  result = MinAsn1ExtractValues(
             *(_QWORD *)(a1 + 8),
             *(_DWORD *)a1,
             (unsigned int)&v4,
             (unsigned int)&qword_14000CB80,
             4,
             a2);
  if ( (int)result > 0 )
    return *(unsigned int *)(a2 + 16);
  return result;
}
