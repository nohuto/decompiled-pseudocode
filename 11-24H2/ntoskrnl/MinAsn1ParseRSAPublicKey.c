/*
 * XREFs of MinAsn1ParseRSAPublicKey @ 0x1408279B4
 * Callers:
 *     SecureDump_ConvertToRsaBlob @ 0x14059E620 (SecureDump_ConvertToRsaBlob.c)
 *     MinCryptIsKeyPresent @ 0x1406A0680 (MinCryptIsKeyPresent.c)
 *     MinAsn1ParseECCSignature @ 0x1406A0758 (MinAsn1ParseECCSignature.c)
 *     MinCryptVerifySignedHash2 @ 0x140825124 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     MinAsn1ExtractValues @ 0x140828BE4 (MinAsn1ExtractValues.c)
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
             (unsigned int)&qword_14000D510,
             4,
             a2);
  if ( (int)result > 0 )
    return *(unsigned int *)(a2 + 16);
  return result;
}
