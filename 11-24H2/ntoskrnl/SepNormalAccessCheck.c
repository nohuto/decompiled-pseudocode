/*
 * XREFs of SepNormalAccessCheck @ 0x1404EA720
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
 *     AuthzBasepUpdateParentTypeList @ 0x1404ADF00 (AuthzBasepUpdateParentTypeList.c)
 *     Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline @ 0x1405E2C90 (Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline.c)
 */

char __fastcall SepNormalAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned __int8 *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        unsigned __int8 a11,
        char a12,
        _DWORD *a13)
{
  int v13; // ebp
  unsigned int v15; // eax
  int v16; // r14d
  int v17; // esi
  int v19; // ebx
  _DWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  _DWORD *v23; // rsi
  unsigned int v24; // r14d
  char *v25; // r13
  int v26; // edi
  unsigned __int8 *v27; // r10
  __int64 v28; // rcx
  int v29; // ebx
  char v30; // al
  char v31; // al
  int v32; // eax
  int v33; // ebx
  int v34; // edi
  int v35; // eax
  __int64 v36; // r9
  int v37; // ebx
  __int64 v38; // r8
  int v39; // ecx
  unsigned int v40; // ebx
  int *v41; // r10
  int v42; // r9d
  int v43; // r9d
  __int64 v44; // r11
  __int64 v45; // r8
  int v46; // ecx
  unsigned __int8 v47; // al
  int v48; // eax
  int v49; // ebx
  int v50; // edi
  int v51; // eax
  __int64 v52; // r9
  int v53; // ebx
  __int64 v54; // r8
  int v55; // ecx
  unsigned int v56; // ebx
  int *v57; // r10
  int v58; // r9d
  int v59; // r9d
  __int64 v60; // r11
  __int64 v61; // r8
  int v62; // ecx
  int v63; // ecx
  __int64 v64; // rdi
  __int64 v65; // rdx
  int v66; // r9d
  int v67; // ebp
  int v68; // eax
  __int64 v69; // r10
  int v70; // r9d
  __int64 v71; // r8
  int v72; // ecx
  __int64 v73; // rbx
  int *v74; // r10
  int v75; // ecx
  int v76; // r9d
  __int64 v77; // r11
  __int64 v78; // r8
  int v79; // ecx
  int v80; // edi
  int v81; // r9d
  int v82; // eax
  __int64 v83; // r10
  int v84; // r9d
  __int64 v85; // r8
  int v86; // ecx
  unsigned int v87; // ebx
  int *v88; // r10
  int v89; // ecx
  int v90; // r9d
  __int64 v91; // r11
  __int64 v92; // r8
  int v93; // ecx
  int v94; // edi
  int v95; // eax
  __int64 v96; // r10
  __int64 v97; // r8
  int v98; // ecx
  unsigned int v99; // ebx
  int *v100; // r10
  int v101; // r9d
  int v102; // r9d
  __int64 v103; // r11
  __int64 v104; // r8
  int v105; // ecx
  unsigned int v106; // ebx
  __int64 v107; // r8
  __int64 v108; // rdx
  unsigned int v109; // ebx
  _QWORD *v110; // rax
  void *v111; // r9
  void *v112; // r8
  void *v113; // r10
  void *v114; // r11
  __int64 v115; // rdx
  __int64 v116; // rcx
  int v117; // ebx
  int v118; // esi
  int v119; // eax
  __int64 v120; // r9
  int v121; // ebx
  __int64 v122; // r8
  int v123; // ecx
  unsigned int v124; // ebx
  int *v125; // r10
  int v126; // r9d
  int v127; // r9d
  __int64 v128; // r11
  __int64 v129; // r8
  int v130; // ecx
  int v131; // ebx
  int v132; // esi
  int v133; // eax
  __int64 v134; // r9
  int v135; // ebx
  __int64 v136; // r8
  int v137; // ecx
  unsigned int v138; // ebx
  int *v139; // r10
  int v140; // r9d
  int v141; // r9d
  __int64 v142; // r11
  __int64 v143; // r8
  int v144; // ecx
  int v146; // [rsp+60h] [rbp-48h]
  int v147; // [rsp+64h] [rbp-44h]
  int v148; // [rsp+68h] [rbp-40h] BYREF
  unsigned int v149; // [rsp+6Ch] [rbp-3Ch]
  int v152; // [rsp+C8h] [rbp+20h]
  int v153; // [rsp+E8h] [rbp+40h]

  v13 = 0;
  v15 = *(unsigned __int16 *)(a4 + 4);
  v16 = *(_DWORD *)(a2 + 200) & 0x4000;
  v17 = *(_DWORD *)(a2 + 200) & 0x2000;
  v152 = 0;
  v147 = v16;
  v19 = a1;
  v146 = v17;
  v148 = -1;
  v149 = v15;
  if ( a8 )
  {
    v20 = (_DWORD *)(a9 + 24);
    a1 = a8;
    do
    {
      *v20 = v19;
      v20 += 12;
      --a1;
    }
    while ( a1 );
  }
  LODWORD(v21) = Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(a1, a2);
  if ( !(_DWORD)v21 )
  {
    v22 = a11;
    if ( !v17 )
      goto LABEL_6;
LABEL_12:
    v23 = a13;
    goto LABEL_13;
  }
  if ( v17 && !v16 )
  {
    v22 = a11;
    goto LABEL_12;
  }
  v22 = a11;
LABEL_6:
  v23 = a13;
  if ( !(_BYTE)v22 )
  {
    v13 = *a13 | v19;
    v152 = v13;
  }
LABEL_13:
  v24 = 0;
  v153 = v13;
  v25 = (char *)(a4 + 8);
  if ( v149 )
  {
    v26 = a10;
    v27 = a7;
    v28 = a5;
    while ( 1 )
    {
      v29 = *(_DWORD *)(a9 + 24);
      if ( !v29 && !v13 )
        return v21;
      if ( (v25[1] & 8) == 0 && (v29 || !*v25 || *v25 == 9) )
        break;
LABEL_255:
      v21 = *((unsigned __int16 *)v25 + 1);
      ++v24;
      v23 = a13;
      v25 += v21;
      v22 = a11;
      v26 = a10;
      if ( v24 >= v149 )
        return v21;
    }
    v30 = *v25;
    if ( !*v25 )
    {
      if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v28, v22) )
      {
        if ( v146 && !v147 )
          goto LABEL_66;
        v47 = a11;
        if ( !a11 && v13 )
        {
          if ( SepIsPackageSid((__int64)(v25 + 8)) )
          {
LABEL_59:
            SepMatchPackage(
              a2,
              v153,
              (_WORD *)v25 + 4,
              *((_DWORD *)v25 + 1),
              (_BYTE *)v23 + 21,
              v23 + 1,
              (_BYTE *)v23 + 20,
              v23 + 4,
              (_BYTE *)v23 + 24);
            v48 = ~v23[1];
            v13 &= v48;
            *v23 &= v48;
            v152 = v13;
            goto LABEL_253;
          }
          v47 = 0;
        }
        if ( v146 && !v147 || v47 || !v13 || !SepIsCapabilitySid((__int64)(v25 + 8)) )
        {
LABEL_66:
          v49 = *(_DWORD *)(a9 + 24);
          if ( v49 && SepSidInToken(a2, a7, (unsigned __int8 *)v25 + 8, 0, a11, a12) )
          {
            v50 = *((_DWORD *)v25 + 1);
            if ( a8 == 1 )
            {
              *(_DWORD *)(a9 + 24) = v49 & ~v50;
            }
            else
            {
              v51 = v49 & ~v50;
              *(_DWORD *)(a9 + 24) = v51;
              if ( v49 != v51 )
              {
                v52 = *(_QWORD *)(a9 + 40);
                v53 = v50 & v49;
                v54 = 0LL;
                v55 = 1;
                if ( v52 )
                {
                  while ( v55 )
                  {
                    if ( (v55 & v53) != 0 && !*(_DWORD *)(v52 + 4 * v54) )
                      *(_DWORD *)(v52 + 4 * v54) = v24 | 0x10000;
                    v54 = (unsigned int)(v54 + 1);
                    v55 *= 2;
                  }
                }
                AuthzBasepUpdateParentTypeList(a9, a8, 0, v24, 0);
                v56 = 1;
                if ( a8 > 1 )
                {
                  v57 = (int *)(a9 + 72);
                  do
                  {
                    if ( *((_WORD *)v57 - 12) <= *(_WORD *)a9 )
                      break;
                    v58 = *v57;
                    *v57 &= ~v50;
                    v59 = v50 & v58;
                    if ( v59 )
                    {
                      v60 = *((_QWORD *)v57 + 2);
                      v61 = 0LL;
                      v62 = 1;
                      if ( v60 )
                      {
                        while ( v62 )
                        {
                          if ( (v62 & v59) != 0 && !*(_DWORD *)(v60 + 4 * v61) )
                            *(_DWORD *)(v60 + 4 * v61) = v24 | 0x10000;
                          v61 = (unsigned int)(v61 + 1);
                          v62 *= 2;
                        }
                      }
                    }
                    ++v56;
                    v57 += 12;
                  }
                  while ( v56 < a8 );
                }
              }
            }
          }
          goto LABEL_253;
        }
        goto LABEL_29;
      }
      v31 = a11;
      if ( !v146 && !a11 && v13 )
      {
        if ( SepIsPackageSid((__int64)(v25 + 8)) )
          goto LABEL_59;
        if ( SepIsCapabilitySid((__int64)(v25 + 8)) )
          goto LABEL_29;
        v31 = a11;
      }
      v33 = *(_DWORD *)(a9 + 24);
      if ( v33 && SepSidInToken(a2, a7, (unsigned __int8 *)v25 + 8, 0, v31, a12) )
      {
        v34 = *((_DWORD *)v25 + 1);
        if ( a8 == 1 )
        {
          *(_DWORD *)(a9 + 24) = v33 & ~v34;
        }
        else
        {
          v35 = v33 & ~v34;
          *(_DWORD *)(a9 + 24) = v35;
          if ( v33 != v35 )
          {
            v36 = *(_QWORD *)(a9 + 40);
            v37 = v34 & v33;
            v38 = 0LL;
            v39 = 1;
            if ( v36 )
            {
              while ( v39 )
              {
                if ( (v39 & v37) != 0 && !*(_DWORD *)(v36 + 4 * v38) )
                  *(_DWORD *)(v36 + 4 * v38) = v24 | 0x10000;
                v38 = (unsigned int)(v38 + 1);
                v39 *= 2;
              }
            }
            AuthzBasepUpdateParentTypeList(a9, a8, 0, v24, 0);
            v40 = 1;
            if ( a8 > 1 )
            {
              v41 = (int *)(a9 + 72);
              do
              {
                if ( *((_WORD *)v41 - 12) <= *(_WORD *)a9 )
                  break;
                v42 = *v41;
                *v41 &= ~v34;
                v43 = v34 & v42;
                if ( v43 )
                {
                  v44 = *((_QWORD *)v41 + 2);
                  v45 = 0LL;
                  v46 = 1;
                  if ( v44 )
                  {
                    while ( v46 )
                    {
                      if ( (v46 & v43) != 0 && !*(_DWORD *)(v44 + 4 * v45) )
                        *(_DWORD *)(v44 + 4 * v45) = v24 | 0x10000;
                      v45 = (unsigned int)(v45 + 1);
                      v46 *= 2;
                    }
                  }
                }
                ++v40;
                v41 += 12;
              }
              while ( v40 < a8 );
            }
          }
        }
      }
      goto LABEL_253;
    }
    switch ( v30 )
    {
      case 5:
        v63 = *((_DWORD *)v25 + 2);
        if ( (v63 & 1) == 0 || v25 == (char *)-12LL )
        {
          if ( SepSidInToken(a2, v27, (unsigned __int8 *)&v25[16 * (v63 & 1) + ((8LL * (v63 & 2)) | 0xC)], 0, v22, a12) )
          {
            v80 = *((_DWORD *)v25 + 1);
            v81 = *(_DWORD *)(a9 + 24);
            if ( a8 == 1 )
            {
              *(_DWORD *)(a9 + 24) = v81 & ~v80;
            }
            else
            {
              v82 = v81 & ~v80;
              *(_DWORD *)(a9 + 24) = v82;
              if ( v81 != v82 )
              {
                v83 = *(_QWORD *)(a9 + 40);
                v84 = v80 & v81;
                v85 = 0LL;
                v86 = 1;
                if ( v83 )
                {
                  while ( v86 )
                  {
                    if ( (v86 & v84) != 0 && !*(_DWORD *)(v83 + 4 * v85) )
                      *(_DWORD *)(v83 + 4 * v85) = v24 | 0x10000;
                    v85 = (unsigned int)(v85 + 1);
                    v86 *= 2;
                  }
                }
                AuthzBasepUpdateParentTypeList(a9, a8, 0, v24, 0);
                v87 = 1;
                if ( a8 > 1 )
                {
                  v88 = (int *)(a9 + 72);
                  do
                  {
                    if ( *((_WORD *)v88 - 12) <= *(_WORD *)a9 )
                      break;
                    v89 = *v88;
                    *v88 &= ~v80;
                    v90 = v89 & v80;
                    if ( (v89 & v80) != 0 )
                    {
                      v91 = *((_QWORD *)v88 + 2);
                      v92 = 0LL;
                      v93 = 1;
                      if ( v91 )
                      {
                        while ( v93 )
                        {
                          if ( (v93 & v90) != 0 && !*(_DWORD *)(v91 + 4 * v92) )
                            *(_DWORD *)(v91 + 4 * v92) = v24 | 0x10000;
                          v92 = (unsigned int)(v92 + 1);
                          v93 *= 2;
                        }
                      }
                    }
                    ++v87;
                    v88 += 12;
                  }
                  while ( v87 < a8 );
                }
              }
            }
          }
        }
        else
        {
          if ( !v26 )
          {
LABEL_254:
            v28 = a5;
            goto LABEL_255;
          }
          if ( SepSidInToken(a2, v27, (unsigned __int8 *)&v25[16 * (v63 & 1) + ((8LL * (v63 & 2)) | 0xC)], 0, v22, a12) )
          {
            v64 = 0LL;
            if ( a8 )
            {
              while ( 1 )
              {
                v65 = a9 + 48 * v64;
                if ( *(_QWORD *)(v25 + 12) == *(_QWORD *)(v65 + 4)
                  && *((_DWORD *)v25 + 5) == *(_DWORD *)(v65 + 12)
                  && *((_DWORD *)v25 + 6) == *(_DWORD *)(v65 + 16) )
                {
                  break;
                }
                v64 = (unsigned int)(v64 + 1);
                if ( (unsigned int)v64 >= a8 )
                  goto LABEL_253;
              }
              v66 = *(_DWORD *)(v65 + 24);
              v67 = *((_DWORD *)v25 + 1);
              v68 = v66 & ~v67;
              *(_DWORD *)(v65 + 24) = v68;
              if ( v66 != v68 )
              {
                v69 = *(_QWORD *)(v65 + 40);
                v70 = v67 & v66;
                v71 = 0LL;
                v72 = 1;
                if ( v69 )
                {
                  while ( v72 )
                  {
                    if ( (v70 & v72) != 0 && !*(_DWORD *)(v69 + 4 * v71) )
                      *(_DWORD *)(v69 + 4 * v71) = v24 | 0x10000;
                    v71 = (unsigned int)(v71 + 1);
                    v72 *= 2;
                  }
                }
                if ( a8 != 1 )
                {
                  AuthzBasepUpdateParentTypeList(a9, a8, v64, v24, 0);
                  v73 = (unsigned int)(v64 + 1);
                  if ( (unsigned int)v73 < a8 )
                  {
                    v74 = (int *)(a9 + 48 * v73 + 24);
                    do
                    {
                      if ( *((_WORD *)v74 - 12) <= *(_WORD *)(a9 + 48 * v64) )
                        break;
                      v75 = *v74;
                      *v74 &= ~v67;
                      v76 = v75 & v67;
                      if ( (v75 & v67) != 0 )
                      {
                        v77 = *((_QWORD *)v74 + 2);
                        v78 = 0LL;
                        v79 = 1;
                        if ( v77 )
                        {
                          while ( v79 )
                          {
                            if ( (v76 & v79) != 0 && !*(_DWORD *)(v77 + 4 * v78) )
                              *(_DWORD *)(v77 + 4 * v78) = v24 | 0x10000;
                            v78 = (unsigned int)(v78 + 1);
                            v79 *= 2;
                          }
                        }
                      }
                      LODWORD(v73) = v73 + 1;
                      v74 += 12;
                    }
                    while ( (unsigned int)v73 < a8 );
                  }
                }
              }
              v13 = v152;
            }
          }
        }
LABEL_253:
        v27 = a7;
        goto LABEL_254;
      case 4:
        if ( SepSidInToken(a2, v27, (unsigned __int8 *)&v25[4 * (unsigned __int8)v25[13] + 20], 0, v22, a12)
          && SepSidInToken(a3, 0LL, (unsigned __int8 *)v25 + 12, 0, a11, a12) )
        {
          v94 = *((_DWORD *)v25 + 1);
          if ( a8 == 1 )
          {
            *(_DWORD *)(a9 + 24) = v29 & ~v94;
          }
          else
          {
            v95 = v29 & ~v94;
            *(_DWORD *)(a9 + 24) = v95;
            if ( v29 != v95 )
            {
              v96 = *(_QWORD *)(a9 + 40);
              v97 = 0LL;
              v98 = 1;
              if ( v96 )
              {
                while ( v98 )
                {
                  if ( (v98 & v29 & v94) != 0 && !*(_DWORD *)(v96 + 4 * v97) )
                    *(_DWORD *)(v96 + 4 * v97) = v24 | 0x10000;
                  v97 = (unsigned int)(v97 + 1);
                  v98 *= 2;
                }
              }
              AuthzBasepUpdateParentTypeList(a9, a8, 0, v24, 0);
              v99 = 1;
              if ( a8 > 1 )
              {
                v100 = (int *)(a9 + 72);
                do
                {
                  if ( *((_WORD *)v100 - 12) <= *(_WORD *)a9 )
                    break;
                  v101 = *v100;
                  *v100 &= ~v94;
                  v102 = v94 & v101;
                  if ( v102 )
                  {
                    v103 = *((_QWORD *)v100 + 2);
                    v104 = 0LL;
                    v105 = 1;
                    if ( v103 )
                    {
                      while ( v105 )
                      {
                        if ( (v105 & v102) != 0 && !*(_DWORD *)(v103 + 4 * v104) )
                          *(_DWORD *)(v103 + 4 * v104) = v24 | 0x10000;
                        v104 = (unsigned int)(v104 + 1);
                        v105 *= 2;
                      }
                    }
                  }
                  ++v99;
                  v100 += 12;
                }
                while ( v99 < a8 );
              }
            }
          }
        }
        goto LABEL_253;
      case 1:
        LOBYTE(v21) = SepSidInToken(a2, v27, (unsigned __int8 *)v25 + 8, 1, v22, a12);
        if ( (_BYTE)v21 && (v29 & *((_DWORD *)v25 + 1)) != 0 )
          return v21;
        goto LABEL_253;
      case 6:
        v106 = *((_DWORD *)v25 + 2) & 1;
        if ( SepSidInToken(
               a2,
               v27,
               (unsigned __int8 *)&v25[16 * v106 + ((8LL * (*((_DWORD *)v25 + 2) & 2)) | 0xC)],
               1,
               v22,
               a12) )
        {
          if ( v106 && v25 != (char *)-12LL && v26 )
          {
            v107 = 0LL;
            if ( a8 )
            {
              while ( 1 )
              {
                v108 = a9 + 48 * v107;
                if ( *(_QWORD *)(v25 + 12) == *(_QWORD *)(v108 + 4)
                  && *((_DWORD *)v25 + 5) == *(_DWORD *)(v108 + 12)
                  && *((_DWORD *)v25 + 6) == *(_DWORD *)(v108 + 16) )
                {
                  break;
                }
                v107 = (unsigned int)(v107 + 1);
                if ( (unsigned int)v107 >= a8 )
                  goto LABEL_253;
              }
              LODWORD(v21) = *(_DWORD *)(v108 + 24);
              if ( ((unsigned int)v21 & *((_DWORD *)v25 + 1)) != 0 )
                return v21;
            }
          }
          else
          {
            LODWORD(v21) = *((_DWORD *)v25 + 1);
            if ( ((unsigned int)v21 & *(_DWORD *)(a9 + 24)) != 0 )
              return v21;
          }
        }
        goto LABEL_253;
    }
    if ( v30 != 9 )
      goto LABEL_255;
    v109 = 4 * (unsigned __int8)v25[9] + 8;
    if ( *((unsigned __int16 *)v25 + 1) - v109 == 8 )
      goto LABEL_255;
    if ( v28 && !*a6 )
      AuthzBasepInitializeResourceClaimsFromSacl(v28, a6);
    v110 = *(_QWORD **)(a2 + 1096);
    if ( v110 )
    {
      v111 = (void *)v110[72];
      v112 = (void *)v110[74];
      v113 = (void *)v110[73];
      v114 = (void *)v110[75];
    }
    else
    {
      v111 = 0LL;
      v112 = 0LL;
      v113 = 0LL;
      v114 = 0LL;
    }
    AuthzBasepEvaluateAceCondition(
      (_DWORD *)a2,
      *(void **)(a2 + 776),
      (void *)*a6,
      v111,
      v112,
      v113,
      v114,
      &v25[v109 + 8],
      *((unsigned __int16 *)v25 + 1) - v109 - 8,
      0,
      a11,
      &v148);
    if ( v148 != 1 )
      goto LABEL_253;
    if ( (unsigned int)Feature_DecoupleAppContainerAndIntegrityLevel__private_IsEnabledDeviceUsageNoInline(v116, v115) )
    {
      if ( v146 && !v147 )
        goto LABEL_232;
      if ( !a11 && v13 && SepIsPackageSid((__int64)(v25 + 8)) )
        goto LABEL_59;
      if ( v146 && !v147 || a11 || !v13 || !SepIsCapabilitySid((__int64)(v25 + 8)) )
      {
LABEL_232:
        v131 = *(_DWORD *)(a9 + 24);
        if ( v131 )
        {
          if ( SepSidInToken(a2, a7, (unsigned __int8 *)v25 + 8, 0, a11, a12) )
          {
            v132 = *((_DWORD *)v25 + 1);
            v133 = v131 & ~v132;
            *(_DWORD *)(a9 + 24) = v133;
            if ( v131 != v133 )
            {
              v134 = *(_QWORD *)(a9 + 40);
              v135 = v132 & v131;
              v136 = 0LL;
              v137 = 1;
              if ( v134 )
              {
                while ( v137 )
                {
                  if ( (v137 & v135) != 0 && !*(_DWORD *)(v134 + 4 * v136) )
                    *(_DWORD *)(v134 + 4 * v136) = v24 | 0x10000;
                  v136 = (unsigned int)(v136 + 1);
                  v137 *= 2;
                }
              }
              if ( a8 != 1 )
              {
                AuthzBasepUpdateParentTypeList(a9, a8, 0, v24, 0);
                v138 = 1;
                if ( a8 > 1 )
                {
                  v139 = (int *)(a9 + 72);
                  do
                  {
                    if ( *((_WORD *)v139 - 12) <= *(_WORD *)a9 )
                      break;
                    v140 = *v139;
                    *v139 &= ~v132;
                    v141 = v132 & v140;
                    if ( v141 )
                    {
                      v142 = *((_QWORD *)v139 + 2);
                      v143 = 0LL;
                      v144 = 1;
                      if ( v142 )
                      {
                        while ( v144 )
                        {
                          if ( (v144 & v141) != 0 && !*(_DWORD *)(v142 + 4 * v143) )
                            *(_DWORD *)(v142 + 4 * v143) = v24 | 0x10000;
                          v143 = (unsigned int)(v143 + 1);
                          v144 *= 2;
                        }
                      }
                    }
                    ++v138;
                    v139 += 12;
                  }
                  while ( v138 < a8 );
                }
              }
            }
          }
        }
        goto LABEL_253;
      }
    }
    else
    {
      if ( v146 || a11 || !v13 )
        goto LABEL_200;
      if ( SepIsPackageSid((__int64)(v25 + 8)) )
        goto LABEL_59;
      if ( !SepIsCapabilitySid((__int64)(v25 + 8)) )
      {
LABEL_200:
        v117 = *(_DWORD *)(a9 + 24);
        if ( v117 )
        {
          if ( SepSidInToken(a2, a7, (unsigned __int8 *)v25 + 8, 0, a11, a12) )
          {
            v118 = *((_DWORD *)v25 + 1);
            v119 = v117 & ~v118;
            *(_DWORD *)(a9 + 24) = v119;
            if ( v117 != v119 )
            {
              v120 = *(_QWORD *)(a9 + 40);
              v121 = v118 & v117;
              v122 = 0LL;
              v123 = 1;
              if ( v120 )
              {
                while ( v123 )
                {
                  if ( (v123 & v121) != 0 && !*(_DWORD *)(v120 + 4 * v122) )
                    *(_DWORD *)(v120 + 4 * v122) = v24 | 0x10000;
                  v122 = (unsigned int)(v122 + 1);
                  v123 *= 2;
                }
              }
              if ( a8 != 1 )
              {
                AuthzBasepUpdateParentTypeList(a9, a8, 0, v24, 0);
                v124 = 1;
                if ( a8 > 1 )
                {
                  v125 = (int *)(a9 + 72);
                  do
                  {
                    if ( *((_WORD *)v125 - 12) <= *(_WORD *)a9 )
                      break;
                    v126 = *v125;
                    *v125 &= ~v118;
                    v127 = v118 & v126;
                    if ( v127 )
                    {
                      v128 = *((_QWORD *)v125 + 2);
                      v129 = 0LL;
                      v130 = 1;
                      if ( v128 )
                      {
                        while ( v130 )
                        {
                          if ( (v130 & v127) != 0 && !*(_DWORD *)(v128 + 4 * v129) )
                            *(_DWORD *)(v128 + 4 * v129) = v24 | 0x10000;
                          v129 = (unsigned int)(v129 + 1);
                          v130 *= 2;
                        }
                      }
                    }
                    ++v124;
                    v125 += 12;
                  }
                  while ( v124 < a8 );
                }
              }
            }
          }
        }
        goto LABEL_253;
      }
    }
LABEL_29:
    SepMatchCapability(a2, v153, (unsigned __int8 *)v25 + 8, *((_DWORD *)v25 + 1), (_BYTE *)v23 + 22, v23 + 2);
    v32 = ~v23[2];
    v13 &= v32;
    *v23 &= v32;
    v152 = v13;
    goto LABEL_253;
  }
  return v21;
}
