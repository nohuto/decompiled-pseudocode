/*
 * XREFs of PiDevCfgResolveVariableExpression @ 0x140A8DDE0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     PnpMultiSzContainsString @ 0x1404B23C0 (PnpMultiSzContainsString.c)
 *     PnpValidateRegistryMultiSz @ 0x1404CBA24 (PnpValidateRegistryMultiSz.c)
 *     PnpStringToDwordValue @ 0x1404D0620 (PnpStringToDwordValue.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 *     PiDevCfgCopyVariableData @ 0x140726FB8 (PiDevCfgCopyVariableData.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x140A63A18 (PiDevCfgResolveVariable.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgResolveVariableExpression(__int64 a1, void *a2, __int64 a3)
{
  unsigned int v3; // r12d
  __int64 v4; // r14
  int RegistryValue; // ebx
  __int64 v6; // r10
  int v7; // r11d
  __int64 v8; // rsi
  _WORD *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r13
  __int64 *v12; // r15
  int v13; // edi
  unsigned int i; // edx
  __int64 *v15; // rdx
  unsigned int v16; // r8d
  unsigned int v17; // r10d
  __int64 v18; // rcx
  unsigned __int64 v19; // r14
  __int16 v20; // r12
  __int64 v21; // rsi
  void *v22; // r15
  int v23; // ecx
  int v24; // edx
  _WORD *v25; // rdx
  int v26; // ecx
  __int64 *v27; // r13
  __int64 v28; // rax
  unsigned int v29; // ebx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  wchar_t *v33; // rax
  _WORD *v34; // r9
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  __int64 *v38; // rbx
  __int64 *v39; // r15
  int v40; // ecx
  ULONG_PTR v41; // r13
  _WORD *v42; // r8
  WCHAR *v43; // r12
  int v44; // ecx
  int v45; // ecx
  int v46; // ecx
  int v47; // ecx
  int v48; // ecx
  int v49; // eax
  __int64 v50; // r15
  __int64 v51; // rax
  unsigned int v52; // r14d
  unsigned __int64 v53; // rdi
  unsigned __int64 v54; // rax
  char *v55; // rax
  char *v56; // r15
  char *v57; // rdx
  char *v58; // rcx
  BOOL v59; // ecx
  int v60; // ecx
  int v61; // ecx
  int v62; // ecx
  int v63; // ecx
  unsigned int v64; // eax
  LONG v65; // eax
  int v66; // r8d
  _WORD *v67; // r14
  unsigned int v68; // r15d
  int v69; // ecx
  __int64 v70; // r15
  void *v71; // rax
  unsigned __int64 v72; // r14
  void *v73; // r8
  wchar_t *v74; // r13
  size_t v75; // r12
  wchar_t *v76; // rax
  wchar_t *v77; // r15
  char *v78; // rax
  __int64 v79; // rbx
  size_t v80; // r8
  void *v81; // rax
  unsigned int v82; // r9d
  int v83; // ecx
  unsigned int v84; // r8d
  int v85; // ecx
  int v86; // ecx
  int v87; // ecx
  int v88; // ecx
  int v89; // ecx
  int v90; // ecx
  int v91; // ecx
  int v92; // ecx
  int v93; // r8d
  unsigned int v94; // r9d
  int v95; // eax
  int v96; // ecx
  int v97; // ecx
  int v98; // ecx
  int v99; // ecx
  int v100; // ecx
  int v101; // ecx
  int v102; // ecx
  size_t v103; // r8
  int v104; // r9d
  int v105; // ecx
  size_t v106; // r15
  wchar_t *v107; // r8
  wchar_t *v108; // r12
  char *v109; // rax
  char *v110; // r13
  __int16 v111; // r8
  int v112; // ecx
  unsigned __int16 v113; // r15
  _WORD *v114; // r10
  unsigned __int16 v115; // r14
  _WORD *v116; // r12
  int v117; // ecx
  int v118; // ecx
  int v119; // ecx
  int v120; // ecx
  int v121; // ecx
  int v122; // ecx
  int v123; // ecx
  int v124; // ecx
  unsigned int v125; // eax
  BOOL v126; // ecx
  char *v127; // rax
  char *v128; // r13
  bool v129; // zf
  bool v130; // al
  __int64 v131; // rax
  int v132; // edi
  _BYTE *v133; // r8
  int j; // edx
  _DWORD *v136; // rax
  __int128 *v137; // rsi
  __int64 v138; // r14
  _QWORD *v139; // rdi
  void *v140; // rcx
  __int64 v141; // rax
  int v142; // eax
  unsigned int v143; // eax
  __int64 v144; // r14
  __int128 *v145; // rdi
  _QWORD *v146; // rsi
  void *v147; // rcx
  PVOID *v148; // rdi
  __int64 v149; // rsi
  void *v150; // rcx
  unsigned __int16 v152; // [rsp+30h] [rbp-59h]
  int v153; // [rsp+30h] [rbp-59h]
  unsigned int v154; // [rsp+34h] [rbp-55h]
  __int16 v155; // [rsp+38h] [rbp-51h]
  wchar_t *v156; // [rsp+38h] [rbp-51h]
  __int64 v157; // [rsp+48h] [rbp-41h]
  unsigned int v158; // [rsp+50h] [rbp-39h]
  void *Src; // [rsp+58h] [rbp-31h] BYREF
  __int64 Pool2; // [rsp+60h] [rbp-29h]
  __int64 v161; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v162; // [rsp+70h] [rbp-19h]
  __int64 v163; // [rsp+78h] [rbp-11h]
  PVOID P; // [rsp+80h] [rbp-9h] BYREF
  __int64 v165; // [rsp+88h] [rbp-1h]
  __int128 v166; // [rsp+90h] [rbp+7h] BYREF
  __int64 v167; // [rsp+A0h] [rbp+17h]

  v163 = a1;
  v165 = a3;
  P = 0LL;
  v3 = 0;
  v158 = 0;
  LODWORD(v4) = 0;
  v167 = 0LL;
  v166 = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"Tokens", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_358;
  if ( !PnpValidateRegistryMultiSz(P) )
    goto LABEL_357;
  v8 = v6 + *(unsigned int *)(v6 + 8);
  v161 = v8;
  v9 = (_WORD *)v8;
  if ( *(_WORD *)v8 == (_WORD)v7 )
    goto LABEL_357;
  do
  {
    v3 += v7 + 1;
    v10 = -1LL;
    do
      ++v10;
    while ( v9[v10] != (_WORD)v7 );
    v9 += v10 + 1;
  }
  while ( *v9 != (_WORD)v7 );
  v11 = v163;
  v162 = v3;
  if ( !v3 )
  {
LABEL_357:
    RegistryValue = -1073741823;
    goto LABEL_358;
  }
  Pool2 = ExAllocatePool2(0x100uLL, 8LL * v3, 0x63647050u);
  v12 = (__int64 *)Pool2;
  if ( !Pool2 )
  {
    RegistryValue = -1073741670;
    goto LABEL_358;
  }
  while ( 1 )
  {
    v13 = RegistryValue;
    if ( !*(_WORD *)v8 )
    {
      if ( RegistryValue < 0 )
        goto LABEL_342;
      if ( (_DWORD)v4 != 1 )
        goto LABEL_352;
      RegistryValue = PiDevCfgCopyVariableData(v165, *v12);
      goto LABEL_343;
    }
    if ( *(_WORD *)(v8 + 2) && *(_WORD *)(v8 + 4) )
      goto LABEL_323;
    for ( i = 1; ; ++i )
    {
      if ( i >= 0x1B )
        goto LABEL_323;
      if ( *(_DWORD *)v8 == *(_DWORD *)qword_140B42EB0[3 * i + 1] )
        break;
    }
    v15 = &qword_140B42EB0[3 * i];
    if ( !v15 )
    {
LABEL_323:
      if ( (unsigned int)v4 >= v3 )
      {
        RegistryValue = -1073741571;
      }
      else
      {
        v161 = 0LL;
        v142 = PiDevCfgResolveVariable(v11, (const WCHAR *)v8, &v161);
        RegistryValue = v142;
        if ( v142 >= 0 )
        {
          v12[(unsigned int)v4] = v161;
          goto LABEL_320;
        }
        if ( v142 == -1073741772 )
LABEL_352:
          RegistryValue = -1073741823;
      }
LABEL_342:
      if ( (_DWORD)v4 )
      {
LABEL_343:
        v148 = (PVOID *)v12;
        v149 = (unsigned int)v4;
        do
        {
          if ( !*((_QWORD *)*v148 + 3) )
          {
            v150 = (void *)*((_QWORD *)*v148 + 5);
            if ( v150 )
              ExFreePoolWithTag(v150, 0);
            ExFreePoolWithTag(*v148, 0);
          }
          ++v148;
          --v149;
        }
        while ( v149 );
        v12 = (__int64 *)Pool2;
      }
      ExFreePoolWithTag(v12, 0);
      goto LABEL_358;
    }
    v16 = *((_DWORD *)v15 + 4);
    v17 = 0;
    v154 = 0;
    while ( v17 < v16 )
    {
      if ( !(_DWORD)v4 )
      {
        RegistryValue = -1073741823;
        goto LABEL_333;
      }
      v4 = (unsigned int)(v4 - 1);
      v18 = v17++;
      v158 = v4;
      v154 = v17;
      *((_QWORD *)&v166 + v18) = v12[v4];
    }
    if ( RegistryValue < 0 )
      goto LABEL_333;
    LODWORD(Src) = 0;
    LOWORD(v19) = 0;
    v155 = 0;
    v20 = 0;
    v152 = 0;
    LODWORD(v21) = 0;
    v157 = 0LL;
    v22 = 0LL;
    if ( v17 != 1 )
      break;
    v23 = *(_DWORD *)v15;
    v24 = *(_DWORD *)v15 - 22;
    if ( !v24 )
    {
      if ( !*(_DWORD *)(v166 + 32) )
        goto LABEL_296;
      LODWORD(v21) = 1;
      goto LABEL_54;
    }
    if ( v24 == 1 )
    {
      LODWORD(v21) = *(_DWORD *)(v166 + 32) == 0;
      goto LABEL_296;
    }
    if ( *(_DWORD *)(v166 + 32) == 1 || *(_DWORD *)(v166 + 32) == 2 )
    {
      v34 = *(_WORD **)(v166 + 40);
      v35 = v23 - 11;
      if ( v35 )
      {
        v36 = v35 - 1;
        if ( v36 )
        {
          v37 = v36 - 13;
          if ( v37 )
          {
            if ( v37 == 1 )
              v27 = (__int64 *)v166;
            else
              v27 = qword_140B3CE80;
          }
          else
          {
            v27 = 0LL;
            if ( PnpStringToDwordValue(*(_QWORD *)(v166 + 40), (unsigned int *)&Src) )
              LODWORD(v21) = (_DWORD)Src;
            else
              LODWORD(v21) = 0;
          }
          goto LABEL_294;
        }
        LOBYTE(v21) = *v34 == 0;
      }
      else
      {
        v21 = -1LL;
        do
          ++v21;
        while ( v34[v21] );
      }
      goto LABEL_54;
    }
    if ( *(_DWORD *)(v166 + 32) == 4 )
    {
      v29 = **(_DWORD **)(v166 + 40);
      v30 = v23 - 11;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          v32 = v31 - 13;
          if ( v32 )
          {
            if ( v32 != 1 )
              goto LABEL_43;
            v33 = (wchar_t *)ExAllocatePool2(0x100uLL, 0x16uLL, 0x63647050u);
            v22 = v33;
            if ( !v33 )
              goto LABEL_328;
            RegistryValue = RtlStringCchPrintfW(v33, 0xBuLL, L"%u", v29);
            if ( RegistryValue < 0 )
            {
              ExFreePoolWithTag(v22, 0);
              v143 = v154;
              goto LABEL_334;
            }
            v19 = -1LL;
            do
              ++v19;
            while ( *((_WORD *)v22 + v19) );
            v20 = 2 * v19;
            LOWORD(v19) = 2 * v19 + 2;
            v155 = v19;
            goto LABEL_296;
          }
          LODWORD(v21) = **(_DWORD **)(v166 + 40);
        }
        else
        {
          LOBYTE(v21) = v29 == 0;
        }
        goto LABEL_50;
      }
      LODWORD(v21) = ~v29;
LABEL_53:
      RegistryValue = v13;
LABEL_54:
      v27 = 0LL;
      goto LABEL_294;
    }
    if ( *(_DWORD *)(v166 + 32) != 7 )
      goto LABEL_32;
    v25 = *(_WORD **)(v166 + 40);
    v26 = v23 - 11;
    if ( v26 )
    {
      if ( v26 != 1 )
      {
LABEL_32:
        v27 = qword_140B3CE80;
        goto LABEL_311;
      }
      LOBYTE(v21) = *v25 == 0;
    }
    else if ( *v25 )
    {
      do
      {
        LODWORD(v21) = v21 + 1;
        v28 = -1LL;
        do
          ++v28;
        while ( v25[v28] );
        v25 += v28 + 1;
      }
      while ( *v25 );
      goto LABEL_38;
    }
LABEL_296:
    v131 = ExAllocatePool2(0x100uLL, 0x30uLL, 0x63647050u);
    v27 = (__int64 *)v131;
    if ( !v131 )
      goto LABEL_331;
    *(_DWORD *)(v131 + 16) = 0;
    *(_QWORD *)(v131 + 24) = 0LL;
    if ( v22 )
    {
      v132 = 7;
      LODWORD(v19) = (unsigned __int16)v19;
      if ( v20 != v155 )
        v132 = 1;
    }
    else
    {
      v132 = 4;
      LODWORD(v19) = 4;
      v136 = (_DWORD *)ExAllocatePool2(0x100uLL, 4uLL, 0x63647050u);
      v22 = v136;
      if ( !v136 )
      {
LABEL_331:
        RegistryValue = -1073741670;
LABEL_332:
        LODWORD(v4) = v158;
        v12 = (__int64 *)Pool2;
LABEL_333:
        v143 = v154;
        if ( v154 )
          goto LABEL_334;
        goto LABEL_342;
      }
      *v136 = v21;
    }
    v17 = v154;
    *((_DWORD *)v27 + 8) = v132;
    *((_DWORD *)v27 + 9) = v19;
    v27[5] = (__int64)v22;
LABEL_311:
    LODWORD(v4) = v158;
    v12 = (__int64 *)Pool2;
    *(_QWORD *)(Pool2 + 8LL * v158) = v27;
    if ( v17 )
    {
      v137 = &v166;
      v138 = v17;
      do
      {
        v139 = *(_QWORD **)v137;
        if ( !*(_QWORD *)(*(_QWORD *)v137 + 24LL) )
        {
          v140 = (void *)v139[5];
          if ( v140 )
            ExFreePoolWithTag(v140, 0);
          ExFreePoolWithTag(v139, 0);
        }
        v137 = (__int128 *)((char *)v137 + 8);
        --v138;
      }
      while ( v138 );
      LODWORD(v4) = v158;
    }
    v11 = v163;
    v3 = v162;
    v8 = v161;
LABEL_320:
    v141 = -1LL;
    do
      ++v141;
    while ( *(_WORD *)(v8 + 2 * v141) );
    v8 += 2 * v141 + 2;
    LODWORD(v4) = v4 + 1;
    v161 = v8;
    v158 = v4;
  }
  if ( v17 != 2 )
  {
    if ( v17 != 3 )
      goto LABEL_296;
    switch ( *(_DWORD *)(v167 + 32) )
    {
      case 1:
      case 2:
        if ( *(_DWORD *)(v167 + 36) < 2u )
          goto LABEL_293;
        goto LABEL_306;
      case 3:
        v133 = *(_BYTE **)(v167 + 40);
        for ( j = *(_DWORD *)(v167 + 36); j; --j )
        {
          if ( *v133++ )
            goto LABEL_306;
        }
        goto LABEL_293;
      case 4:
        v129 = **(_DWORD **)(v167 + 40) == 0;
        break;
      case 7:
        v130 = *(_DWORD *)(v167 + 36) > 4u;
        goto LABEL_292;
      default:
        v129 = *(_DWORD *)(v167 + 32) == 0;
        break;
    }
    v130 = !v129;
LABEL_292:
    if ( !v130 )
    {
LABEL_293:
      v27 = (__int64 *)v166;
      goto LABEL_294;
    }
LABEL_306:
    v27 = (__int64 *)*((_QWORD *)&v166 + 1);
    goto LABEL_294;
  }
  v38 = (__int64 *)*((_QWORD *)&v166 + 1);
  if ( *(_DWORD *)(*((_QWORD *)&v166 + 1) + 32LL) != 1 && *(_DWORD *)(*((_QWORD *)&v166 + 1) + 32LL) != 2 )
  {
    if ( *(_DWORD *)(*((_QWORD *)&v166 + 1) + 32LL) != 3 )
    {
      if ( *(_DWORD *)(*((_QWORD *)&v166 + 1) + 32LL) != 4 )
      {
        if ( *(_DWORD *)(*((_QWORD *)&v166 + 1) + 32LL) != 7 )
          goto LABEL_43;
        v39 = (__int64 *)v166;
        v40 = *(_DWORD *)(v166 + 32);
        if ( v40 != 7 )
        {
          if ( (unsigned int)(v40 - 1) > 1 )
          {
            if ( v40 != 4 || (v66 = **(_DWORD **)(v166 + 40), *(_DWORD *)v15 != 24) )
            {
LABEL_43:
              v27 = qword_140B3CE80;
              RegistryValue = v13;
              goto LABEL_311;
            }
            v67 = *(_WORD **)(*((_QWORD *)&v166 + 1) + 40LL);
            v68 = 0;
            RegistryValue = v13;
            v69 = 0;
            while ( *v67 )
            {
              v70 = -1LL;
              do
                ++v70;
              while ( v67[v70] );
              v68 = 2 * v70 + 2;
              if ( v69 == v66 )
                goto LABEL_142;
              ++v69;
              v67 += (unsigned __int64)v68 >> 1;
            }
            if ( v69 != v66 )
            {
LABEL_146:
              LOWORD(v19) = 0;
              v27 = qword_140B3CE80;
              goto LABEL_106;
            }
LABEL_142:
            if ( !*v67 || v68 <= 2 )
              goto LABEL_146;
            v155 = v68;
            v71 = (void *)ExAllocatePool2(0x100uLL, (unsigned __int16)v68, 0x63647050u);
            v157 = (__int64)v71;
            if ( !v71 )
              goto LABEL_328;
            memmove(v71, v67, v68);
            v20 = v68 - 16;
            goto LABEL_104;
          }
          v72 = *(unsigned int *)(*((_QWORD *)&v166 + 1) + 36LL);
          v73 = *(void **)(v166 + 40);
          v74 = *(wchar_t **)(*((_QWORD *)&v166 + 1) + 40LL);
          v75 = *(unsigned int *)(v166 + 36);
          Src = v73;
          if ( (unsigned int)v72 > 0xFFFE || (unsigned int)v75 > 0xFFFE )
            goto LABEL_330;
          if ( *(_DWORD *)v15 == 1 )
            goto LABEL_163;
          if ( *(_DWORD *)v15 != 2 )
          {
            if ( *(_DWORD *)v15 == 8 )
            {
              v76 = PnpMultiSzContainsString(v74, (wchar_t *)v73);
              v27 = 0LL;
              if ( v76 )
                v27 = v39;
              goto LABEL_166;
            }
            if ( *(_DWORD *)v15 != 9 )
              goto LABEL_43;
            if ( PnpMultiSzContainsString(v74, (wchar_t *)v73) )
            {
              v27 = v38;
LABEL_166:
              LOWORD(v19) = v155;
              RegistryValue = v13;
              v20 = v152;
              goto LABEL_294;
            }
LABEL_163:
            if ( (unsigned int)(v75 + v72) > 0xFFFE )
              goto LABEL_330;
            v152 = v75 + v72;
            v155 = v75 + v72;
            v81 = (void *)ExAllocatePool2(0x100uLL, (unsigned __int16)(v75 + v72), 0x63647050u);
            v157 = (__int64)v81;
            if ( !v81 )
              goto LABEL_328;
            memmove(v81, v74, v72 - 2);
            memmove((void *)(v157 - 2 + 2 * (v72 >> 1)), Src, v75);
            v27 = 0LL;
            *(_WORD *)(v157 + 2 * ((unsigned __int64)(unsigned __int16)(v75 + v72) >> 1) - 2) = 0;
            goto LABEL_166;
          }
          v77 = PnpMultiSzContainsString(v74, (wchar_t *)v73);
          if ( !v77 )
            goto LABEL_246;
          v152 = v72 - v75;
          v78 = (char *)ExAllocatePool2(0x100uLL, (unsigned __int16)(v72 - v75), 0x63647050u);
          v157 = (__int64)v78;
          if ( !v78 )
            goto LABEL_328;
          v79 = v77 - v74;
          if ( v79 > 0 )
          {
            memmove(v78, v74, v77 - v74);
            v78 = (char *)v157;
          }
          v57 = (char *)v77 + v75;
          v58 = &v78[v79];
          v80 = (unsigned int)(v72 - v75) - v79;
LABEL_242:
          memmove(v58, v57, v80);
LABEL_243:
          v27 = 0LL;
          goto LABEL_244;
        }
        v41 = *(unsigned int *)(*((_QWORD *)&v166 + 1) + 36LL);
        v42 = *(_WORD **)(v166 + 40);
        v43 = *(WCHAR **)(*((_QWORD *)&v166 + 1) + 40LL);
        v19 = *(unsigned int *)(v166 + 36);
        Src = v42;
        if ( (unsigned int)v41 > 0xFFFE || (unsigned int)v19 > 0xFFFE )
          goto LABEL_330;
        v44 = *(_DWORD *)v15;
        if ( *(int *)v15 > 15 )
        {
          v60 = v44 - 16;
          if ( !v60 )
          {
            v65 = RtlCompareUnicodeStrings(v43, v41 >> 1, v42, v19 >> 1, 1u);
            LOWORD(v19) = 0;
            v20 = 0;
            if ( !v65 )
            {
              v27 = 0LL;
              RegistryValue = v13;
              goto LABEL_294;
            }
            LODWORD(v21) = 1;
            RegistryValue = v13;
            goto LABEL_295;
          }
          v61 = v60 - 1;
          if ( !v61 )
          {
            v64 = RtlCompareUnicodeStrings(v43, v41 >> 1, v42, v19 >> 1, 1u);
            goto LABEL_125;
          }
          v62 = v61 - 1;
          if ( v62 )
          {
            v63 = v62 - 1;
            if ( v63 )
            {
              if ( v63 != 1 )
                goto LABEL_43;
              v64 = ~RtlCompareUnicodeStrings(v43, v41 >> 1, v42, v19 >> 1, 1u);
LABEL_125:
              LODWORD(v21) = v64 >> 31;
LABEL_118:
              LOWORD(v19) = 0;
              RegistryValue = v13;
              v20 = 0;
              goto LABEL_295;
            }
            v59 = RtlCompareUnicodeStrings(v43, v41 >> 1, v42, v19 >> 1, 1u) <= 0;
          }
          else
          {
            v59 = RtlCompareUnicodeStrings(v43, v41 >> 1, v42, v19 >> 1, 1u) > 0;
          }
LABEL_117:
          LODWORD(v21) = v59;
          goto LABEL_118;
        }
        if ( v44 == 15 )
        {
          v59 = RtlCompareUnicodeStrings(v43, v41 >> 1, v42, v19 >> 1, 1u) == 0;
          goto LABEL_117;
        }
        v45 = v44 - 1;
        if ( !v45 )
          goto LABEL_110;
        v46 = v45 - 7;
        if ( !v46 )
        {
          LOWORD(v49) = 0;
          RegistryValue = v13;
          v153 = 0;
          v50 = 0LL;
          while ( *v43 )
          {
            v51 = -1LL;
            do
              ++v51;
            while ( v43[v51] );
            v52 = 2 * v51 + 2;
            if ( PnpMultiSzContainsString(v42, v43) )
            {
              if ( !v50 )
              {
                LOWORD(v153) = 0;
                v157 = ExAllocatePool2(0x100uLL, v41, 0x63647050u);
                v50 = v157;
                if ( !v157 )
                {
                  v20 = 0;
                  RegistryValue = -1073741670;
                  goto LABEL_104;
                }
              }
              v53 = v52;
              memmove((void *)(v50 + (unsigned __int16)v153), v43, v52);
              HIWORD(v49) = HIWORD(v153);
              LOWORD(v49) = v52 + v153;
              v153 = v49;
            }
            else
            {
              LOWORD(v49) = v153;
              v53 = v52;
            }
            v42 = Src;
            v43 += v53 >> 1;
          }
          v157 = v50;
          v20 = v49;
          if ( v50 )
          {
            v157 = v50;
            v54 = (unsigned __int16)(v49 + 2);
            LOWORD(v19) = v54;
            v20 = v54;
            v155 = v54;
            *(_WORD *)(v50 + 2 * (v54 >> 1) - 2) = 0;
LABEL_105:
            v27 = 0LL;
LABEL_106:
            if ( RegistryValue < 0 )
              goto LABEL_332;
LABEL_294:
            if ( v27 )
            {
              v17 = v154;
              goto LABEL_311;
            }
LABEL_295:
            v22 = (void *)v157;
            goto LABEL_296;
          }
LABEL_104:
          LOWORD(v19) = v155;
          goto LABEL_105;
        }
        v47 = v46 - 1;
        if ( !v47 )
        {
LABEL_110:
          if ( !*v43 )
          {
            v27 = (__int64 *)v166;
            goto LABEL_244;
          }
          if ( *v42 )
          {
            if ( (unsigned __int64)(unsigned int)(v19 + v41) - 2 > 0xFFFE )
              goto LABEL_330;
            v152 = v19 + v41 - 2;
            v55 = (char *)ExAllocatePool2(0x100uLL, v152, 0x63647050u);
            v157 = (__int64)v55;
            v56 = v55;
            if ( !v55 )
              goto LABEL_328;
            memmove(v55, v43, v41 - 2);
            v57 = (char *)Src;
            v58 = &v56[2 * (v41 >> 1) - 2];
            goto LABEL_241;
          }
LABEL_246:
          v27 = v38;
          goto LABEL_244;
        }
        v48 = v47 - 4;
        if ( v48 )
        {
          if ( v48 != 1 )
            goto LABEL_43;
          if ( (unsigned int)v41 > 2 )
            goto LABEL_91;
        }
        else if ( (unsigned int)v41 <= 2 )
        {
          goto LABEL_92;
        }
        if ( (unsigned int)v19 > 2 )
LABEL_91:
          LODWORD(v21) = 1;
LABEL_92:
        LOWORD(v19) = 0;
        RegistryValue = v13;
        v20 = 0;
        v22 = 0LL;
        goto LABEL_296;
      }
      if ( *(_DWORD *)(v166 + 32) != 4 )
        goto LABEL_227;
      v82 = **(_DWORD **)(*((_QWORD *)&v166 + 1) + 40LL);
      v83 = *(_DWORD *)v15;
      v84 = **(_DWORD **)(v166 + 40);
      if ( *(int *)v15 > 10 )
      {
        v96 = v83 - 13;
        if ( v96 )
        {
          v97 = v96 - 1;
          if ( v97 )
          {
            v98 = v97 - 1;
            if ( v98 )
            {
              v99 = v98 - 1;
              if ( v99 )
              {
                v100 = v99 - 1;
                if ( v100 )
                {
                  v101 = v100 - 1;
                  if ( v101 )
                  {
                    v102 = v101 - 1;
                    if ( v102 )
                    {
                      if ( v102 != 1 )
                      {
LABEL_203:
                        v27 = qword_140B3CE80;
                        RegistryValue = v13;
                        goto LABEL_311;
                      }
                      v95 = v82 >= v84;
                    }
                    else
                    {
                      v95 = v82 <= v84;
                    }
                  }
                  else
                  {
                    v95 = v82 > v84;
                  }
                }
                else
                {
                  v95 = v82 < v84;
                }
              }
              else
              {
                v95 = v82 != v84;
              }
            }
            else
            {
              v95 = v82 == v84;
            }
            goto LABEL_187;
          }
          if ( !v82 && !v84 )
            goto LABEL_50;
        }
        else if ( !v82 || !v84 )
        {
          goto LABEL_53;
        }
        LODWORD(v21) = 1;
        goto LABEL_50;
      }
      if ( v83 == 10 )
      {
        v93 = v82 ^ v84;
      }
      else
      {
        v85 = v83 - 1;
        if ( !v85 )
        {
          LODWORD(v21) = v84 + v82;
          goto LABEL_50;
        }
        v86 = v85 - 1;
        if ( !v86 )
        {
          v94 = v82 - v84;
          goto LABEL_192;
        }
        v87 = v86 - 1;
        if ( v87 )
        {
          v88 = v87 - 1;
          if ( v88 )
          {
            v89 = v88 - 1;
            if ( !v89 )
            {
              if ( !v84 )
                goto LABEL_188;
              LODWORD(v21) = v82 % v84;
              goto LABEL_50;
            }
            v90 = v89 - 1;
            if ( v90 )
            {
              v91 = v90 - 1;
              if ( v91 )
              {
                v92 = v91 - 1;
                if ( v92 )
                {
                  if ( v92 != 1 )
                    goto LABEL_203;
                  v93 = v82 | v84;
                }
                else
                {
                  v93 = v82 & v84;
                }
                goto LABEL_190;
              }
              v94 = v82 >> v84;
            }
            else
            {
              v94 = v82 << v84;
            }
LABEL_192:
            LODWORD(v21) = v94;
            goto LABEL_50;
          }
          if ( v84 )
          {
            v95 = v82 / v84;
LABEL_187:
            LODWORD(v21) = v95;
LABEL_50:
            RegistryValue = v13;
            goto LABEL_296;
          }
LABEL_188:
          RegistryValue = -1073741676;
LABEL_38:
          v27 = 0LL;
          goto LABEL_106;
        }
        v93 = v82 * v84;
      }
LABEL_190:
      LODWORD(v21) = v93;
      goto LABEL_50;
    }
    if ( *(_DWORD *)(v166 + 32) == 3 )
    {
      v103 = *(unsigned int *)(*((_QWORD *)&v166 + 1) + 36LL);
      v104 = *(_DWORD *)(v166 + 36);
      if ( *(_DWORD *)v15 == 15 )
      {
        v27 = 0LL;
        if ( (_DWORD)v103 == v104 )
          LODWORD(v21) = memcmp(*(const void **)(*((_QWORD *)&v166 + 1) + 40LL), *(const void **)(v166 + 40), v103) == 0;
      }
      else if ( *(_DWORD *)v15 == 16 )
      {
        LODWORD(v21) = (_DWORD)v103 != v104
                    || memcmp(*(const void **)(*((_QWORD *)&v166 + 1) + 40LL), *(const void **)(v166 + 40), v103);
        v27 = 0LL;
      }
      else
      {
        v27 = qword_140B3CE80;
      }
      goto LABEL_228;
    }
LABEL_227:
    v27 = qword_140B3CE80;
    goto LABEL_228;
  }
  v27 = (__int64 *)v166;
  v105 = *(_DWORD *)(v166 + 32);
  if ( (unsigned int)(v105 - 1) <= 1 )
  {
    if ( *(_DWORD *)(*((_QWORD *)&v166 + 1) + 36LL) > 0xFFFEu || *(_DWORD *)(v166 + 36) > 0xFFFEu )
    {
      RegistryValue = -2147483643;
      goto LABEL_38;
    }
    v111 = *(_WORD *)(*((_QWORD *)&v166 + 1) + 36LL);
    v112 = *(_DWORD *)v15;
    v113 = v111 - 2;
    v114 = *(_WORD **)(*((_QWORD *)&v166 + 1) + 40LL);
    v115 = *(_WORD *)(v166 + 36) - 2;
    v116 = *(_WORD **)(v166 + 40);
    Src = v114;
    v117 = v112 - 1;
    if ( !v117 )
    {
      if ( !*v114 )
        goto LABEL_280;
      if ( !*v116 )
      {
        v27 = (__int64 *)*((_QWORD *)&v166 + 1);
        goto LABEL_280;
      }
      if ( v113 + (unsigned int)v115 >= 0xFFFE )
        goto LABEL_330;
      v152 = v113 + v115;
      v155 = v115 + v111;
      v127 = (char *)ExAllocatePool2(0x100uLL, (unsigned __int16)(v115 + v111), 0x63647050u);
      v157 = (__int64)v127;
      v128 = v127;
      if ( !v127 )
      {
LABEL_328:
        RegistryValue = -1073741670;
        goto LABEL_329;
      }
      memmove(v127, Src, v113);
      memmove(&v128[2 * ((unsigned __int64)v113 >> 1)], v116, v115 + 2LL);
LABEL_279:
      v27 = 0LL;
      goto LABEL_280;
    }
    v118 = v117 - 12;
    if ( v118 )
    {
      v119 = v118 - 1;
      if ( v119 )
      {
        v120 = v119 - 1;
        if ( v120 )
        {
          v121 = v120 - 1;
          if ( v121 )
          {
            v122 = v121 - 1;
            if ( !v122 )
            {
              v125 = RtlCompareUnicodeStrings(v114, (unsigned __int64)v113 >> 1, v116, (unsigned __int64)v115 >> 1, 1u);
LABEL_260:
              LODWORD(v21) = v125 >> 31;
              goto LABEL_279;
            }
            v123 = v122 - 1;
            if ( v123 )
            {
              v124 = v123 - 1;
              if ( v124 )
              {
                if ( v124 != 1 )
                {
                  v27 = qword_140B3CE80;
LABEL_280:
                  v20 = v152;
                  LOWORD(v19) = v155;
                  goto LABEL_228;
                }
                v125 = ~RtlCompareUnicodeStrings(
                          v114,
                          (unsigned __int64)v113 >> 1,
                          v116,
                          (unsigned __int64)v115 >> 1,
                          1u);
                goto LABEL_260;
              }
              v126 = RtlCompareUnicodeStrings(v114, (unsigned __int64)v113 >> 1, v116, (unsigned __int64)v115 >> 1, 1u) <= 0;
            }
            else
            {
              v126 = RtlCompareUnicodeStrings(v114, (unsigned __int64)v113 >> 1, v116, (unsigned __int64)v115 >> 1, 1u) > 0;
            }
          }
          else
          {
            v126 = RtlCompareUnicodeStrings(v114, (unsigned __int64)v113 >> 1, v116, (unsigned __int64)v115 >> 1, 1u) != 0;
          }
        }
        else
        {
          v126 = RtlCompareUnicodeStrings(v114, (unsigned __int64)v113 >> 1, v116, (unsigned __int64)v115 >> 1, 1u) == 0;
        }
        LODWORD(v21) = v126;
        goto LABEL_279;
      }
      if ( v113 >= 2u )
        goto LABEL_269;
    }
    else if ( v113 < 2u )
    {
      goto LABEL_270;
    }
    if ( v115 < 2u )
    {
LABEL_270:
      v27 = 0LL;
      goto LABEL_280;
    }
LABEL_269:
    LODWORD(v21) = 1;
    goto LABEL_270;
  }
  if ( v105 != 7 )
    goto LABEL_227;
  v106 = *(unsigned int *)(*((_QWORD *)&v166 + 1) + 36LL);
  v107 = *(wchar_t **)(v166 + 40);
  v108 = *(wchar_t **)(*((_QWORD *)&v166 + 1) + 40LL);
  v19 = *(unsigned int *)(v166 + 36);
  v156 = v107;
  if ( (unsigned int)v106 <= 0xFFFE && (unsigned int)v19 <= 0xFFFE )
  {
    if ( *(_DWORD *)v15 == 1 )
      goto LABEL_238;
    if ( *(_DWORD *)v15 == 8 )
    {
      if ( PnpMultiSzContainsString(v107, v108) )
        goto LABEL_246;
      goto LABEL_243;
    }
    if ( *(_DWORD *)v15 != 9 )
    {
      v27 = qword_140B3CE80;
      goto LABEL_244;
    }
    if ( !PnpMultiSzContainsString(v107, v108) )
    {
LABEL_238:
      if ( (unsigned int)(v19 + v106) > 0xFFFE )
        goto LABEL_330;
      v152 = v19 + v106;
      v109 = (char *)ExAllocatePool2(0x100uLL, (unsigned __int16)(v19 + v106), 0x63647050u);
      v157 = (__int64)v109;
      v110 = v109;
      if ( !v109 )
        goto LABEL_328;
      memmove(v109, v108, v106);
      v57 = (char *)v156;
      v58 = &v110[2 * (v106 >> 1)];
LABEL_241:
      v80 = v19;
      goto LABEL_242;
    }
LABEL_244:
    v20 = v152;
    LOWORD(v19) = v152;
    v155 = v152;
LABEL_228:
    RegistryValue = v13;
    goto LABEL_294;
  }
LABEL_330:
  RegistryValue = -2147483643;
LABEL_329:
  v143 = v154;
LABEL_334:
  v144 = v143;
  v145 = &v166;
  do
  {
    v146 = *(_QWORD **)v145;
    if ( !*(_QWORD *)(*(_QWORD *)v145 + 24LL) )
    {
      v147 = (void *)v146[5];
      if ( v147 )
        ExFreePoolWithTag(v147, 0);
      ExFreePoolWithTag(v146, 0);
    }
    v145 = (__int128 *)((char *)v145 + 8);
    --v144;
  }
  while ( v144 );
  v12 = (__int64 *)Pool2;
  if ( Pool2 )
  {
    LODWORD(v4) = v158;
    goto LABEL_342;
  }
LABEL_358:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)RegistryValue;
}
