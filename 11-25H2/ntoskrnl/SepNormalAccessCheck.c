/*
 * XREFs of SepNormalAccessCheck @ 0x140366DE0
 * Callers:
 *     SepAccessCheck @ 0x1403662B0 (SepAccessCheck.c)
 * Callees:
 *     SepCanTokenMatchAllPackageSid @ 0x1403678D0 (SepCanTokenMatchAllPackageSid.c)
 *     SepMatchPackage @ 0x140367B50 (SepMatchPackage.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchCapability @ 0x140368F64 (SepMatchCapability.c)
 *     RtlSidHashLookup @ 0x140369A50 (RtlSidHashLookup.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14036B400 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepIsPackageSid @ 0x14036C3F0 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14036C460 (SepIsCapabilitySid.c)
 *     SepSidInToken @ 0x1403CF090 (SepSidInToken.c)
 *     AuthzBasepAddAccessTypeList @ 0x1403CF2F4 (AuthzBasepAddAccessTypeList.c)
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 *     memcmp @ 0x1406B4C10 (memcmp.c)
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
  __int64 v13; // r12
  int v14; // ebp
  __int64 v15; // r13
  unsigned int v16; // r15d
  int v17; // edi
  __int64 result; // rax
  int *v20; // rsi
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
  __int64 v36; // rbx
  int v37; // eax
  int v38; // esi
  _DWORD *v39; // rbx
  int v40; // eax
  int v41; // esi
  int v42; // eax
  int v43; // ebp
  __int64 v44; // rsi
  unsigned int v45; // ebx
  unsigned int i; // edi
  __int64 v47; // rbp
  __int64 v48; // rbx
  int v49; // eax
  unsigned int v50; // ebx
  _QWORD *v51; // rax
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // r10
  __int64 v55; // r11
  int v56; // eax
  _WORD *v57; // rcx
  int v58; // eax
  unsigned __int8 *v59; // rdi
  __int64 v60; // rbx
  _SID_AND_ATTRIBUTES_HASH *v61; // rbx
  PSID_AND_ATTRIBUTES v62; // rax
  ULONG Attributes; // ecx
  int v64; // ecx
  __int64 k; // r8
  unsigned int v66; // ebx
  __int64 j; // r9
  _DWORD *v68; // rdx
  int v69; // eax
  int v70; // [rsp+20h] [rbp-A8h]
  int v71; // [rsp+28h] [rbp-A0h]
  int v72; // [rsp+60h] [rbp-68h]
  int v73; // [rsp+64h] [rbp-64h]
  unsigned int v74; // [rsp+68h] [rbp-60h]
  unsigned int v75; // [rsp+6Ch] [rbp-5Ch]
  int v76; // [rsp+70h] [rbp-58h] BYREF
  unsigned int v77; // [rsp+74h] [rbp-54h]
  int *v78; // [rsp+78h] [rbp-50h]
  int v79; // [rsp+80h] [rbp-48h]
  int v80; // [rsp+84h] [rbp-44h]
  __int64 v81; // [rsp+88h] [rbp-40h]
  __int16 v84; // [rsp+E8h] [rbp+20h]

  v13 = a9;
  v14 = 0;
  v15 = a2;
  v16 = a8;
  v17 = *(_DWORD *)(a2 + 200) & 0x2000;
  result = *(unsigned __int16 *)(a4 + 4);
  v73 = 0;
  v20 = (int *)(a9 + 24);
  v78 = (int *)(a9 + 24);
  v80 = v17;
  v76 = -1;
  v77 = result;
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
    result = v77;
  }
  else
  {
    v78 = (int *)(a9 + 24);
  }
  if ( !v17 && !a11 )
  {
    v14 = *(_DWORD *)a13 | a1;
    v73 = v14;
  }
  v74 = v14;
  v23 = (char *)(a4 + 8);
  v79 = v14;
  v72 = 0;
  if ( (_DWORD)result )
  {
    v24 = (__int64)a7;
    while ( 1 )
    {
      v25 = *v20;
      if ( !*v20 && !v14 )
        return result;
      if ( (v23[1] & 8) == 0 && (v25 || !*v23 || *v23 == 9) )
        break;
LABEL_39:
      result = *((unsigned __int16 *)v23 + 1);
      a4 = (unsigned int)(v72 + 1);
      v17 = v80;
      v23 += result;
      v20 = v78;
      v14 = v73;
      v13 = a9;
      v72 = a4;
      if ( (unsigned int)a4 >= v77 )
        return result;
    }
    v26 = *v23;
    if ( !*v23 )
    {
      if ( v17 || a11 || !v14 )
        goto LABEL_13;
      v36 = SePackagePrefixSid;
      if ( (unsigned __int8)v23[9] >= 2u
        && v23[8] == *(_BYTE *)SePackagePrefixSid
        && RtlCompareMemory(v23 + 10, (const void *)(SePackagePrefixSid + 2), 6uLL) == 6 )
      {
        v37 = *((_DWORD *)v23 + 4);
        if ( v37 == *(_DWORD *)(v36 + 8) )
        {
          v38 = *((_DWORD *)v23 + 1);
          v39 = (_DWORD *)(a13 + 4);
          if ( v37 == 2 && v23[9] == 2 )
          {
            v40 = *((_DWORD *)v23 + 5);
            if ( v40 != 1 )
            {
              if ( v40 == 2 )
              {
                *v39 |= v74 & v38;
                *(_BYTE *)(a13 + 21) = 1;
              }
              goto LABEL_37;
            }
            v41 = v79 & v38;
            if ( !(unsigned __int8)SepCanTokenMatchAllPackageSid(v15) )
            {
              *(_DWORD *)(a13 + 16) |= v41;
              *(_BYTE *)(a13 + 24) = 1;
              goto LABEL_36;
            }
          }
          else
          {
            *(_BYTE *)(a13 + 20) = 1;
            if ( (*(_DWORD *)(v15 + 200) & 0x4000) == 0 )
              goto LABEL_37;
            v57 = *(_WORD **)(v15 + 784);
            if ( *v57 != *((_WORD *)v23 + 4)
              || memcmp(v57, v23 + 8, 4 * ((unsigned __int64)(unsigned __int16)*v57 >> 8) + 8) )
            {
              goto LABEL_37;
            }
            v41 = v74 & v38;
          }
          *v39 |= v41;
          *(_BYTE *)(a13 + 21) = 1;
LABEL_36:
          v39 = (_DWORD *)(a13 + 4);
LABEL_37:
          v42 = ~*v39;
          *(_DWORD *)a13 &= v42;
          v73 = v42 & v14;
          goto LABEL_38;
        }
      }
      v48 = SeCapabilityPrefixSid;
      if ( (unsigned __int8)v23[9] < 2u
        || v23[8] != *(_BYTE *)SeCapabilityPrefixSid
        || RtlCompareMemory(v23 + 10, (const void *)(SeCapabilityPrefixSid + 2), 6uLL) != 6
        || *((_DWORD *)v23 + 4) != *(_DWORD *)(v48 + 8) )
      {
LABEL_13:
        if ( !*v20 )
        {
          v24 = (__int64)a7;
          goto LABEL_39;
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
LABEL_96:
          v16 = a8;
          v58 = *((_DWORD *)v23 + 1);
          if ( a8 == 1 )
          {
            v15 = a2;
            *v20 &= ~v58;
          }
          else
          {
            AuthzBasepAddAccessTypeList(v13, a8, 0, v72, v58, 0);
            v15 = a2;
          }
        }
        else
        {
          if ( !v28 || !v29 )
          {
            v16 = a8;
            v24 = (__int64)a7;
            v15 = a2;
            goto LABEL_39;
          }
          v30 = v29[1];
          v31 = *(_WORD *)v29;
          v84 = *(_WORD *)v29;
          v32 = 4 * v30 + 8;
          v75 = v32;
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
              v43 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v35);
              v44 = *(_QWORD *)(v28 + 8) + 16LL * (v43 + (unsigned int)v34);
              v81 = *(_QWORD *)(v28 + 8);
              if ( **(_WORD **)v44 == v31 )
              {
                if ( !memcmp(v29, *(const void **)v44, v32) )
                {
                  v47 = v81;
                  goto LABEL_93;
                }
                v31 = v84;
                v32 = v75;
              }
              v35 = (unsigned __int8)v35 ^ (1 << v43);
            }
          }
          v45 = *(_DWORD *)v28;
          if ( *(_DWORD *)v28 > 0x40u )
          {
            for ( i = 64; i < v45; ++i )
            {
              v47 = *(_QWORD *)(v28 + 8);
              v44 = v47 + 16LL * i;
              if ( **(_WORD **)v44 == v31 )
              {
                if ( !memcmp(v29, *(const void **)v44, v32) )
                {
LABEL_93:
                  if ( !a11 && v44 == v47 && (*(_DWORD *)(v44 + 8) & 0x10) == 0 || (*(_DWORD *)(v44 + 8) & 4) != 0 )
                  {
                    LODWORD(v13) = a9;
                    v20 = v78;
                    goto LABEL_96;
                  }
                  break;
                }
                v31 = v84;
                v32 = v75;
              }
            }
          }
          v16 = a8;
          v15 = a2;
        }
        goto LABEL_38;
      }
LABEL_67:
      SepMatchCapability(v15, v74, v23 + 8, *((unsigned int *)v23 + 1), a13 + 22, a13 + 8);
      v49 = ~*(_DWORD *)(a13 + 8);
      *(_DWORD *)a13 &= v49;
      v73 = v49 & v14;
      goto LABEL_38;
    }
    if ( v26 != 5 )
    {
      switch ( v26 )
      {
        case 4:
          LOBYTE(v71) = a12;
          LOBYTE(v70) = a11;
          if ( !(unsigned __int8)SepSidInToken(v15, v24, &v23[4 * (unsigned __int8)v23[13] + 20], 0LL, v70, v71) )
            goto LABEL_38;
          LOBYTE(v71) = a12;
          LOBYTE(v70) = a11;
          if ( !(unsigned __int8)SepSidInToken(a3, 0LL, v23 + 12, 0LL, v70, v71) )
            goto LABEL_38;
          v56 = *((_DWORD *)v23 + 1);
          if ( v16 == 1 )
          {
            *v20 = v25 & ~v56;
            goto LABEL_38;
          }
          goto LABEL_87;
        case 1:
          v59 = (unsigned __int8 *)(v23 + 8);
          v60 = 504LL;
          if ( !a11 )
            v60 = 232LL;
          v61 = (_SID_AND_ATTRIBUTES_HASH *)(v15 + v60);
          if ( v24 && RtlEqualSid(SePrincipalSelfSid, v23 + 8) )
            v59 = a7;
          if ( !a12 || !RtlEqualSid(SeOwnerRightsSid, v59) )
          {
            v62 = RtlSidHashLookup(v61, v59);
            if ( !v62 )
              goto LABEL_38;
            if ( a11 || v62 != v61->SidAttr )
            {
              Attributes = v62->Attributes;
              if ( (Attributes & 4) == 0 && (Attributes & 0x10) == 0 )
                goto LABEL_38;
            }
          }
          break;
        case 6:
          LOBYTE(a4) = 1;
          v66 = *((_DWORD *)v23 + 2) & 1;
          LOBYTE(v71) = a12;
          LOBYTE(v70) = a11;
          if ( !(unsigned __int8)SepSidInToken(
                                   v15,
                                   v24,
                                   &v23[16 * v66 + ((8LL * (*((_DWORD *)v23 + 2) & 2)) | 0xC)],
                                   a4,
                                   v70,
                                   v71) )
            goto LABEL_38;
          if ( v66 && v23 != (char *)-12LL && a10 )
          {
            for ( j = 0LL; (unsigned int)j < v16; j = (unsigned int)(j + 1) )
            {
              v68 = (_DWORD *)(v13 + 48 * j);
              if ( *((_DWORD *)v23 + 3) == v68[1]
                && *((_DWORD *)v23 + 4) == v68[2]
                && *((_DWORD *)v23 + 5) == v68[3]
                && *((_DWORD *)v23 + 6) == v68[4] )
              {
                result = (unsigned int)v68[6];
                if ( ((unsigned int)result & *((_DWORD *)v23 + 1)) != 0 )
                  return result;
                goto LABEL_38;
              }
            }
            goto LABEL_38;
          }
          break;
        case 9:
          v50 = 4 * (unsigned __int8)v23[9] + 8;
          if ( *((unsigned __int16 *)v23 + 1) - v50 == 8 )
            goto LABEL_39;
          if ( a5 && !*a6 )
            AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
          v51 = *(_QWORD **)(v15 + 1096);
          if ( v51 )
          {
            v52 = v51[72];
            v53 = v51[74];
            v54 = v51[73];
            v55 = v51[75];
          }
          else
          {
            LODWORD(v52) = 0;
            v53 = 0LL;
            v54 = 0LL;
            v55 = 0LL;
          }
          AuthzBasepEvaluateAceCondition(
            v15,
            *(_QWORD *)(v15 + 776),
            *a6,
            v52,
            v53,
            v54,
            v55,
            (__int64)&v23[v50 + 8],
            *((unsigned __int16 *)v23 + 1) - v50 - 8,
            0,
            a11,
            (__int64)&v76);
          if ( v76 != 1 )
            goto LABEL_38;
          if ( !v17 && !a11 && v14 )
          {
            if ( (unsigned __int8)SepIsPackageSid(v23 + 8) )
            {
              SepMatchPackage(
                v15,
                v74,
                v23 + 8,
                *((unsigned int *)v23 + 1),
                a13 + 21,
                a13 + 4,
                a13 + 20,
                a13 + 16,
                a13 + 24);
              v69 = ~*(_DWORD *)(a13 + 4);
              *(_DWORD *)a13 &= v69;
              v73 = v69 & v14;
              goto LABEL_38;
            }
            if ( (unsigned __int8)SepIsCapabilitySid(v23 + 8) )
              goto LABEL_67;
          }
          v24 = (__int64)a7;
          if ( !*v20 )
            goto LABEL_39;
          LOBYTE(v71) = a12;
          LOBYTE(v70) = a11;
          if ( !(unsigned __int8)SepSidInToken(v15, a7, v23 + 8, 0LL, v70, v71) )
            goto LABEL_38;
          v56 = *((_DWORD *)v23 + 1);
LABEL_87:
          AuthzBasepAddAccessTypeList(v13, v16, 0, v72, v56, 0);
          goto LABEL_38;
        default:
          goto LABEL_39;
      }
      result = *((unsigned int *)v23 + 1);
      if ( ((unsigned int)result & *v20) != 0 )
        return result;
      goto LABEL_38;
    }
    v64 = *((_DWORD *)v23 + 2);
    if ( (v64 & 1) != 0 && v23 != (char *)-12LL )
    {
      if ( !a10 )
        goto LABEL_39;
      LOBYTE(v71) = a12;
      LOBYTE(v70) = a11;
      if ( (unsigned __int8)SepSidInToken(v15, v24, &v23[16 * (v64 & 1) + ((8LL * (v64 & 2)) | 0xC)], 0LL, v70, v71) )
      {
        for ( k = 0LL; (unsigned int)k < v16; k = (unsigned int)(k + 1) )
        {
          if ( *((_DWORD *)v23 + 3) == *(_DWORD *)(v13 + 48 * k + 4)
            && *((_DWORD *)v23 + 4) == *(_DWORD *)(v13 + 48 * k + 8)
            && *((_DWORD *)v23 + 5) == *(_DWORD *)(v13 + 48 * k + 12)
            && *((_DWORD *)v23 + 6) == *(_DWORD *)(v13 + 48 * k + 16) )
          {
            AuthzBasepAddAccessTypeList(v13, v16, k, v72, *((_DWORD *)v23 + 1), 0);
            goto LABEL_38;
          }
        }
      }
      goto LABEL_38;
    }
    LOBYTE(v71) = a12;
    LOBYTE(v70) = a11;
    if ( !(unsigned __int8)SepSidInToken(v15, v24, &v23[16 * (v64 & 1) + ((8LL * (v64 & 2)) | 0xC)], 0LL, v70, v71) )
    {
LABEL_38:
      v24 = (__int64)a7;
      goto LABEL_39;
    }
    v56 = *((_DWORD *)v23 + 1);
    if ( v16 == 1 )
    {
      *v20 &= ~v56;
      goto LABEL_38;
    }
    goto LABEL_87;
  }
  return result;
}
