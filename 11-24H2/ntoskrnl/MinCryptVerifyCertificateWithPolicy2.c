/*
 * XREFs of MinCryptVerifyCertificateWithPolicy2 @ 0x1408256A0
 * Callers:
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x140825FE8 (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140826B54 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140827038 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     MinCryptHashMemory @ 0x1406A01F4 (MinCryptHashMemory.c)
 *     I_MinCryptIsCertificateHashRevokedV2 @ 0x1406A0214 (I_MinCryptIsCertificateHashRevokedV2.c)
 *     MinCryptCheckCertsAndKeys @ 0x1406A04EC (MinCryptCheckCertsAndKeys.c)
 *     MinCryptIsCertPresent @ 0x1406A0610 (MinCryptIsCertPresent.c)
 *     MinCryptIsKeyPresent @ 0x1406A0680 (MinCryptIsKeyPresent.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x140824FB0 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCryptVerifySignedHash2 @ 0x140825124 (MinCryptVerifySignedHash2.c)
 *     I_MinCryptCheckEKU @ 0x14082531C (I_MinCryptCheckEKU.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x140825388 (I_MinCryptFindIssuerCertificateByName.c)
 *     I_MinCryptFindRootByKey @ 0x140825478 (I_MinCryptFindRootByKey.c)
 *     I_MinCryptFindRootByName @ 0x1408254EC (I_MinCryptFindRootByName.c)
 *     I_MinCryptGetCertificateEKUs @ 0x1408255C8 (I_MinCryptGetCertificateEKUs.c)
 *     I_MinCryptGetCommonName @ 0x140825654 (I_MinCryptGetCommonName.c)
 *     MincryptValidateBasicConstraints @ 0x140826644 (MincryptValidateBasicConstraints.c)
 *     I_MinCryptCheckEKURequirements @ 0x140827CF0 (I_MinCryptCheckEKURequirements.c)
 *     I_MincryptAddChainInfo @ 0x140827DEC (I_MincryptAddChainInfo.c)
 *     MinAsn1DecodeTime @ 0x1408287B4 (MinAsn1DecodeTime.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MinCryptVerifyCertificateWithPolicy2(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6)
{
  __int64 v7; // r14
  int v8; // esi
  __int64 Pool2; // rax
  _DWORD *v10; // r13
  int CertificateEKUs; // ebx
  unsigned int i; // edx
  char v13; // cl
  __int64 v14; // rdi
  __int64 v15; // r12
  char *v16; // rbx
  int v17; // esi
  char *v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r12
  unsigned int v22; // ecx
  BOOL v23; // ecx
  char v24; // al
  char v25; // r12
  _OWORD *v26; // rbx
  __int64 *RootByKey; // rax
  int v28; // r12d
  int v29; // edx
  __int64 v30; // r12
  unsigned int v31; // r12d
  __int64 *RootByName; // rax
  __int64 IssuerCertificateByName; // rax
  int v35; // [rsp+40h] [rbp-F8h]
  int v36; // [rsp+60h] [rbp-D8h] BYREF
  int v37; // [rsp+64h] [rbp-D4h]
  char v38; // [rsp+68h] [rbp-D0h]
  int v39; // [rsp+6Ch] [rbp-CCh]
  char v40; // [rsp+70h] [rbp-C8h]
  int v41; // [rsp+74h] [rbp-C4h]
  char v42; // [rsp+78h] [rbp-C0h]
  int v43; // [rsp+7Ch] [rbp-BCh]
  int v44; // [rsp+80h] [rbp-B8h] BYREF
  unsigned int v45; // [rsp+84h] [rbp-B4h]
  int v46; // [rsp+88h] [rbp-B0h]
  unsigned int v47; // [rsp+8Ch] [rbp-ACh]
  int v48; // [rsp+90h] [rbp-A8h]
  int v49; // [rsp+94h] [rbp-A4h]
  unsigned int v50; // [rsp+98h] [rbp-A0h]
  __int64 v51; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-88h]
  unsigned int v54; // [rsp+B8h] [rbp-80h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-78h]
  void *Src; // [rsp+C8h] [rbp-70h]
  _DWORD *v57; // [rsp+D0h] [rbp-68h]
  __int64 v58; // [rsp+D8h] [rbp-60h]
  unsigned int v59; // [rsp+E0h] [rbp-58h]
  __int64 v60; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v61; // [rsp+F0h] [rbp-48h]
  char *v62; // [rsp+F8h] [rbp-40h]
  int v63[2]; // [rsp+100h] [rbp-38h]

  v7 = a1;
  v37 = 0;
  v50 = 0;
  v44 = 50;
  v48 = 0;
  v45 = 0;
  v36 = 0;
  v41 = 0;
  v8 = 48;
  v39 = 48;
  v46 = 0;
  v55 = 0LL;
  v49 = 0;
  v60 = 0LL;
  v43 = 0;
  Src = 0LL;
  v53 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v38 = 0;
  v58 = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)v63 = a1;
  Pool2 = ExAllocatePool2(0x102uLL, 0xBA0uLL, 0x72634943u);
  v10 = (_DWORD *)Pool2;
  v57 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    v53 = Pool2 + 800;
    v61 = Pool2 + 976;
    Src = (void *)(Pool2 + 1776);
    CertificateEKUs = I_MinCryptGetCertificateEKUs((_DWORD *)(v7 + 224), &v44, Pool2);
    v37 = CertificateEKUs;
    if ( CertificateEKUs < 0 )
      goto LABEL_91;
    for ( i = 0; ; ++i )
    {
      v59 = i;
      if ( i >= v44 )
        break;
      v8 += ((v10[4 * i] + 3) & 0xFFFFFFFC) + 16;
      v39 = v8;
    }
    if ( a6 )
    {
      v8 += (*a6 + 3) & 0xFFFFFFFC;
      v39 = v8;
    }
    if ( a4
      && (*(_DWORD *)(a4 + 4) & 1) == 0
      && !(unsigned __int8)I_MinCryptCheckEKURequirements((unsigned int)v44, v10, a4) )
    {
      v36 |= 0x80000u;
      CertificateEKUs = -1073740760;
      goto LABEL_3;
    }
    if ( !(unsigned __int8)MinAsn1DecodeTime(v7 + 128, &v51) || !(unsigned __int8)MinAsn1DecodeTime(v7 + 144, &v52) )
    {
      v51 = 0LL;
      v52 = 0LL;
    }
    v42 = I_MinCryptCheckEKU((const void **)&qword_140B3DC38, v44, (__int64)v10);
    if ( v42 && g_FlightSignedNotBefore > 0 && v51 < g_FlightSignedNotBefore )
    {
      v36 |= 0x600000u;
      CertificateEKUs = -1073740283;
      goto LABEL_3;
    }
    if ( !g_IgnoreLifetimeSigningEKU && I_MinCryptCheckEKU((const void **)&qword_140B3DC48, v44, (__int64)v10) )
    {
      v13 = 0;
      v40 = 0;
      if ( !v42 && MEMORY[0xFFFFF78000000014] < v51 || MEMORY[0xFFFFF78000000014] > v52 )
      {
        v13 = 1;
        v40 = 1;
      }
      if ( v13 )
      {
        v36 |= 0x400000u;
        CertificateEKUs = -1073740283;
        v37 = -1073740283;
        v8 = v39;
        v10 = v57;
        goto LABEL_91;
      }
      CertificateEKUs = v37;
      v7 = *(_QWORD *)v63;
      v8 = v39;
      v10 = v57;
    }
    v14 = a5;
    while ( 1 )
    {
      if ( v48 )
        goto LABEL_92;
      v15 = 120LL * (unsigned int)v46;
      v62 = (char *)Src + v15 + 8;
      v47 = MinCryptDecodeHashAlgorithmIdentifier(v7 + 48);
      CertificateEKUs = MinCryptHashMemory(v47);
      v37 = CertificateEKUs;
      if ( CertificateEKUs < 0 )
        goto LABEL_33;
      v16 = (char *)Src;
      *(_DWORD *)((char *)Src + v15) = v47;
      *(_DWORD *)&v16[v15 + 4] = v45;
      *(_OWORD *)&v16[v15 + 104] = *(_OWORD *)(v7 + 16);
      v17 = ((*(_DWORD *)(v7 + 16) + 3) & 0xFFFFFFFC) + v8;
      v39 = v17;
      v18 = &v16[v15 + 72];
      *(_OWORD *)v18 = 0LL;
      *(_OWORD *)&v16[v15 + 88] = 0LL;
      if ( a5 )
      {
        if ( (unsigned __int8)I_MinCryptGetCommonName(v7 + 160, (__int64)v18) )
        {
          v17 += (*(unsigned __int16 *)&v16[v15 + 80] + 3) & 0xFFFFFFFC;
          v39 = v17;
        }
        if ( (unsigned __int8)I_MinCryptGetCommonName(v7 + 112, (__int64)&v16[v15 + 88]) )
        {
          v17 += (*(unsigned __int16 *)&v16[v15 + 96] + 3) & 0xFFFFFFFC;
          v39 = v17;
        }
      }
      ++v46;
      v8 = v17 + 120;
      v39 = v8;
      if ( I_MinCryptIsCertificateHashRevokedV2(v47, &v16[v15 + 8], v45, &v60, 0LL, 0LL) )
      {
        v37 = -1073740285;
        v49 = 1;
        v36 |= 0x200000u;
        v20 = v58;
        if ( v60 < v58 )
          v20 = v60;
        v58 = v20;
      }
      v37 = 0;
      if ( a4 && (*(_DWORD *)(a4 + 4) & 1) != 0 )
      {
        v54 = 50;
        v21 = v61;
        CertificateEKUs = I_MinCryptGetCertificateEKUs((_DWORD *)(v7 + 224), &v54, v61);
        v37 = CertificateEKUs;
        if ( CertificateEKUs < 0 )
          goto LABEL_92;
        if ( !(unsigned __int8)I_MinCryptCheckEKURequirements(v54, v21, a4) )
        {
          v36 |= 0x80000u;
LABEL_48:
          CertificateEKUs = -1073740760;
          v37 = -1073740760;
          goto LABEL_92;
        }
      }
      v22 = *(_DWORD *)(v7 + 112);
      if ( v22 == *(_DWORD *)(v7 + 160) )
      {
        v23 = memcmp(*(const void **)(v7 + 120), *(const void **)(v7 + 168), v22) == 0;
        v24 = v38;
        if ( v23 )
          v24 = 1;
        v38 = v24;
      }
      v25 = v38;
      LOBYTE(v19) = v38;
      CertificateEKUs = MincryptValidateBasicConstraints(v7 + 224, v50, v19, &v36);
      v37 = CertificateEKUs;
      if ( CertificateEKUs < 0 )
        goto LABEL_92;
      if ( v25 )
        break;
      v31 = v41;
      if ( a5 )
      {
        *(_OWORD *)(v53 + 16LL * (unsigned int)v41) = *(_OWORD *)(v7 + 176);
        v41 = ++v31;
        v8 += ((*(_DWORD *)(v7 + 176) + 3) & 0xFFFFFFFC) + 16;
        v39 = v8;
      }
      RootByName = I_MinCryptFindRootByName((const void **)(v7 + 112), a4);
      if ( RootByName )
      {
        v26 = RootByName + 2;
        v36 |= *((_DWORD *)RootByName + 8);
        v43 = *((_DWORD *)RootByName + 9);
        v48 = 1;
        if ( a5 )
        {
          *(_OWORD *)(v53 + 16LL * v31) = *v26;
          v41 = v31 + 1;
          v8 += ((*(_DWORD *)v26 + 3) & 0xFFFFFFFC) + 16;
          v39 = v8;
        }
LABEL_65:
        v30 = v55;
        goto LABEL_66;
      }
      IssuerCertificateByName = I_MinCryptFindIssuerCertificateByName((unsigned int *)(v7 + 112), a2, a3, a4, v61);
      v30 = IssuerCertificateByName;
      v55 = IssuerCertificateByName;
      if ( IssuerCertificateByName )
      {
        v30 = IssuerCertificateByName & -(__int64)((unsigned int)MinCryptDecodeHashAlgorithmIdentifier(IssuerCertificateByName + 48) != 0);
        v55 = v30;
      }
      if ( !v30 )
      {
        if ( a4 )
        {
          if ( (*(_DWORD *)(a4 + 4) & 0x20) != 0 )
          {
            CertificateEKUs = MinCryptCheckCertsAndKeys(
                                v47,
                                (int)v62,
                                v45,
                                v7,
                                *(_QWORD *)(a4 + 120),
                                *(_DWORD *)(a4 + 112),
                                v35,
                                *(_DWORD *)(a4 + 96));
            v37 = CertificateEKUs;
            if ( CertificateEKUs >= 0 )
            {
              v36 |= 0x4000u;
              goto LABEL_92;
            }
          }
        }
        v43 = 1;
        goto LABEL_84;
      }
      v26 = (_OWORD *)(v30 + 176);
LABEL_66:
      CertificateEKUs = MinCryptVerifySignedHash2(v47, (int)v62, v45, (unsigned int *)(v7 + 64), (__int64)v26, a4);
      v37 = CertificateEKUs;
      if ( CertificateEKUs < 0 )
      {
LABEL_33:
        v36 |= 0x40000u;
        goto LABEL_92;
      }
      if ( !v48 )
      {
        if ( ++v50 >= 0xA )
        {
          v43 = 1;
LABEL_84:
          if ( a5 )
          {
            v36 |= 0x10u;
            CertificateEKUs = 0;
          }
          else
          {
            v36 |= 0x20000u;
            CertificateEKUs = -1073740760;
          }
          v37 = CertificateEKUs;
          goto LABEL_92;
        }
        v7 = v30;
        *(_QWORD *)v63 = v30;
      }
    }
    v26 = (_OWORD *)(v7 + 176);
    RootByKey = I_MinCryptFindRootByKey((const void **)(v7 + 176));
    if ( RootByKey )
    {
      v26 = RootByKey + 2;
      v36 |= *((_DWORD *)RootByKey + 8) | 1;
      v43 = *((_DWORD *)RootByKey + 9);
    }
    else
    {
      if ( !a5 )
        goto LABEL_48;
      v28 = v36 | 1;
      v36 |= 1u;
      v43 = 2;
      if ( a4
        && (*(_DWORD *)(a4 + 4) & 0x20) != 0
        && ((unsigned int)MinCryptIsCertPresent(v7 + 16, *(_QWORD *)(a4 + 120), *(_DWORD *)(a4 + 112))
         || (unsigned int)MinCryptIsKeyPresent(v7 + 176, *(_QWORD *)(a4 + 104), *(_DWORD *)(a4 + 96))) )
      {
        v36 = v28 | 0x4000;
      }
    }
    if ( a5 )
    {
      v29 = v41;
      *(_OWORD *)(v53 + 16LL * (unsigned int)v41) = *v26;
      v41 = v29 + 1;
      v8 += ((*(_DWORD *)v26 + 3) & 0xFFFFFFFC) + 16;
      v39 = v8;
    }
    v48 = 1;
    goto LABEL_65;
  }
  CertificateEKUs = -1073741801;
LABEL_3:
  v37 = CertificateEKUs;
LABEL_91:
  v14 = a5;
LABEL_92:
  if ( v14 )
  {
    *(_DWORD *)v14 = 48;
    *(_DWORD *)(v14 + 4) = CertificateEKUs;
    *(_DWORD *)(v14 + 8) = v36;
    *(_QWORD *)(v14 + 16) = 0LL;
    *(_QWORD *)(v14 + 32) = v51;
    *(_QWORD *)(v14 + 40) = v52;
    if ( v49 )
      *(_QWORD *)(v14 + 24) = v58;
    if ( CertificateEKUs >= 0 )
      CertificateEKUs = I_MincryptAddChainInfo(v14, v8, v44, v41, v46, v43, (__int64)v10, v53, Src, (__int64)a6);
  }
  if ( v10 )
    ExFreePoolWithTag(v10, 0x72634943u);
  if ( CertificateEKUs >= 0 && v49 )
    return (unsigned int)-1073740285;
  return (unsigned int)CertificateEKUs;
}
