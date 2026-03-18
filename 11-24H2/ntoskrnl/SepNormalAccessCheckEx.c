/*
 * XREFs of SepNormalAccessCheckEx @ 0x14036292C
 * Callers:
 *     SepAccessCheckEx @ 0x140361710 (SepAccessCheckEx.c)
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
 */

char __fastcall SepNormalAccessCheckEx(
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
        char a11,
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
  char v22; // dl
  char *v23; // rdi
  unsigned int v24; // esi
  int v25; // ebx
  char v26; // al
  char *v27; // rsi
  __int64 v28; // rdx
  unsigned __int64 v29; // r8
  int *v30; // rbx
  int v31; // r15d
  int v32; // eax
  int v33; // esi
  int *v34; // r14
  int v35; // eax
  int v36; // eax
  char v37; // bl
  bool v38; // al
  __int64 v39; // r9
  __int64 v40; // r8
  __int64 v41; // rdx
  int v42; // r11d
  int v43; // ecx
  int v44; // ebx
  __int64 v45; // r8
  __int64 v46; // rdx
  int v47; // ecx
  unsigned int v48; // ebx
  _QWORD *v49; // rax
  void *v50; // r9
  __int64 v51; // r8
  __int64 v52; // r10
  __int64 v53; // r11
  unsigned int v54; // edx
  __int64 v55; // rcx
  unsigned int v56; // ebx
  _QWORD *v57; // rax
  void *v58; // r9
  __int64 v59; // r8
  __int64 v60; // r10
  __int64 v61; // r11
  int v62; // r10d
  __int64 v63; // r8
  __int64 v64; // rdx
  int v65; // ecx
  int v66; // ecx
  _DWORD *v67; // rbx
  int v68; // eax
  unsigned int v69; // esi
  __int64 j; // r8
  bool v71; // zf
  __int64 i; // r8
  int v74; // [rsp+60h] [rbp-48h] BYREF
  int v75; // [rsp+64h] [rbp-44h]
  int v76; // [rsp+68h] [rbp-40h]
  int v77; // [rsp+6Ch] [rbp-3Ch]
  unsigned int v80; // [rsp+C8h] [rbp+20h]
  unsigned int v81; // [rsp+E0h] [rbp+38h]

  v74 = 0;
  v14 = 0;
  v15 = a2;
  v16 = a8;
  v17 = *(_DWORD *)(a2 + 200) & 0x2000;
  LODWORD(v18) = *(unsigned __int16 *)(a4 + 4);
  v75 = v17;
  v76 = (int)v18;
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
    LODWORD(v18) = v76;
  }
  v22 = a11;
  if ( !v17 && !a11 )
    v14 = *(_DWORD *)a14 | a1;
  v81 = v14;
  v23 = (char *)(a4 + 8);
  v77 = v14;
  v24 = 0;
  while ( 1 )
  {
    v80 = v24;
    if ( v24 >= (unsigned int)v18 )
      break;
    v25 = *(_DWORD *)(a9 + 24);
    if ( !v25 && !v14 )
      return (char)v18;
    if ( (v23[1] & 8) == 0 && (v25 || !*v23 || *v23 == 9) )
    {
      v26 = *v23;
      if ( *v23 )
      {
        switch ( v26 )
        {
          case 5:
            v66 = *((_DWORD *)v23 + 2);
            if ( (v66 & 1) == 0 || v23 == (char *)-12LL )
            {
              v38 = SepSidInToken(
                      v15,
                      0LL,
                      (unsigned __int8 *)&v23[16 * (v66 & 1) + ((8LL * (v66 & 2)) | 0xC)],
                      0,
                      v22,
                      a12);
              goto LABEL_39;
            }
            if ( a10
              && SepSidInToken(
                   v15,
                   0LL,
                   (unsigned __int8 *)&v23[16 * (v66 & 1) + ((8LL * (v66 & 2)) | 0xC)],
                   0,
                   v22,
                   a12) )
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
            break;
          case 4:
            if ( !SepSidInToken(v15, 0LL, (unsigned __int8 *)&v23[4 * (unsigned __int8)v23[13] + 20], 0, v22, a12) )
              break;
            v38 = SepSidInToken(a3, 0LL, (unsigned __int8 *)v23 + 12, 0, a11, a12);
            goto LABEL_39;
          case 1:
            LOBYTE(v18) = SepSidInToken(v15, 0LL, (unsigned __int8 *)v23 + 8, 1, v22, a12);
            if ( (_BYTE)v18 )
            {
              v44 = *((_DWORD *)v23 + 1) & v25;
              if ( v44 )
              {
                v45 = *(_QWORD *)(a9 + 40);
                v46 = 0LL;
                v47 = 1;
                if ( v45 )
                {
                  while ( v47 )
                  {
                    if ( (v47 & v44) != 0 && !*(_DWORD *)(v45 + 4 * v46) )
                    {
                      LOBYTE(v18) = v24;
                      *(_DWORD *)(v45 + 4 * v46) = v24 | 0x20000;
                    }
                    v46 = (unsigned int)(v46 + 1);
                    v47 *= 2;
                  }
                }
                return (char)v18;
              }
            }
            break;
          case 6:
            v69 = *((_DWORD *)v23 + 2) & 1;
            LOBYTE(v18) = SepSidInToken(
                            v15,
                            0LL,
                            (unsigned __int8 *)&v23[16 * v69 + ((8LL * (*((_DWORD *)v23 + 2) & 2)) | 0xC)],
                            1,
                            v22,
                            a12);
            if ( (_BYTE)v18 )
            {
              if ( v69 && v23 != (char *)-12LL && a10 )
              {
                for ( j = 0LL; (unsigned int)j < v16; j = (unsigned int)(j + 1) )
                {
                  if ( *((_DWORD *)v23 + 3) == *(_DWORD *)(a9 + 48 * j + 4)
                    && *((_DWORD *)v23 + 4) == *(_DWORD *)(a9 + 48 * j + 8)
                    && *((_DWORD *)v23 + 5) == *(_DWORD *)(a9 + 48 * j + 12)
                    && *((_DWORD *)v23 + 6) == *(_DWORD *)(a9 + 48 * j + 16) )
                  {
                    LODWORD(v18) = *(_DWORD *)(a9 + 48 * j + 24);
                    v71 = ((unsigned int)v18 & *((_DWORD *)v23 + 1)) == 0;
                    goto LABEL_127;
                  }
                }
              }
              else
              {
                v71 = (v25 & *((_DWORD *)v23 + 1)) == 0;
LABEL_127:
                if ( !v71 )
                  return (char)v18;
              }
            }
            goto LABEL_24;
          case 9:
            v48 = 4 * (unsigned __int8)v23[9] + 8;
            if ( *((unsigned __int16 *)v23 + 1) - v48 != 8 )
            {
              if ( a5 && !*a6 )
                AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
              v49 = *(_QWORD **)(v15 + 1096);
              if ( v49 )
              {
                v50 = (void *)v49[72];
                v51 = v49[74];
                v52 = v49[73];
                v53 = v49[75];
              }
              else
              {
                v50 = 0LL;
                v51 = 0LL;
                v52 = 0LL;
                v53 = 0LL;
              }
              v54 = *((unsigned __int16 *)v23 + 1) - v48 - 8;
              v55 = v48;
              v37 = a11;
              AuthzBasepEvaluateAceCondition(
                (_DWORD *)v15,
                *(void **)(v15 + 776),
                *a6,
                v50,
                v51,
                v52,
                v53,
                &v23[v55 + 8],
                v54,
                0,
                a11,
                &v74);
              if ( v74 == 1 )
              {
                if ( !v75 && !a11 && v14 )
                {
                  v27 = v23 + 8;
                  if ( (unsigned __int8)SepIsPackageSid(v23 + 8) )
                  {
                    v67 = (_DWORD *)(a14 + 4);
                    SepMatchPackage(
                      v15,
                      v81,
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
LABEL_139:
                    v67 = (_DWORD *)(a14 + 8);
                    SepMatchCapability(v15, v81, v27, *((unsigned int *)v23 + 1), a14 + 22, a14 + 8);
LABEL_102:
                    v68 = ~*v67;
                    v14 &= v68;
                    *(_DWORD *)a14 &= v68;
LABEL_24:
                    v24 = v80;
                    break;
                  }
                  v24 = v80;
                }
                if ( *(_DWORD *)(a9 + 24) )
                  goto LABEL_38;
              }
            }
            break;
          default:
            if ( a13 )
            {
              if ( v26 == 10 && KeGetCurrentIrql() < 2u )
              {
                v56 = 4 * (unsigned __int8)v23[9] + 8;
                if ( *((unsigned __int16 *)v23 + 1) - v56 != 8 )
                {
                  if ( a5 && !*a6 )
                    AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
                  v57 = *(_QWORD **)(v15 + 1096);
                  if ( v57 )
                  {
                    v58 = (void *)v57[72];
                    v59 = v57[74];
                    v60 = v57[73];
                    v61 = v57[75];
                  }
                  else
                  {
                    v58 = 0LL;
                    v59 = 0LL;
                    v60 = 0LL;
                    v61 = 0LL;
                  }
                  AuthzBasepEvaluateAceCondition(
                    (_DWORD *)v15,
                    *(void **)(v15 + 776),
                    *a6,
                    v58,
                    v59,
                    v60,
                    v61,
                    &v23[v56 + 8],
                    *((unsigned __int16 *)v23 + 1) - v56 - 8,
                    1,
                    a11,
                    &v74);
                  if ( ((v74 + 1) & 0xFFFFFFFD) == 0 )
                  {
                    LOBYTE(v18) = SepSidInToken(v15, 0LL, (unsigned __int8 *)v23 + 8, 1, a11, a12);
                    if ( (_BYTE)v18 )
                    {
                      v62 = *(_DWORD *)(a9 + 24) & *((_DWORD *)v23 + 1);
                      if ( v62 )
                      {
                        v63 = *(_QWORD *)(a9 + 40);
                        v64 = 0LL;
                        v65 = 1;
                        if ( v63 )
                        {
                          while ( v65 )
                          {
                            if ( (v65 & v62) != 0 && !*(_DWORD *)(v63 + 4 * v64) )
                            {
                              LOBYTE(v18) = v24;
                              *(_DWORD *)(v63 + 4 * v64) = v24 | 0x20000;
                            }
                            v64 = (unsigned int)(v64 + 1);
                            v65 *= 2;
                          }
                        }
                        return (char)v18;
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
            v30 = (int *)(a14 + 4);
            v31 = *((_DWORD *)v23 + 1);
            if ( *((_DWORD *)v23 + 4) == 2 && v23[9] == 2 )
            {
              v32 = *((_DWORD *)v23 + 5);
              if ( v32 == 1 )
              {
                v33 = v31 & v77;
                if ( SepCanTokenMatchAllPackageSid(v15, v28, v29) )
                {
                  *v30 |= v33;
                  *(_BYTE *)(a14 + 21) = 1;
                }
                else
                {
                  *(_DWORD *)(a14 + 16) |= v33;
                  *(_BYTE *)(a14 + 24) = 1;
                }
                v30 = (int *)(a14 + 4);
              }
              else if ( v32 == 2 )
              {
                *v30 |= v31 & v81;
                *(_BYTE *)(a14 + 21) = 1;
              }
              v34 = v30;
            }
            else
            {
              v34 = (int *)(a14 + 4);
              *(_BYTE *)(a14 + 20) = 1;
              if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 && RtlEqualSid(*(PSID *)(a2 + 784), v23 + 8) )
              {
                *v30 |= v31 & v81;
                *(_BYTE *)(a14 + 21) = 1;
              }
            }
            v35 = *v34;
            v15 = a2;
            v36 = ~v35;
            v16 = a8;
            v14 &= v36;
            *(_DWORD *)a14 &= v36;
            goto LABEL_24;
          }
          if ( (unsigned __int8)SepIsCapabilitySid(v23 + 8) )
            goto LABEL_139;
          v24 = v80;
        }
        if ( *(_DWORD *)(a9 + 24) )
        {
          v37 = a11;
LABEL_38:
          v38 = SepSidInToken(v15, 0LL, (unsigned __int8 *)v23 + 8, 0, v37, a12);
LABEL_39:
          if ( v38 )
            AuthzBasepAddAccessTypeList(a9, v16, 0, v24, *((_DWORD *)v23 + 1), 0);
        }
      }
    }
LABEL_25:
    ++v24;
    v22 = a11;
    v23 += *((unsigned __int16 *)v23 + 1);
    LODWORD(v18) = v76;
    v17 = v75;
  }
  if ( v24 == (_DWORD)v18 )
  {
    v18 = (int *)(a9 + 24);
    if ( *(_DWORD *)(a9 + 24) )
    {
      if ( v16 )
      {
        v39 = v16;
        do
        {
          v40 = *((_QWORD *)v18 + 2);
          v41 = 0LL;
          v42 = *v18;
          v43 = 1;
          if ( v40 )
          {
            while ( v43 )
            {
              if ( (v43 & v42) != 0 && !*(_DWORD *)(v40 + 4 * v41) )
                *(_DWORD *)(v40 + 4 * v41) = 0x800000;
              v41 = (unsigned int)(v41 + 1);
              v43 *= 2;
            }
          }
          v18 += 12;
          --v39;
        }
        while ( v39 );
      }
    }
  }
  return (char)v18;
}
