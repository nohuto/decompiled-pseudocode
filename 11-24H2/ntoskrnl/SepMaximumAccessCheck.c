/*
 * XREFs of SepMaximumAccessCheck @ 0x140363250
 * Callers:
 *     SepAccessCheck @ 0x14035BC30 (SepAccessCheck.c)
 * Callees:
 *     SepCanTokenMatchAllPackageSid @ 0x1403440B0 (SepCanTokenMatchAllPackageSid.c)
 *     SepMatchPackage @ 0x140344430 (SepMatchPackage.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1403450F0 (AuthzBasepEvaluateAceCondition.c)
 *     SepSidInToken @ 0x1403624E0 (SepSidInToken.c)
 *     AuthzBasepAddAccessTypeList @ 0x140362738 (AuthzBasepAddAccessTypeList.c)
 *     RtlSidHashLookup @ 0x140363CE0 (RtlSidHashLookup.c)
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403642B0 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepIsPackageSid @ 0x140428560 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14042FD20 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x140432DE8 (SepMatchCapability.c)
 *     memcmp @ 0x1406BFF10 (memcmp.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void **a5,
        unsigned __int8 *a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  __int64 v13; // rsi
  int v14; // edi
  char v15; // r12
  __int64 v16; // r13
  __int64 result; // rax
  char *v18; // r14
  unsigned int v19; // ebp
  unsigned __int8 *v20; // r15
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
  __int64 v36; // rdx
  unsigned __int64 v37; // r8
  int v38; // edi
  int v39; // eax
  bool CanTokenMatchAllPackageSid; // al
  _DWORD *v41; // rcx
  int v42; // eax
  BOOLEAN v43; // al
  unsigned int v44; // ebx
  _QWORD *v45; // rax
  void *v46; // r9
  __int64 v47; // r8
  __int64 v48; // r10
  __int64 v49; // r11
  __int64 v50; // rdx
  unsigned int *v51; // rcx
  bool v52; // al
  int v53; // ecx
  unsigned int v54; // ebx
  __int64 m; // r8
  int v56; // edi
  __int64 v57; // rax
  __int64 k; // r8
  __int64 v59; // rdx
  _DWORD *v60; // rcx
  __int16 v61; // [rsp+60h] [rbp-68h]
  unsigned int v62; // [rsp+64h] [rbp-64h]
  unsigned int v63; // [rsp+68h] [rbp-60h]
  int v64; // [rsp+6Ch] [rbp-5Ch] BYREF
  unsigned int v65; // [rsp+70h] [rbp-58h]
  int v66; // [rsp+74h] [rbp-54h]
  unsigned __int8 v69; // [rsp+E0h] [rbp+18h]
  __int64 v70; // [rsp+E8h] [rbp+20h]

  v70 = a4;
  v13 = a1;
  v14 = *(_DWORD *)(a1 + 200) & 0x2000;
  v15 = a11;
  v16 = a2;
  v66 = v14;
  v64 = -1;
  if ( a11 && a7 )
  {
    v50 = a7;
    v51 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v51 - 1) = *v51;
      v51 += 12;
      --v50;
    }
    while ( v50 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v18 = (char *)(a3 + 8);
  v19 = 0;
  v65 = result;
  v62 = 0;
  if ( (_DWORD)result )
  {
    v20 = a6;
    while ( (v18[1] & 8) != 0 )
    {
LABEL_34:
      result = *((unsigned __int16 *)v18 + 1);
      ++v19;
      v14 = v66;
      v18 += result;
      v13 = a1;
      v20 = a6;
      v62 = v19;
      if ( v19 >= v65 )
        goto LABEL_35;
    }
    v21 = *v18;
    if ( !*v18 )
    {
      if ( !v14 && !v15 )
      {
        if ( (unsigned __int8)SepIsPackageSid(v18 + 8) )
        {
          v38 = *((_DWORD *)v18 + 1);
          if ( *((_DWORD *)v18 + 4) == 2 && v18[9] == 2 )
          {
            v39 = *((_DWORD *)v18 + 5);
            if ( v39 == 1 )
            {
              CanTokenMatchAllPackageSid = SepCanTokenMatchAllPackageSid(v13, v36, v37);
              v41 = (_DWORD *)a13;
              if ( !CanTokenMatchAllPackageSid )
              {
                *(_DWORD *)(a13 + 16) |= v38;
                v42 = ~*(_DWORD *)(a13 + 4);
                *(_BYTE *)(a13 + 24) = 1;
                *(_DWORD *)a13 &= v42;
                goto LABEL_33;
              }
              *(_DWORD *)(a13 + 4) |= v38;
              *(_BYTE *)(a13 + 21) = 1;
            }
            else
            {
              v41 = (_DWORD *)a13;
              if ( v39 == 2 )
              {
                *(_DWORD *)(a13 + 4) |= v38;
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
              v43 = RtlEqualSid(*(PSID *)(v13 + 784), v18 + 8);
              v41 = (_DWORD *)a13;
              if ( v43 )
              {
                *(_DWORD *)(a13 + 4) |= v38;
                *(_BYTE *)(a13 + 21) = 1;
                *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 4);
                goto LABEL_33;
              }
            }
            else
            {
              v41 = (_DWORD *)a13;
            }
          }
          *v41 &= ~v41[1];
          goto LABEL_33;
        }
        if ( (unsigned __int8)SepIsCapabilitySid(v18 + 8) )
        {
          v56 = *((_DWORD *)v18 + 1);
          v57 = RtlSidHashLookup(v13 + 808, v18 + 8);
          if ( v57 && (*(_DWORD *)(v57 + 8) & 4) != 0 )
          {
            *(_DWORD *)(a13 + 8) |= v56;
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
        v22 = v20;
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
          v61 = *(_WORD *)v22;
          v27 = 4 * v25 + 8;
          v63 = v27;
          v28 = *(_QWORD *)(v24 + 8LL * (v22[4 * v25 + 4] & 0xF) + 16) & *(_QWORD *)(v24
                                                                                   + 8
                                                                                   * ((unsigned __int64)v22[4 * v25 + 4] >> 4)
                                                                                   + 144);
          for ( i = 0; ; i += 8 )
          {
            v69 = i;
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
                i = v69;
                v26 = v61;
                v27 = v63;
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
                    v19 = v62;
                    if ( (*(_DWORD *)(v33 + 8) & 4) == 0 )
                      goto LABEL_29;
                  }
                  else
                  {
                    v19 = v62;
                  }
                  goto LABEL_42;
                }
                v26 = v61;
                v27 = v63;
              }
            }
          }
          v19 = v62;
        }
        v15 = a11;
      }
LABEL_29:
      v16 = a2;
LABEL_33:
      a4 = v70;
      goto LABEL_34;
    }
    switch ( v21 )
    {
      case 5:
        v53 = *((_DWORD *)v18 + 2);
        if ( (v53 & 1) != 0 && v18 != (char *)-12LL )
        {
          if ( !a9 )
            goto LABEL_34;
          if ( SepSidInToken(v13, v20, (unsigned __int8 *)&v18[16 * (v53 & 1) + ((8LL * (v53 & 2)) | 0xC)], 0, v15, a12) )
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
        v52 = SepSidInToken(v13, v20, (unsigned __int8 *)&v18[16 * (v53 & 1) + ((8LL * (v53 & 2)) | 0xC)], 0, v15, a12);
        break;
      case 4:
        if ( !SepSidInToken(v13, v20, (unsigned __int8 *)&v18[4 * (unsigned __int8)v18[13] + 20], 0, v15, a12) )
          goto LABEL_33;
        v52 = SepSidInToken(v16, 0LL, (unsigned __int8 *)v18 + 12, 0, 0, a12);
        break;
      case 1:
        if ( !SepSidInToken(v13, v20, (unsigned __int8 *)v18 + 8, 1, v15, a12) )
          goto LABEL_33;
        if ( a7 == 1 )
        {
          *(_DWORD *)(a8 + 32) |= *((_DWORD *)v18 + 1) & ~*(_DWORD *)(a8 + 28);
          goto LABEL_33;
        }
LABEL_130:
        AuthzBasepAddAccessTypeList(a8, a7, 0, v19, *((_DWORD *)v18 + 1), 2);
        goto LABEL_33;
      case 6:
        v54 = *((_DWORD *)v18 + 2) & 1;
        if ( !SepSidInToken(
                v13,
                v20,
                (unsigned __int8 *)&v18[16 * v54 + ((8LL * (*((_DWORD *)v18 + 2) & 2)) | 0xC)],
                1,
                v15,
                a12) )
          goto LABEL_33;
        if ( v54 && v18 != (char *)-12LL )
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
        goto LABEL_130;
      case 9:
        v44 = 4 * (unsigned __int8)v18[9] + 8;
        if ( (int)(*((unsigned __int16 *)v18 + 1) - v44 - 8) <= 0 )
          goto LABEL_34;
        if ( a4 && !*a5 )
          AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
        v45 = *(_QWORD **)(v13 + 1096);
        if ( v45 )
        {
          v46 = (void *)v45[72];
          v47 = v45[74];
          v48 = v45[73];
          v49 = v45[75];
        }
        else
        {
          v46 = 0LL;
          v47 = 0LL;
          v48 = 0LL;
          v49 = 0LL;
        }
        AuthzBasepEvaluateAceCondition(
          (_DWORD *)v13,
          *(void **)(v13 + 776),
          *a5,
          v46,
          v47,
          v48,
          v49,
          &v18[v44 + 8],
          *((unsigned __int16 *)v18 + 1) - v44 - 8,
          0,
          v15,
          &v64);
        if ( v64 != 1 )
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
            SepMatchCapability(v13, 0xFFFFFFFFLL, v18 + 8, *((unsigned int *)v18 + 1), a13 + 22, a13 + 8);
            *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 8);
            goto LABEL_33;
          }
        }
        if ( !SepSidInToken(v13, v20, (unsigned __int8 *)v18 + 8, 0, v15, a12) )
          goto LABEL_33;
LABEL_32:
        AuthzBasepAddAccessTypeList(a8, a7, 0, v19, *((_DWORD *)v18 + 1), 1);
        goto LABEL_33;
      default:
        goto LABEL_34;
    }
    if ( !v52 )
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
