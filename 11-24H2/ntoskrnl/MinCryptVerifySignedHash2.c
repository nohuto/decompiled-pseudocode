/*
 * XREFs of MinCryptVerifySignedHash2 @ 0x140825124
 * Callers:
 *     MinCryptVerifySignedHash @ 0x1408250FC (MinCryptVerifySignedHash.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140826B54 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     ?MinCryptCopyAsn1IntToFixedBuffer@@YAJPEBEKPEAEK@Z @ 0x1406A0118 (-MinCryptCopyAsn1IntToFixedBuffer@@YAJPEBEKPEAEK@Z.c)
 *     Feature_CodeIntegrity_EccSupport__private_IsEnabledDeviceUsageNoInline @ 0x1406A01A0 (Feature_CodeIntegrity_EccSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     MinAsn1ParseECCSignature @ 0x1406A0758 (MinAsn1ParseECCSignature.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     MinCryptDecodeSignatureAlgorithmIdentifier @ 0x140825088 (MinCryptDecodeSignatureAlgorithmIdentifier.c)
 *     MinAsn1ParsePublicKeyInfo @ 0x14082796C (MinAsn1ParsePublicKeyInfo.c)
 *     MinAsn1ParseRSAPublicKey @ 0x1408279B4 (MinAsn1ParseRSAPublicKey.c)
 *     HashpVerifyEcdsaSignature @ 0x14083044C (HashpVerifyEcdsaSignature.c)
 *     HashpVerifyPkcs1Signature @ 0x1408305C0 (HashpVerifyPkcs1Signature.c)
 */

__int64 __fastcall MinCryptVerifySignedHash2(int a1, int a2, int a3, unsigned int *a4, __int64 a5, __int64 a6)
{
  char v10; // bl
  int v11; // ecx
  int v12; // eax
  int v13; // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // r14d
  int v19; // eax
  _BYTE v21[32]; // [rsp+50h] [rbp-B0h] BYREF
  size_t Size; // [rsp+70h] [rbp-90h]
  unsigned __int8 *Src; // [rsp+78h] [rbp-88h]
  size_t v24; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v25; // [rsp+88h] [rbp-78h]
  _BYTE v26[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v27[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v28; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v29; // [rsp+C8h] [rbp-38h]
  unsigned __int8 v30[1056]; // [rsp+D0h] [rbp-30h] BYREF

  v10 = 0;
  if ( (int)MinAsn1ParsePublicKeyInfo(a5, v26) < 0 )
    return (unsigned int)-1073740760;
  v12 = MinCryptDecodeSignatureAlgorithmIdentifier((__int64)v27);
  v13 = v12;
  if ( !v12 )
    return (unsigned int)-1073740760;
  v14 = v12 - 9216;
  if ( !v14 )
  {
    if ( (int)MinAsn1ParseRSAPublicKey(&v28, v21) >= 0 )
    {
      if ( a6 )
        v10 = (*(_BYTE *)(a6 + 4) & 0x40) != 0;
      v19 = HashpVerifyPkcs1Signature(
              a1,
              a2,
              a3,
              (_DWORD)v25,
              (unsigned int)v24,
              (__int64)Src,
              (unsigned int)Size,
              *((_QWORD *)a4 + 1),
              *a4,
              v10);
      if ( v19 < 0 )
        return (unsigned int)-1073740760;
      return (unsigned int)v19;
    }
    return (unsigned int)-1073740760;
  }
  v15 = v14 - 2561;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      if ( v16 != 1 || !(unsigned int)Feature_CodeIntegrity_EccSupport__private_IsEnabledDeviceUsageNoInline() )
        return (unsigned int)-1073740760;
      goto LABEL_13;
    }
  }
  if ( v13 == 11777 )
  {
    v17 = 32;
    goto LABEL_16;
  }
  if ( v13 == 11778 )
  {
    v17 = 48;
    goto LABEL_16;
  }
  if ( v13 != 11779 )
    return (unsigned int)-1073740760;
LABEL_13:
  v17 = 66;
LABEL_16:
  if ( (int)MinAsn1ParseECCSignature((__int64)a4, (__int64)v21) < 0 )
    return (unsigned int)-1073740760;
  if ( v28 != 2 * v17 + 1 )
    return (unsigned int)-1073740760;
  v18 = (int)v29;
  if ( *v29 != 4 )
    return (unsigned int)-1073740760;
  if ( (int)MinCryptCopyAsn1IntToFixedBuffer(Src, (unsigned int)Size, v30, v17) < 0 )
    return (unsigned int)-1073740760;
  if ( (int)MinCryptCopyAsn1IntToFixedBuffer(v25, (unsigned int)v24, &v30[v17], v17) < 0 )
    return (unsigned int)-1073740760;
  v11 = HashpVerifyEcdsaSignature(v13, v18 + 1, 2 * v17, a2, a3, (__int64)v30, 2 * v17);
  if ( v11 < 0 )
    return (unsigned int)-1073740760;
  return (unsigned int)v11;
}
