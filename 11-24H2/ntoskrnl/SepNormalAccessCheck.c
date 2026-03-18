/*
 * XREFs of SepNormalAccessCheck @ 0x140344500
 * Callers:
 *     SepAccessCheck @ 0x14035BC30 (SepAccessCheck.c)
 * Callees:
 *     SepCanTokenMatchAllPackageSid @ 0x1403440B0 (SepCanTokenMatchAllPackageSid.c)
 *     SepMatchPackage @ 0x140344430 (SepMatchPackage.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403450F0 (AuthzBasepEvaluateAceCondition.c)
 *     SepSidInToken @ 0x1403624E0 (SepSidInToken.c)
 *     AuthzBasepAddAccessTypeList @ 0x140362738 (AuthzBasepAddAccessTypeList.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403642B0 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepIsPackageSid @ 0x140428560 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14042FD20 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x140432DE8 (SepMatchCapability.c)
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 */

__int64 __fastcall SepNormalAccessCheck(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        unsigned __int8 *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  __int64 v13; // rsi
  int v14; // ebp
  __int64 v15; // r13
  unsigned int v16; // r15d
  int v17; // edi
  __int64 result; // rax
  int *v20; // r12
  _DWORD *v21; // rax
  __int64 v22; // rcx
  char *v23; // r14
  __int64 v24; // rdx
  int v25; // ebx
  char v26; // al
  __int64 v27; // r15
  __int64 v28; // r15
  unsigned __int8 *v29; // r13
  __int64 v30; // rax
  __int16 v31; // r8
  unsigned int v32; // r9d
  unsigned __int64 v33; // rdi
  unsigned __int8 v34; // r12
  int v35; // ebx
  int v36; // ebp
  __int64 v37; // rsi
  unsigned int v38; // ebx
  unsigned int i; // edi
  __int64 v40; // rbp
  __int64 v41; // rbx
  __int64 v42; // rdx
  unsigned __int64 v43; // r8
  int v44; // eax
  int v45; // esi
  _DWORD *v46; // rbx
  int v47; // eax
  int v48; // esi
  bool v49; // zf
  __int64 v50; // rax
  int v51; // eax
  unsigned __int8 *v52; // r12
  __int64 v53; // r15
  __int64 v54; // r15
  __int64 v55; // rax
  __int16 v56; // r8
  unsigned int v57; // r9d
  unsigned __int64 v58; // rdi
  unsigned __int8 v59; // r13
  int v60; // ebx
  __int64 v61; // rbx
  int v62; // eax
  int v63; // ebp
  __int64 v64; // rsi
  unsigned int v65; // ebx
  unsigned int v66; // edi
  __int64 v67; // rbp
  int v68; // eax
  _WORD *v69; // rcx
  unsigned int v70; // ebx
  _QWORD *v71; // rax
  __int64 v72; // r9
  __int64 v73; // r8
  __int64 v74; // r10
  __int64 v75; // r11
  __int64 j; // r8
  int v77; // eax
  int v78; // eax
  int v79; // ecx
  unsigned int v80; // ebx
  __int64 k; // r9
  _DWORD *v82; // rdx
  int v83; // eax
  __int64 v84; // [rsp+20h] [rbp-A8h]
  __int64 v85; // [rsp+28h] [rbp-A0h]
  int v86; // [rsp+60h] [rbp-68h]
  int v87; // [rsp+64h] [rbp-64h]
  int *v88; // [rsp+68h] [rbp-60h]
  unsigned int v89; // [rsp+70h] [rbp-58h]
  unsigned int v90; // [rsp+74h] [rbp-54h]
  unsigned int v91; // [rsp+74h] [rbp-54h]
  int v92; // [rsp+78h] [rbp-50h] BYREF
  unsigned int v93; // [rsp+7Ch] [rbp-4Ch]
  int v94; // [rsp+80h] [rbp-48h]
  int v95; // [rsp+84h] [rbp-44h]
  __int64 v96; // [rsp+88h] [rbp-40h]
  __int16 v99; // [rsp+E8h] [rbp+20h]
  __int16 v100; // [rsp+E8h] [rbp+20h]

  v13 = a9;
  v14 = 0;
  v15 = a2;
  v16 = a8;
  v17 = *(_DWORD *)(a2 + 200) & 0x2000;
  result = *(unsigned __int16 *)(a4 + 4);
  v87 = 0;
  v20 = (int *)(a9 + 24);
  v88 = (int *)(a9 + 24);
  v95 = v17;
  v92 = -1;
  v93 = result;
  if ( a8 )
  {
    v21 = (_DWORD *)(a9 + 24);
    v22 = a8;
    do
    {
      *v21 = a1;
      v21 += 12;
      --v22;
    }
    while ( v22 );
    result = v93;
  }
  else
  {
    v88 = (int *)(a9 + 24);
  }
  if ( !v17 && !a11 )
  {
    v14 = *(_DWORD *)a13 | a1;
    v87 = v14;
  }
  v89 = v14;
  v23 = (char *)(a4 + 8);
  v94 = v14;
  v86 = 0;
  if ( !(_DWORD)result )
    return result;
  v24 = (__int64)a7;
  while ( 1 )
  {
    v25 = *v20;
    if ( !*v20 && !v14 )
      return result;
    if ( (v23[1] & 8) != 0 || !v25 && *v23 && *v23 != 9 )
      goto LABEL_28;
    v26 = *v23;
    if ( !*v23 )
    {
      if ( !v17 && !a11 && v14 )
      {
        v41 = SePackagePrefixSid;
        if ( (unsigned __int8)v23[9] >= 2u
          && v23[8] == *(_BYTE *)SePackagePrefixSid
          && RtlCompareMemory(v23 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) == 6 )
        {
          v44 = *((_DWORD *)v23 + 4);
          if ( v44 == *(_DWORD *)(v41 + 8) )
          {
            v45 = *((_DWORD *)v23 + 1);
            v46 = (_DWORD *)(a13 + 4);
            if ( v44 == 2 && v23[9] == 2 )
            {
              v47 = *((_DWORD *)v23 + 5);
              if ( v47 != 1 )
              {
                if ( v47 == 2 )
                {
                  *v46 |= v89 & v45;
                  *(_BYTE *)(a13 + 21) = 1;
                  v77 = ~*v46;
                  v87 = v77 & v14;
                  *(_DWORD *)a13 &= v77;
                  goto LABEL_27;
                }
LABEL_55:
                v51 = ~*v46;
                v87 = v51 & v14;
                *(_DWORD *)a13 &= v51;
                goto LABEL_27;
              }
              v48 = v94 & v45;
              v49 = !SepCanTokenMatchAllPackageSid(v15, v42, v43);
              v50 = a13;
              if ( v49 )
              {
                *(_DWORD *)(a13 + 16) |= v48;
                *(_BYTE *)(a13 + 24) = 1;
                goto LABEL_54;
              }
            }
            else
            {
              *(_BYTE *)(a13 + 20) = 1;
              if ( (*(_DWORD *)(v15 + 200) & 0x4000) == 0 )
                goto LABEL_55;
              v69 = *(_WORD **)(v15 + 784);
              if ( *v69 != *((_WORD *)v23 + 4)
                || memcmp(v69, v23 + 8, 4 * ((unsigned __int64)(unsigned __int16)*v69 >> 8) + 8) )
              {
                goto LABEL_55;
              }
              v48 = v89 & v45;
              v50 = a13;
            }
            *v46 |= v48;
            *(_BYTE *)(v50 + 21) = 1;
LABEL_54:
            v46 = (_DWORD *)(v50 + 4);
            goto LABEL_55;
          }
        }
        v61 = SeCapabilityPrefixSid;
        if ( (unsigned __int8)v23[9] >= 2u
          && v23[8] == *(_BYTE *)SeCapabilityPrefixSid
          && RtlCompareMemory(v23 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
          && *((_DWORD *)v23 + 4) == *(_DWORD *)(v61 + 8) )
        {
          goto LABEL_78;
        }
      }
      if ( !*v20 )
      {
        v24 = (__int64)a7;
        goto LABEL_28;
      }
      v27 = 504LL;
      if ( !a11 )
        v27 = 232LL;
      v28 = v15 + v27;
      v29 = (unsigned __int8 *)(v23 + 8);
      if ( a7
        && *(_WORD *)SePrincipalSelfSid == *(_WORD *)v29
        && !memcmp(
              SePrincipalSelfSid,
              v23 + 8,
              4 * ((unsigned __int64)*(unsigned __int16 *)SePrincipalSelfSid >> 8) + 8) )
      {
        v29 = a7;
      }
      if ( a12
        && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v29
        && !memcmp(SeOwnerRightsSid, v29, 4 * ((unsigned __int64)*(unsigned __int16 *)SeOwnerRightsSid >> 8) + 8) )
      {
        goto LABEL_97;
      }
      if ( !v28 || !v29 )
      {
        v16 = a8;
        v24 = (__int64)a7;
        goto LABEL_28;
      }
      v30 = v29[1];
      v31 = *(_WORD *)v29;
      v99 = *(_WORD *)v29;
      v32 = 4 * v30 + 8;
      v90 = v32;
      v33 = *(_QWORD *)(v28 + 8LL * (v29[4 * v30 + 4] & 0xF) + 16) & *(_QWORD *)(v28
                                                                               + 8
                                                                               * ((unsigned __int64)v29[4 * v30 + 4] >> 4)
                                                                               + 144);
      v34 = 0;
LABEL_21:
      if ( v33 )
      {
        LOBYTE(v35) = v33;
        while ( 1 )
        {
          if ( !(_BYTE)v35 )
          {
            v34 += 8;
            v33 >>= 8;
            goto LABEL_21;
          }
          v36 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v35);
          v37 = *(_QWORD *)(v28 + 8) + 16LL * (v36 + (unsigned int)v34);
          v96 = *(_QWORD *)(v28 + 8);
          if ( **(_WORD **)v37 == v31 )
          {
            if ( !memcmp(v29, *(const void **)v37, v32) )
            {
              v40 = v96;
LABEL_94:
              if ( !a11 && v37 == v40 && (*(_DWORD *)(v37 + 8) & 0x10) == 0 )
              {
                v20 = v88;
LABEL_96:
                LODWORD(v13) = a9;
LABEL_97:
                v16 = a8;
LABEL_98:
                v68 = *((_DWORD *)v23 + 1);
                if ( v16 == 1 )
                {
                  *v20 &= ~v68;
                  goto LABEL_27;
                }
LABEL_123:
                LODWORD(j) = 0;
LABEL_124:
                AuthzBasepAddAccessTypeList(v13, v16, j, v86, v68, 0);
                goto LABEL_27;
              }
              v20 = v88;
              if ( (*(_DWORD *)(v37 + 8) & 4) != 0 )
                goto LABEL_96;
LABEL_26:
              v16 = a8;
              goto LABEL_27;
            }
            v31 = v99;
            v32 = v90;
          }
          v35 = (unsigned __int8)v35 ^ (1 << v36);
        }
      }
      v38 = *(_DWORD *)v28;
      if ( *(_DWORD *)v28 > 0x40u )
      {
        for ( i = 64; i < v38; ++i )
        {
          v40 = *(_QWORD *)(v28 + 8);
          v37 = v40 + 16LL * i;
          if ( **(_WORD **)v37 == v31 )
          {
            if ( !memcmp(v29, *(const void **)v37, v32) )
              goto LABEL_94;
            v31 = v99;
            v32 = v90;
          }
        }
      }
LABEL_25:
      v20 = v88;
      goto LABEL_26;
    }
    if ( v26 == 5 )
    {
      v79 = *((_DWORD *)v23 + 2);
      if ( (v79 & 1) == 0 || v23 == (char *)-12LL )
      {
        LOBYTE(v85) = a12;
        LOBYTE(v84) = a11;
        if ( (unsigned __int8)SepSidInToken(v15, v24, &v23[16 * (v79 & 1) + ((8LL * (v79 & 2)) | 0xC)], 0LL, v84, v85) )
          goto LABEL_98;
        goto LABEL_27;
      }
      if ( !a10 )
        goto LABEL_28;
      LOBYTE(v85) = a12;
      LOBYTE(v84) = a11;
      if ( (unsigned __int8)SepSidInToken(v15, v24, &v23[16 * (v79 & 1) + ((8LL * (v79 & 2)) | 0xC)], 0LL, v84, v85) )
      {
        for ( j = 0LL; (unsigned int)j < v16; j = (unsigned int)(j + 1) )
        {
          if ( *((_DWORD *)v23 + 3) == *(_DWORD *)(v13 + 48 * j + 4)
            && *((_DWORD *)v23 + 4) == *(_DWORD *)(v13 + 48 * j + 8)
            && *((_DWORD *)v23 + 5) == *(_DWORD *)(v13 + 48 * j + 12)
            && *((_DWORD *)v23 + 6) == *(_DWORD *)(v13 + 48 * j + 16) )
          {
            v68 = *((_DWORD *)v23 + 1);
            goto LABEL_124;
          }
        }
      }
      goto LABEL_27;
    }
    if ( v26 == 4 )
    {
      LOBYTE(v85) = a12;
      LOBYTE(v84) = a11;
      if ( (unsigned __int8)SepSidInToken(v15, v24, &v23[4 * (unsigned __int8)v23[13] + 20], 0LL, v84, v85) )
      {
        LOBYTE(v85) = a12;
        LOBYTE(v84) = a11;
        if ( (unsigned __int8)SepSidInToken(a3, 0LL, v23 + 12, 0LL, v84, v85) )
        {
          v68 = *((_DWORD *)v23 + 1);
          if ( v16 != 1 )
            goto LABEL_123;
          *v20 = v25 & ~v68;
        }
      }
      goto LABEL_27;
    }
    if ( v26 == 1 )
      break;
    if ( v26 == 6 )
    {
      LOBYTE(a4) = 1;
      v80 = *((_DWORD *)v23 + 2) & 1;
      LOBYTE(v85) = a12;
      LOBYTE(v84) = a11;
      if ( !(unsigned __int8)SepSidInToken(
                               v15,
                               v24,
                               &v23[16 * v80 + ((8LL * (*((_DWORD *)v23 + 2) & 2)) | 0xC)],
                               a4,
                               v84,
                               v85) )
        goto LABEL_27;
      if ( !v80 || v23 == (char *)-12LL || !a10 )
      {
        result = *((unsigned int *)v23 + 1);
        if ( ((unsigned int)result & *v20) == 0 )
          goto LABEL_27;
        return result;
      }
      for ( k = 0LL; ; k = (unsigned int)(k + 1) )
      {
        if ( (unsigned int)k >= v16 )
          goto LABEL_27;
        v82 = (_DWORD *)(v13 + 48 * k);
        if ( *((_DWORD *)v23 + 3) == v82[1]
          && *((_DWORD *)v23 + 4) == v82[2]
          && *((_DWORD *)v23 + 5) == v82[3]
          && *((_DWORD *)v23 + 6) == v82[4] )
        {
          break;
        }
      }
      result = (unsigned int)v82[6];
      if ( ((unsigned int)result & *((_DWORD *)v23 + 1)) != 0 )
        return result;
LABEL_27:
      v24 = (__int64)a7;
      goto LABEL_28;
    }
    if ( v26 == 9 )
    {
      v70 = 4 * (unsigned __int8)v23[9] + 8;
      if ( *((unsigned __int16 *)v23 + 1) - v70 != 8 )
      {
        if ( a5 && !*a6 )
          AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
        v71 = *(_QWORD **)(v15 + 1096);
        if ( v71 )
        {
          v72 = v71[72];
          v73 = v71[74];
          v74 = v71[73];
          v75 = v71[75];
        }
        else
        {
          LODWORD(v72) = 0;
          v73 = 0LL;
          v74 = 0LL;
          v75 = 0LL;
        }
        AuthzBasepEvaluateAceCondition(
          v15,
          *(_QWORD *)(v15 + 776),
          *a6,
          v72,
          v73,
          v74,
          v75,
          (__int64)&v23[v70 + 8],
          *((unsigned __int16 *)v23 + 1) - v70 - 8,
          0,
          a11,
          (__int64)&v92);
        if ( v92 != 1 )
          goto LABEL_27;
        if ( !v17 && !a11 && v14 )
        {
          if ( (unsigned __int8)SepIsPackageSid(v23 + 8) )
          {
            SepMatchPackage(
              v15,
              v89,
              (_WORD *)v23 + 4,
              *((_DWORD *)v23 + 1),
              (_BYTE *)(a13 + 21),
              (_DWORD *)(a13 + 4),
              (_BYTE *)(a13 + 20),
              (_DWORD *)(a13 + 16),
              (_BYTE *)(a13 + 24));
            v83 = ~*(_DWORD *)(a13 + 4);
            *(_DWORD *)a13 &= v83;
            v87 = v83 & v14;
            goto LABEL_27;
          }
          if ( (unsigned __int8)SepIsCapabilitySid(v23 + 8) )
          {
LABEL_78:
            SepMatchCapability(v15, v89, v23 + 8, *((unsigned int *)v23 + 1), a13 + 22, a13 + 8);
            v62 = ~*(_DWORD *)(a13 + 8);
            *(_DWORD *)a13 &= v62;
            v87 = v62 & v14;
            goto LABEL_27;
          }
        }
        v24 = (__int64)a7;
        if ( *v20 )
        {
          LOBYTE(v85) = a12;
          LOBYTE(v84) = a11;
          if ( (unsigned __int8)SepSidInToken(v15, a7, v23 + 8, 0LL, v84, v85) )
          {
            v68 = *((_DWORD *)v23 + 1);
            goto LABEL_123;
          }
          goto LABEL_27;
        }
      }
    }
LABEL_28:
    result = *((unsigned __int16 *)v23 + 1);
    a4 = (unsigned int)(v86 + 1);
    v17 = v95;
    v23 += result;
    v14 = v87;
    v15 = a2;
    v13 = a9;
    v86 = a4;
    if ( (unsigned int)a4 >= v93 )
      return result;
  }
  v52 = (unsigned __int8 *)(v23 + 8);
  v53 = 504LL;
  if ( !a11 )
    v53 = 232LL;
  v54 = v15 + v53;
  if ( v24 && RtlEqualSid(SePrincipalSelfSid, v23 + 8) )
    v52 = a7;
  if ( a12
    && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v52
    && !memcmp(SeOwnerRightsSid, v52, 4 * ((unsigned __int64)*(unsigned __int16 *)SeOwnerRightsSid >> 8) + 8) )
  {
    goto LABEL_136;
  }
  if ( !v54 || !v52 )
    goto LABEL_25;
  v55 = v52[1];
  v56 = *(_WORD *)v52;
  v100 = *(_WORD *)v52;
  v57 = 4 * v55 + 8;
  v91 = v57;
  v58 = *(_QWORD *)(v54 + 8LL * (v52[4 * v55 + 4] & 0xF) + 16) & *(_QWORD *)(v54
                                                                           + 8
                                                                           * ((unsigned __int64)v52[4 * v55 + 4] >> 4)
                                                                           + 144);
  v59 = 0;
  while ( v58 )
  {
    LOBYTE(v60) = v58;
    while ( (_BYTE)v60 )
    {
      v63 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v60);
      v64 = *(_QWORD *)(v54 + 8) + 16LL * (v63 + (unsigned int)v59);
      v96 = *(_QWORD *)(v54 + 8);
      if ( **(_WORD **)v64 == v56 )
      {
        if ( !memcmp(v52, *(const void **)v64, v57) )
        {
          v67 = v96;
          goto LABEL_134;
        }
        v56 = v100;
        v57 = v91;
      }
      v60 = (unsigned __int8)v60 ^ (1 << v63);
    }
    v59 += 8;
    v58 >>= 8;
  }
  v65 = *(_DWORD *)v54;
  if ( *(_DWORD *)v54 <= 0x40u )
    goto LABEL_25;
  v66 = 64;
  while ( 2 )
  {
    if ( v66 >= v65 )
      goto LABEL_25;
    v67 = *(_QWORD *)(v54 + 8);
    v64 = v67 + 16LL * v66;
    if ( **(_WORD **)v64 != v56 )
    {
LABEL_92:
      ++v66;
      continue;
    }
    break;
  }
  if ( memcmp(v52, *(const void **)v64, v57) )
  {
    v56 = v100;
    v57 = v91;
    goto LABEL_92;
  }
LABEL_134:
  if ( a11 || v64 != v67 )
  {
    v78 = *(_DWORD *)(v64 + 8);
    if ( (v78 & 4) == 0 && (v78 & 0x10) == 0 )
      goto LABEL_25;
  }
LABEL_136:
  v20 = v88;
  result = *((unsigned int *)v23 + 1);
  if ( ((unsigned int)result & *v88) == 0 )
    goto LABEL_26;
  return result;
}
