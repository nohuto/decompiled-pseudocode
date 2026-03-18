/*
 * XREFs of MinAsn1ExtractParsedCertificatesFromSignedData @ 0x1408185A4
 * Callers:
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x1408159FC (MincrypK_ParseCertificateChainWithPolicy2.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MinAsn1ParseSignedData @ 0x140817438 (MinAsn1ParseSignedData.c)
 *     MinAsn1ParseSignedDataCertificatesEx @ 0x14081747C (MinAsn1ParseSignedDataCertificatesEx.c)
 */

__int64 __fastcall MinAsn1ExtractParsedCertificatesFromSignedData(int a1, int a2, unsigned int *a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE v8[112]; // [rsp+20h] [rbp-158h] BYREF
  unsigned int v9[48]; // [rsp+90h] [rbp-E8h] BYREF

  result = MinAsn1ParseSignedData(a1, a2, (__int64)v8);
  if ( (int)result > 0 )
  {
    result = MinAsn1ParseSignedDataCertificatesEx(v9, a3, a4);
    if ( (int)result >= 0 )
      return result;
    result = a1 - v9[2] + (unsigned int)result;
  }
  *a3 = 0;
  return result;
}
