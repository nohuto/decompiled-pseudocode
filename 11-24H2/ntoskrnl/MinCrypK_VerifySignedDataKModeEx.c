/*
 * XREFs of MinCrypK_VerifySignedDataKModeEx @ 0x140827038
 * Callers:
 *     I_MinCryptVerifyRFC3161TimeStamp @ 0x140826D68 (I_MinCryptVerifyRFC3161TimeStamp.c)
 *     MinCrypK_VerifySignedDataKMode @ 0x140826FF4 (MinCrypK_VerifySignedDataKMode.c)
 * Callees:
 *     MinCryptHashMemory @ 0x1406A01F4 (MinCryptHashMemory.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x140824FB0 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCryptVerifySignedHash2 @ 0x140825124 (MinCryptVerifySignedHash2.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0 (MinCryptVerifyCertificateWithPolicy2.c)
 *     MincryptIsTimestampBeforeRevocation @ 0x140826528 (MincryptIsTimestampBeforeRevocation.c)
 *     I_MinCryptFindSignerCertificateByIssuerAndSerialNumber @ 0x1408268A8 (I_MinCryptFindSignerCertificateByIssuerAndSerialNumber.c)
 *     I_MinCryptGetPlatformManifestBinaryIDAttribute @ 0x140826960 (I_MinCryptGetPlatformManifestBinaryIDAttribute.c)
 *     I_MinCryptGetSigningTime @ 0x1408269F0 (I_MinCryptGetSigningTime.c)
 *     I_MinCryptVerifySignerAuthenticatedAttributes @ 0x140826F00 (I_MinCryptVerifySignerAuthenticatedAttributes.c)
 *     MinAsn1ParseSignedData @ 0x1408279FC (MinAsn1ParseSignedData.c)
 *     MinAsn1ParseSignedDataCertificatesEx @ 0x140827A40 (MinAsn1ParseSignedDataCertificatesEx.c)
 *     I_MinCryptBuildErrorPolicy @ 0x140827CB4 (I_MinCryptBuildErrorPolicy.c)
 *     I_MincryptFreeChainInfo @ 0x1408280AC (I_MincryptFreeChainInfo.c)
 *     MinAsn1ExtractContent @ 0x140828A80 (MinAsn1ExtractContent.c)
 *     MinAsn1SignedDataGetContent @ 0x140828E60 (MinAsn1SignedDataGetContent.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MinCrypK_VerifySignedDataKModeEx(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char *a7)
{
  unsigned int v9; // ebx
  __int64 Pool2; // rax
  void *v11; // r13
  int IsTimestampBeforeRevocation; // edi
  __int64 v13; // rsi
  int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // r15d
  __int64 SignerCertificateByIssuerAndSerialNumber; // rax
  _DWORD *v18; // r12
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned int i; // eax
  unsigned int v23; // r15d
  __int64 v24; // rax
  bool v25; // zf
  int v27; // [rsp+38h] [rbp-C0h] BYREF
  int v28; // [rsp+3Ch] [rbp-BCh] BYREF
  unsigned int v29; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-B0h] BYREF
  int v31; // [rsp+50h] [rbp-A8h]
  unsigned int v32; // [rsp+54h] [rbp-A4h]
  __int64 v33; // [rsp+58h] [rbp-A0h]
  __int64 v34; // [rsp+60h] [rbp-98h]
  __int64 v35; // [rsp+68h] [rbp-90h]
  __int128 v36; // [rsp+70h] [rbp-88h] BYREF
  __int128 v37; // [rsp+80h] [rbp-78h] BYREF
  __int128 v38; // [rsp+90h] [rbp-68h]
  __int128 v39; // [rsp+A0h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-48h]
  __int64 v41; // [rsp+B8h] [rbp-40h]

  LODWORD(v30) = a4;
  v34 = a3;
  v33 = a5;
  v41 = a6;
  v28 = 0;
  v9 = 0;
  v36 = 0LL;
  v31 = 0;
  v27 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v29 = 10;
  memset_0(a7, 0, 0x50uLL);
  Pool2 = ExAllocatePool2(0x102uLL, 0xAD0uLL, 0x72634943u);
  v11 = (void *)Pool2;
  v35 = Pool2;
  if ( !Pool2 )
  {
    IsTimestampBeforeRevocation = -1073741801;
    goto LABEL_57;
  }
  v13 = Pool2 + 2400;
  if ( (int)MinAsn1ParseSignedData(a1, a2, Pool2 + 2400) < 0 )
    goto LABEL_4;
  if ( *(_DWORD *)(v13 + 32) != 9 || RtlCompareMemory(qword_140B3D618, *(const void **)(v13 + 40), 9uLL) != 9 )
    goto LABEL_55;
  v14 = v30;
  if ( !(_DWORD)v30 || (v15 = v34) == 0 )
  {
    if ( !*(_DWORD *)(v13 + 80) || !*(_DWORD *)(v13 + 96) )
      goto LABEL_4;
    *(_OWORD *)a7 = *(_OWORD *)(v13 + 80);
    if ( (int)MinAsn1SignedDataGetContent(v13, a7 + 16) > 0 )
    {
      v31 = 1;
      goto LABEL_16;
    }
LABEL_55:
    v9 = 0x40000;
    goto LABEL_56;
  }
  if ( *(_DWORD *)(v13 + 80) )
    *(_OWORD *)a7 = *(_OWORD *)(v13 + 80);
  *((_QWORD *)a7 + 3) = v15;
  *((_DWORD *)a7 + 4) = v14;
LABEL_16:
  if ( !*(_DWORD *)(v13 + 160) )
  {
LABEL_4:
    v9 = 327680;
LABEL_56:
    IsTimestampBeforeRevocation = -1073740760;
    goto LABEL_57;
  }
  if ( (int)MinAsn1ParseSignedDataCertificatesEx(v13 + 112, &v29, v11) < 0
    || (v16 = v29) == 0
    || (SignerCertificateByIssuerAndSerialNumber = I_MinCryptFindSignerCertificateByIssuerAndSerialNumber(
                                                     (unsigned int *)(v13 + 192),
                                                     (unsigned int *)(v13 + 208),
                                                     v29,
                                                     (__int64)v11),
        (v40 = SignerCertificateByIssuerAndSerialNumber) == 0) )
  {
    v9 = 393216;
    goto LABEL_56;
  }
  *((_OWORD *)a7 + 2) = *(_OWORD *)(SignerCertificateByIssuerAndSerialNumber + 16);
  v18 = (_DWORD *)(v13 + 240);
  *((_OWORD *)a7 + 3) = *(_OWORD *)(v13 + 240);
  *((_OWORD *)a7 + 4) = *(_OWORD *)(v13 + 288);
  v19 = MinCryptVerifyCertificateWithPolicy2(
          SignerCertificateByIssuerAndSerialNumber,
          v16,
          (__int64)v11,
          v33,
          a6,
          (_DWORD *)(v13 + 240));
  IsTimestampBeforeRevocation = v19;
  if ( v19 < 0 )
  {
    if ( v19 != -1073740285 )
      goto LABEL_57;
    v27 = 1;
  }
  if ( !*v18
    || (IsTimestampBeforeRevocation = I_MinCryptGetPlatformManifestBinaryIDAttribute(v13 + 240, a6, v20),
        IsTimestampBeforeRevocation >= 0) )
  {
    if ( !v33 || (*(_DWORD *)(v33 + 4) & 0x10) == 0 )
    {
      v21 = *(_QWORD *)(a6 + 16);
      if ( v21 )
      {
        for ( i = 0; ; ++i )
        {
          v32 = i;
          if ( i >= *(_DWORD *)(v21 + 48) )
            break;
        }
      }
    }
    v23 = MinCryptDecodeHashAlgorithmIdentifier(v13 + 224);
    if ( !v23 )
      goto LABEL_55;
    if ( v31 )
    {
      if ( (int)MinAsn1ExtractContent(*(_QWORD *)(v13 + 104), *(unsigned int *)(v13 + 96), &v36, (char *)&v36 + 8) < 0 )
        goto LABEL_55;
    }
    else
    {
      LODWORD(v36) = v30;
      *((_QWORD *)&v36 + 1) = v34;
    }
    IsTimestampBeforeRevocation = MinCryptHashMemory(v23);
    if ( IsTimestampBeforeRevocation < 0
      || *v18
      && (IsTimestampBeforeRevocation = I_MinCryptVerifySignerAuthenticatedAttributes(
                                          v23,
                                          (const void *)(v13 + 304),
                                          &v28,
                                          v13 + 240),
          IsTimestampBeforeRevocation < 0)
      || (IsTimestampBeforeRevocation = MinCryptVerifySignedHash2(
                                          v23,
                                          (int)v13 + 304,
                                          v28,
                                          (unsigned int *)(v13 + 272),
                                          v40 + 176,
                                          0LL),
          IsTimestampBeforeRevocation < 0) )
    {
      v9 = 0x40000;
      goto LABEL_57;
    }
    if ( v27 )
    {
      v27 = 0;
      v30 = 0LL;
      if ( (int)I_MinCryptGetSigningTime(v13, v29, (__int64)v11, (__int64)&v37, (__int64)&v30, (__int64)&v27) < 0 )
        goto LABEL_49;
      v24 = v30;
      v25 = v30 == 0;
      if ( v30 <= 0 )
      {
LABEL_51:
        if ( v25 )
          *(_DWORD *)(a6 + 8) |= 0x4000000u;
        IsTimestampBeforeRevocation = MincryptIsTimestampBeforeRevocation(a6, &v30, (__int64)&v37);
        if ( IsTimestampBeforeRevocation >= 0 )
        {
          *(_DWORD *)(a6 + 8) &= ~0x200000u;
          IsTimestampBeforeRevocation = 0;
        }
        goto LABEL_57;
      }
      if ( v30 < (__int64)v39
        || v30 > *((__int64 *)&v39 + 1)
        || v30 < *(_QWORD *)(a6 + 32)
        || v30 > *(_QWORD *)(a6 + 40) )
      {
LABEL_49:
        v24 = 0LL;
        v30 = 0LL;
      }
      v25 = v24 == 0;
      goto LABEL_51;
    }
  }
LABEL_57:
  if ( IsTimestampBeforeRevocation < 0 )
    IsTimestampBeforeRevocation = I_MinCryptBuildErrorPolicy((unsigned int)IsTimestampBeforeRevocation, a6, v9);
  if ( (_DWORD)v37 )
  {
    I_MincryptFreeChainInfo(v38);
    v37 = 0LL;
    v38 = 0LL;
    v39 = 0LL;
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0x72634943u);
  return (unsigned int)IsTimestampBeforeRevocation;
}
