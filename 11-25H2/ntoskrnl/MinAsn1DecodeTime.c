/*
 * XREFs of MinAsn1DecodeTime @ 0x1408181F0
 * Callers:
 *     MinCrypK_ParseRevocationList @ 0x140693E78 (MinCrypK_ParseRevocationList.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408150B4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140816590 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 * Callees:
 *     MinAsn1DecodeGeneralizedTime @ 0x140817D94 (MinAsn1DecodeGeneralizedTime.c)
 *     MinAsn1DecodeUtcTime @ 0x140818268 (MinAsn1DecodeUtcTime.c)
 *     MinAsn1ExtractContent @ 0x1408184BC (MinAsn1ExtractContent.c)
 */

char __fastcall MinAsn1DecodeTime(unsigned int *a1, LARGE_INTEGER *a2)
{
  __int64 v3; // rdx
  char v5; // cl
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a1;
  v7 = 0LL;
  if ( !(_DWORD)v3 || (int)MinAsn1ExtractContent(*((_QWORD *)a1 + 1), v3, &v7, (char *)&v7 + 8) < 0 )
    return 0;
  v5 = **((_BYTE **)a1 + 1);
  if ( v5 == 23 )
    return MinAsn1DecodeUtcTime(&v7, a2);
  return v5 == 24 && MinAsn1DecodeGeneralizedTime((__int64)&v7, a2);
}
