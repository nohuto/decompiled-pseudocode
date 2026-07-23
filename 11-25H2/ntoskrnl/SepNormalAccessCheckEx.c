/*
 * XREFs of SepNormalAccessCheckEx @ 0x14036A718
 * Callers:
 *     SepAccessCheckEx @ 0x1403CE444 (SepAccessCheckEx.c)
 * Callees:
 *     SepCanTokenMatchAllPackageSid @ 0x1403678D0 (SepCanTokenMatchAllPackageSid.c)
 *     SepMatchPackage @ 0x140367B50 (SepMatchPackage.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140367C20 (AuthzBasepEvaluateAceCondition.c)
 *     SepMatchCapability @ 0x140368F64 (SepMatchCapability.c)
 *     RtlEqualSid @ 0x14036A6E0 (RtlEqualSid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14036B400 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepIsPackageSid @ 0x14036C3F0 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x14036C460 (SepIsCapabilitySid.c)
 *     SepSidInToken @ 0x1403CF090 (SepSidInToken.c)
 *     AuthzBasepAddAccessTypeList @ 0x1403CF2F4 (AuthzBasepAddAccessTypeList.c)
 */

int __fastcall SepNormalAccessCheckEx(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        int a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        unsigned __int8 a11,
        char a12,
        char a13,
        __int64 a14)
{
  int v14; // r12d
  __int64 v15; // r14
  unsigned int v16; // r15d
  int v17; // r8d
  int *v18; // rax
  _DWORD *v20; // rax
  __int64 v21; // rcx
  unsigned __int8 v22; // dl
  char *v23; // rdi
  unsigned int v24; // esi
  int v25; // ebx
  char v26; // al
  void *v27; // rsi
  int *v28; // rbx
  int v29; // r15d
  int v30; // eax
  int v31; // esi
  int *v32; // r14
  int v33; // eax
  int v34; // eax
  unsigned __int8 v35; // bl
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // rdx
  int v41; // r11d
  int v42; // ecx
  int v43; // ebx
  __int64 v44; // r8
  __int64 v45; // rdx
  int v46; // ecx
  unsigned int v47; // ebx
  _QWORD *v48; // rax
  void *v49; // r9
  void *v50; // r8
  void *v51; // r10
  void *v52; // r11
  unsigned int v53; // edx
  __int64 v54; // rcx
  unsigned int v55; // ebx
  _QWORD *v56; // rax
  void *v57; // r9
  void *v58; // r8
  void *v59; // r10
  void *v60; // r11
  int v61; // r10d
  __int64 v62; // r8
  __int64 v63; // rdx
  int v64; // ecx
  int v65; // ecx
  _DWORD *v66; // rbx
  int v67; // eax
  unsigned int v68; // esi
  __int64 j; // r8
  bool v70; // zf
  __int64 i; // r8
  int v73; // [rsp+20h] [rbp-88h]
  int v74; // [rsp+28h] [rbp-80h]
  int v75; // [rsp+60h] [rbp-48h] BYREF
  int v76; // [rsp+64h] [rbp-44h]
  int v77; // [rsp+68h] [rbp-40h]
  int v78; // [rsp+6Ch] [rbp-3Ch]
  unsigned int v81; // [rsp+C8h] [rbp+20h]
  int v82; // [rsp+E0h] [rbp+38h]

  v75 = 0;
  v14 = 0;
  v15 = a2;
  v16 = a8;
  v17 = *(_DWORD *)(a2 + 200) & 0x2000;
  LODWORD(v18) = *(unsigned __int16 *)(a4 + 4);
  v76 = v17;
  v77 = (int)v18;
  if ( a8 )
  {
    v20 = (_DWORD *)(a9 + 24);
    v21 = a8;
    do
    {
      *v20 = a1;
      v20 += 12;
      --v21;
    }
    while ( v21 );
    LODWORD(v18) = v77;
  }
  v22 = a11;
  if ( !v17 && !a11 )
    v14 = *(_DWORD *)a14 | a1;
  v82 = v14;
  v23 = (char *)(a4 + 8);
  v78 = v14;
  v24 = 0;
  while ( 1 )
  {
    v81 = v24;
    if ( v24 >= (unsigned int)v18 )
      break;
    v25 = *(_DWORD *)(a9 + 24);
    if ( !v25 && !v14 )
      return (int)v18;
    if ( (v23[1] & 8) == 0 && (v25 || !*v23 || *v23 == 9) )
    {
      v26 = *v23;
      if ( *v23 )
      {
        switch ( v26 )
        {
          case 5:
            v65 = *((_DWORD *)v23 + 2);
            if ( (v65 & 1) == 0 || v23 == (char *)-12LL )
            {
              LOBYTE(v74) = a12;
              LOBYTE(v73) = v22;
              v36 = (__int64)&v23[16 * (v65 & 1) + ((8LL * (v65 & 2)) | 0xC)];
              goto LABEL_38;
            }
            if ( a10 )
            {
              LOBYTE(v74) = a12;
              LOBYTE(v73) = v22;
              if ( (unsigned __int8)SepSidInToken(
                                      v15,
                                      0LL,
                                      &v23[16 * (v65 & 1) + ((8LL * (v65 & 2)) | 0xC)],
                                      0LL,
                                      v73,
                                      v74) )
              {
                for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(i + 1) )
                {
                  if ( *((_DWORD *)v23 + 3) == *(_DWORD *)(a9 + 48 * i + 4)
                    && *((_DWORD *)v23 + 4) == *(_DWORD *)(a9 + 48 * i + 8)
                    && *((_DWORD *)v23 + 5) == *(_DWORD *)(a9 + 48 * i + 12)
                    && *((_DWORD *)v23 + 6) == *(_DWORD *)(a9 + 48 * i + 16) )
                  {
                    AuthzBasepAddAccessTypeList(a9, v16, i, v24, *((_DWORD *)v23 + 1), 0);
                    goto LABEL_25;
                  }
                }
              }
            }
            break;
          case 4:
            LOBYTE(v74) = a12;
            LOBYTE(v73) = v22;
            if ( !(unsigned __int8)SepSidInToken(v15, 0LL, &v23[4 * (unsigned __int8)v23[13] + 20], 0LL, v73, v74) )
              break;
            v37 = a3;
            v36 = (__int64)(v23 + 12);
            LOBYTE(v74) = a12;
            LOBYTE(v73) = a11;
            goto LABEL_39;
          case 1:
            LOBYTE(v74) = a12;
            LOBYTE(a4) = 1;
            LOBYTE(v73) = v22;
            LODWORD(v18) = SepSidInToken(v15, 0LL, v23 + 8, a4, v73, v74);
            if ( (_BYTE)v18 )
            {
              v43 = *((_DWORD *)v23 + 1) & v25;
              if ( v43 )
              {
                v44 = *(_QWORD *)(a9 + 40);
                v45 = 0LL;
                v46 = 1;
                if ( v44 )
                {
                  while ( v46 )
                  {
                    if ( (v46 & v43) != 0 && !*(_DWORD *)(v44 + 4 * v45) )
                    {
                      LODWORD(v18) = v24 | 0x20000;
                      *(_DWORD *)(v44 + 4 * v45) = v24 | 0x20000;
                    }
                    v45 = (unsigned int)(v45 + 1);
                    v46 *= 2;
                  }
                }
                return (int)v18;
              }
            }
            break;
          case 6:
            LOBYTE(a4) = 1;
            v68 = *((_DWORD *)v23 + 2) & 1;
            LOBYTE(v74) = a12;
            LOBYTE(v73) = v22;
            LODWORD(v18) = SepSidInToken(
                             v15,
                             0LL,
                             &v23[16 * v68 + ((8LL * (*((_DWORD *)v23 + 2) & 2)) | 0xC)],
                             a4,
                             v73,
                             v74);
            if ( (_BYTE)v18 )
            {
              if ( v68 && v23 != (char *)-12LL && a10 )
              {
                for ( j = 0LL; (unsigned int)j < v16; j = (unsigned int)(j + 1) )
                {
                  if ( *((_DWORD *)v23 + 3) == *(_DWORD *)(a9 + 48 * j + 4)
                    && *((_DWORD *)v23 + 4) == *(_DWORD *)(a9 + 48 * j + 8)
                    && *((_DWORD *)v23 + 5) == *(_DWORD *)(a9 + 48 * j + 12)
                    && *((_DWORD *)v23 + 6) == *(_DWORD *)(a9 + 48 * j + 16) )
                  {
                    LODWORD(v18) = *(_DWORD *)(a9 + 48 * j + 24);
                    v70 = ((unsigned int)v18 & *((_DWORD *)v23 + 1)) == 0;
                    goto LABEL_128;
                  }
                }
              }
              else
              {
                v70 = (v25 & *((_DWORD *)v23 + 1)) == 0;
LABEL_128:
                if ( !v70 )
                  return (int)v18;
              }
            }
            goto LABEL_24;
          case 9:
            v47 = 4 * (unsigned __int8)v23[9] + 8;
            if ( *((unsigned __int16 *)v23 + 1) - v47 != 8 )
            {
              if ( a5 && !*a6 )
                AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
              v48 = *(_QWORD **)(v15 + 1096);
              if ( v48 )
              {
                v49 = (void *)v48[72];
                v50 = (void *)v48[74];
                v51 = (void *)v48[73];
                v52 = (void *)v48[75];
              }
              else
              {
                v49 = 0LL;
                v50 = 0LL;
                v51 = 0LL;
                v52 = 0LL;
              }
              v53 = *((unsigned __int16 *)v23 + 1) - v47 - 8;
              v54 = v47;
              v35 = a11;
              AuthzBasepEvaluateAceCondition(
                (_DWORD *)v15,
                *(void **)(v15 + 776),
                *a6,
                v49,
                v50,
                v51,
                v52,
                &v23[v54 + 8],
                v53,
                0,
                a11,
                &v75);
              if ( v75 == 1 )
              {
                if ( !v76 && !a11 && v14 )
                {
                  v27 = v23 + 8;
                  if ( (unsigned __int8)SepIsPackageSid(v23 + 8) )
                  {
                    v66 = (_DWORD *)(a14 + 4);
                    SepMatchPackage(
                      v15,
                      v82,
                      (_WORD *)v23 + 4,
                      *((_DWORD *)v23 + 1),
                      (_BYTE *)(a14 + 21),
                      (_DWORD *)(a14 + 4),
                      (_BYTE *)(a14 + 20),
                      (_DWORD *)(a14 + 16),
                      (_BYTE *)(a14 + 24));
                    goto LABEL_102;
                  }
                  if ( (unsigned __int8)SepIsCapabilitySid(v23 + 8) )
                  {
LABEL_140:
                    v66 = (_DWORD *)(a14 + 8);
                    SepMatchCapability(
                      v15,
                      v82,
                      v27,
                      *((_DWORD *)v23 + 1),
                      (_SID_AND_ATTRIBUTES *)(a14 + 22),
                      (_DWORD *)(a14 + 8));
LABEL_102:
                    v67 = ~*v66;
                    v14 &= v67;
                    *(_DWORD *)a14 &= v67;
LABEL_24:
                    v24 = v81;
                    break;
                  }
                  v24 = v81;
                }
                if ( *(_DWORD *)(a9 + 24) )
                  goto LABEL_37;
              }
            }
            break;
          default:
            if ( a13 )
            {
              if ( v26 == 10 && KeGetCurrentIrql() < 2u )
              {
                v55 = 4 * (unsigned __int8)v23[9] + 8;
                if ( *((unsigned __int16 *)v23 + 1) - v55 != 8 )
                {
                  if ( a5 && !*a6 )
                    AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
                  v56 = *(_QWORD **)(v15 + 1096);
                  if ( v56 )
                  {
                    v57 = (void *)v56[72];
                    v58 = (void *)v56[74];
                    v59 = (void *)v56[73];
                    v60 = (void *)v56[75];
                  }
                  else
                  {
                    v57 = 0LL;
                    v58 = 0LL;
                    v59 = 0LL;
                    v60 = 0LL;
                  }
                  AuthzBasepEvaluateAceCondition(
                    (_DWORD *)v15,
                    *(void **)(v15 + 776),
                    *a6,
                    v57,
                    v58,
                    v59,
                    v60,
                    &v23[v55 + 8],
                    *((unsigned __int16 *)v23 + 1) - v55 - 8,
                    1u,
                    a11,
                    &v75);
                  if ( ((v75 + 1) & 0xFFFFFFFD) == 0 )
                  {
                    LOBYTE(v74) = a12;
                    LOBYTE(a4) = 1;
                    LOBYTE(v73) = a11;
                    LODWORD(v18) = SepSidInToken(v15, 0LL, v23 + 8, a4, v73, v74);
                    if ( (_BYTE)v18 )
                    {
                      v61 = *(_DWORD *)(a9 + 24) & *((_DWORD *)v23 + 1);
                      if ( v61 )
                      {
                        v62 = *(_QWORD *)(a9 + 40);
                        v63 = 0LL;
                        v64 = 1;
                        if ( v62 )
                        {
                          while ( v64 )
                          {
                            if ( (v64 & v61) != 0 && !*(_DWORD *)(v62 + 4 * v63) )
                            {
                              LODWORD(v18) = v24 | 0x20000;
                              *(_DWORD *)(v62 + 4 * v63) = v24 | 0x20000;
                            }
                            v63 = (unsigned int)(v63 + 1);
                            v64 *= 2;
                          }
                        }
                        return (int)v18;
                      }
                    }
                  }
                }
              }
            }
            break;
        }
      }
      else
      {
        if ( !v17 && !v22 && v14 )
        {
          v27 = v23 + 8;
          if ( (unsigned __int8)SepIsPackageSid(v23 + 8) )
          {
            v28 = (int *)(a14 + 4);
            v29 = *((_DWORD *)v23 + 1);
            if ( *((_DWORD *)v23 + 4) == 2 && v23[9] == 2 )
            {
              v30 = *((_DWORD *)v23 + 5);
              if ( v30 == 1 )
              {
                v31 = v29 & v78;
                if ( SepCanTokenMatchAllPackageSid(v15) )
                {
                  *v28 |= v31;
                  *(_BYTE *)(a14 + 21) = 1;
                }
                else
                {
                  *(_DWORD *)(a14 + 16) |= v31;
                  *(_BYTE *)(a14 + 24) = 1;
                }
                v28 = (int *)(a14 + 4);
              }
              else if ( v30 == 2 )
              {
                *v28 |= v29 & v82;
                *(_BYTE *)(a14 + 21) = 1;
              }
              v32 = v28;
            }
            else
            {
              v32 = (int *)(a14 + 4);
              *(_BYTE *)(a14 + 20) = 1;
              if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 && RtlEqualSid(*(PSID *)(a2 + 784), v23 + 8) )
              {
                *v28 |= v29 & v82;
                *(_BYTE *)(a14 + 21) = 1;
              }
            }
            v33 = *v32;
            v15 = a2;
            v34 = ~v33;
            v16 = a8;
            v14 &= v34;
            *(_DWORD *)a14 &= v34;
            goto LABEL_24;
          }
          if ( (unsigned __int8)SepIsCapabilitySid(v23 + 8) )
            goto LABEL_140;
          v24 = v81;
        }
        if ( *(_DWORD *)(a9 + 24) )
        {
          v35 = a11;
LABEL_37:
          v36 = (__int64)(v23 + 8);
          LOBYTE(v74) = a12;
          LOBYTE(v73) = v35;
LABEL_38:
          v37 = v15;
LABEL_39:
          if ( (unsigned __int8)SepSidInToken(v37, 0LL, v36, 0LL, v73, v74) )
            AuthzBasepAddAccessTypeList(a9, v16, 0, v24, *((_DWORD *)v23 + 1), 0);
        }
      }
    }
LABEL_25:
    ++v24;
    v22 = a11;
    v23 += *((unsigned __int16 *)v23 + 1);
    LODWORD(v18) = v77;
    v17 = v76;
  }
  if ( v24 == (_DWORD)v18 )
  {
    v18 = (int *)(a9 + 24);
    if ( *(_DWORD *)(a9 + 24) )
    {
      if ( v16 )
      {
        v38 = v16;
        do
        {
          v39 = *((_QWORD *)v18 + 2);
          v40 = 0LL;
          v41 = *v18;
          v42 = 1;
          if ( v39 )
          {
            while ( v42 )
            {
              if ( (v42 & v41) != 0 && !*(_DWORD *)(v39 + 4 * v40) )
                *(_DWORD *)(v39 + 4 * v40) = 0x800000;
              v40 = (unsigned int)(v40 + 1);
              v42 *= 2;
            }
          }
          v18 += 12;
          --v38;
        }
        while ( v38 );
      }
    }
  }
  return (int)v18;
}
