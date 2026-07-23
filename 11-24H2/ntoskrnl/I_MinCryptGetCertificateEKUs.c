/*
 * XREFs of I_MinCryptGetCertificateEKUs @ 0x1408255C8
 * Callers:
 *     I_MinCryptFindIssuerCertificateByName @ 0x140825388 (I_MinCryptFindIssuerCertificateByName.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     MinAsn1ParseOIDSequence @ 0x140827888 (MinAsn1ParseOIDSequence.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x140827B30 (MinAsn1ParseSingleExtensionValue.c)
 */

__int64 __fastcall I_MinCryptGetCertificateEKUs(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v8 = 0;
  v7[0] = 0LL;
  if ( *a1 )
  {
    if ( (int)MinAsn1ParseSingleExtensionValue(&qword_140B3DC58, a1, &v8, v7) > 0 )
    {
      if ( v8 )
      {
        if ( (int)MinAsn1ParseOIDSequence(v7, a2, a3) <= 0 )
          return (unsigned int)-1073740760;
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      return (unsigned int)-1073740760;
    }
  }
  else
  {
    *a2 = 0;
  }
  return v5;
}
