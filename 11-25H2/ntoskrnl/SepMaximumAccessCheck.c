/*
 * XREFs of SepMaximumAccessCheck @ 0x140368FC0
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
 *     memcmp @ 0x1406B4C10 (memcmp.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        unsigned __int8 a11,
        char a12,
        __int64 a13)
{
  __int64 v13; // rsi
  int v14; // edi
  unsigned __int8 v15; // r12
  __int64 v16; // r13
  __int64 result; // rax
  char *v18; // r14
  unsigned int v19; // ebp
  __int64 v20; // r15
  char v21; // al
  unsigned __int8 *v22; // r13
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // rax
  __int16 v26; // r8
  unsigned int v27; // r9d
  unsigned __int64 v28; // rdi
  unsigned __int8 i; // cl
  int v30; // ebx
  __int64 v31; // r15
  int v32; // ebp
  __int64 v33; // rsi
  unsigned int v34; // ebx
  unsigned int j; // edi
  int v36; // edi
  int v37; // eax
  bool CanTokenMatchAllPackageSid; // al
  _DWORD *v39; // rcx
  BOOLEAN v40; // al
  unsigned int v41; // ebx
  _QWORD *v42; // rax
  void *v43; // r9
  void *v44; // r8
  void *v45; // r10
  void *v46; // r11
  __int64 v47; // rdx
  unsigned int *v48; // rcx
  __int64 v49; // rdx
  char *v50; // r8
  __int64 v51; // rcx
  int v52; // ecx
  __int64 v53; // r8
  char *v54; // rax
  unsigned int v55; // ebx
  __int64 m; // r8
  int v57; // eax
  __int64 k; // r8
  __int64 v59; // rdx
  _DWORD *v60; // rcx
  int v61; // edi
  PSID_AND_ATTRIBUTES v62; // rax
  int v63; // [rsp+20h] [rbp-A8h]
  int v64; // [rsp+28h] [rbp-A0h]
  __int16 v65; // [rsp+60h] [rbp-68h]
  unsigned int v66; // [rsp+64h] [rbp-64h]
  unsigned int v67; // [rsp+68h] [rbp-60h]
  int v68; // [rsp+6Ch] [rbp-5Ch] BYREF
  unsigned int v69; // [rsp+70h] [rbp-58h]
  int v70; // [rsp+74h] [rbp-54h]
  unsigned __int8 v73; // [rsp+E0h] [rbp+18h]
  __int64 v74; // [rsp+E8h] [rbp+20h]

  v74 = a4;
  v13 = a1;
  v14 = *(_DWORD *)(a1 + 200) & 0x2000;
  v15 = a11;
  v16 = a2;
  v70 = v14;
  v68 = -1;
  if ( a11 && a7 )
  {
    v47 = a7;
    v48 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v48 - 1) = *v48;
      v48 += 12;
      --v47;
    }
    while ( v47 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v18 = (char *)(a3 + 8);
  v19 = 0;
  v69 = result;
  v66 = 0;
  if ( (_DWORD)result )
  {
    v20 = a6;
    while ( (v18[1] & 8) != 0 )
    {
LABEL_34:
      result = *((unsigned __int16 *)v18 + 1);
      ++v19;
      v14 = v70;
      v18 += result;
      v13 = a1;
      v20 = a6;
      v66 = v19;
      if ( v19 >= v69 )
        goto LABEL_35;
    }
    v21 = *v18;
    if ( !*v18 )
    {
      if ( !v14 && !v15 )
      {
        if ( (unsigned __int8)SepIsPackageSid(v18 + 8) )
        {
          v36 = *((_DWORD *)v18 + 1);
          if ( *((_DWORD *)v18 + 4) == 2 && v18[9] == 2 )
          {
            v37 = *((_DWORD *)v18 + 5);
            if ( v37 == 1 )
            {
              CanTokenMatchAllPackageSid = SepCanTokenMatchAllPackageSid(v13);
              v39 = (_DWORD *)a13;
              if ( !CanTokenMatchAllPackageSid )
              {
                *(_DWORD *)(a13 + 16) |= v36;
                v57 = ~*(_DWORD *)(a13 + 4);
                *(_BYTE *)(a13 + 24) = 1;
                *(_DWORD *)a13 &= v57;
                goto LABEL_33;
              }
              *(_DWORD *)(a13 + 4) |= v36;
              *(_BYTE *)(a13 + 21) = 1;
            }
            else
            {
              v39 = (_DWORD *)a13;
              if ( v37 == 2 )
              {
                *(_DWORD *)(a13 + 4) |= v36;
                *(_BYTE *)(a13 + 21) = 1;
                *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 4);
                goto LABEL_33;
              }
            }
          }
          else
          {
            *(_BYTE *)(a13 + 20) = 1;
            if ( (*(_DWORD *)(v13 + 200) & 0x4000) != 0 )
            {
              v40 = RtlEqualSid(*(PSID *)(v13 + 784), v18 + 8);
              v39 = (_DWORD *)a13;
              if ( v40 )
              {
                *(_DWORD *)(a13 + 4) |= v36;
                *(_BYTE *)(a13 + 21) = 1;
                *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 4);
                goto LABEL_33;
              }
            }
            else
            {
              v39 = (_DWORD *)a13;
            }
          }
          *v39 &= ~v39[1];
          goto LABEL_33;
        }
        if ( (unsigned __int8)SepIsCapabilitySid(v18 + 8) )
        {
          v61 = *((_DWORD *)v18 + 1);
          v62 = RtlSidHashLookup((PSID_AND_ATTRIBUTES_HASH)(v13 + 808), v18 + 8);
          if ( v62 && (v62->Attributes & 4) != 0 )
          {
            *(_DWORD *)(a13 + 8) |= v61;
            *(_BYTE *)(a13 + 22) = 1;
          }
          *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 8);
          goto LABEL_33;
        }
      }
      v22 = (unsigned __int8 *)(v18 + 8);
      v23 = 504LL;
      if ( !v15 )
        v23 = 232LL;
      v24 = v23 + v13;
      if ( v20
        && *(_WORD *)SePrincipalSelfSid == *(_WORD *)v22
        && !memcmp(
              SePrincipalSelfSid,
              v18 + 8,
              4 * ((unsigned __int64)*(unsigned __int16 *)SePrincipalSelfSid >> 8) + 8) )
      {
        v22 = (unsigned __int8 *)v20;
      }
      if ( a12
        && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v22
        && !memcmp(SeOwnerRightsSid, v22, 4 * ((unsigned __int64)*(unsigned __int16 *)SeOwnerRightsSid >> 8) + 8) )
      {
        v15 = a11;
LABEL_42:
        if ( a7 == 1 )
        {
          v16 = a2;
          *(_DWORD *)(a8 + 28) |= *((_DWORD *)v18 + 1) & ~*(_DWORD *)(a8 + 32);
          goto LABEL_33;
        }
        AuthzBasepAddAccessTypeList(a8, a7, 0, v19, *((_DWORD *)v18 + 1), 1);
      }
      else
      {
        if ( v24 && v22 )
        {
          v25 = v22[1];
          v26 = *(_WORD *)v22;
          v65 = *(_WORD *)v22;
          v27 = 4 * v25 + 8;
          v67 = v27;
          v28 = *(_QWORD *)(v24 + 8LL * (v22[4 * v25 + 4] & 0xF) + 16) & *(_QWORD *)(v24
                                                                                   + 8
                                                                                   * ((unsigned __int64)v22[4 * v25 + 4] >> 4)
                                                                                   + 144);
          for ( i = 0; ; i += 8 )
          {
            v73 = i;
            if ( !v28 )
              break;
            LOBYTE(v30) = v28;
            while ( (_BYTE)v30 )
            {
              v31 = *(_QWORD *)(v24 + 8);
              v32 = *((unsigned __int8 *)SidHashByteToIndexLookupTable + (unsigned __int8)v30);
              v33 = v31 + 16LL * (v32 + (unsigned int)i);
              if ( **(_WORD **)v33 == v26 )
              {
                if ( !memcmp(v22, *(const void **)v33, v27) )
                  goto LABEL_40;
                i = v73;
                v26 = v65;
                v27 = v67;
              }
              v30 = (unsigned __int8)v30 ^ (1 << v32);
            }
            v28 >>= 8;
          }
          v34 = *(_DWORD *)v24;
          if ( *(_DWORD *)v24 > 0x40u )
          {
            for ( j = 64; j < v34; ++j )
            {
              v31 = *(_QWORD *)(v24 + 8);
              v33 = v31 + 16LL * j;
              if ( **(_WORD **)v33 == v26 )
              {
                if ( !memcmp(v22, *(const void **)v33, v27) )
                {
LABEL_40:
                  v15 = a11;
                  if ( a11 || v33 != v31 || (*(_DWORD *)(v33 + 8) & 0x10) != 0 )
                  {
                    v19 = v66;
                    if ( (*(_DWORD *)(v33 + 8) & 4) == 0 )
                      goto LABEL_29;
                  }
                  else
                  {
                    v19 = v66;
                  }
                  goto LABEL_42;
                }
                v26 = v65;
                v27 = v67;
              }
            }
          }
          v19 = v66;
        }
        v15 = a11;
      }
LABEL_29:
      v16 = a2;
LABEL_33:
      a4 = v74;
      goto LABEL_34;
    }
    switch ( v21 )
    {
      case 5:
        v52 = *((_DWORD *)v18 + 2);
        if ( (v52 & 1) != 0 && v18 != (char *)-12LL )
        {
          if ( !a9 )
            goto LABEL_34;
          LOBYTE(v64) = a12;
          LOBYTE(v63) = v15;
          if ( (unsigned __int8)SepSidInToken(v13, v20, &v18[16 * (v52 & 1) + ((8LL * (v52 & 2)) | 0xC)], 0LL, v63, v64) )
          {
            for ( k = 0LL; (unsigned int)k < a7; k = (unsigned int)(k + 1) )
            {
              if ( *((_DWORD *)v18 + 3) == *(_DWORD *)(a8 + 48 * k + 4)
                && *((_DWORD *)v18 + 4) == *(_DWORD *)(a8 + 48 * k + 8)
                && *((_DWORD *)v18 + 5) == *(_DWORD *)(a8 + 48 * k + 12)
                && *((_DWORD *)v18 + 6) == *(_DWORD *)(a8 + 48 * k + 16) )
              {
                AuthzBasepAddAccessTypeList(a8, a7, k, v19, *((_DWORD *)v18 + 1), 1);
                goto LABEL_33;
              }
            }
          }
          goto LABEL_33;
        }
        v49 = v20;
        v53 = 16LL * (v52 & 1);
        v54 = &v18[(8LL * (v52 & 2)) | 0xC];
        v51 = v13;
        v50 = &v54[v53];
        LOBYTE(v64) = a12;
        LOBYTE(v63) = v15;
        break;
      case 4:
        LOBYTE(v64) = a12;
        LOBYTE(v63) = v15;
        if ( !(unsigned __int8)SepSidInToken(v13, v20, &v18[4 * (unsigned __int8)v18[13] + 20], 0LL, v63, v64) )
          goto LABEL_33;
        LOBYTE(v64) = a12;
        v49 = 0LL;
        LOBYTE(v63) = 0;
        v50 = v18 + 12;
        v51 = v16;
        break;
      case 1:
        LOBYTE(v64) = a12;
        LOBYTE(a4) = 1;
        LOBYTE(v63) = v15;
        if ( !(unsigned __int8)SepSidInToken(v13, v20, v18 + 8, a4, v63, v64) )
          goto LABEL_33;
        if ( a7 == 1 )
        {
          *(_DWORD *)(a8 + 32) |= *((_DWORD *)v18 + 1) & ~*(_DWORD *)(a8 + 28);
          goto LABEL_33;
        }
LABEL_125:
        AuthzBasepAddAccessTypeList(a8, a7, 0, v19, *((_DWORD *)v18 + 1), 2);
        goto LABEL_33;
      case 6:
        LOBYTE(a4) = 1;
        v55 = *((_DWORD *)v18 + 2) & 1;
        LOBYTE(v64) = a12;
        LOBYTE(v63) = v15;
        if ( !(unsigned __int8)SepSidInToken(
                                 v13,
                                 v20,
                                 &v18[16 * v55 + ((8LL * (*((_DWORD *)v18 + 2) & 2)) | 0xC)],
                                 a4,
                                 v63,
                                 v64) )
          goto LABEL_33;
        if ( v55 && v18 != (char *)-12LL )
        {
          if ( a9 )
          {
            for ( m = 0LL; (unsigned int)m < a7; m = (unsigned int)(m + 1) )
            {
              if ( *((_DWORD *)v18 + 3) == *(_DWORD *)(a8 + 48 * m + 4)
                && *((_DWORD *)v18 + 4) == *(_DWORD *)(a8 + 48 * m + 8)
                && *((_DWORD *)v18 + 5) == *(_DWORD *)(a8 + 48 * m + 12)
                && *((_DWORD *)v18 + 6) == *(_DWORD *)(a8 + 48 * m + 16) )
              {
                AuthzBasepAddAccessTypeList(a8, a7, m, v19, *((_DWORD *)v18 + 1), 2);
                goto LABEL_33;
              }
            }
          }
          else
          {
            *(_DWORD *)(a8 + 32) |= *((_DWORD *)v18 + 1) & ~*(_DWORD *)(a8 + 28);
          }
          goto LABEL_33;
        }
        if ( a7 == 1 )
        {
          *(_DWORD *)(a8 + 32) |= *((_DWORD *)v18 + 1) & ~*(_DWORD *)(a8 + 28);
          goto LABEL_33;
        }
        goto LABEL_125;
      case 9:
        v41 = 4 * (unsigned __int8)v18[9] + 8;
        if ( (int)(*((unsigned __int16 *)v18 + 1) - v41 - 8) <= 0 )
          goto LABEL_34;
        if ( a4 && !*a5 )
          AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
        v42 = *(_QWORD **)(v13 + 1096);
        if ( v42 )
        {
          v43 = (void *)v42[72];
          v44 = (void *)v42[74];
          v45 = (void *)v42[73];
          v46 = (void *)v42[75];
        }
        else
        {
          v43 = 0LL;
          v44 = 0LL;
          v45 = 0LL;
          v46 = 0LL;
        }
        AuthzBasepEvaluateAceCondition(
          (_DWORD *)v13,
          *(void **)(v13 + 776),
          *a5,
          v43,
          v44,
          v45,
          v46,
          &v18[v41 + 8],
          *((unsigned __int16 *)v18 + 1) - v41 - 8,
          0,
          v15,
          &v68);
        if ( v68 != 1 )
          goto LABEL_33;
        if ( !v14 && !v15 )
        {
          if ( (unsigned __int8)SepIsPackageSid(v18 + 8) )
          {
            SepMatchPackage(
              v13,
              -1,
              (_WORD *)v18 + 4,
              *((_DWORD *)v18 + 1),
              (_BYTE *)(a13 + 21),
              (_DWORD *)(a13 + 4),
              (_BYTE *)(a13 + 20),
              (_DWORD *)(a13 + 16),
              (_BYTE *)(a13 + 24));
            *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 4);
            goto LABEL_33;
          }
          if ( (unsigned __int8)SepIsCapabilitySid(v18 + 8) )
          {
            SepMatchCapability(
              v13,
              -1,
              v18 + 8,
              *((_DWORD *)v18 + 1),
              (_SID_AND_ATTRIBUTES *)(a13 + 22),
              (_DWORD *)(a13 + 8));
            *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 8);
            goto LABEL_33;
          }
        }
        LOBYTE(v64) = a12;
        LOBYTE(v63) = v15;
        if ( !(unsigned __int8)SepSidInToken(v13, v20, v18 + 8, 0LL, v63, v64) )
          goto LABEL_33;
LABEL_32:
        AuthzBasepAddAccessTypeList(a8, a7, 0, v19, *((_DWORD *)v18 + 1), 1);
        goto LABEL_33;
      default:
        goto LABEL_34;
    }
    if ( !(unsigned __int8)SepSidInToken(v51, v49, v50, 0LL, v63, v64) )
      goto LABEL_33;
    if ( a7 == 1 )
    {
      *(_DWORD *)(a8 + 28) |= *((_DWORD *)v18 + 1) & ~*(_DWORD *)(a8 + 32);
      goto LABEL_33;
    }
    goto LABEL_32;
  }
LABEL_35:
  if ( v15 && a7 )
  {
    v59 = a7;
    v60 = (_DWORD *)(a8 + 28);
    do
    {
      result = *(v60 - 1) & (*v60 | (unsigned int)~a10);
      *v60 = result;
      v60 += 12;
      --v59;
    }
    while ( v59 );
  }
  return result;
}
