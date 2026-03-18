/*
 * XREFs of MinCryptVerifyCertificateWithPolicy2 @ 0x1408150B4
 * Callers:
 *     MincrypK_ParseCertificateChainWithPolicy2 @ 0x1408159FC (MincrypK_ParseCertificateChainWithPolicy2.c)
 *     I_MinCryptVerifyAuthenticodeTimeStamp @ 0x140816590 (I_MinCryptVerifyAuthenticodeTimeStamp.c)
 *     MinCrypK_VerifySignedDataKModeEx @ 0x140816A74 (MinCrypK_VerifySignedDataKModeEx.c)
 * Callees:
 *     MinCryptHashMemory @ 0x140693D50 (MinCryptHashMemory.c)
 *     MinCryptCheckCertsAndKeys @ 0x140694048 (MinCryptCheckCertsAndKeys.c)
 *     MinCryptIsCertPresent @ 0x14069416C (MinCryptIsCertPresent.c)
 *     MinCryptIsKeyPresent @ 0x1406941DC (MinCryptIsKeyPresent.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x140814A30 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCryptVerifySignedHash2 @ 0x140814B30 (MinCryptVerifySignedHash2.c)
 *     I_MinCryptCheckEKU @ 0x140814D30 (I_MinCryptCheckEKU.c)
 *     I_MinCryptFindIssuerCertificateByName @ 0x140814D9C (I_MinCryptFindIssuerCertificateByName.c)
 *     I_MinCryptFindRootByKey @ 0x140814E8C (I_MinCryptFindRootByKey.c)
 *     I_MinCryptFindRootByName @ 0x140814F00 (I_MinCryptFindRootByName.c)
 *     I_MinCryptGetCertificateEKUs @ 0x140814FDC (I_MinCryptGetCertificateEKUs.c)
 *     I_MinCryptGetCommonName @ 0x140815068 (I_MinCryptGetCommonName.c)
 *     MinCryptIsCertificateRevoked @ 0x140815CA0 (MinCryptIsCertificateRevoked.c)
 *     MincryptValidateBasicConstraints @ 0x140816080 (MincryptValidateBasicConstraints.c)
 *     I_MinCryptCheckEKURequirements @ 0x14081772C (I_MinCryptCheckEKURequirements.c)
 *     I_MincryptAddChainInfo @ 0x140817828 (I_MincryptAddChainInfo.c)
 *     MinAsn1DecodeTime @ 0x1408181F0 (MinAsn1DecodeTime.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  unsigned int v8; // r12d
  int v9; // esi
  __int64 Pool2; // rax
  _DWORD *v11; // r13
  int CertificateEKUs; // ebx
  __int64 v13; // rdi
  unsigned int i; // edx
  char v15; // cl
  __int64 v16; // r12
  char *v17; // rbx
  int v18; // esi
  char *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // r12
  unsigned int v23; // ecx
  BOOL v24; // ecx
  char v25; // al
  char v26; // r12
  _OWORD *v27; // rbx
  __int64 *RootByKey; // rax
  int v29; // r12d
  unsigned int v30; // edx
  __int64 *RootByName; // rax
  __int64 IssuerCertificateByName; // rax
  __int64 v33; // rbx
  int v35; // [rsp+40h] [rbp-E8h]
  int v36; // [rsp+60h] [rbp-C8h] BYREF
  int IsCertificateRevoked; // [rsp+64h] [rbp-C4h]
  unsigned int v38; // [rsp+68h] [rbp-C0h]
  char v39; // [rsp+6Ch] [rbp-BCh]
  int v40; // [rsp+70h] [rbp-B8h]
  char v41; // [rsp+74h] [rbp-B4h]
  char v42; // [rsp+75h] [rbp-B3h]
  int v43; // [rsp+78h] [rbp-B0h]
  int v44; // [rsp+7Ch] [rbp-ACh] BYREF
  unsigned int v45; // [rsp+80h] [rbp-A8h] BYREF
  int v46; // [rsp+84h] [rbp-A4h]
  unsigned int v47; // [rsp+88h] [rbp-A0h]
  int v48; // [rsp+8Ch] [rbp-9Ch]
  int v49; // [rsp+90h] [rbp-98h]
  unsigned int v50; // [rsp+94h] [rbp-94h]
  __int64 v51; // [rsp+98h] [rbp-90h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-80h]
  unsigned int v54; // [rsp+B0h] [rbp-78h] BYREF
  void *Src; // [rsp+B8h] [rbp-70h]
  _DWORD *v56; // [rsp+C0h] [rbp-68h]
  __int64 v57; // [rsp+C8h] [rbp-60h]
  unsigned int v58; // [rsp+D0h] [rbp-58h]
  __int64 v59; // [rsp+D8h] [rbp-50h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-48h]
  __int64 v61; // [rsp+E8h] [rbp-40h]
  int v62[2]; // [rsp+F0h] [rbp-38h]
  int v63[2]; // [rsp+F8h] [rbp-30h]

  v7 = a1;
  IsCertificateRevoked = 0;
  v50 = 0;
  v44 = 50;
  v48 = 0;
  v45 = 0;
  v36 = 0;
  v8 = 0;
  v38 = 0;
  v9 = 48;
  v40 = 48;
  v46 = 0;
  v60 = 0LL;
  v49 = 0;
  v59 = 0LL;
  v43 = 0;
  Src = 0LL;
  v53 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v39 = 0;
  v57 = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)v63 = a1;
  Pool2 = ExAllocatePool2(0x102uLL);
  v11 = (_DWORD *)Pool2;
  v56 = (_DWORD *)Pool2;
  if ( !Pool2 )
  {
    CertificateEKUs = -1073741801;
    IsCertificateRevoked = -1073741801;
    v13 = a5;
    goto LABEL_94;
  }
  v53 = Pool2 + 800;
  v61 = Pool2 + 976;
  Src = (void *)(Pool2 + 1776);
  CertificateEKUs = I_MinCryptGetCertificateEKUs((_DWORD *)(v7 + 224), &v44, Pool2);
  IsCertificateRevoked = CertificateEKUs;
  if ( CertificateEKUs < 0 )
    goto LABEL_92;
  for ( i = 0; ; ++i )
  {
    v58 = i;
    if ( i >= v44 )
      break;
    v9 += ((v11[4 * i] + 3) & 0xFFFFFFFC) + 16;
    v40 = v9;
  }
  if ( a6 )
  {
    v9 += (*a6 + 3) & 0xFFFFFFFC;
    v40 = v9;
  }
  if ( a4
    && (*(_DWORD *)(a4 + 4) & 1) == 0
    && !(unsigned __int8)I_MinCryptCheckEKURequirements((unsigned int)v44, v11, a4) )
  {
    v36 |= 0x80000u;
    CertificateEKUs = -1073740760;
LABEL_13:
    IsCertificateRevoked = CertificateEKUs;
    goto LABEL_92;
  }
  if ( !(unsigned __int8)MinAsn1DecodeTime(v7 + 128, &v51) || !(unsigned __int8)MinAsn1DecodeTime(v7 + 144, &v52) )
  {
    v51 = 0LL;
    v52 = 0LL;
  }
  v42 = I_MinCryptCheckEKU((const void **)&qword_140B2CBC8, v44, (__int64)v11);
  if ( v42 && g_FlightSignedNotBefore > 0 && v51 < g_FlightSignedNotBefore )
  {
    v36 |= 0x600000u;
    CertificateEKUs = -1073740283;
    goto LABEL_13;
  }
  if ( g_IgnoreLifetimeSigningEKU || !I_MinCryptCheckEKU((const void **)&qword_140B2CBB8, v44, (__int64)v11) )
  {
LABEL_30:
    v13 = a5;
    while ( 1 )
    {
      if ( v48 )
        goto LABEL_93;
      v16 = 120LL * (unsigned int)v46;
      *(_QWORD *)v62 = (char *)Src + v16 + 8;
      v47 = MinCryptDecodeHashAlgorithmIdentifier(v7 + 48);
      CertificateEKUs = MinCryptHashMemory(v47);
      IsCertificateRevoked = CertificateEKUs;
      if ( CertificateEKUs < 0 )
        goto LABEL_33;
      v17 = (char *)Src;
      *(_DWORD *)((char *)Src + v16) = v47;
      *(_DWORD *)&v17[v16 + 4] = v45;
      *(_OWORD *)&v17[v16 + 104] = *(_OWORD *)(v7 + 16);
      v18 = ((*(_DWORD *)(v7 + 16) + 3) & 0xFFFFFFFC) + v9;
      v40 = v18;
      v19 = &v17[v16 + 72];
      *(_OWORD *)v19 = 0LL;
      *(_OWORD *)&v17[v16 + 88] = 0LL;
      if ( a5 )
      {
        if ( (unsigned __int8)I_MinCryptGetCommonName(v7 + 160, (__int64)v19) )
        {
          v18 += (*(unsigned __int16 *)&v17[v16 + 80] + 3) & 0xFFFFFFFC;
          v40 = v18;
        }
        if ( (unsigned __int8)I_MinCryptGetCommonName(v7 + 112, (__int64)&v17[v16 + 88]) )
        {
          v18 += (*(unsigned __int16 *)&v17[v16 + 96] + 3) & 0xFFFFFFFC;
          v40 = v18;
        }
      }
      ++v46;
      v9 = v18 + 120;
      v40 = v9;
      IsCertificateRevoked = MinCryptIsCertificateRevoked(v47, &v17[v16 + 8], v45, &v59, &v45);
      if ( IsCertificateRevoked < 0 )
      {
        v49 = 1;
        v36 |= 0x200000u;
        v21 = v57;
        if ( v59 < v57 )
          v21 = v59;
        v57 = v21;
        IsCertificateRevoked = 0;
      }
      if ( a4 && (*(_DWORD *)(a4 + 4) & 1) != 0 )
      {
        v54 = 50;
        v22 = v61;
        CertificateEKUs = I_MinCryptGetCertificateEKUs((_DWORD *)(v7 + 224), &v54, v61);
        IsCertificateRevoked = CertificateEKUs;
        if ( CertificateEKUs < 0 )
          goto LABEL_93;
        if ( !(unsigned __int8)I_MinCryptCheckEKURequirements(v54, v22, a4) )
          break;
      }
      v23 = *(_DWORD *)(v7 + 112);
      if ( v23 == *(_DWORD *)(v7 + 160) )
      {
        v24 = memcmp(*(const void **)(v7 + 120), *(const void **)(v7 + 168), v23) == 0;
        v25 = v39;
        if ( v24 )
          v25 = 1;
        v39 = v25;
      }
      v26 = v39;
      LOBYTE(v20) = v39;
      CertificateEKUs = MincryptValidateBasicConstraints(v7 + 224, v50, v20, &v36);
      IsCertificateRevoked = CertificateEKUs;
      if ( CertificateEKUs < 0 )
        goto LABEL_93;
      if ( v26 )
      {
        v27 = (_OWORD *)(v7 + 176);
        RootByKey = I_MinCryptFindRootByKey((const void **)(v7 + 176));
        if ( RootByKey )
        {
          v27 = RootByKey + 2;
          v36 |= *((_DWORD *)RootByKey + 8) | 1;
          v43 = *((_DWORD *)RootByKey + 9);
        }
        else
        {
          if ( !a5 )
            goto LABEL_48;
          v29 = v36 | 1;
          v36 |= 1u;
          v43 = 2;
          if ( a4
            && (*(_DWORD *)(a4 + 4) & 0x20) != 0
            && ((unsigned int)MinCryptIsCertPresent(v7 + 16, *(_QWORD *)(a4 + 120), *(_DWORD *)(a4 + 112))
             || (unsigned int)MinCryptIsKeyPresent(v7 + 176, *(_QWORD *)(a4 + 104), *(_DWORD *)(a4 + 96))) )
          {
            v36 = v29 | 0x4000;
          }
        }
        if ( a5 )
        {
          v30 = v38;
          *(_OWORD *)(v53 + 16LL * v38) = *v27;
          v38 = v30 + 1;
          v9 += ((*(_DWORD *)v27 + 3) & 0xFFFFFFFC) + 16;
          v40 = v9;
        }
        v48 = 1;
      }
      else
      {
        v8 = v38;
        if ( a5 )
        {
          *(_OWORD *)(v53 + 16LL * v38) = *(_OWORD *)(v7 + 176);
          v38 = ++v8;
          v9 += ((*(_DWORD *)(v7 + 176) + 3) & 0xFFFFFFFC) + 16;
          v40 = v9;
        }
        RootByName = I_MinCryptFindRootByName((const void **)(v7 + 112), a4);
        if ( RootByName )
        {
          v27 = RootByName + 2;
          v36 |= *((_DWORD *)RootByName + 8);
          v43 = *((_DWORD *)RootByName + 9);
          v48 = 1;
          if ( a5 )
          {
            *(_OWORD *)(v53 + 16LL * v8) = *v27;
            v38 = v8 + 1;
            v9 += ((*(_DWORD *)v27 + 3) & 0xFFFFFFFC) + 16;
            v40 = v9;
          }
        }
        else
        {
          IssuerCertificateByName = I_MinCryptFindIssuerCertificateByName((unsigned int *)(v7 + 112), a2, a3, a4, v61);
          v33 = IssuerCertificateByName;
          v60 = IssuerCertificateByName;
          if ( IssuerCertificateByName )
          {
            v33 = IssuerCertificateByName & -(__int64)((unsigned int)MinCryptDecodeHashAlgorithmIdentifier(IssuerCertificateByName + 48) != 0);
            v60 = v33;
          }
          if ( !v33 )
          {
            if ( a4
              && (*(_DWORD *)(a4 + 4) & 0x20) != 0
              && (CertificateEKUs = MinCryptCheckCertsAndKeys(
                                      v47,
                                      v62[0],
                                      v45,
                                      v7,
                                      *(_QWORD *)(a4 + 120),
                                      *(_DWORD *)(a4 + 112),
                                      v35,
                                      *(_DWORD *)(a4 + 96)),
                  IsCertificateRevoked = CertificateEKUs,
                  CertificateEKUs >= 0) )
            {
              v36 |= 0x4000u;
            }
            else
            {
              v43 = 1;
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
              IsCertificateRevoked = CertificateEKUs;
            }
            goto LABEL_94;
          }
          v27 = (_OWORD *)(v33 + 176);
        }
      }
      CertificateEKUs = MinCryptVerifySignedHash2(v47, v62[0], v45, (unsigned int *)(v7 + 64), (__int64)v27, a4);
      IsCertificateRevoked = CertificateEKUs;
      if ( CertificateEKUs < 0 )
      {
LABEL_33:
        v36 |= 0x40000u;
        goto LABEL_93;
      }
      if ( !v48 )
      {
        if ( ++v50 >= 0xA )
        {
          v43 = 1;
          if ( a5 )
          {
            v36 |= 0x10u;
            CertificateEKUs = 0;
            goto LABEL_49;
          }
          v36 |= 0x20000u;
LABEL_48:
          CertificateEKUs = -1073740760;
LABEL_49:
          IsCertificateRevoked = CertificateEKUs;
          goto LABEL_93;
        }
        v7 = v60;
        *(_QWORD *)v63 = v60;
      }
    }
    v36 |= 0x80000u;
    goto LABEL_48;
  }
  v15 = 0;
  v41 = 0;
  if ( !v42 && MEMORY[0xFFFFF78000000014] < v51 || MEMORY[0xFFFFF78000000014] > v52 )
  {
    v15 = 1;
    v41 = 1;
  }
  if ( !v15 )
  {
    CertificateEKUs = IsCertificateRevoked;
    v7 = *(_QWORD *)v63;
    v9 = v40;
    v11 = v56;
    goto LABEL_30;
  }
  v36 |= 0x400000u;
  CertificateEKUs = -1073740283;
  IsCertificateRevoked = -1073740283;
  v9 = v40;
  v11 = v56;
LABEL_92:
  v13 = a5;
LABEL_93:
  v8 = v38;
LABEL_94:
  if ( v13 )
  {
    *(_DWORD *)v13 = 48;
    *(_DWORD *)(v13 + 4) = CertificateEKUs;
    *(_DWORD *)(v13 + 8) = v36;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v13 + 32) = v51;
    *(_QWORD *)(v13 + 40) = v52;
    if ( v49 )
      *(_QWORD *)(v13 + 24) = v57;
    if ( CertificateEKUs >= 0 )
      CertificateEKUs = I_MincryptAddChainInfo(v13, v9, v44, v8, v46, v43, (__int64)v11, v53, Src, (__int64)a6);
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0x72634943u);
  if ( CertificateEKUs >= 0 && v49 )
    return (unsigned int)-1073740285;
  return (unsigned int)CertificateEKUs;
}
