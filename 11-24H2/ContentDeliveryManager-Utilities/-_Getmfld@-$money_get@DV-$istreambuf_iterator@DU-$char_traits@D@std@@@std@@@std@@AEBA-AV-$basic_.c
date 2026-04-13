/*
 * XREFs of ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x18001D894
 * Callers:
 *     ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x18001F930 (-do_get@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreamb.c)
 *     ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x18001FA30 (-do_get@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA_ea_18001FA30.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800066CC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800093D4 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000BAF4 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000BBC8 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x18001C5DC (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x18001C728 (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002264D (--3@YAXPEAX@Z_0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005BE70 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180067378 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
_QWORD *__fastcall std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        char *a7)
{
  __int64 *v7; // r14
  _QWORD *v9; // r15
  __int64 *v10; // rbx
  __int64 v11; // rbx
  int v12; // r13d
  struct std::_Facet_base *v13; // rsi
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  __int64 v15; // rbx
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  __int64 v17; // rbx
  int v18; // r13d
  struct std::_Facet_base *v19; // rcx
  void (__fastcall ***v20)(_QWORD, __int64); // rax
  unsigned __int64 v21; // rax
  char v22; // al
  char v23; // bl
  __int64 v24; // r15
  __int64 v25; // rcx
  unsigned __int8 *v26; // rdx
  int v27; // eax
  int v28; // r14d
  int v29; // esi
  struct std::_Facet_base *v30; // rbx
  char v31; // r15
  void **v32; // rcx
  unsigned __int64 v33; // r14
  __int64 v34; // rbx
  char v35; // al
  void **v36; // rsi
  _QWORD *v37; // r13
  __int64 v38; // rcx
  unsigned __int8 *v39; // rdx
  int v40; // eax
  char *v41; // r8
  char i; // al
  void **v43; // rax
  void **v44; // rax
  void **v45; // rax
  __int64 v46; // rcx
  unsigned __int8 *v47; // rdx
  int v48; // eax
  void **v49; // rax
  void **v50; // rcx
  void *v51; // r9
  unsigned __int64 v52; // r8
  char v53; // dl
  void **v54; // rax
  void **v55; // rax
  char v56; // al
  bool v57; // zf
  char *v58; // rsi
  __int64 v59; // rcx
  unsigned __int8 *v60; // rdx
  int v61; // eax
  char *v62; // r8
  char j; // al
  char v64; // bl
  __int64 v65; // rcx
  unsigned __int8 *v66; // rdx
  int v67; // eax
  char k; // al
  __int64 v69; // rcx
  unsigned __int8 *v70; // rdx
  int v71; // eax
  char *v72; // r8
  char m; // al
  __int64 v74; // rbx
  int v75; // r13d
  char v76; // bl
  __int64 v77; // rcx
  unsigned __int8 *v78; // rdx
  int v79; // eax
  void **v80; // rcx
  void *v81; // r8
  unsigned __int64 v82; // rdx
  void *v83; // rcx
  int v84; // r13d
  char v85; // bl
  __int64 v86; // rcx
  unsigned __int8 *v87; // rdx
  int v88; // eax
  void **v89; // rcx
  void *v90; // r8
  unsigned __int64 v91; // rdx
  bool v92; // bl
  bool v93; // bl
  __int64 v94; // rcx
  unsigned __int8 *v95; // rdx
  int v96; // eax
  _BYTE *v97; // rax
  _BYTE *v98; // rbx
  __int64 v99; // rcx
  unsigned __int8 *v100; // rdx
  int v101; // eax
  _BYTE *v102; // rax
  _BYTE *v103; // rbx
  _QWORD *v104; // rcx
  __int64 v105; // rcx
  unsigned __int8 *v106; // rdx
  int v107; // eax
  unsigned __int64 v108; // r9
  _QWORD *v109; // r8
  char v110; // al
  _QWORD *v111; // rdx
  unsigned __int64 v112; // rcx
  void **v113; // rbx
  void **v114; // rax
  __int64 v115; // rcx
  unsigned __int8 *v116; // rdx
  int v117; // eax
  void **v118; // rax
  _BYTE *v119; // rax
  char v121; // [rsp+30h] [rbp-D0h]
  char v122; // [rsp+34h] [rbp-CCh]
  struct std::_Facet_base *v123; // [rsp+40h] [rbp-C0h]
  struct std::_Facet_base *v125; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v126; // [rsp+58h] [rbp-A8h]
  int v127; // [rsp+60h] [rbp-A0h]
  int v128; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v129; // [rsp+68h] [rbp-98h]
  _BYTE v130[8]; // [rsp+70h] [rbp-90h] BYREF
  char *v131; // [rsp+78h] [rbp-88h]
  int v132; // [rsp+80h] [rbp-80h]
  __int64 v133; // [rsp+88h] [rbp-78h]
  _QWORD *v134; // [rsp+90h] [rbp-70h]
  _QWORD v135[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v136; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v137; // [rsp+B0h] [rbp-50h]
  void *v138[2]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v139; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v140; // [rsp+D0h] [rbp-30h]
  void *v141[2]; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v142; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v143; // [rsp+F0h] [rbp-10h]
  void *v144[3]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v145; // [rsp+110h] [rbp+10h]
  void *v146[3]; // [rsp+118h] [rbp+18h] BYREF
  unsigned __int64 v147; // [rsp+130h] [rbp+30h]
  void *v148[3]; // [rsp+138h] [rbp+38h] BYREF
  unsigned __int64 v149; // [rsp+150h] [rbp+50h]
  void *v150[3]; // [rsp+158h] [rbp+58h] BYREF
  unsigned __int64 v151; // [rsp+170h] [rbp+70h]

  v133 = -2LL;
  v7 = a4;
  v9 = a2;
  v126 = a2;
  v134 = a2;
  v131 = a7;
  v10 = *(__int64 **)(a6 + 64);
  if ( a5 )
  {
    v11 = *v10;
    v125 = (struct std::_Facet_base *)v11;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = 256;
    v13 = std::use_facet<std::moneypunct<char,1>>((__int64 *)&v125);
    v123 = v13;
    if ( v11 )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v14 )
        (**v14)(v14, 1LL);
    }
  }
  else
  {
    v15 = *v10;
    v125 = (struct std::_Facet_base *)v15;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v12 = 128;
    v13 = std::use_facet<std::moneypunct<char,0>>((__int64 *)&v125);
    v123 = v13;
    if ( v15 )
    {
      v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v16 )
        (**v16)(v16, 1LL);
    }
  }
  v121 = 0;
  v122 = 0;
  v143 = 15LL;
  v142 = 0LL;
  LOBYTE(v141[0]) = 0;
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *))(*(_QWORD *)v13 + 88LL))(v13, v130);
  v9[3] = 15LL;
  v9[2] = 0LL;
  *(_BYTE *)v9 = 0;
  v17 = **(_QWORD **)(a6 + 64);
  v125 = (struct std::_Facet_base *)v17;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  v18 = v12 | 0x21;
  v19 = std::use_facet<std::ctype<char>>((__int64 *)&v125);
  v125 = v19;
  if ( v17 )
  {
    v20 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v20 )
      (**v20)(v20, 1LL);
    v19 = v125;
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, char *))(*(_QWORD *)v19 + 56LL))(
    v19,
    "0123456789-",
    "",
    v131);
  v21 = 0LL;
  v129 = 0LL;
  while ( v21 < 4 )
  {
    v22 = v130[v21];
    switch ( v22 )
    {
      case ' ':
        goto LABEL_20;
      case '$':
        (*(void (__fastcall **)(struct std::_Facet_base *, _QWORD *))(*(_QWORD *)v13 + 48LL))(v13, v135);
        v18 |= 0x40u;
        if ( (*(_BYTE *)(a6 + 24) & 8) == 0 && !std::istreambuf_iterator<char>::equal((__int64 *)a3, v7) )
        {
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v94 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v95 = **(unsigned __int8 ***)(v94 + 56)) == 0LL || **(int **)(v94 + 80) <= 0
                ? (v96 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v94 + 48LL))(v94))
                : (v96 = *v95),
                  v96 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v96;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          v97 = v135;
          if ( v137 >= 0x10 )
            v97 = (_BYTE *)v135[0];
          if ( *(_BYTE *)(a3 + 9) != *v97 )
            goto LABEL_260;
        }
        if ( v129 == 3 && v142 <= 1 )
        {
          if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, v7) )
            goto LABEL_260;
          v98 = v135;
          if ( v137 >= 0x10 )
            v98 = (_BYTE *)v135[0];
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v99 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v100 = **(unsigned __int8 ***)(v99 + 56)) == 0LL || **(int **)(v99 + 80) <= 0
                ? (v101 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v99 + 48LL))(v99))
                : (v101 = *v100),
                  v101 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v101;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          if ( *(_BYTE *)(a3 + 9) != *v98 )
          {
LABEL_260:
            v102 = v135;
            v136 = 0LL;
            if ( v137 >= 0x10 )
              v102 = (_BYTE *)v135[0];
            *v102 = 0;
          }
        }
        v103 = v135;
        if ( v137 >= 0x10 )
          v103 = (_BYTE *)v135[0];
        while ( 1 )
        {
          v110 = std::istreambuf_iterator<char>::equal((__int64 *)a3, v7);
          v108 = v137;
          v109 = (_QWORD *)v135[0];
          if ( v110 )
            break;
          v104 = v135;
          if ( v137 >= 0x10 )
            v104 = (_QWORD *)v135[0];
          if ( v103 == (char *)v104 + v136 )
            break;
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v105 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v106 = **(unsigned __int8 ***)(v105 + 56)) == 0LL || **(int **)(v105 + 80) <= 0
                ? (v107 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v105 + 48LL))(v105),
                   v108 = v137,
                   v109 = (_QWORD *)v135[0])
                : (_QWORD *)(v107 = *v106),
                  v107 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v107;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          if ( *(_BYTE *)(a3 + 9) != *v103 )
            break;
          ++v103;
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        }
        v111 = v135;
        if ( v108 >= 0x10 )
          v111 = v109;
        v56 = v121;
        if ( v103 != (char *)v111 + v136 )
          v56 = 1;
        v121 = v56;
        if ( v108 >= 0x10 )
        {
          v83 = v109;
LABEL_194:
          operator delete(v83);
          goto LABEL_101;
        }
        break;
      case '+':
        if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, v7) )
          goto LABEL_101;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v138);
        v75 = v18 | 0x402;
        v76 = 0;
        if ( v139 )
        {
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v148);
          v75 |= 0x1004u;
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v77 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v78 = **(unsigned __int8 ***)(v77 + 56)) == 0LL || **(int **)(v77 + 80) <= 0
                ? (v79 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77 + 48LL))(v77))
                : (v79 = *v78),
                  v79 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v79;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          v80 = v148;
          v81 = v148[0];
          v82 = v149;
          if ( v149 >= 0x10 )
            v80 = (void **)v148[0];
          if ( *(_BYTE *)v80 == *(_BYTE *)(a3 + 9) )
            v76 = 1;
        }
        else
        {
          v82 = v149;
          v81 = v148[0];
        }
        if ( (v75 & 4) != 0 )
        {
          v75 &= ~4u;
          if ( v82 >= 0x10 )
            operator delete(v81);
          v149 = 15LL;
          v148[2] = 0LL;
          LOBYTE(v148[0]) = 0;
        }
        if ( (v75 & 2) != 0 )
        {
          v75 &= ~2u;
          if ( v140 >= 0x10 )
            operator delete(v138[0]);
        }
        if ( v76 )
        {
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v138);
          v18 = v75 | 0x2000;
          std::string::operator=(v141, v138);
          if ( v140 < 0x10 )
            goto LABEL_101;
          v83 = v138[0];
          goto LABEL_194;
        }
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v138);
        v84 = v75 | 0x808;
        v85 = 0;
        if ( v139 )
        {
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v150);
          v84 |= 0x4010u;
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v86 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v87 = **(unsigned __int8 ***)(v86 + 56)) == 0LL || **(int **)(v86 + 80) <= 0
                ? (v88 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v86 + 48LL))(v86))
                : (v88 = *v87),
                  v88 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v88;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          v89 = v150;
          v90 = v150[0];
          v91 = v151;
          if ( v151 >= 0x10 )
            v89 = (void **)v150[0];
          if ( *(_BYTE *)v89 == *(_BYTE *)(a3 + 9) )
            v85 = 1;
        }
        else
        {
          v91 = v151;
          v90 = v150[0];
        }
        if ( (v84 & 0x10) != 0 )
        {
          v84 &= ~0x10u;
          if ( v91 >= 0x10 )
            operator delete(v90);
          v151 = 15LL;
          v150[2] = 0LL;
          LOBYTE(v150[0]) = 0;
        }
        if ( (v84 & 8) != 0 )
        {
          v84 &= ~8u;
          if ( v140 >= 0x10 )
            operator delete(v138[0]);
        }
        if ( v85 )
        {
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v138);
          v18 = v84 | 0x8000;
          std::string::operator=(v141, v138);
          if ( v140 >= 0x10 )
            operator delete(v138[0]);
          v122 = 1;
          goto LABEL_101;
        }
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v138);
        v18 = v84 | 0x10000;
        v92 = v139 == 0;
        if ( v140 >= 0x10 )
          operator delete(v138[0]);
        if ( v92 )
        {
LABEL_101:
          v56 = v121;
        }
        else
        {
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v138);
          v18 |= 0x20000u;
          v93 = v139 == 0;
          if ( v140 >= 0x10 )
            operator delete(v138[0]);
          v56 = v121;
          if ( v93 )
            v122 = 1;
        }
        break;
      case 'v':
        v28 = 0;
        v128 = 0;
        v29 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v13 + 72LL))(v13);
        v127 = v29;
        v30 = v123;
        (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v123 + 40LL))(v123, v146);
        v18 |= 0x200u;
        v132 = v18;
        if ( v146[2] )
        {
          v31 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v123 + 32LL))(v123);
          if ( v31 )
          {
            v32 = v146;
            if ( v147 >= 0x10 )
              v32 = (void **)v146[0];
            if ( *(_BYTE *)v32 < 0x7Fu )
            {
              v33 = 15LL;
              v145 = 15LL;
              LOWORD(v144[0]) = 0;
              v144[2] = (void *)1;
              v34 = 0LL;
              v35 = std::istreambuf_iterator<char>::equal((__int64 *)a3, a4);
              v36 = (void **)v144[0];
              if ( v35 )
                goto LABEL_79;
              v37 = v126;
              while ( 2 )
              {
                if ( !*(_BYTE *)(a3 + 8) )
                {
                  v38 = *(_QWORD *)a3;
                  if ( !*(_QWORD *)a3
                    || ((v39 = **(unsigned __int8 ***)(v38 + 56)) == 0LL || **(int **)(v38 + 80) <= 0
                      ? (v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 48LL))(v38))
                      : (v40 = *v39),
                        v40 == -1) )
                  {
                    *(_QWORD *)a3 = 0LL;
                  }
                  else
                  {
                    *(_BYTE *)(a3 + 9) = v40;
                  }
                  *(_BYTE *)(a3 + 8) = 1;
                }
                v41 = v131;
                for ( i = *v131; i && i != *(_BYTE *)(a3 + 9); i = *v41 )
                  ++v41;
                if ( (unsigned __int64)(v41 - v131) >= 0xA )
                {
                  v45 = v144;
                  if ( v33 >= 0x10 )
                    v45 = v36;
                  if ( !*((_BYTE *)v45 + v34) )
                    goto LABEL_73;
                  if ( !*(_BYTE *)(a3 + 8) )
                  {
                    v46 = *(_QWORD *)a3;
                    if ( !*(_QWORD *)a3
                      || ((v47 = **(unsigned __int8 ***)(v46 + 56)) == 0LL || **(int **)(v46 + 80) <= 0
                        ? (v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 48LL))(v46))
                        : (v48 = *v47),
                          v48 == -1) )
                    {
                      *(_QWORD *)a3 = 0LL;
                    }
                    else
                    {
                      *(_BYTE *)(a3 + 9) = v48;
                    }
                    *(_BYTE *)(a3 + 8) = 1;
                  }
                  if ( *(_BYTE *)(a3 + 9) != v31 )
                  {
LABEL_73:
                    v18 = v132;
                    if ( v34 )
                    {
                      v49 = v144;
                      if ( v33 >= 0x10 )
                        v49 = v36;
                      if ( *((char *)v49 + v34) <= 0 )
                        v121 = 1;
                      else
                        ++v34;
                    }
LABEL_79:
                    v50 = v146;
                    v51 = v146[0];
                    v52 = v147;
                    if ( v147 >= 0x10 )
                      v50 = (void **)v146[0];
                    if ( !v121 )
                    {
                      while ( v34 )
                      {
                        v53 = *(_BYTE *)v50;
                        if ( *(_BYTE *)v50 == 127 )
                          break;
                        if ( --v34 )
                        {
                          v54 = v144;
                          if ( v33 >= 0x10 )
                            v54 = v36;
                          if ( v53 != *((_BYTE *)v54 + v34) )
                            goto LABEL_94;
                        }
                        if ( !v34 )
                        {
                          v55 = v144;
                          if ( v33 >= 0x10 )
                            v55 = v36;
                          if ( v53 < *(char *)v55 )
                          {
LABEL_94:
                            v121 = 1;
                            goto LABEL_95;
                          }
                        }
                        if ( *((char *)v50 + 1) > 0 )
                          v50 = (void **)((char *)v50 + 1);
                      }
                      if ( v33 >= 0x10 )
                        operator delete(v36);
LABEL_125:
                      v29 = v127;
                      v28 = v128;
                      v30 = v123;
                      goto LABEL_126;
                    }
LABEL_95:
                    if ( v33 >= 0x10 )
                    {
                      operator delete(v36);
                      v52 = v147;
                      v51 = v146[0];
                    }
                    if ( v52 >= 0x10 )
                      operator delete(v51);
                    v9 = v126;
LABEL_100:
                    v7 = a4;
                    v13 = v123;
                    goto LABEL_101;
                  }
                  std::string::append(v144, 1LL);
                  ++v34;
LABEL_71:
                  v36 = (void **)v144[0];
                  v33 = v145;
                }
                else
                {
                  std::string::append(v37, 1LL);
                  v43 = v144;
                  if ( v33 >= 0x10 )
                    v43 = v36;
                  if ( *((_BYTE *)v43 + v34) != 127 )
                  {
                    v44 = v144;
                    if ( v33 >= 0x10 )
                      v44 = v36;
                    ++*((_BYTE *)v44 + v34);
                    goto LABEL_71;
                  }
                }
                std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
                if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
                  goto LABEL_73;
                continue;
              }
            }
          }
          v9 = v126;
        }
        if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
        {
          v58 = v131;
          do
          {
            if ( !*(_BYTE *)(a3 + 8) )
            {
              v59 = *(_QWORD *)a3;
              if ( !*(_QWORD *)a3
                || ((v60 = **(unsigned __int8 ***)(v59 + 56)) == 0LL || **(int **)(v59 + 80) <= 0
                  ? (v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 48LL))(v59))
                  : (v61 = *v60),
                    v61 == -1) )
              {
                *(_QWORD *)a3 = 0LL;
              }
              else
              {
                *(_BYTE *)(a3 + 9) = v61;
              }
              *(_BYTE *)(a3 + 8) = 1;
            }
            v62 = v58;
            for ( j = *v58; j && j != *(_BYTE *)(a3 + 9); j = *v62 )
              ++v62;
            if ( (unsigned __int64)(v62 - v58) >= 0xA )
              break;
            std::string::append(v9, 1LL);
            std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
          }
          while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) );
          goto LABEL_125;
        }
LABEL_126:
        v64 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v30 + 24LL))(v30);
        if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) && v64 )
        {
          if ( !*(_BYTE *)(a3 + 8) )
          {
            v65 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v66 = **(unsigned __int8 ***)(v65 + 56)) == 0LL || **(int **)(v65 + 80) <= 0
                ? (v67 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v65 + 48LL))(v65))
                : (v67 = *v66),
                  v67 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *(_BYTE *)(a3 + 9) = v67;
            }
            *(_BYTE *)(a3 + 8) = 1;
          }
          if ( *(_BYTE *)(a3 + 9) == v64 )
          {
            std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
            for ( k = std::istreambuf_iterator<char>::equal((__int64 *)a3, a4);
                  !k;
                  k = std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
            {
              if ( v28 >= v29 )
                goto LABEL_160;
              if ( !*(_BYTE *)(a3 + 8) )
              {
                v69 = *(_QWORD *)a3;
                if ( !*(_QWORD *)a3
                  || ((v70 = **(unsigned __int8 ***)(v69 + 56)) == 0LL || **(int **)(v69 + 80) <= 0
                    ? (v71 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 48LL))(v69))
                    : (v71 = *v70),
                      v71 == -1) )
                {
                  *(_QWORD *)a3 = 0LL;
                }
                else
                {
                  *(_BYTE *)(a3 + 9) = v71;
                }
                *(_BYTE *)(a3 + 8) = 1;
              }
              v72 = v131;
              for ( m = *v131; m && m != *(_BYTE *)(a3 + 9); m = *v72 )
                ++v72;
              if ( (unsigned __int64)(v72 - v131) >= 0xA )
                goto LABEL_159;
              std::string::append(v126, 1LL);
              ++v28;
              std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
            }
            if ( v28 >= v29 )
              goto LABEL_160;
LABEL_159:
            v121 = 1;
          }
        }
LABEL_160:
        v9 = v126;
        if ( v126[2] )
        {
          if ( v28 < v29 )
          {
            v74 = (unsigned int)(v29 - v28);
            do
            {
              std::string::append(v9, 1LL);
              --v74;
            }
            while ( v74 );
          }
        }
        else
        {
          v121 = 1;
        }
        if ( v147 >= 0x10 )
          operator delete(v146[0]);
        goto LABEL_100;
      case 'x':
LABEL_20:
        if ( v129 == 3 )
          goto LABEL_101;
        v23 = 0;
        if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, v7) )
        {
          v24 = (__int64)v125;
          do
          {
            if ( !*(_BYTE *)(a3 + 8) )
            {
              v25 = *(_QWORD *)a3;
              if ( !*(_QWORD *)a3
                || ((v26 = **(unsigned __int8 ***)(v25 + 56)) == 0LL || **(int **)(v25 + 80) <= 0
                  ? (v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 48LL))(v25))
                  : (v27 = *v26),
                    v27 == -1) )
              {
                *(_QWORD *)a3 = 0LL;
              }
              else
              {
                *(_BYTE *)(a3 + 9) = v27;
              }
              *(_BYTE *)(a3 + 8) = 1;
            }
            if ( (*(_BYTE *)(*(_QWORD *)(v24 + 24) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 0x48) == 0 )
              break;
            v23 = 1;
            std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
          }
          while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, v7) );
          v9 = v126;
        }
        if ( v130[v129] != 32 )
          goto LABEL_101;
        v56 = v121;
        if ( !v23 )
          v56 = 1;
        v121 = v56;
        break;
      default:
        goto LABEL_101;
    }
    ++v129;
    v57 = v56 == 0;
    v21 = v129;
    if ( !v57 )
      goto LABEL_323;
  }
  v112 = v142;
  if ( v142 <= 1 )
    goto LABEL_327;
  v113 = v141;
  if ( v143 >= 0x10 )
    v113 = (void **)v141[0];
  while ( 1 )
  {
    v113 = (void **)((char *)v113 + 1);
    v114 = v141;
    if ( v143 >= 0x10 )
      v114 = (void **)v141[0];
    if ( v113 == (void **)((char *)v114 + v112) )
      break;
    if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, v7) )
      goto LABEL_319;
    if ( !*(_BYTE *)(a3 + 8) )
    {
      v115 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v116 = **(unsigned __int8 ***)(v115 + 56)) == 0LL || **(int **)(v115 + 80) <= 0
          ? (v117 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v115 + 48LL))(v115))
          : (v117 = *v116),
            v117 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *(_BYTE *)(a3 + 9) = v117;
      }
      *(_BYTE *)(a3 + 8) = 1;
    }
    if ( *(_BYTE *)(a3 + 9) != *(_BYTE *)v113 )
    {
LABEL_319:
      v112 = v142;
      break;
    }
    std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
    v112 = v142;
  }
  v118 = v141;
  if ( v143 >= 0x10 )
    v118 = (void **)v141[0];
  if ( v113 == (void **)((char *)v118 + v112) )
  {
LABEL_327:
    if ( v122 )
      std::string::insert(v9, 0LL, 1uLL, 45);
  }
  else
  {
LABEL_323:
    if ( v9[3] < 0x10uLL )
      v119 = v9;
    else
      v119 = (_BYTE *)*v9;
    v9[2] = 0LL;
    *v119 = 0;
  }
  if ( v143 >= 0x10 )
    operator delete(v141[0]);
  return v9;
}
