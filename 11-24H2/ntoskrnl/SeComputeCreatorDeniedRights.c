/*
 * XREFs of SeComputeCreatorDeniedRights @ 0x1403B5DC0
 * Callers:
 *     ObpCreateHandle @ 0x140849D60 (ObpCreateHandle.c)
 *     ObpGrantAccess @ 0x14084D650 (ObpGrantAccess.c)
 *     ObpAdjustCreatorAccessState @ 0x14087EBB0 (ObpAdjustCreatorAccessState.c)
 * Callees:
 *     SepRmReferenceFindCap @ 0x1403B562C (SepRmReferenceFindCap.c)
 *     SepGetScopedPolicySid @ 0x1403B56EC (SepGetScopedPolicySid.c)
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

__int64 __fastcall SeComputeCreatorDeniedRights(
        struct _SECURITY_SUBJECT_CONTEXT *a1,
        __int64 a2,
        int a3,
        unsigned int *a4)
{
  unsigned int *v5; // rbp
  __int16 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rax
  char *v9; // rcx
  _WORD *SeOwnerRightsSid; // r14
  unsigned int v11; // esi
  char *v12; // rbx
  unsigned int i; // edi
  unsigned __int8 v14; // cl
  char *v15; // rcx
  char v16; // al
  void *ScopedPolicySid; // rax
  int Cap; // eax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v20; // rdx
  char *ClientToken; // rsi
  __int64 v22; // rax
  unsigned __int8 *v23; // r14
  unsigned int *v24; // rbp
  __int64 v25; // rax
  __int16 v26; // r9
  size_t v27; // r8
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdi
  unsigned __int8 v30; // r13
  int v31; // ebx
  const void **v32; // r12
  int v33; // ecx
  const void **v34; // r15
  unsigned int v35; // ebx
  unsigned int v36; // r13d
  unsigned int j; // edi
  _DWORD *v38; // rcx
  PSECURITY_DESCRIPTOR v39; // rbx
  unsigned int v40; // ebp
  char *v41; // r15
  __int64 v42; // rax
  __int16 v43; // r8
  unsigned int v44; // r9d
  unsigned __int64 v45; // rsi
  unsigned __int8 v46; // bp
  int v47; // ebx
  int v48; // r12d
  __int64 v49; // rdi
  unsigned int v50; // ebx
  __int64 v51; // rax
  __int16 v52; // [rsp+50h] [rbp-68h]
  __int16 v53; // [rsp+50h] [rbp-68h]
  unsigned int v54; // [rsp+54h] [rbp-64h]
  unsigned int v55; // [rsp+54h] [rbp-64h]
  NTSTATUS AccessStatus; // [rsp+5Ch] [rbp-5Ch] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+60h] [rbp-58h] BYREF
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v58; // [rsp+68h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-48h]

  AccessStatus = 0;
  GrantedAccess = 0;
  if ( (a3 & 0xC0000) == 0 )
    return 0LL;
  v5 = *(unsigned int **)(*(_QWORD *)(a2 + 72) + 48LL);
  SecurityDescriptor = v5;
  if ( !v5 )
  {
    SecurityDescriptor = a4;
    v5 = a4;
    if ( !a4 )
    {
      v5 = *(unsigned int **)(a2 + 64);
      SecurityDescriptor = v5;
      if ( !v5 )
        return 0LL;
    }
  }
  v6 = *((_WORD *)v5 + 1);
  if ( (v6 & 4) != 0 )
  {
    if ( v6 >= 0 )
    {
      v9 = (char *)*((_QWORD *)v5 + 4);
    }
    else
    {
      v8 = v5[4];
      if ( !(_DWORD)v8 )
        goto LABEL_6;
      v9 = (char *)v5 + v8;
    }
    SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
    if ( !v9 )
      goto LABEL_6;
    v11 = *((unsigned __int16 *)v9 + 2);
    v12 = v9 + 8;
    for ( i = 0; ; ++i )
    {
      if ( i >= v11 )
        goto LABEL_6;
      if ( (v12[1] & 8) == 0 )
        break;
LABEL_24:
      v12 += *((unsigned __int16 *)v12 + 1);
    }
    v14 = *v12;
    if ( (unsigned __int8)(*v12 - 11) > 1u && (unsigned __int8)(v14 - 5) > 3u )
    {
      if ( v14 < 0xFu )
      {
        if ( v14 == 4 )
        {
          v15 = v12 + 12;
          goto LABEL_21;
        }
        if ( v14 < 0xBu )
          goto LABEL_20;
        goto LABEL_100;
      }
      if ( v14 > 0x10u )
      {
LABEL_100:
        if ( (unsigned __int8)(v14 - 13) > 1u )
          goto LABEL_24;
LABEL_20:
        v15 = v12 + 8;
LABEL_21:
        if ( v15
          && *(_WORD *)v15 == *SeOwnerRightsSid
          && !memcmp(v15, SeOwnerRightsSid, 4 * ((unsigned __int64)*(unsigned __int16 *)v15 >> 8) + 8) )
        {
          goto LABEL_34;
        }
        goto LABEL_24;
      }
    }
    v15 = &v12[16 * (*((_DWORD *)v12 + 2) & 1) + ((8LL * (*((_DWORD *)v12 + 2) & 2)) | 0xC)];
    goto LABEL_21;
  }
LABEL_6:
  if ( (v6 & 0x10) != 0 )
  {
    if ( v6 >= 0 )
    {
      v7 = *((_QWORD *)v5 + 3);
    }
    else
    {
      v51 = v5[3];
      if ( (_DWORD)v51 )
        v7 = (__int64)v5 + v51;
      else
        v7 = 0LL;
    }
  }
  else
  {
    v7 = 0LL;
  }
  v58 = 0LL;
  if ( !SepRmEnforceCap )
    return 0LL;
  if ( !v7 )
    return 0LL;
  ScopedPolicySid = (void *)SepGetScopedPolicySid(v7);
  if ( !ScopedPolicySid )
    return 0LL;
  Cap = SepRmReferenceFindCap(ScopedPolicySid, &v58);
  v20 = v58;
  if ( Cap < 0 )
    v20 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)SepRmDefaultCap;
  if ( ((__int64)v20[2].Linkage.Blink & 1) == 0 )
    return 0LL;
LABEL_34:
  ClientToken = (char *)a1->ClientToken;
  if ( !a1->ClientToken )
    ClientToken = (char *)a1->PrimaryToken;
  if ( *((__int16 *)v5 + 1) >= 0 )
  {
    v23 = (unsigned __int8 *)*((_QWORD *)v5 + 1);
  }
  else
  {
    v22 = v5[1];
    if ( (_DWORD)v22 )
      v23 = (unsigned __int8 *)v5 + v22;
    else
      v23 = 0LL;
  }
  v24 = (unsigned int *)(ClientToken + 232);
  if ( ClientToken == (char *)-232LL || !v23 )
    return 0LL;
  v25 = v23[1];
  v26 = *(_WORD *)v23;
  v52 = *(_WORD *)v23;
  v27 = (unsigned int)(4 * v25 + 8);
  v28 = v23[4 * v25 + 4];
  v54 = v27;
  v29 = *(_QWORD *)&v24[2 * (v28 & 0xF) + 4] & *(_QWORD *)&v24[2 * (v28 >> 4) + 36];
  v30 = 0;
LABEL_42:
  if ( v29 )
  {
    LOBYTE(v31) = v29;
    while ( 1 )
    {
      if ( !(_BYTE)v31 )
      {
        v30 += 8;
        v29 >>= 8;
        goto LABEL_42;
      }
      v32 = (const void **)*((_QWORD *)ClientToken + 30);
      v33 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v31);
      LODWORD(v58) = v33;
      v34 = &v32[2 * v33] + 2 * (unsigned int)v30;
      if ( *(_WORD *)*v34 == v26 )
      {
        if ( !memcmp(v23, *v34, v27) )
        {
          v36 = 64;
LABEL_57:
          v38 = v34 + 1;
          if ( (v34 != v32 || (*v38 & 0x10) != 0) && (*v38 & 4) == 0 )
            return 0LL;
          if ( *((_DWORD *)ClientToken + 32) )
          {
            v41 = ClientToken + 504;
            if ( ClientToken != (char *)-504LL )
            {
              v42 = v23[1];
              v43 = *(_WORD *)v23;
              v53 = *(_WORD *)v23;
              v44 = 4 * v42 + 8;
              v55 = v44;
              v45 = *(_QWORD *)&v41[8 * (v23[4 * v42 + 4] & 0xF) + 16] & *(_QWORD *)&v41[8
                                                                                       * ((unsigned __int64)v23[4 * v42 + 4] >> 4)
                                                                                       + 144];
              v46 = 0;
              while ( v45 )
              {
                LOBYTE(v47) = v45;
                while ( (_BYTE)v47 )
                {
                  v48 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v47);
                  v49 = *((_QWORD *)v41 + 1) + 16LL * (v48 + (unsigned int)v46);
                  if ( **(_WORD **)v49 == v43 )
                  {
                    if ( !memcmp(v23, *(const void **)v49, v44) )
                      goto LABEL_26;
                    v43 = v53;
                    v44 = v55;
                  }
                  v47 = (unsigned __int8)v47 ^ (1 << v48);
                }
                v46 += 8;
                v45 >>= 8;
              }
              v50 = *(_DWORD *)v41;
              if ( *(_DWORD *)v41 > 0x40u )
              {
                while ( v36 < v50 )
                {
                  v49 = *((_QWORD *)v41 + 1) + 16LL * v36;
                  if ( **(_WORD **)v49 == v43 )
                  {
                    if ( !memcmp(v23, *(const void **)v49, v44) )
                    {
LABEL_26:
                      if ( (*(_DWORD *)(v49 + 8) & 4) == 0 )
                        break;
                      v16 = 1;
                      goto LABEL_28;
                    }
                    v43 = v53;
                    v44 = v55;
                  }
                  ++v36;
                }
              }
            }
            v16 = 0;
LABEL_28:
            if ( !v16 )
              return 0LL;
          }
          v39 = SecurityDescriptor;
          if ( (a3 & 0x40000) != 0 )
          {
            v40 = 0;
            if ( !SeAccessCheck(
                    SecurityDescriptor,
                    a1,
                    1u,
                    0x40000u,
                    0,
                    0LL,
                    (PGENERIC_MAPPING)&StandardBitMapping,
                    KeGetCurrentThread()->PreviousMode,
                    &GrantedAccess,
                    &AccessStatus) )
              v40 = 0x40000;
          }
          else
          {
            v40 = 0;
          }
          if ( (a3 & 0x80000) != 0
            && !SeAccessCheck(
                  v39,
                  a1,
                  1u,
                  0x80000u,
                  0,
                  0LL,
                  (PGENERIC_MAPPING)&StandardBitMapping,
                  KeGetCurrentThread()->PreviousMode,
                  &GrantedAccess,
                  &AccessStatus) )
          {
            v40 |= 0x80000u;
          }
          return v40;
        }
        LOBYTE(v33) = (_BYTE)v58;
        v27 = v54;
        v26 = v52;
      }
      v31 = (unsigned __int8)v31 ^ (1 << v33);
    }
  }
  v35 = *v24;
  if ( *v24 > 0x40 )
  {
    v36 = 64;
    for ( j = 64; j < v35; ++j )
    {
      v32 = (const void **)*((_QWORD *)ClientToken + 30);
      v34 = &v32[2 * j];
      if ( *(_WORD *)*v34 == v26 )
      {
        if ( !memcmp(v23, *v34, v27) )
          goto LABEL_57;
        v27 = v54;
        v26 = v52;
      }
    }
  }
  return 0LL;
}
