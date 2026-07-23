/*
 * XREFs of MinCryptCheckCertsAndKeys @ 0x1406A04EC
 * Callers:
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MinCryptVerifySignedHash @ 0x1408250FC (MinCryptVerifySignedHash.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x140825388 (I_MinCryptFindIssuerCertificateByName.c)
 *     MinAsn1ParseCertificate @ 0x140827810 (MinAsn1ParseCertificate.c)
 */

__int64 __fastcall MinCryptCheckCertsAndKeys(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8)
{
  unsigned int v12; // edi
  unsigned int v13; // ebx
  unsigned int i; // esi
  unsigned int v15; // eax
  __int64 IssuerCertificateByName; // rax
  _BYTE v18[16]; // [rsp+30h] [rbp-138h] BYREF
  int v19; // [rsp+40h] [rbp-128h]
  void *Buf1; // [rsp+48h] [rbp-120h]

  v12 = -1073740760;
  memset_0(v18, 0, 0xF0uLL);
  v13 = 0;
  for ( i = 0; i < a6; ++i )
  {
    if ( (int)MinAsn1ParseCertificate(*(_QWORD *)(a5 + 16LL * i + 8), *(unsigned int *)(a5 + 16LL * i), v18) >= 0 )
    {
      v15 = *(_DWORD *)(a4 + 16);
      if ( v19 == v15 && !memcmp(Buf1, *(const void **)(a4 + 24), v15) )
        return v13;
      IssuerCertificateByName = I_MinCryptFindIssuerCertificateByName((int)a4 + 112, 1, (unsigned int)v18, 0, 0LL);
      if ( IssuerCertificateByName )
        return (unsigned int)MinCryptVerifySignedHash(a1, a2, a3, (int)a4 + 64, IssuerCertificateByName + 176);
    }
  }
  if ( a8 )
    return (unsigned int)-1073741822;
  return v12;
}
