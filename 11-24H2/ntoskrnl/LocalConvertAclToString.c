/*
 * XREFs of LocalConvertAclToString @ 0x140864F2C
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408673C8 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x140500B20 (_ultow_s.c)
 *     wcscpy_s @ 0x1405020A0 (wcscpy_s.c)
 *     SddlpFreeUuidString @ 0x140796CE8 (SddlpFreeUuidString.c)
 *     SddlpUuidToString @ 0x140796E84 (SddlpUuidToString.c)
 *     LocalGetAceCondition @ 0x140865BE0 (LocalGetAceCondition.c)
 *     LocalConvertSidToStringSidW @ 0x140866440 (LocalConvertSidToStringSidW.c)
 *     SddlpAlloc @ 0x140867ED4 (SddlpAlloc.c)
 *     SddlpFree @ 0x140867F20 (SddlpFree.c)
 *     LookupSidInTable @ 0x14086B1E0 (LookupSidInTable.c)
 *     RtlNtStatusToDosError @ 0x14086B8C0 (RtlNtStatusToDosError.c)
 */

__int64 __fastcall LocalConvertAclToString(
        __int64 a1,
        char a2,
        char a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        char a9)
{
  __int64 v10; // rsi
  ULONG AceCondition; // edi
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 result; // rax
  int v15; // ebx
  unsigned __int8 *v16; // r14
  unsigned int v17; // r15d
  int v18; // esi
  _DWORD *v19; // rcx
  unsigned int v20; // edx
  __int64 *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r12d
  unsigned int i; // ebx
  int v26; // ecx
  char *v27; // r8
  unsigned int v28; // edx
  unsigned int v29; // r10d
  unsigned int v30; // ecx
  __int64 v31; // r15
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  __int64 *v38; // r15
  __int64 v39; // r13
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // r12d
  unsigned __int8 *v46; // rsi
  unsigned int v47; // ebx
  __int64 v48; // r15
  unsigned __int64 v49; // rsi
  _WORD *v50; // r14
  __int64 v51; // rax
  unsigned int v52; // r12d
  unsigned __int64 v53; // rsi
  unsigned __int8 *v54; // r15
  unsigned int v55; // eax
  _DWORD *v56; // rdx
  wchar_t *v57; // r14
  unsigned int v58; // ecx
  rsize_t v59; // rsi
  wchar_t **v60; // rbx
  __int64 v61; // rax
  int v62; // edi
  wchar_t *v63; // r14
  rsize_t v64; // rsi
  rsize_t v65; // rsi
  unsigned int v66; // ecx
  wchar_t *v67; // r14
  unsigned int *v68; // r12
  unsigned int *v69; // r13
  unsigned int v70; // ecx
  unsigned int v71; // ecx
  unsigned int v72; // ecx
  unsigned int v73; // ecx
  unsigned int v74; // ecx
  unsigned int v75; // ecx
  unsigned int v76; // eax
  unsigned __int8 *v77; // rdi
  unsigned int v78; // ecx
  unsigned int v79; // ecx
  unsigned int v80; // ecx
  unsigned int v81; // ecx
  unsigned int v82; // ecx
  int v83; // eax
  wchar_t *v84; // r14
  size_t v85; // rsi
  __int64 v86; // rax
  rsize_t v87; // rsi
  wchar_t *v88; // r14
  rsize_t v89; // rsi
  wchar_t *v90; // r14
  __int64 v91; // r12
  rsize_t v92; // rsi
  wchar_t *v93; // r14
  const wchar_t *v94; // rbx
  __int64 v95; // rax
  wchar_t *v96; // rbx
  wchar_t *v97; // r14
  unsigned __int64 v98; // rsi
  char *v99; // r8
  int v100; // ecx
  unsigned int v101; // edx
  unsigned int v102; // r9d
  rsize_t v103; // rsi
  wchar_t *v104; // r14
  __int64 v105; // rax
  _DWORD *v106; // rcx
  int v107; // r8d
  unsigned int k; // edx
  wchar_t **v109; // rbx
  __int64 v110; // rax
  _BYTE *v111; // r12
  unsigned int v112; // r15d
  unsigned int v113; // eax
  _DWORD *v114; // rcx
  int v115; // r9d
  unsigned int v116; // edx
  wchar_t **v117; // rbx
  __int64 v118; // rax
  __int64 v119; // rcx
  unsigned int j; // r11d
  _DWORD *v121; // rcx
  int v122; // r9d
  __int64 v123; // rdx
  wchar_t **v124; // rax
  wchar_t *v125; // rcx
  __int64 v126; // rax
  int v127; // r10d
  __int64 v128; // rax
  wchar_t **v129; // rbx
  __int64 v130; // rax
  NTSTATUS v131; // eax
  wchar_t **v132; // rax
  wchar_t *v133; // rcx
  __int64 v134; // rax
  unsigned int v135; // ecx
  _DWORD *v136; // rdx
  wchar_t **v137; // rdx
  __int64 v138; // r10
  wchar_t **v139; // rbx
  __int64 v140; // rax
  __int64 v141; // r11
  int v142; // r8d
  wchar_t *v143; // rax
  __int64 v144; // rbx
  __int64 v145; // rbx
  int v146; // edx
  int v147; // r8d
  unsigned __int8 *v148; // rax
  int v149; // edx
  unsigned int v150; // r8d
  unsigned int v151; // [rsp+58h] [rbp-59h]
  unsigned int Val; // [rsp+5Ch] [rbp-55h]
  unsigned int v153; // [rsp+60h] [rbp-51h] BYREF
  ULONG v154; // [rsp+64h] [rbp-4Dh] BYREF
  __int64 v155; // [rsp+68h] [rbp-49h]
  wchar_t *Src; // [rsp+70h] [rbp-41h] BYREF
  PSID Sid; // [rsp+78h] [rbp-39h]
  wchar_t *v158; // [rsp+80h] [rbp-31h] BYREF
  __int64 v159; // [rsp+88h] [rbp-29h] BYREF
  unsigned __int8 *v160; // [rsp+90h] [rbp-21h]
  __int64 v161; // [rsp+98h] [rbp-19h]
  int v162; // [rsp+A0h] [rbp-11h]
  unsigned int *v163; // [rsp+A8h] [rbp-9h]
  __int64 v164; // [rsp+B0h] [rbp-1h]
  int v167; // [rsp+130h] [rbp+7Fh]

  v151 = 0;
  v10 = a1;
  v162 = 0;
  AceCondition = 0;
  v158 = 0LL;
  v12 = 0;
  Val = 0;
  Sid = 0LL;
  v159 = 0LL;
  Src = 0LL;
  if ( !a4 || !a5 )
    return 87LL;
  if ( !a2 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 36;
    v13 = SddlpAlloc(0x24uLL);
    *a4 = v13;
    if ( v13 )
    {
      *(_OWORD *)v13 = *(_OWORD *)L"NO_ACCESS_CONTROL";
      *(_OWORD *)(v13 + 16) = *(_OWORD *)L"S_CONTROL";
      *(_DWORD *)(v13 + 32) = *(_DWORD *)L"L";
      return 0LL;
    }
    result = 8LL;
LABEL_156:
    *a5 = 0;
    return result;
  }
  if ( !*(_WORD *)(a1 + 4) )
  {
    *a4 = 0LL;
    result = 0LL;
    goto LABEL_156;
  }
  v15 = 2 - (a3 != 0);
  v167 = v15;
  v155 = SddlpAlloc(8LL * *(unsigned __int16 *)(a1 + 4));
  if ( !v155 )
    return 8LL;
  v164 = SddlpAlloc(*(unsigned __int16 *)(v10 + 4));
  if ( !v164 )
  {
    v119 = v155;
LABEL_158:
    SddlpFree(v119);
    return 8LL;
  }
  v161 = SddlpAlloc(4LL * *(unsigned __int16 *)(v10 + 4));
  if ( !v161 )
  {
    SddlpFree(v155);
    v119 = v164;
    goto LABEL_158;
  }
  v16 = (unsigned __int8 *)(v10 + 8);
  v154 = 0;
  v17 = 0;
  while ( v17 < *(unsigned __int16 *)(v10 + 4) )
  {
    v18 = *v16;
    v19 = &unk_140E08AAC;
    v12 += 2;
    v20 = 0;
    v151 = v12;
    do
    {
      if ( (v15 & v19[1]) == v15 && v18 == *v19 )
        break;
      ++v20;
      v19 += 6;
    }
    while ( v20 < 0x11 );
    if ( v20 >= 0x11 )
      goto LABEL_39;
    v21 = (__int64 *)(0x140000000LL + 24LL * v20 + 14715552);
    if ( !v21 )
      goto LABEL_39;
    v22 = *v21;
    v23 = -1LL;
    do
      ++v23;
    while ( *(_WORD *)(v22 + 2 * v23) );
    v24 = v12 + 2 * v23 + 2;
    for ( i = 0; i < 8; ++i )
    {
      if ( (v16[1] & (1 << i)) == 0 )
        continue;
      v26 = v167;
      v27 = (char *)&unk_140E08994;
      v28 = 0;
      v29 = 0;
      while ( 1 )
      {
        if ( (v26 & *((_DWORD *)v27 - 1)) != v26 )
          goto LABEL_28;
        if ( !*(_DWORD *)v27 )
          break;
        while ( v28 < *(_DWORD *)v27 )
        {
          if ( *(_BYTE *)(v28 + *(_QWORD *)(v27 + 4)) == (_BYTE)v18 )
          {
            v26 = v167;
            goto LABEL_27;
          }
          ++v28;
        }
        v26 = v167;
LABEL_28:
        ++v29;
        v27 += 32;
        if ( v29 >= 9 )
          goto LABEL_29;
        v28 = 0;
      }
LABEL_27:
      if ( 1 << i != *((_DWORD *)v27 - 2) )
        goto LABEL_28;
      v132 = &(&off_140E08980)[4 * v29];
      if ( v132 )
      {
        v133 = *v132;
        v134 = -1LL;
        do
          ++v134;
        while ( v133[v134] );
        v24 += 2 * v134;
      }
LABEL_29:
      ;
    }
    v30 = *v16;
    v12 = v24 + 2;
    v31 = v154;
    v151 = v12;
    v153 = v12;
    if ( v30 <= 9 )
    {
      if ( v30 == 9 )
        goto LABEL_53;
      if ( !v30 )
        goto LABEL_53;
      v40 = v30 - 1;
      if ( !v40 )
        goto LABEL_53;
      v41 = v40 - 1;
      if ( !v41 )
        goto LABEL_53;
      v42 = v41 - 1;
      if ( !v42 )
        goto LABEL_53;
      v43 = v42 - 2;
      if ( !v43 || (v44 = v43 - 1) == 0 || v44 - 1 <= 1 )
      {
LABEL_228:
        Val = *((_DWORD *)v16 + 1);
        v146 = *((_DWORD *)v16 + 2) & 2;
        v147 = *((_DWORD *)v16 + 2) & 1;
        v46 = &v16[16 * (*((_DWORD *)v16 + 2) & 1) + (v146 != 0 ? 28LL : 12LL)];
        Sid = v46;
        if ( v147 && v16 != (unsigned __int8 *)-12LL )
        {
          v12 += 72;
          v153 = v12;
        }
        if ( v146 )
        {
          v148 = v16 + 28;
          if ( !v147 )
            v148 = v16 + 12;
          if ( v148 )
            v153 = v12 + 72;
        }
        v45 = Val;
        goto LABEL_54;
      }
LABEL_38:
      v15 = v167;
LABEL_39:
      AceCondition = 1336;
    }
    else
    {
      v32 = v30 - 10;
      if ( !v32 )
        goto LABEL_53;
      v33 = v32 - 1;
      if ( !v33 )
        goto LABEL_228;
      v34 = v33 - 2;
      if ( v34 )
      {
        v35 = v34 - 4;
        if ( v35 )
        {
          v36 = v35 - 1;
          if ( v36 )
          {
            v37 = v36 - 1;
            if ( v37 )
            {
              if ( v37 - 1 >= 2 )
                goto LABEL_38;
            }
          }
        }
      }
LABEL_53:
      v45 = *((_DWORD *)v16 + 1);
      v46 = v16 + 8;
      Sid = v16 + 8;
      Val = v45;
LABEL_54:
      if ( Src )
      {
        SddlpFree(Src);
        Src = 0LL;
      }
      v154 = 0;
      AceCondition = LocalGetAceCondition(v16, v46, &Src, &v154);
      if ( AceCondition )
      {
        v12 = v153;
        v151 = v153;
        goto LABEL_58;
      }
      v122 = v167;
      v136 = &unk_140E08C4C;
      v127 = 0;
      v141 = v161;
      v142 = v167;
      v135 = 0;
      *(_DWORD *)(v161 + 4 * v31) = 0;
      if ( *v16 == 17 )
        v142 = 4;
      do
      {
        if ( (v142 & v136[1]) == v142 && v45 == *v136 )
          break;
        ++v135;
        v136 += 6;
      }
      while ( v135 < 0x1C );
      if ( v135 < 0x1C && (v137 = &(&off_140E08C40)[3 * v135]) != 0LL )
      {
        *(_DWORD *)(v141 + 4 * v31) = 1;
        v138 = -1LL;
        do
          ++v138;
        while ( (*v137)[v138] );
        v127 = 2 * v138;
      }
      else
      {
        for ( j = 0; j < 0x20; ++j )
        {
          if ( (v45 & (1 << j)) != 0 )
          {
            v121 = &unk_140E08C4C;
            if ( *v16 == 17 )
              v122 = 4;
            v123 = 0LL;
            do
            {
              if ( (v122 & v121[1]) == v122 && (v45 & (1 << j)) == *v121 )
                break;
              v123 = (unsigned int)(v123 + 1);
              v121 += 6;
            }
            while ( (unsigned int)v123 < 0x1C );
            if ( (unsigned int)v123 >= 0x1C || (v124 = &(&off_140E08C40)[3 * v123]) == 0LL )
            {
              v127 = 20;
              *(_DWORD *)(v161 + 4 * v31) = 2;
              break;
            }
            v125 = *v124;
            v126 = -1LL;
            do
              ++v126;
            while ( v125[v126] );
            v122 = v167;
            v127 += 2 * v126;
          }
        }
      }
      v12 = v127 + v153 + 6;
      v151 = v12;
      v128 = LookupSidInTable(0LL, v46, (int)&v153, a9, (__int64)&v159);
      v129 = (wchar_t **)(v155 + 8 * v31);
      if ( v128 )
      {
        *v129 = (wchar_t *)(v128 + 2);
LABEL_194:
        v130 = -1LL;
        do
          ++v130;
        while ( (*v129)[v130] );
        v10 = a1;
        v12 += 2 * v130 + 4;
        v15 = v167;
        v17 = v31 + 1;
        v151 = v12;
        v16 += *((unsigned __int16 *)v16 + 1);
        v154 = v17;
        continue;
      }
      if ( v159 )
      {
        v143 = (wchar_t *)SddlpAlloc(6uLL);
        *v129 = v143;
        if ( v143 )
        {
          wcscpy_s(v143, 3uLL, L"SA");
          goto LABEL_199;
        }
        AceCondition = 8;
LABEL_58:
        v15 = v167;
      }
      else
      {
        v131 = LocalConvertSidToStringSidW(Sid);
        if ( v131 >= 0 )
        {
LABEL_199:
          *(_BYTE *)(v31 + v164) = 1;
          goto LABEL_194;
        }
        v15 = v167;
        AceCondition = RtlNtStatusToDosError(v131);
      }
    }
    break;
  }
  if ( !v12 )
  {
    AceCondition = 1336;
LABEL_42:
    v38 = a4;
LABEL_43:
    v39 = v155;
    goto LABEL_60;
  }
  if ( AceCondition )
    goto LABEL_42;
  if ( (v12 & 1) != 0 )
    v151 = ++v12;
  v49 = v12;
  v38 = a4;
  v50 = (_WORD *)SddlpAlloc(v12);
  *a4 = (__int64)v50;
  if ( !v50 )
  {
    AceCondition = 8;
    goto LABEL_43;
  }
  v51 = a1;
  v52 = 0;
  v53 = v49 >> 1;
  v153 = 0;
  v54 = (unsigned __int8 *)(a1 + 8);
  while ( 2 )
  {
    v55 = *(unsigned __int16 *)(v51 + 4);
    v159 = (__int64)v54;
    if ( v52 >= v55 )
      goto LABEL_171;
    if ( !v53 )
      goto LABEL_170;
    *v50 = 40;
    v56 = &unk_140E08AAC;
    v57 = v50 + 1;
    v58 = 0;
    v59 = v53 - 1;
    do
    {
      if ( (v15 & v56[1]) == v15 && *v54 == *v56 )
        break;
      ++v58;
      v56 += 6;
    }
    while ( v58 < 0x11 );
    if ( v58 < 0x11 )
    {
      v60 = &(&off_140E08AA0)[3 * v58];
      if ( v60 )
      {
        wcscpy_s(v57, v59, *v60);
        v61 = *((unsigned int *)v60 + 2);
        v59 -= v61;
        v57 += v61;
      }
    }
    if ( !v59 )
      goto LABEL_170;
    *v57 = 59;
    v62 = 0;
    v63 = v57 + 1;
    v64 = v59 - 1;
    while ( 2 )
    {
      if ( ((unsigned __int8)(1 << v62) & v54[1]) == 0 )
        goto LABEL_85;
      v99 = (char *)&unk_140E08994;
      v100 = v167;
      v101 = 0;
      v102 = 0;
      while ( 2 )
      {
        if ( (v100 & *((_DWORD *)v99 - 1)) != v100 )
          goto LABEL_126;
        if ( *(_DWORD *)v99 )
        {
          while ( v101 < *(_DWORD *)v99 )
          {
            if ( *(_BYTE *)(v101 + *(_QWORD *)(v99 + 4)) == *v54 )
            {
              v100 = v167;
              goto LABEL_125;
            }
            ++v101;
          }
          v100 = v167;
          goto LABEL_126;
        }
LABEL_125:
        if ( 1 << v62 != *((_DWORD *)v99 - 2) )
        {
LABEL_126:
          ++v102;
          v99 += 32;
          if ( v102 >= 9 )
            goto LABEL_85;
          v101 = 0;
          continue;
        }
        break;
      }
      v139 = &(&off_140E08980)[4 * v102];
      if ( v139 )
      {
        wcscpy_s(v63, v64, *v139);
        v140 = *((unsigned int *)v139 + 2);
        v64 -= v140;
        v63 += v140;
      }
LABEL_85:
      if ( (unsigned int)++v62 < 8 )
        continue;
      break;
    }
    if ( !v64 )
      goto LABEL_170;
    *v63 = 59;
    v65 = v64 - 1;
    v66 = *v54;
    v67 = v63 + 1;
    v163 = 0LL;
    v68 = 0LL;
    v160 = 0LL;
    v69 = 0LL;
    if ( v66 <= 9 )
    {
      if ( v66 == 9 || !v66 || (v78 = v66 - 1) == 0 || (v79 = v78 - 1) == 0 || (v80 = v79 - 1) == 0 )
      {
LABEL_95:
        v76 = *((_DWORD *)v54 + 1);
        v77 = v54 + 8;
        Sid = v54 + 8;
        Val = v76;
        goto LABEL_105;
      }
      v81 = v80 - 2;
      if ( v81 )
      {
        v82 = v81 - 1;
        if ( v82 )
        {
          if ( v82 - 1 >= 2 )
            goto LABEL_104;
        }
      }
LABEL_238:
      v149 = *((_DWORD *)v54 + 2) & 2;
      v150 = *((_DWORD *)v54 + 2) & 1;
      Val = *((_DWORD *)v54 + 1);
      v77 = &v54[16 * v150 + (v149 != 0 ? 28LL : 12LL)];
      Sid = v77;
      if ( v149 )
      {
        if ( v150 )
        {
          v69 = (unsigned int *)(v54 + 28);
          v160 = v54 + 28;
LABEL_244:
          v68 = (unsigned int *)(v54 + 12);
          v163 = (unsigned int *)(v54 + 12);
          goto LABEL_105;
        }
        v69 = (unsigned int *)(v54 + 12);
        v160 = v54 + 12;
      }
      else
      {
        v160 = 0LL;
        if ( v150 )
          goto LABEL_244;
      }
      v163 = 0LL;
      goto LABEL_105;
    }
    v70 = v66 - 10;
    if ( !v70 )
      goto LABEL_95;
    v71 = v70 - 1;
    if ( !v71 )
      goto LABEL_238;
    v72 = v71 - 2;
    if ( !v72 )
      goto LABEL_95;
    v73 = v72 - 4;
    if ( !v73 )
      goto LABEL_95;
    v74 = v73 - 1;
    if ( !v74 )
      goto LABEL_95;
    v75 = v74 - 1;
    if ( !v75 || v75 - 1 <= 1 )
      goto LABEL_95;
LABEL_104:
    v77 = (unsigned __int8 *)Sid;
LABEL_105:
    if ( Src )
    {
      SddlpFree(Src);
      Src = 0LL;
    }
    v154 = 0;
    v154 = LocalGetAceCondition(v54, v77, &Src, &v154);
    AceCondition = v154;
    if ( v154 )
      goto LABEL_171;
    v83 = *(_DWORD *)(v161 + 4LL * v153);
    if ( v83 == 2 )
    {
      wcscpy_s(v67, v65, L"0x");
      v84 = v67 + 2;
      v85 = v65 - 2;
      ultow_s(Val, v84, v85, 16);
      v86 = -1LL;
      do
        ++v86;
      while ( v84[v86] );
      v67 = &v84[v86];
      v65 = v85 - v86;
    }
    else if ( v83 == 1 )
    {
      v106 = &unk_140E08C4C;
      v107 = v167;
      if ( *v54 == 17 )
        v107 = 4;
      for ( k = 0; k < 0x1C; ++k )
      {
        if ( (v107 & v106[1]) == v107 && Val == *v106 )
          break;
        v106 += 6;
      }
      v69 = (unsigned int *)v160;
      if ( k < 0x1C )
      {
        v109 = &(&off_140E08C40)[3 * k];
        if ( v109 )
        {
          wcscpy_s(v67, v65, *v109);
          v110 = *((unsigned int *)v109 + 2);
          v65 -= v110;
          v67 += v110;
        }
      }
    }
    else
    {
      v111 = (_BYTE *)v159;
      v112 = 0;
      v113 = Val;
      do
      {
        if ( (v113 & (1 << v112)) != 0 )
        {
          v114 = &unk_140E08C4C;
          v115 = v167;
          v116 = 0;
          if ( *v111 == 17 )
            v115 = 4;
          do
          {
            if ( (v115 & v114[1]) == v115 && (v113 & (1 << v112)) == *v114 )
              break;
            ++v116;
            v114 += 6;
          }
          while ( v116 < 0x1C );
          if ( v116 < 0x1C )
          {
            v117 = &(&off_140E08C40)[3 * v116];
            if ( v117 )
            {
              wcscpy_s(v67, v65, *v117);
              v118 = *((unsigned int *)v117 + 2);
              v65 -= v118;
              v67 += v118;
            }
          }
          v113 = Val;
        }
        ++v112;
      }
      while ( v112 < 0x20 );
      AceCondition = v154;
      v68 = v163;
      v69 = (unsigned int *)v160;
      v54 = (unsigned __int8 *)v159;
    }
    if ( !v65 )
      goto LABEL_170;
    v87 = v65 - 1;
    *v67 = 59;
    v88 = v67 + 1;
    if ( !v68 )
      goto LABEL_114;
    if ( !(unsigned int)SddlpUuidToString(v68, &v158) )
      goto LABEL_171;
    v144 = -1LL;
    do
      ++v144;
    while ( v158[v144] );
    wcscpy_s(v88, v87, v158);
    v87 -= v144;
    v88 += v144;
    SddlpFreeUuidString((void **)&v158);
LABEL_114:
    if ( !v87 )
    {
LABEL_170:
      AceCondition = 1336;
LABEL_171:
      v12 = v151;
      goto LABEL_42;
    }
    *v88 = 59;
    v89 = v87 - 1;
    v90 = v88 + 1;
    if ( !v69 )
      goto LABEL_116;
    if ( !(unsigned int)SddlpUuidToString(v69, &v158) )
      goto LABEL_171;
    v145 = -1LL;
    do
      ++v145;
    while ( v158[v145] );
    wcscpy_s(v90, v89, v158);
    v89 -= v145;
    v90 += v145;
    SddlpFreeUuidString((void **)&v158);
LABEL_116:
    v39 = v155;
    if ( !v89 )
      goto LABEL_59;
    v91 = v153;
    v92 = v89 - 1;
    *v90 = 59;
    v93 = v90 + 1;
    v94 = *(const wchar_t **)(v39 + 8 * v91);
    wcscpy_s(v93, v92, v94);
    v95 = -1LL;
    do
      ++v95;
    while ( v94[v95] );
    v96 = Src;
    v97 = &v93[v95];
    v98 = v92 - v95;
    if ( !Src )
    {
LABEL_120:
      if ( v98 <= 1 )
        goto LABEL_59;
      v15 = v167;
      v52 = v91 + 1;
      *v97 = 41;
      v53 = v98 - 1;
      v50 = v97 + 1;
      v153 = v52;
      *v50 = 0;
      v54 += *((unsigned __int16 *)v54 + 1);
      v51 = a1;
      continue;
    }
    break;
  }
  if ( v98 )
  {
    *v97 = 59;
    v103 = v98 - 1;
    v104 = v97 + 1;
    wcscpy_s(v104, v103, v96);
    v105 = -1LL;
    do
      ++v105;
    while ( v96[v105] );
    v97 = &v104[v105];
    v98 = v103 - v105;
    goto LABEL_120;
  }
LABEL_59:
  v12 = v151;
  AceCondition = 1336;
  v38 = a4;
LABEL_60:
  v47 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v48 = v164;
    do
    {
      if ( *(_BYTE *)(v47 + v48) )
        SddlpFree(*(_QWORD *)(v39 + 8LL * v47));
      ++v47;
    }
    while ( v47 < *(unsigned __int16 *)(a1 + 4) );
    v38 = a4;
  }
  SddlpFree(v39);
  SddlpFree(v164);
  SddlpFree(v161);
  SddlpFree(Src);
  if ( AceCondition )
  {
    SddlpFree(*v38);
    *v38 = 0LL;
    *a5 = 0;
  }
  else
  {
    *a5 = v12;
  }
  return AceCondition;
}
