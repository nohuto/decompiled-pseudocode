/*
 * XREFs of MinCryptIsKeyPresent @ 0x1406A0680
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     MinAsn1ParsePublicKeyInfo @ 0x14082796C (MinAsn1ParsePublicKeyInfo.c)
 *     MinAsn1ParseRSAPublicKey @ 0x1408279B4 (MinAsn1ParseRSAPublicKey.c)
 */

__int64 __fastcall MinCryptIsKeyPresent(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // edi
  unsigned int v6; // esi
  char *v7; // rbp
  _BYTE v9[32]; // [rsp+20h] [rbp-B8h] BYREF
  SIZE_T Length; // [rsp+40h] [rbp-98h]
  void *Source1; // [rsp+48h] [rbp-90h]
  _BYTE v12[48]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v13[16]; // [rsp+90h] [rbp-48h] BYREF

  v5 = 0;
  if ( (int)MinAsn1ParsePublicKeyInfo(a1, v12) < 0 || (int)MinAsn1ParseRSAPublicKey(v13, v9) < 0 )
    return 0LL;
  v6 = Length;
  v7 = (char *)Source1;
  if ( (unsigned int)Length <= 1 )
  {
LABEL_6:
    if ( !v6 )
      return 0LL;
    goto LABEL_7;
  }
  if ( !*(_BYTE *)Source1 )
  {
    v7 = (char *)Source1 + 1;
    v6 = Length - 1;
    goto LABEL_6;
  }
LABEL_7:
  if ( v6 <= 0x200 )
  {
    while ( v5 < a3 )
    {
      if ( v6 == *(_DWORD *)(a2 + 16LL * v5) && RtlCompareMemory(v7, *(const void **)(a2 + 16LL * v5 + 8), v6) == v6 )
        return 1LL;
      ++v5;
    }
  }
  return 0LL;
}
