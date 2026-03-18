/*
 * XREFs of MinCryptVerifySignedHash2 @ 0x140814B30
 * Callers:
 *     MinCryptVerifySignedHash @ 0x140814B08 (MinCryptVerifySignedHash.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408150B4 (MinCryptVerifyCertificateWithPolicy2.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140816590 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140816A74 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     ?MinCryptCopyAsn1IntToFixedBuffer@@YAJPEBEKPEAEK@Z @ 0x140693CC8 (-MinCryptCopyAsn1IntToFixedBuffer@@YAJPEBEKPEAEK@Z.c)
 *     MinAsn1ParseECCSignature @ 0x1406942B4 (MinAsn1ParseECCSignature.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     MinCryptDecodeOid @ 0x140814A84 (MinCryptDecodeOid.c)
 *     MinAsn1ParseAlgorithmIdentifier @ 0x1408170A0 (MinAsn1ParseAlgorithmIdentifier.c)
 *     MinAsn1ParsePublicKeyInfo @ 0x1408173A8 (MinAsn1ParsePublicKeyInfo.c)
 *     MinAsn1ParseRSAPublicKey @ 0x1408173F0 (MinAsn1ParseRSAPublicKey.c)
 *     HashpVerifyEcdsaSignature @ 0x14081FF14 (HashpVerifyEcdsaSignature.c)
 *     HashpVerifyPkcs1Signature @ 0x140820050 (HashpVerifyPkcs1Signature.c)
 */

__int64 __fastcall MinCryptVerifySignedHash2(int a1, int a2, int a3, unsigned int *a4, __int64 a5, __int64 a6)
{
  char v10; // di
  int v11; // ebx
  unsigned int v12; // edi
  int v13; // r14d
  int v14; // ecx
  int v16; // eax
  _BYTE v17[32]; // [rsp+50h] [rbp-B0h] BYREF
  size_t Size; // [rsp+70h] [rbp-90h]
  unsigned __int8 *Src; // [rsp+78h] [rbp-88h]
  size_t v20; // [rsp+80h] [rbp-80h]
  unsigned __int8 *v21; // [rsp+88h] [rbp-78h]
  _BYTE v22[32]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v24; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE *v25; // [rsp+C8h] [rbp-38h]
  _BYTE v26[32]; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int v27[4]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v28[4]; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int8 v29[96]; // [rsp+110h] [rbp+10h] BYREF

  v10 = 0;
  if ( (int)MinAsn1ParsePublicKeyInfo(a5, v22) < 0 || (int)MinAsn1ParseAlgorithmIdentifier(v23, v26) < 0 )
    return (unsigned int)-1073740760;
  v11 = MinCryptDecodeOid((__int64)&qword_140B2DD90, 2u, v27);
  if ( v11 == 11776 )
    v11 = MinCryptDecodeOid((__int64)&qword_140B2DD60, 2u, v28);
  if ( !v11 )
    return (unsigned int)-1073740760;
  if ( v11 == 9216 )
  {
    if ( (int)MinAsn1ParseRSAPublicKey(&v24, v17) >= 0 )
    {
      if ( a6 && (*(_BYTE *)(a6 + 4) & 0x40) != 0 )
        v10 = 1;
      v16 = HashpVerifyPkcs1Signature(
              a1,
              a2,
              a3,
              (_DWORD)v21,
              (unsigned int)v20,
              (__int64)Src,
              (unsigned int)Size,
              *((_QWORD *)a4 + 1),
              *a4,
              v10);
      if ( v16 < 0 )
        return (unsigned int)-1073740760;
      return (unsigned int)v16;
    }
    return (unsigned int)-1073740760;
  }
  if ( (unsigned int)(v11 - 11777) > 1 )
    return (unsigned int)-1073740760;
  if ( v11 == 11777 )
  {
    v12 = 32;
    goto LABEL_12;
  }
  if ( v11 != 11778 )
    return (unsigned int)-1073740760;
  v12 = 48;
LABEL_12:
  if ( (int)MinAsn1ParseECCSignature((__int64)a4, (__int64)v17) < 0 )
    return (unsigned int)-1073740760;
  if ( v24 != 2 * v12 + 1 )
    return (unsigned int)-1073740760;
  v13 = (int)v25;
  if ( *v25 != 4 )
    return (unsigned int)-1073740760;
  if ( (int)MinCryptCopyAsn1IntToFixedBuffer(Src, (unsigned int)Size, v29, v12) < 0 )
    return (unsigned int)-1073740760;
  if ( (int)MinCryptCopyAsn1IntToFixedBuffer(v21, (unsigned int)v20, &v29[v12], v12) < 0 )
    return (unsigned int)-1073740760;
  v14 = HashpVerifyEcdsaSignature(v11, v13 + 1, 2 * v12, a2, a3, (__int64)v29, 2 * v12);
  if ( v14 < 0 )
    return (unsigned int)-1073740760;
  return (unsigned int)v14;
}
