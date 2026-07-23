/*
 * XREFs of SepMaximumAccessCheck @ 0x1404E8A30
 * Callers:
 *     SepAccessCheck @ 0x1404E76E0 (SepAccessCheck.c)
 * Callees:
 *     SepMatchPackage @ 0x140323910 (SepMatchPackage.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepSidInToken @ 0x1403CB430 (SepSidInToken.c)
 *     SepIsPackageSid @ 0x14041C6F0 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x1404217D0 (SepIsCapabilitySid.c)
 *     SepMatchCapability @ 0x140424F30 (SepMatchCapability.c)
 *     AuthzBasepAddAccessTypeList @ 0x140446210 (AuthzBasepAddAccessTypeList.c)
 *     AuthzBasepUpdateParentTypeList @ 0x1404ADF00 (AuthzBasepUpdateParentTypeList.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int8 *a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        __int64 a13)
{
  int v13; // ebx
  char v14; // si
  __int64 v15; // rdi
  int v16; // eax
  int v17; // ebx
  __int64 v18; // rdx
  __int64 result; // rax
  char *v20; // r12
  unsigned int v21; // ebp
  int v22; // r8d
  unsigned __int8 *v23; // rdx
  char v24; // al
  _DWORD *v25; // rbx
  int v26; // esi
  int v27; // r9d
  int v28; // eax
  __int64 v29; // r10
  __int64 v30; // r8
  int v31; // r9d
  __int64 v32; // rdi
  int v33; // r9d
  int v34; // r10d
  int v35; // r8d
  __int64 i; // rdx
  unsigned __int16 v37; // ax
  int v38; // r9d
  int v39; // r9d
  __int64 v40; // r10
  __int64 v41; // r8
  int v42; // ecx
  unsigned int v43; // ebx
  __int64 v44; // r10
  int v45; // ecx
  int v46; // r9d
  int v47; // r9d
  __int64 v48; // r11
  __int64 v49; // r8
  _DWORD *v50; // rcx
  __int64 v51; // rdx
  int v52; // esi
  int v53; // r9d
  int v54; // eax
  __int64 v55; // r10
  __int64 v56; // r8
  int v57; // r9d
  __int64 v58; // rdi
  int v59; // r9d
  int v60; // r10d
  int v61; // r8d
  __int64 j; // rdx
  unsigned __int16 v63; // ax
  int v64; // r9d
  int v65; // r9d
  __int64 v66; // r10
  __int64 v67; // r8
  int v68; // ecx
  unsigned int v69; // ebx
  __int64 v70; // r10
  int v71; // ecx
  int v72; // r9d
  int v73; // r9d
  __int64 v74; // r11
  __int64 v75; // r8
  unsigned int v76; // eax
  __int64 v77; // rdi
  __int64 v78; // rsi
  int v79; // r9d
  char v80; // r11
  int v81; // ebx
  int v82; // eax
  __int64 v83; // rdi
  __int64 v84; // r10
  int v85; // ecx
  int v86; // r9d
  int v87; // r9d
  __int64 v88; // r11
  __int64 v89; // r8
  __int64 v90; // r10
  __int64 v91; // r8
  int v92; // r9d
  int v93; // esi
  int v94; // r9d
  int v95; // eax
  __int64 v96; // r10
  __int64 v97; // r8
  int v98; // r9d
  __int64 v99; // rdi
  int v100; // r9d
  int v101; // r10d
  int v102; // r8d
  __int64 k; // rdx
  unsigned __int16 v104; // ax
  int v105; // r9d
  int v106; // r9d
  __int64 v107; // r10
  __int64 v108; // r8
  int v109; // ecx
  unsigned int v110; // ebx
  __int64 v111; // r10
  int v112; // ecx
  int v113; // r9d
  int v114; // r9d
  __int64 v115; // r11
  __int64 v116; // r8
  int v117; // esi
  int v118; // r9d
  int v119; // eax
  __int64 v120; // r10
  __int64 v121; // r8
  int v122; // r9d
  __int64 v123; // rdi
  int v124; // r9d
  int v125; // r10d
  int v126; // r8d
  __int64 m; // rdx
  unsigned __int16 v128; // ax
  int v129; // r9d
  int v130; // r9d
  __int64 v131; // r10
  __int64 v132; // r8
  int v133; // ecx
  unsigned int v134; // ebx
  __int64 v135; // r10
  int v136; // ecx
  int v137; // r9d
  int v138; // r9d
  __int64 v139; // r11
  __int64 v140; // r8
  int v141; // esi
  int v142; // r9d
  int v143; // eax
  __int64 v144; // r10
  __int64 v145; // r8
  int v146; // r9d
  __int64 v147; // rdi
  int v148; // r9d
  int v149; // r8d
  int v150; // r10d
  __int64 n; // rdx
  unsigned __int16 v152; // ax
  int v153; // r9d
  int v154; // r9d
  __int64 v155; // r10
  __int64 v156; // r8
  int v157; // ecx
  unsigned int v158; // ebx
  __int64 v159; // r10
  int v160; // ecx
  int v161; // r9d
  int v162; // r9d
  __int64 v163; // r11
  __int64 v164; // r8
  unsigned int v165; // ebx
  __int64 v166; // r8
  int v167; // esi
  int v168; // r9d
  int v169; // eax
  __int64 v170; // r10
  __int64 v171; // r8
  int v172; // r9d
  __int64 v173; // rdi
  int v174; // r9d
  int v175; // r8d
  int v176; // r10d
  __int64 ii; // rdx
  unsigned __int16 v178; // ax
  int v179; // r9d
  int v180; // r9d
  __int64 v181; // r10
  __int64 v182; // r8
  int v183; // ecx
  unsigned int v184; // ebx
  __int64 v185; // r10
  int v186; // r9d
  int v187; // r9d
  __int64 v188; // r11
  __int64 v189; // r8
  unsigned int v190; // ebx
  _QWORD *v191; // rax
  void *v192; // r9
  void *v193; // r8
  void *v194; // r10
  void *v195; // r11
  __int64 v196; // rdx
  int v197; // [rsp+60h] [rbp-58h]
  int v198; // [rsp+64h] [rbp-54h] BYREF
  unsigned int v199; // [rsp+68h] [rbp-50h]
  __int64 v200; // [rsp+C0h] [rbp+8h]
  int v202; // [rsp+D0h] [rbp+18h]
  __int64 v203; // [rsp+D8h] [rbp+20h]

  v203 = a4;
  v200 = a1;
  v13 = *(_DWORD *)(a1 + 200);
  v14 = a11;
  v15 = a1;
  v16 = v13 & 0x4000;
  v198 = -1;
  v17 = v13 & 0x2000;
  v197 = v16;
  v202 = v17;
  if ( a11 && a7 )
  {
    a1 = a8 + 28;
    v18 = a7;
    do
    {
      *(_QWORD *)(a1 - 4) = *(unsigned int *)a1;
      a1 += 48LL;
      --v18;
    }
    while ( v18 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v20 = (char *)(a3 + 8);
  v21 = 0;
  v199 = result;
  if ( (_DWORD)result )
  {
    v22 = a9;
    v23 = a6;
    while ( (v20[1] & 8) != 0 )
    {
LABEL_60:
      result = *((unsigned __int16 *)v20 + 1);
      ++v21;
      v20 += result;
      if ( v21 >= v199 )
        goto LABEL_61;
    }
    v24 = *v20;
    if ( !*v20 )
    {
      if ( !(unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(a1, v23) )
      {
        if ( !v17 && !v14 )
        {
          if ( SepIsPackageSid((__int64)(v20 + 8)) )
          {
LABEL_13:
            v15 = v200;
            v25 = (_DWORD *)(a13 + 4);
            SepMatchPackage(
              v200,
              -1,
              (_WORD *)v20 + 4,
              *((_DWORD *)v20 + 1),
              (_BYTE *)(a13 + 21),
              (_DWORD *)(a13 + 4),
              (_BYTE *)(a13 + 20),
              (_DWORD *)(a13 + 16),
              (_BYTE *)(a13 + 24));
LABEL_14:
            *(_DWORD *)a13 &= ~*v25;
LABEL_57:
            v17 = v202;
            goto LABEL_58;
          }
          v15 = v200;
          if ( SepIsCapabilitySid((__int64)(v20 + 8)) )
          {
            SepMatchCapability(
              v200,
              -1,
              (unsigned __int8 *)v20 + 8,
              *((_DWORD *)v20 + 1),
              (_BYTE *)(a13 + 22),
              (_DWORD *)(a13 + 8));
            *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 8);
            goto LABEL_57;
          }
        }
        if ( !SepSidInToken(v15, a6, (unsigned __int8 *)v20 + 8, 0, v14, a12) )
        {
LABEL_58:
          v22 = a9;
LABEL_59:
          v23 = a6;
          a4 = v203;
          goto LABEL_60;
        }
        if ( a7 == 1 )
        {
          *(_DWORD *)(a8 + 28) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 32);
          goto LABEL_58;
        }
        a1 = *(unsigned int *)(a8 + 28);
        v26 = *((_DWORD *)v20 + 1);
        v27 = *(_DWORD *)(a8 + 32);
        v28 = a1 | v26 & ~v27;
        *(_DWORD *)(a8 + 28) = v28;
        if ( (_DWORD)a1 != v28 )
        {
          v29 = *(_QWORD *)(a8 + 40);
          v30 = 0LL;
          v31 = v26 & ~(a1 | v27);
          a1 = 1LL;
          if ( v29 )
          {
            while ( (_DWORD)a1 )
            {
              if ( ((unsigned int)a1 & v31) != 0 && !*(_DWORD *)(v29 + 4 * v30) )
                *(_DWORD *)(v29 + 4 * v30) = v21 | 0x10000;
              v30 = (unsigned int)(v30 + 1);
              a1 = (unsigned int)(2 * a1);
            }
          }
          v32 = *(unsigned int *)(a8 + 20);
          v33 = 0;
          v34 = 0;
          v35 = -1;
          if ( (_DWORD)v32 != -1 )
          {
            for ( i = (unsigned int)(v32 + 1); (unsigned int)i < a7; i = (unsigned int)(i + 1) )
            {
              v37 = *(_WORD *)(a8 + 48 * i);
              if ( v37 <= *(_WORD *)(a8 + 48 * v32) )
                break;
              if ( v37 == *(_WORD *)a8 )
              {
                v33 |= *(_DWORD *)(a8 + 48 * i + 24);
                v35 &= *(_DWORD *)(a8 + 48 * i + 28);
                v34 |= *(_DWORD *)(a8 + 48 * i + 32);
              }
            }
            a1 = 6 * v32;
            if ( v33 != *(_DWORD *)(a8 + 48 * v32 + 24)
              || v35 != *(_DWORD *)(a8 + 48 * v32 + 28)
              || v34 != *(_DWORD *)(a8 + 48 * v32 + 32) )
            {
              v38 = ~*(_DWORD *)(a8 + 48 * v32 + 28);
              *(_DWORD *)(a8 + 48 * v32 + 28) = v35;
              v39 = v35 & v38;
              if ( v39 )
              {
                v40 = *(_QWORD *)(a8 + 48 * v32 + 40);
                v41 = 0LL;
                v42 = 1;
                if ( v40 )
                {
                  while ( v42 )
                  {
                    if ( (v42 & v39) != 0 && !*(_DWORD *)(v40 + 4 * v41) )
                      *(_DWORD *)(v40 + 4 * v41) = v21 | 0x10000;
                    v41 = (unsigned int)(v41 + 1);
                    v42 *= 2;
                  }
                }
              }
              AuthzBasepUpdateParentTypeList(a8, a7, v32, v21, 1);
            }
          }
          v15 = v200;
        }
        v43 = 1;
        if ( a7 > 1 )
        {
          v44 = a8 + 76;
          do
          {
            if ( *(_WORD *)(v44 - 28) <= *(_WORD *)a8 )
              break;
            v45 = ~*(_DWORD *)(v44 + 4);
            v46 = v45 & ~*(_DWORD *)v44;
            a1 = *(_DWORD *)v44 | v26 & (unsigned int)v45;
            *(_DWORD *)v44 = a1;
            v47 = v26 & v46;
            if ( v47 )
            {
              v48 = *(_QWORD *)(v44 + 12);
              v49 = 0LL;
              a1 = 1LL;
              if ( v48 )
              {
                while ( (_DWORD)a1 )
                {
                  if ( ((unsigned int)a1 & v47) != 0 && !*(_DWORD *)(v48 + 4 * v49) )
                    *(_DWORD *)(v48 + 4 * v49) = v21 | 0x10000;
                  v49 = (unsigned int)(v49 + 1);
                  a1 = (unsigned int)(2 * a1);
                }
              }
            }
            ++v43;
            v44 += 48LL;
          }
          while ( v43 < a7 );
        }
LABEL_56:
        v14 = a11;
        goto LABEL_57;
      }
      if ( v17 && !v197 )
        goto LABEL_76;
      if ( !v14 )
      {
        v15 = v200;
        if ( SepIsPackageSid((__int64)(v20 + 8)) )
        {
LABEL_70:
          v25 = (_DWORD *)(a13 + 4);
          SepMatchPackage(
            v15,
            -1,
            (_WORD *)v20 + 4,
            *((_DWORD *)v20 + 1),
            (_BYTE *)(a13 + 21),
            (_DWORD *)(a13 + 4),
            (_BYTE *)(a13 + 20),
            (_DWORD *)(a13 + 16),
            (_BYTE *)(a13 + 24));
          goto LABEL_14;
        }
      }
      if ( v17 && !v197 || v14 || (v15 = v200, !SepIsCapabilitySid((__int64)(v20 + 8))) )
      {
LABEL_76:
        if ( !SepSidInToken(v15, a6, (unsigned __int8 *)v20 + 8, 0, v14, a12) )
          goto LABEL_58;
        if ( a7 == 1 )
        {
          *(_DWORD *)(a8 + 28) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 32);
          goto LABEL_58;
        }
        a1 = *(unsigned int *)(a8 + 28);
        v52 = *((_DWORD *)v20 + 1);
        v53 = *(_DWORD *)(a8 + 32);
        v54 = a1 | v52 & ~v53;
        *(_DWORD *)(a8 + 28) = v54;
        if ( (_DWORD)a1 != v54 )
        {
          v55 = *(_QWORD *)(a8 + 40);
          v56 = 0LL;
          v57 = v52 & ~(a1 | v53);
          a1 = 1LL;
          if ( v55 )
          {
            while ( (_DWORD)a1 )
            {
              if ( ((unsigned int)a1 & v57) != 0 && !*(_DWORD *)(v55 + 4 * v56) )
                *(_DWORD *)(v55 + 4 * v56) = v21 | 0x10000;
              v56 = (unsigned int)(v56 + 1);
              a1 = (unsigned int)(2 * a1);
            }
          }
          v58 = *(unsigned int *)(a8 + 20);
          v59 = 0;
          v60 = 0;
          v61 = -1;
          if ( (_DWORD)v58 != -1 )
          {
            for ( j = (unsigned int)(v58 + 1); (unsigned int)j < a7; j = (unsigned int)(j + 1) )
            {
              v63 = *(_WORD *)(a8 + 48 * j);
              if ( v63 <= *(_WORD *)(a8 + 48 * v58) )
                break;
              if ( v63 == *(_WORD *)a8 )
              {
                v59 |= *(_DWORD *)(a8 + 48 * j + 24);
                v61 &= *(_DWORD *)(a8 + 48 * j + 28);
                v60 |= *(_DWORD *)(a8 + 48 * j + 32);
              }
            }
            a1 = 6 * v58;
            if ( v59 != *(_DWORD *)(a8 + 48 * v58 + 24)
              || v61 != *(_DWORD *)(a8 + 48 * v58 + 28)
              || v60 != *(_DWORD *)(a8 + 48 * v58 + 32) )
            {
              v64 = ~*(_DWORD *)(a8 + 48 * v58 + 28);
              *(_DWORD *)(a8 + 48 * v58 + 28) = v61;
              v65 = v61 & v64;
              if ( v65 )
              {
                v66 = *(_QWORD *)(a8 + 48 * v58 + 40);
                v67 = 0LL;
                v68 = 1;
                if ( v66 )
                {
                  while ( v68 )
                  {
                    if ( (v68 & v65) != 0 && !*(_DWORD *)(v66 + 4 * v67) )
                      *(_DWORD *)(v66 + 4 * v67) = v21 | 0x10000;
                    v67 = (unsigned int)(v67 + 1);
                    v68 *= 2;
                  }
                }
              }
              AuthzBasepUpdateParentTypeList(a8, a7, v58, v21, 1);
            }
          }
          v15 = v200;
        }
        v69 = 1;
        if ( a7 > 1 )
        {
          v70 = a8 + 76;
          do
          {
            if ( *(_WORD *)(v70 - 28) <= *(_WORD *)a8 )
              break;
            v71 = ~*(_DWORD *)(v70 + 4);
            v72 = v71 & ~*(_DWORD *)v70;
            a1 = *(_DWORD *)v70 | v52 & (unsigned int)v71;
            *(_DWORD *)v70 = a1;
            v73 = v52 & v72;
            if ( v73 )
            {
              v74 = *(_QWORD *)(v70 + 12);
              v75 = 0LL;
              a1 = 1LL;
              if ( v74 )
              {
                while ( (_DWORD)a1 )
                {
                  if ( ((unsigned int)a1 & v73) != 0 && !*(_DWORD *)(v74 + 4 * v75) )
                    *(_DWORD *)(v74 + 4 * v75) = v21 | 0x10000;
                  v75 = (unsigned int)(v75 + 1);
                  a1 = (unsigned int)(2 * a1);
                }
              }
            }
            ++v69;
            v70 += 48LL;
          }
          while ( v69 < a7 );
        }
        goto LABEL_56;
      }
LABEL_75:
      SepMatchCapability(
        v15,
        -1,
        (unsigned __int8 *)v20 + 8,
        *((_DWORD *)v20 + 1),
        (_BYTE *)(a13 + 22),
        (_DWORD *)(a13 + 8));
      *(_DWORD *)a13 &= ~*(_DWORD *)(a13 + 8);
      goto LABEL_57;
    }
    switch ( v24 )
    {
      case 5:
        a1 = *((unsigned int *)v20 + 2);
        v76 = *((_DWORD *)v20 + 2) & 1;
        if ( v76 )
        {
          if ( v20 != (char *)-12LL )
          {
            if ( !v22 )
              goto LABEL_353;
            if ( SepSidInToken(v15, v23, (unsigned __int8 *)&v20[16 * v76 + ((8 * (a1 & 2)) | 0xC)], 0, v14, a12) )
            {
              v77 = 0LL;
              if ( a7 )
              {
                while ( 1 )
                {
                  v78 = a8 + 48 * v77;
                  if ( *(_QWORD *)(v20 + 12) == *(_QWORD *)(v78 + 4)
                    && *((_DWORD *)v20 + 5) == *(_DWORD *)(v78 + 12)
                    && *((_DWORD *)v20 + 6) == *(_DWORD *)(v78 + 16) )
                  {
                    break;
                  }
                  v77 = (unsigned int)(v77 + 1);
                  if ( (unsigned int)v77 >= a7 )
                  {
                    v14 = a11;
                    v15 = v200;
                    goto LABEL_57;
                  }
                }
                v79 = *(_DWORD *)(v78 + 28);
                v80 = 0;
                v81 = *((_DWORD *)v20 + 1);
                a1 = (unsigned int)~*(_DWORD *)(v78 + 32);
                v82 = v79 | v81 & ~*(_DWORD *)(v78 + 32);
                *(_DWORD *)(v78 + 28) = v82;
                if ( v79 == v82 )
                {
                  v80 = 1;
                }
                else
                {
                  v90 = *(_QWORD *)(v78 + 40);
                  v91 = 0LL;
                  v92 = v81 & a1 & ~v79;
                  a1 = 1LL;
                  if ( v90 )
                  {
                    while ( (_DWORD)a1 )
                    {
                      if ( ((unsigned int)a1 & v92) != 0 && !*(_DWORD *)(v90 + 4 * v91) )
                        *(_DWORD *)(v90 + 4 * v91) = v21 | 0x10000;
                      v91 = (unsigned int)(v91 + 1);
                      a1 = (unsigned int)(2 * a1);
                    }
                  }
                }
                if ( a7 != 1 )
                {
                  if ( !v80 )
                    AuthzBasepUpdateParentTypeList(a8, a7, v77, v21, 1);
                  v83 = (unsigned int)(v77 + 1);
                  if ( (unsigned int)v83 < a7 )
                  {
                    v84 = a8 + 48 * v83 + 28;
                    do
                    {
                      if ( *(_WORD *)(v84 - 28) <= *(_WORD *)v78 )
                        break;
                      v85 = ~*(_DWORD *)(v84 + 4);
                      v86 = v85 & ~*(_DWORD *)v84;
                      a1 = *(_DWORD *)v84 | v81 & (unsigned int)v85;
                      *(_DWORD *)v84 = a1;
                      v87 = v81 & v86;
                      if ( v87 )
                      {
                        v88 = *(_QWORD *)(v84 + 12);
                        v89 = 0LL;
                        a1 = 1LL;
                        if ( v88 )
                        {
                          while ( (_DWORD)a1 )
                          {
                            if ( ((unsigned int)a1 & v87) != 0 && !*(_DWORD *)(v88 + 4 * v89) )
                              *(_DWORD *)(v88 + 4 * v89) = v21 | 0x10000;
                            v89 = (unsigned int)(v89 + 1);
                            a1 = (unsigned int)(2 * a1);
                          }
                        }
                      }
                      LODWORD(v83) = v83 + 1;
                      v84 += 48LL;
                    }
                    while ( (unsigned int)v83 < a7 );
                  }
                }
                v14 = a11;
              }
              v15 = v200;
            }
            goto LABEL_57;
          }
          v17 = v202;
        }
        if ( !SepSidInToken(v15, v23, (unsigned __int8 *)&v20[16 * v76 + ((8 * (a1 & 2)) | 0xC)], 0, v14, a12) )
          goto LABEL_58;
        if ( a7 == 1 )
        {
          *(_DWORD *)(a8 + 28) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 32);
          goto LABEL_58;
        }
        a1 = *(unsigned int *)(a8 + 28);
        v93 = *((_DWORD *)v20 + 1);
        v94 = *(_DWORD *)(a8 + 32);
        v95 = a1 | v93 & ~v94;
        *(_DWORD *)(a8 + 28) = v95;
        if ( (_DWORD)a1 != v95 )
        {
          v96 = *(_QWORD *)(a8 + 40);
          v97 = 0LL;
          v98 = v93 & ~(a1 | v94);
          a1 = 1LL;
          if ( v96 )
          {
            while ( (_DWORD)a1 )
            {
              if ( (v98 & (unsigned int)a1) != 0 && !*(_DWORD *)(v96 + 4 * v97) )
                *(_DWORD *)(v96 + 4 * v97) = v21 | 0x10000;
              v97 = (unsigned int)(v97 + 1);
              a1 = (unsigned int)(2 * a1);
            }
          }
          v99 = *(unsigned int *)(a8 + 20);
          v100 = 0;
          v101 = 0;
          v102 = -1;
          if ( (_DWORD)v99 != -1 )
          {
            for ( k = (unsigned int)(v99 + 1); (unsigned int)k < a7; k = (unsigned int)(k + 1) )
            {
              v104 = *(_WORD *)(a8 + 48 * k);
              if ( v104 <= *(_WORD *)(a8 + 48 * v99) )
                break;
              if ( v104 == *(_WORD *)a8 )
              {
                v100 |= *(_DWORD *)(a8 + 48 * k + 24);
                v102 &= *(_DWORD *)(a8 + 48 * k + 28);
                v101 |= *(_DWORD *)(a8 + 48 * k + 32);
              }
            }
            a1 = 6 * v99;
            if ( v100 != *(_DWORD *)(a8 + 48 * v99 + 24)
              || v102 != *(_DWORD *)(a8 + 48 * v99 + 28)
              || v101 != *(_DWORD *)(a8 + 48 * v99 + 32) )
            {
              v105 = ~*(_DWORD *)(a8 + 48 * v99 + 28);
              *(_DWORD *)(a8 + 48 * v99 + 28) = v102;
              v106 = v102 & v105;
              if ( v106 )
              {
                v107 = *(_QWORD *)(a8 + 48 * v99 + 40);
                v108 = 0LL;
                v109 = 1;
                if ( v107 )
                {
                  while ( v109 )
                  {
                    if ( (v109 & v106) != 0 && !*(_DWORD *)(v107 + 4 * v108) )
                      *(_DWORD *)(v107 + 4 * v108) = v21 | 0x10000;
                    v108 = (unsigned int)(v108 + 1);
                    v109 *= 2;
                  }
                }
              }
              AuthzBasepUpdateParentTypeList(a8, a7, v99, v21, 1);
            }
          }
          v15 = v200;
        }
        v110 = 1;
        if ( a7 > 1 )
        {
          v111 = a8 + 76;
          do
          {
            if ( *(_WORD *)(v111 - 28) <= *(_WORD *)a8 )
              break;
            v112 = ~*(_DWORD *)(v111 + 4);
            v113 = v112 & ~*(_DWORD *)v111;
            a1 = *(_DWORD *)v111 | v93 & (unsigned int)v112;
            *(_DWORD *)v111 = a1;
            v114 = v93 & v113;
            if ( v114 )
            {
              v115 = *(_QWORD *)(v111 + 12);
              v116 = 0LL;
              a1 = 1LL;
              if ( v115 )
              {
                while ( (_DWORD)a1 )
                {
                  if ( (v114 & (unsigned int)a1) != 0 && !*(_DWORD *)(v115 + 4 * v116) )
                    *(_DWORD *)(v115 + 4 * v116) = v21 | 0x10000;
                  v116 = (unsigned int)(v116 + 1);
                  a1 = (unsigned int)(2 * a1);
                }
              }
            }
            ++v110;
            v111 += 48LL;
          }
          while ( v110 < a7 );
        }
        goto LABEL_56;
      case 4:
        if ( !SepSidInToken(v15, v23, (unsigned __int8 *)&v20[4 * (unsigned __int8)v20[13] + 20], 0, v14, a12)
          || !SepSidInToken(a2, 0LL, (unsigned __int8 *)v20 + 12, 0, 0, a12) )
        {
          goto LABEL_58;
        }
        if ( a7 == 1 )
        {
          *(_DWORD *)(a8 + 28) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 32);
          goto LABEL_58;
        }
        a1 = *(unsigned int *)(a8 + 28);
        v117 = *((_DWORD *)v20 + 1);
        v118 = *(_DWORD *)(a8 + 32);
        v119 = a1 | v117 & ~v118;
        *(_DWORD *)(a8 + 28) = v119;
        if ( (_DWORD)a1 != v119 )
        {
          v120 = *(_QWORD *)(a8 + 40);
          v121 = 0LL;
          v122 = v117 & ~(a1 | v118);
          a1 = 1LL;
          if ( v120 )
          {
            while ( (_DWORD)a1 )
            {
              if ( ((unsigned int)a1 & v122) != 0 && !*(_DWORD *)(v120 + 4 * v121) )
                *(_DWORD *)(v120 + 4 * v121) = v21 | 0x10000;
              v121 = (unsigned int)(v121 + 1);
              a1 = (unsigned int)(2 * a1);
            }
          }
          v123 = *(unsigned int *)(a8 + 20);
          v124 = 0;
          v125 = 0;
          v126 = -1;
          if ( (_DWORD)v123 != -1 )
          {
            for ( m = (unsigned int)(v123 + 1); (unsigned int)m < a7; m = (unsigned int)(m + 1) )
            {
              v128 = *(_WORD *)(a8 + 48 * m);
              if ( v128 <= *(_WORD *)(a8 + 48 * v123) )
                break;
              if ( v128 == *(_WORD *)a8 )
              {
                v124 |= *(_DWORD *)(a8 + 48 * m + 24);
                v126 &= *(_DWORD *)(a8 + 48 * m + 28);
                v125 |= *(_DWORD *)(a8 + 48 * m + 32);
              }
            }
            a1 = 6 * v123;
            if ( v124 != *(_DWORD *)(a8 + 48 * v123 + 24)
              || v126 != *(_DWORD *)(a8 + 48 * v123 + 28)
              || v125 != *(_DWORD *)(a8 + 48 * v123 + 32) )
            {
              v129 = ~*(_DWORD *)(a8 + 48 * v123 + 28);
              *(_DWORD *)(a8 + 48 * v123 + 28) = v126;
              v130 = v126 & v129;
              if ( v130 )
              {
                v131 = *(_QWORD *)(a8 + 48 * v123 + 40);
                v132 = 0LL;
                v133 = 1;
                if ( v131 )
                {
                  while ( v133 )
                  {
                    if ( (v133 & v130) != 0 && !*(_DWORD *)(v131 + 4 * v132) )
                      *(_DWORD *)(v131 + 4 * v132) = v21 | 0x10000;
                    v132 = (unsigned int)(v132 + 1);
                    v133 *= 2;
                  }
                }
              }
              AuthzBasepUpdateParentTypeList(a8, a7, v123, v21, 1);
            }
          }
          v15 = v200;
        }
        v134 = 1;
        if ( a7 > 1 )
        {
          v135 = a8 + 76;
          do
          {
            if ( *(_WORD *)(v135 - 28) <= *(_WORD *)a8 )
              break;
            v136 = ~*(_DWORD *)(v135 + 4);
            v137 = v136 & ~*(_DWORD *)v135;
            a1 = *(_DWORD *)v135 | v117 & (unsigned int)v136;
            *(_DWORD *)v135 = a1;
            v138 = v117 & v137;
            if ( v138 )
            {
              v139 = *(_QWORD *)(v135 + 12);
              v140 = 0LL;
              a1 = 1LL;
              if ( v139 )
              {
                while ( (_DWORD)a1 )
                {
                  if ( ((unsigned int)a1 & v138) != 0 && !*(_DWORD *)(v139 + 4 * v140) )
                    *(_DWORD *)(v139 + 4 * v140) = v21 | 0x10000;
                  v140 = (unsigned int)(v140 + 1);
                  a1 = (unsigned int)(2 * a1);
                }
              }
            }
            ++v134;
            v135 += 48LL;
          }
          while ( v134 < a7 );
        }
        goto LABEL_56;
      case 1:
        if ( !SepSidInToken(v15, v23, (unsigned __int8 *)v20 + 8, 1, v14, a12) )
          goto LABEL_58;
        if ( a7 == 1 )
        {
          *(_DWORD *)(a8 + 32) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 28);
          goto LABEL_58;
        }
        a1 = *(unsigned int *)(a8 + 32);
        v141 = *((_DWORD *)v20 + 1);
        v142 = *(_DWORD *)(a8 + 28);
        v143 = a1 | v141 & ~v142;
        *(_DWORD *)(a8 + 32) = v143;
        if ( (_DWORD)a1 != v143 )
        {
          v144 = *(_QWORD *)(a8 + 40);
          v145 = 0LL;
          v146 = v141 & ~(a1 | v142);
          a1 = 1LL;
          if ( v144 )
          {
            while ( (_DWORD)a1 )
            {
              if ( ((unsigned int)a1 & v146) != 0 && !*(_DWORD *)(v144 + 4 * v145) )
                *(_DWORD *)(v144 + 4 * v145) = v21 | 0x20000;
              v145 = (unsigned int)(v145 + 1);
              a1 = (unsigned int)(2 * a1);
            }
          }
          v147 = *(unsigned int *)(a8 + 20);
          v148 = 0;
          v149 = 0;
          v150 = -1;
          if ( (_DWORD)v147 != -1 )
          {
            for ( n = (unsigned int)(v147 + 1); (unsigned int)n < a7; n = (unsigned int)(n + 1) )
            {
              v152 = *(_WORD *)(a8 + 48 * n);
              if ( v152 <= *(_WORD *)(a8 + 48 * v147) )
                break;
              if ( v152 == *(_WORD *)a8 )
              {
                v148 |= *(_DWORD *)(a8 + 48 * n + 24);
                v150 &= *(_DWORD *)(a8 + 48 * n + 28);
                v149 |= *(_DWORD *)(a8 + 48 * n + 32);
              }
            }
            a1 = 6 * v147;
            if ( v148 != *(_DWORD *)(a8 + 48 * v147 + 24)
              || v150 != *(_DWORD *)(a8 + 48 * v147 + 28)
              || v149 != *(_DWORD *)(a8 + 48 * v147 + 32) )
            {
              v153 = ~*(_DWORD *)(a8 + 48 * v147 + 32);
              *(_DWORD *)(a8 + 48 * v147 + 32) = v149;
              v154 = v149 & v153;
              if ( v154 )
              {
                v155 = *(_QWORD *)(a8 + 48 * v147 + 40);
                v156 = 0LL;
                v157 = 1;
                if ( v155 )
                {
                  while ( v157 )
                  {
                    if ( (v157 & v154) != 0 && !*(_DWORD *)(v155 + 4 * v156) )
                      *(_DWORD *)(v155 + 4 * v156) = v21 | 0x20000;
                    v156 = (unsigned int)(v156 + 1);
                    v157 *= 2;
                  }
                }
              }
              AuthzBasepUpdateParentTypeList(a8, a7, v147, v21, 2);
            }
          }
          v15 = v200;
        }
        v158 = 1;
        if ( a7 > 1 )
        {
          v159 = a8 + 80;
          do
          {
            if ( *(_WORD *)(v159 - 32) <= *(_WORD *)a8 )
              break;
            v160 = ~*(_DWORD *)(v159 - 4);
            v161 = v160 & ~*(_DWORD *)v159;
            a1 = *(_DWORD *)v159 | v141 & (unsigned int)v160;
            *(_DWORD *)v159 = a1;
            v162 = v141 & v161;
            if ( v162 )
            {
              v163 = *(_QWORD *)(v159 + 8);
              v164 = 0LL;
              a1 = 1LL;
              if ( v163 )
              {
                while ( (_DWORD)a1 )
                {
                  if ( ((unsigned int)a1 & v162) != 0 && !*(_DWORD *)(v163 + 4 * v164) )
                    *(_DWORD *)(v163 + 4 * v164) = v21 | 0x20000;
                  v164 = (unsigned int)(v164 + 1);
                  a1 = (unsigned int)(2 * a1);
                }
              }
            }
            ++v158;
            v159 += 48LL;
          }
          while ( v158 < a7 );
        }
        goto LABEL_56;
      case 6:
        v165 = *((_DWORD *)v20 + 2) & 1;
        if ( !SepSidInToken(
                v15,
                v23,
                (unsigned __int8 *)&v20[16 * v165 + ((8LL * (*((_DWORD *)v20 + 2) & 2)) | 0xC)],
                1,
                v14,
                a12) )
          goto LABEL_57;
        if ( v165 && v20 != (char *)-12LL )
        {
          v22 = a9;
          if ( !a9 )
          {
            v17 = v202;
            *(_DWORD *)(a8 + 32) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 28);
            goto LABEL_59;
          }
          v166 = 0LL;
          if ( a7 )
          {
            while ( 1 )
            {
              a1 = 6 * v166;
              if ( *((_DWORD *)v20 + 3) == *(_DWORD *)(a8 + 48 * v166 + 4)
                && *((_DWORD *)v20 + 4) == *(_DWORD *)(a8 + 48 * v166 + 8)
                && *((_DWORD *)v20 + 5) == *(_DWORD *)(a8 + 48 * v166 + 12)
                && *((_DWORD *)v20 + 6) == *(_DWORD *)(a8 + 48 * v166 + 16) )
              {
                break;
              }
              v166 = (unsigned int)(v166 + 1);
              if ( (unsigned int)v166 >= a7 )
                goto LABEL_57;
            }
            AuthzBasepAddAccessTypeList(a8, a7, v166, v21, *((_DWORD *)v20 + 1), 2);
          }
          goto LABEL_57;
        }
        if ( a7 == 1 )
        {
          *(_DWORD *)(a8 + 32) |= *((_DWORD *)v20 + 1) & ~*(_DWORD *)(a8 + 28);
          goto LABEL_57;
        }
        a1 = *(unsigned int *)(a8 + 32);
        v167 = *((_DWORD *)v20 + 1);
        v168 = *(_DWORD *)(a8 + 28);
        v169 = a1 | v167 & ~v168;
        *(_DWORD *)(a8 + 32) = v169;
        if ( (_DWORD)a1 != v169 )
        {
          v170 = *(_QWORD *)(a8 + 40);
          v171 = 0LL;
          v172 = v167 & ~(a1 | v168);
          a1 = 1LL;
          if ( v170 )
          {
            while ( (_DWORD)a1 )
            {
              if ( ((unsigned int)a1 & v172) != 0 && !*(_DWORD *)(v170 + 4 * v171) )
                *(_DWORD *)(v170 + 4 * v171) = v21 | 0x20000;
              v171 = (unsigned int)(v171 + 1);
              a1 = (unsigned int)(2 * a1);
            }
          }
          v173 = *(unsigned int *)(a8 + 20);
          v174 = 0;
          v175 = 0;
          v176 = -1;
          if ( (_DWORD)v173 != -1 )
          {
            for ( ii = (unsigned int)(v173 + 1); (unsigned int)ii < a7; ii = (unsigned int)(ii + 1) )
            {
              v178 = *(_WORD *)(a8 + 48 * ii);
              if ( v178 <= *(_WORD *)(a8 + 48 * v173) )
                break;
              if ( v178 == *(_WORD *)a8 )
              {
                v174 |= *(_DWORD *)(a8 + 48 * ii + 24);
                v176 &= *(_DWORD *)(a8 + 48 * ii + 28);
                v175 |= *(_DWORD *)(a8 + 48 * ii + 32);
              }
            }
            a1 = 6 * v173;
            if ( v174 != *(_DWORD *)(a8 + 48 * v173 + 24)
              || v176 != *(_DWORD *)(a8 + 48 * v173 + 28)
              || v175 != *(_DWORD *)(a8 + 48 * v173 + 32) )
            {
              v179 = ~*(_DWORD *)(a8 + 48 * v173 + 32);
              *(_DWORD *)(a8 + 48 * v173 + 32) = v175;
              v180 = v175 & v179;
              if ( v180 )
              {
                v181 = *(_QWORD *)(a8 + 48 * v173 + 40);
                v182 = 0LL;
                v183 = 1;
                if ( v181 )
                {
                  while ( v183 )
                  {
                    if ( (v183 & v180) != 0 && !*(_DWORD *)(v181 + 4 * v182) )
                      *(_DWORD *)(v181 + 4 * v182) = v21 | 0x20000;
                    v182 = (unsigned int)(v182 + 1);
                    v183 *= 2;
                  }
                }
              }
              AuthzBasepUpdateParentTypeList(a8, a7, v173, v21, 2);
            }
          }
          v15 = v200;
        }
        v184 = 1;
        if ( a7 > 1 )
        {
          v185 = a8 + 80;
          do
          {
            if ( *(_WORD *)(v185 - 32) <= *(_WORD *)a8 )
              break;
            a1 = (unsigned int)~*(_DWORD *)(v185 - 4);
            v186 = v167 & ~*(_DWORD *)v185;
            *(_DWORD *)v185 |= a1 & v167;
            v187 = a1 & v186;
            if ( v187 )
            {
              v188 = *(_QWORD *)(v185 + 8);
              v189 = 0LL;
              a1 = 1LL;
              if ( v188 )
              {
                while ( (_DWORD)a1 )
                {
                  if ( ((unsigned int)a1 & v187) != 0 && !*(_DWORD *)(v188 + 4 * v189) )
                    *(_DWORD *)(v188 + 4 * v189) = v21 | 0x20000;
                  v189 = (unsigned int)(v189 + 1);
                  a1 = (unsigned int)(2 * a1);
                }
              }
            }
            ++v184;
            v185 += 48LL;
          }
          while ( v184 < a7 );
        }
        goto LABEL_56;
    }
    if ( v24 != 9 )
      goto LABEL_60;
    v190 = 4 * (unsigned __int8)v20[9] + 8;
    if ( (int)(*((unsigned __int16 *)v20 + 1) - v190 - 8) <= 0 )
    {
LABEL_353:
      v17 = v202;
      goto LABEL_60;
    }
    if ( a4 && !*a5 )
      AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
    v191 = *(_QWORD **)(v15 + 1096);
    if ( v191 )
    {
      v192 = (void *)v191[72];
      v193 = (void *)v191[74];
      v194 = (void *)v191[73];
      v195 = (void *)v191[75];
    }
    else
    {
      v192 = 0LL;
      v193 = 0LL;
      v194 = 0LL;
      v195 = 0LL;
    }
    AuthzBasepEvaluateAceCondition(
      (_DWORD *)v15,
      *(void **)(v15 + 776),
      (void *)*a5,
      v192,
      v193,
      v194,
      v195,
      &v20[v190 + 8],
      *((unsigned __int16 *)v20 + 1) - v190 - 8,
      0,
      v14,
      &v198);
    if ( v198 != 1 )
      goto LABEL_57;
    v17 = v202;
    if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(a1, v196) )
    {
      if ( v202 && !v197 )
        goto LABEL_342;
      if ( !v14 )
      {
        v15 = v200;
        if ( SepIsPackageSid((__int64)(v20 + 8)) )
          goto LABEL_70;
      }
      if ( v202 && !v197 || v14 )
        goto LABEL_342;
    }
    else
    {
      if ( v202 || v14 )
        goto LABEL_342;
      if ( SepIsPackageSid((__int64)(v20 + 8)) )
        goto LABEL_13;
    }
    v15 = v200;
    if ( SepIsCapabilitySid((__int64)(v20 + 8)) )
      goto LABEL_75;
LABEL_342:
    if ( SepSidInToken(v15, a6, (unsigned __int8 *)v20 + 8, 0, v14, a12) )
      AuthzBasepAddAccessTypeList(a8, a7, 0, v21, *((_DWORD *)v20 + 1), 1);
    goto LABEL_58;
  }
LABEL_61:
  if ( v14 && a7 )
  {
    v50 = (_DWORD *)(a8 + 28);
    v51 = a7;
    do
    {
      result = *(v50 - 1) & (*v50 | (unsigned int)~a10);
      *v50 = result;
      v50 += 12;
      --v51;
    }
    while ( v51 );
  }
  return result;
}
