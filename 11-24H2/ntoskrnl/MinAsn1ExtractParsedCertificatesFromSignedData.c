/*
 * XREFs of MinAsn1ExtractParsedCertificatesFromSignedData @ 0x140828B68
 * Callers:
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x140825FE8 (MincrypK_ParseCertificateChainWithPolicy2.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MinAsn1ParseSignedData @ 0x1408279FC (MinAsn1ParseSignedData.c)
 *     MinAsn1ParseSignedDataCertificatesEx @ 0x140827A40 (MinAsn1ParseSignedDataCertificatesEx.c)
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
