/*
 * XREFs of ?_Getmfld@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0_NAEAVios_base@2@PEAG@Z @ 0x1800126C0
 * Callers:
 *     ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAO@Z @ 0x1800180E0 (-do_get@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreamb.c)
 *     ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800181E0 (-do_get@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_1800181E0.c)
 * Callees:
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000BBB8 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??$use_facet@V?$moneypunct@G$00@std@@@std@@YAAEBV?$moneypunct@G$00@0@AEBVlocale@0@@Z @ 0x18000FC94 (--$use_facet@V-$moneypunct@G$00@std@@@std@@YAAEBV-$moneypunct@G$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@G$0A@@std@@@std@@YAAEBV?$moneypunct@G$0A@@0@AEBVlocale@0@@Z @ 0x18000FDE0 (--$use_facet@V-$moneypunct@G$0A@@std@@@std@@YAAEBV-$moneypunct@G$0A@@0@AEBVlocale@0@@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002263D (--3@YAXPEAX@Z_0.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049358 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180059390 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005AC38 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005B994 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005CF84 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
_QWORD *__fastcall std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getmfld(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        __int16 *a7)
{
  __int64 v7; // r14
  _QWORD *v9; // r15
  __int64 *v10; // rbx
  __int64 v11; // rbx
  int v12; // r12d
  struct std::_Facet_base *v13; // rsi
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  __int64 v15; // rbx
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  __int64 v17; // rbx
  int v18; // r12d
  __int64 v19; // rcx
  void (__fastcall ***v20)(_QWORD, __int64); // rax
  unsigned __int64 v21; // rax
  char v22; // al
  char v23; // bl
  __int64 v24; // r15
  __int64 v25; // rcx
  __int16 *v26; // rdx
  __int16 v27; // ax
  int v28; // r14d
  int v29; // esi
  struct std::_Facet_base *v30; // rbx
  __int16 v31; // r15
  void **v32; // rcx
  unsigned __int64 v33; // r14
  __int64 v34; // rbx
  char v35; // al
  __int16 *v36; // rdx
  void **v37; // rsi
  _QWORD *v38; // r12
  __int64 v39; // rcx
  __int16 v40; // ax
  __int16 *v41; // r8
  __int16 i; // ax
  void **v43; // rax
  void **v44; // rax
  void **v45; // rax
  __int64 v46; // rcx
  __int16 v47; // ax
  void **v48; // rax
  void **v49; // rcx
  void *v50; // r9
  unsigned __int64 v51; // r8
  void **v52; // rax
  void **v53; // rax
  char v54; // al
  bool v55; // zf
  char v56; // al
  __int16 *v57; // rsi
  __int64 v58; // rcx
  __int16 v59; // ax
  __int16 *v60; // r8
  __int16 j; // ax
  char v62; // al
  __int16 v63; // bx
  __int64 v64; // rcx
  __int16 *v65; // rdx
  __int16 v66; // ax
  char k; // al
  __int64 v68; // rcx
  __int16 *v69; // rdx
  __int16 v70; // ax
  __int16 *v71; // r8
  __int16 m; // ax
  __int64 v73; // rbx
  int v74; // r12d
  char v75; // bl
  __int64 v76; // rcx
  __int16 *v77; // rdx
  __int16 v78; // ax
  void **v79; // rcx
  void *v80; // r8
  unsigned __int64 v81; // rdx
  void *v82; // rcx
  int v83; // r12d
  char v84; // bl
  __int64 v85; // rcx
  __int16 *v86; // rdx
  __int16 v87; // ax
  void **v88; // rcx
  void *v89; // r8
  unsigned __int64 v90; // rdx
  bool v91; // bl
  bool v92; // bl
  __int64 v93; // rcx
  __int16 *v94; // rdx
  __int16 v95; // ax
  _WORD *v96; // rax
  _WORD *v97; // rbx
  __int64 v98; // rcx
  __int16 *v99; // rdx
  __int16 v100; // ax
  _WORD *v101; // rax
  _WORD *v102; // rbx
  _QWORD *v103; // rcx
  __int64 v104; // rcx
  __int16 *v105; // rdx
  __int16 v106; // ax
  unsigned __int64 v107; // r9
  _QWORD *v108; // r8
  char v109; // al
  _QWORD *v110; // rdx
  unsigned __int64 v111; // rcx
  void **v112; // rbx
  void **v113; // rax
  __int64 v114; // rcx
  __int16 *v115; // rdx
  __int16 v116; // ax
  void **v117; // rax
  _BYTE *v118; // rax
  char v120; // [rsp+30h] [rbp-D0h]
  char v121; // [rsp+34h] [rbp-CCh]
  struct std::_Facet_base *v122; // [rsp+40h] [rbp-C0h]
  __int64 v124; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD *v125; // [rsp+58h] [rbp-A8h]
  int v126; // [rsp+60h] [rbp-A0h]
  int v127; // [rsp+64h] [rbp-9Ch]
  unsigned __int64 v128; // [rsp+68h] [rbp-98h]
  int v129; // [rsp+70h] [rbp-90h]
  _BYTE v130[4]; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 *v131; // [rsp+78h] [rbp-88h]
  __int64 v132; // [rsp+80h] [rbp-80h]
  _QWORD *v133; // [rsp+88h] [rbp-78h]
  void *v134[2]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v135; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v136; // [rsp+A8h] [rbp-58h]
  _QWORD v137[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v138; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v139; // [rsp+C8h] [rbp-38h]
  void *v140[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v141; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v142; // [rsp+E8h] [rbp-18h]
  void *v143[3]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v144; // [rsp+108h] [rbp+8h]
  void *v145[3]; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 v146; // [rsp+128h] [rbp+28h]
  void *v147[3]; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int64 v148; // [rsp+148h] [rbp+48h]
  void *v149[3]; // [rsp+150h] [rbp+50h] BYREF
  unsigned __int64 v150; // [rsp+168h] [rbp+68h]

  v132 = -2LL;
  v7 = a4;
  v9 = a2;
  v125 = a2;
  v133 = a2;
  v131 = a7;
  v10 = *(__int64 **)(a6 + 64);
  if ( a5 )
  {
    v11 = *v10;
    v124 = v11;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = 256;
    v13 = std::use_facet<std::moneypunct<unsigned short,1>>(&v124);
    v122 = v13;
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
    v124 = v15;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v12 = 128;
    v13 = std::use_facet<std::moneypunct<unsigned short,0>>(&v124);
    v122 = v13;
    if ( v15 )
    {
      v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v16 )
        (**v16)(v16, 1LL);
    }
  }
  v120 = 0;
  v121 = 0;
  v136 = 7LL;
  v135 = 0LL;
  LOWORD(v134[0]) = 0;
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *))(*(_QWORD *)v13 + 88LL))(v13, v130);
  v9[3] = 15LL;
  v9[2] = 0LL;
  *(_BYTE *)v9 = 0;
  v17 = **(_QWORD **)(a6 + 64);
  v124 = v17;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
  v18 = v12 | 0x21;
  v19 = std::use_facet<std::ctype<unsigned short>>((std::locale *)&v124);
  v124 = v19;
  if ( v17 )
  {
    v20 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v20 )
      (**v20)(v20, 1LL);
    v19 = v124;
  }
  (*(void (__fastcall **)(__int64, const char *, char *, __int16 *))(*(_QWORD *)v19 + 88LL))(
    v19,
    "0123456789-",
    "",
    v131);
  v21 = 0LL;
  v128 = 0LL;
  while ( v21 < 4 )
  {
    v22 = v130[v21];
    if ( v22 == 32 )
      goto LABEL_20;
    if ( v22 == 36 )
    {
      (*(void (__fastcall **)(struct std::_Facet_base *, _QWORD *))(*(_QWORD *)v13 + 48LL))(v13, v137);
      v18 |= 0x40u;
      if ( (*(_BYTE *)(a6 + 24) & 8) == 0 && !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v93 = *a3;
          if ( !*a3
            || ((v94 = **(__int16 ***)(v93 + 56)) == 0LL || **(int **)(v93 + 80) <= 0
              ? (v95 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v93 + 48LL))(v93))
              : (v95 = *v94),
                v95 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_WORD *)a3 + 5) = v95;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        v96 = v137;
        if ( v139 >= 8 )
          v96 = (_WORD *)v137[0];
        if ( *((_WORD *)a3 + 5) != *v96 )
          goto LABEL_264;
      }
      if ( v128 == 3 && v135 <= 1 )
      {
        if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
          goto LABEL_264;
        v97 = v137;
        if ( v139 >= 8 )
          v97 = (_WORD *)v137[0];
        if ( !*((_BYTE *)a3 + 8) )
        {
          v98 = *a3;
          if ( !*a3
            || ((v99 = **(__int16 ***)(v98 + 56)) == 0LL || **(int **)(v98 + 80) <= 0
              ? (v100 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v98 + 48LL))(v98))
              : (v100 = *v99),
                v100 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_WORD *)a3 + 5) = v100;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_WORD *)a3 + 5) != *v97 )
        {
LABEL_264:
          v101 = v137;
          v138 = 0LL;
          if ( v139 >= 8 )
            v101 = (_WORD *)v137[0];
          *v101 = 0;
        }
      }
      v102 = v137;
      if ( v139 >= 8 )
        v102 = (_WORD *)v137[0];
      while ( 1 )
      {
        v109 = std::istreambuf_iterator<wchar_t>::equal(a3, v7);
        v107 = v139;
        v108 = (_QWORD *)v137[0];
        if ( v109 )
          break;
        v103 = v137;
        if ( v139 >= 8 )
          v103 = (_QWORD *)v137[0];
        if ( v102 == (_WORD *)((char *)v103 + 2 * v138) )
          break;
        if ( !*((_BYTE *)a3 + 8) )
        {
          v104 = *a3;
          if ( !*a3
            || ((v105 = **(__int16 ***)(v104 + 56)) == 0LL || **(int **)(v104 + 80) <= 0
              ? (v106 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v104 + 48LL))(v104),
                 v107 = v139,
                 v108 = (_QWORD *)v137[0])
              : (_QWORD *)(v106 = *v105),
                v106 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_WORD *)a3 + 5) = v106;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_WORD *)a3 + 5) != *v102 )
          break;
        ++v102;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      v110 = v137;
      if ( v107 >= 8 )
        v110 = v108;
      v54 = v120;
      if ( v102 != (_WORD *)((char *)v110 + 2 * v138) )
        v54 = 1;
      v120 = v54;
      if ( v107 >= 8 )
      {
        v82 = v108;
        goto LABEL_196;
      }
    }
    else
    {
      switch ( v22 )
      {
        case '+':
          if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
            break;
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v140);
          v74 = v18 | 0x402;
          v75 = 0;
          if ( v141 )
          {
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v147);
            v74 |= 0x1004u;
            if ( !*((_BYTE *)a3 + 8) )
            {
              v76 = *a3;
              if ( !*a3
                || ((v77 = **(__int16 ***)(v76 + 56)) == 0LL || **(int **)(v76 + 80) <= 0
                  ? (v78 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v76 + 48LL))(v76))
                  : (v78 = *v77),
                    v78 == -1) )
              {
                *a3 = 0LL;
              }
              else
              {
                *((_WORD *)a3 + 5) = v78;
              }
              *((_BYTE *)a3 + 8) = 1;
            }
            v79 = v147;
            v80 = v147[0];
            v81 = v148;
            if ( v148 >= 8 )
              v79 = (void **)v147[0];
            if ( *(_WORD *)v79 == *((_WORD *)a3 + 5) )
              v75 = 1;
          }
          else
          {
            v81 = v148;
            v80 = v147[0];
          }
          if ( (v74 & 4) != 0 )
          {
            v74 &= ~4u;
            if ( v81 >= 8 )
              operator delete(v80);
            v148 = 7LL;
            v147[2] = 0LL;
            LOWORD(v147[0]) = 0;
          }
          if ( (v74 & 2) != 0 )
          {
            v74 &= ~2u;
            if ( v142 >= 8 )
              operator delete(v140[0]);
          }
          if ( v75 )
          {
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v140);
            v18 = v74 | 0x2000;
            if ( v136 >= 8 )
              operator delete(v134[0]);
            v136 = 7LL;
            v135 = 0LL;
            LOWORD(v134[0]) = 0;
            std::wstring::_Assign_rv(v134, v140);
            if ( v142 < 8 )
              break;
            v82 = v140[0];
LABEL_196:
            operator delete(v82);
            break;
          }
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v140);
          v83 = v74 | 0x808;
          v84 = 0;
          if ( v141 )
          {
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v149);
            v83 |= 0x4010u;
            if ( !*((_BYTE *)a3 + 8) )
            {
              v85 = *a3;
              if ( !*a3
                || ((v86 = **(__int16 ***)(v85 + 56)) == 0LL || **(int **)(v85 + 80) <= 0
                  ? (v87 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v85 + 48LL))(v85))
                  : (v87 = *v86),
                    v87 == -1) )
              {
                *a3 = 0LL;
              }
              else
              {
                *((_WORD *)a3 + 5) = v87;
              }
              *((_BYTE *)a3 + 8) = 1;
            }
            v88 = v149;
            v89 = v149[0];
            v90 = v150;
            if ( v150 >= 8 )
              v88 = (void **)v149[0];
            if ( *(_WORD *)v88 == *((_WORD *)a3 + 5) )
              v84 = 1;
          }
          else
          {
            v90 = v150;
            v89 = v149[0];
          }
          if ( (v83 & 0x10) != 0 )
          {
            v83 &= ~0x10u;
            if ( v90 >= 8 )
              operator delete(v89);
            v150 = 7LL;
            v149[2] = 0LL;
            LOWORD(v149[0]) = 0;
          }
          if ( (v83 & 8) != 0 )
          {
            v83 &= ~8u;
            if ( v142 >= 8 )
              operator delete(v140[0]);
          }
          if ( v84 )
          {
            std::istreambuf_iterator<unsigned short>::_Inc(a3);
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v140);
            v18 = v83 | 0x8000;
            if ( v136 >= 8 )
              operator delete(v134[0]);
            v136 = 7LL;
            v135 = 0LL;
            LOWORD(v134[0]) = 0;
            std::wstring::_Assign_rv(v134, v140);
            if ( v142 >= 8 )
              operator delete(v140[0]);
            v121 = 1;
            break;
          }
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v140);
          v18 = v83 | 0x10000;
          v91 = v141 == 0;
          if ( v142 >= 8 )
            operator delete(v140[0]);
          if ( !v91 )
          {
            (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v140);
            v18 |= 0x20000u;
            v92 = v141 == 0;
            if ( v142 >= 8 )
              operator delete(v140[0]);
            v54 = v120;
            if ( v92 )
              v121 = 1;
            goto LABEL_101;
          }
          break;
        case 'v':
          v28 = 0;
          v127 = 0;
          v29 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v13 + 72LL))(v13);
          v126 = v29;
          v30 = v122;
          (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v122 + 40LL))(v122, v145);
          v18 |= 0x200u;
          v129 = v18;
          if ( v145[2] )
          {
            v31 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v122 + 32LL))(v122);
            if ( v31 )
            {
              v32 = v145;
              if ( v146 >= 0x10 )
                v32 = (void **)v145[0];
              if ( *(_BYTE *)v32 < 0x7Fu )
              {
                v33 = 15LL;
                v144 = 15LL;
                LOWORD(v143[0]) = 0;
                v143[2] = (void *)1;
                v34 = 0LL;
                v35 = std::istreambuf_iterator<wchar_t>::equal(a3, a4);
                v37 = (void **)v143[0];
                if ( v35 )
                  goto LABEL_79;
                v38 = v125;
LABEL_35:
                if ( !*((_BYTE *)a3 + 8) )
                {
                  v39 = *a3;
                  if ( !*a3
                    || ((v36 = **(__int16 ***)(v39 + 56)) == 0LL || **(int **)(v39 + 80) <= 0
                      ? (v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 48LL))(v39))
                      : (v40 = *v36),
                        v40 == -1) )
                  {
                    *a3 = 0LL;
                  }
                  else
                  {
                    *((_WORD *)a3 + 5) = v40;
                  }
                  *((_BYTE *)a3 + 8) = 1;
                }
                v41 = v131;
                for ( i = *v131; i && i != *((_WORD *)a3 + 5); i = *v41 )
                  ++v41;
                if ( (unsigned __int64)(v41 - v131) >= 0xA )
                {
                  v45 = v143;
                  if ( v33 >= 0x10 )
                    v45 = v37;
                  if ( !*((_BYTE *)v45 + v34) )
                    goto LABEL_73;
                  if ( !*((_BYTE *)a3 + 8) )
                  {
                    v46 = *a3;
                    if ( !*a3
                      || ((v36 = **(__int16 ***)(v46 + 56)) == 0LL || **(int **)(v46 + 80) <= 0
                        ? (v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 48LL))(v46))
                        : (v47 = *v36),
                          v47 == -1) )
                    {
                      *a3 = 0LL;
                    }
                    else
                    {
                      *((_WORD *)a3 + 5) = v47;
                    }
                    *((_BYTE *)a3 + 8) = 1;
                  }
                  if ( *((_WORD *)a3 + 5) != v31 )
                  {
LABEL_73:
                    v18 = v129;
                    if ( v34 )
                    {
                      v48 = v143;
                      if ( v33 >= 0x10 )
                        v48 = v37;
                      if ( *((char *)v48 + v34) <= 0 )
                        v120 = 1;
                      else
                        ++v34;
                    }
LABEL_79:
                    v49 = v145;
                    v50 = v145[0];
                    v51 = v146;
                    if ( v146 >= 0x10 )
                      v49 = (void **)v145[0];
                    if ( !v120 )
                    {
                      while ( v34 )
                      {
                        LOBYTE(v36) = *(_BYTE *)v49;
                        if ( *(_BYTE *)v49 == 127 )
                          break;
                        if ( --v34 )
                        {
                          v52 = v143;
                          if ( v33 >= 0x10 )
                            v52 = v37;
                          if ( (_BYTE)v36 != *((_BYTE *)v52 + v34) )
                            goto LABEL_94;
                        }
                        if ( !v34 )
                        {
                          v53 = v143;
                          if ( v33 >= 0x10 )
                            v53 = v37;
                          if ( (char)v36 < *(char *)v53 )
                          {
LABEL_94:
                            v120 = 1;
                            goto LABEL_95;
                          }
                        }
                        if ( *((char *)v49 + 1) > 0 )
                          v49 = (void **)((char *)v49 + 1);
                      }
                      if ( v33 >= 0x10 )
                        operator delete(v37);
LABEL_125:
                      v29 = v126;
                      v28 = v127;
                      v30 = v122;
                      goto LABEL_126;
                    }
LABEL_95:
                    if ( v33 >= 0x10 )
                    {
                      operator delete(v37);
                      v51 = v146;
                      v50 = v145[0];
                    }
                    if ( v51 >= 0x10 )
                    {
                      operator delete(v50);
                      v9 = v125;
                      goto LABEL_99;
                    }
                    v9 = v125;
LABEL_305:
                    v13 = v122;
                    v7 = a4;
                    break;
                  }
                  std::string::append(v143, 1LL);
                  ++v34;
LABEL_71:
                  v37 = (void **)v143[0];
                  v33 = v144;
                }
                else
                {
                  std::string::append(v38, 1LL);
                  v43 = v143;
                  if ( v33 >= 0x10 )
                    v43 = v37;
                  if ( *((_BYTE *)v43 + v34) != 127 )
                  {
                    v44 = v143;
                    if ( v33 >= 0x10 )
                      v44 = v37;
                    ++*((_BYTE *)v44 + v34);
                    goto LABEL_71;
                  }
                }
                std::istreambuf_iterator<unsigned short>::_Inc(a3);
                if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
                  goto LABEL_73;
                goto LABEL_35;
              }
            }
            v9 = v125;
          }
          v56 = std::istreambuf_iterator<wchar_t>::equal(a3, a4);
          v50 = 0LL;
          if ( !v56 )
          {
            v57 = v131;
            do
            {
              if ( !*((_BYTE *)a3 + 8) )
              {
                v58 = *a3;
                if ( !*a3
                  || ((v36 = **(__int16 ***)(v58 + 56)) == 0LL || **(int **)(v58 + 80) <= 0
                    ? (v59 = (*(__int64 (__fastcall **)(__int64, __int16 *, unsigned __int64, _QWORD))(*(_QWORD *)v58 + 48LL))(
                               v58,
                               v36,
                               v51,
                               0LL),
                       v50 = 0LL)
                    : (void *)(v59 = *v36),
                      v59 == -1) )
                {
                  *a3 = 0LL;
                }
                else
                {
                  *((_WORD *)a3 + 5) = v59;
                }
                *((_BYTE *)a3 + 8) = 1;
              }
              v60 = v57;
              for ( j = *v57; j && j != *((_WORD *)a3 + 5); j = *v60 )
                ++v60;
              v51 = v60 - v57;
              if ( v51 >= 0xA )
                break;
              std::string::append(v9, 1LL);
              std::istreambuf_iterator<unsigned short>::_Inc(a3);
              v62 = std::istreambuf_iterator<wchar_t>::equal(a3, a4);
              v50 = 0LL;
            }
            while ( !v62 );
            v18 = v129;
            goto LABEL_125;
          }
LABEL_126:
          v63 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, __int16 *, unsigned __int64, void *))(*(_QWORD *)v30 + 24LL))(
                  v30,
                  v36,
                  v51,
                  v50);
          if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) && v63 )
          {
            if ( !*((_BYTE *)a3 + 8) )
            {
              v64 = *a3;
              if ( !*a3
                || ((v65 = **(__int16 ***)(v64 + 56)) == 0LL || **(int **)(v64 + 80) <= 0
                  ? (v66 = (*(__int64 (__fastcall **)(__int64, __int16 *, _QWORD))(*(_QWORD *)v64 + 48LL))(
                             v64,
                             v65,
                             0LL))
                  : (v66 = *v65),
                    v66 == -1) )
              {
                *a3 = 0LL;
              }
              else
              {
                *((_WORD *)a3 + 5) = v66;
              }
              *((_BYTE *)a3 + 8) = 1;
            }
            if ( *((_WORD *)a3 + 5) == v63 )
            {
              std::istreambuf_iterator<unsigned short>::_Inc(a3);
              for ( k = std::istreambuf_iterator<wchar_t>::equal(a3, a4);
                    !k;
                    k = std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
              {
                if ( v28 >= v29 )
                  goto LABEL_160;
                if ( !*((_BYTE *)a3 + 8) )
                {
                  v68 = *a3;
                  if ( !*a3
                    || ((v69 = **(__int16 ***)(v68 + 56)) == 0LL || **(int **)(v68 + 80) <= 0
                      ? (v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 48LL))(v68))
                      : (v70 = *v69),
                        v70 == -1) )
                  {
                    *a3 = 0LL;
                  }
                  else
                  {
                    *((_WORD *)a3 + 5) = v70;
                  }
                  *((_BYTE *)a3 + 8) = 1;
                }
                v71 = v131;
                for ( m = *v131; m && m != *((_WORD *)a3 + 5); m = *v71 )
                  ++v71;
                if ( (unsigned __int64)(v71 - v131) >= 0xA )
                  goto LABEL_159;
                std::string::append(v125, 1LL);
                ++v28;
                std::istreambuf_iterator<unsigned short>::_Inc(a3);
              }
              if ( v28 >= v29 )
                goto LABEL_160;
LABEL_159:
              v120 = 1;
            }
          }
LABEL_160:
          v9 = v125;
          if ( v125[2] )
          {
            if ( v28 < v29 )
            {
              v73 = (unsigned int)(v29 - v28);
              do
              {
                std::string::append(v9, 1LL);
                --v73;
              }
              while ( v73 );
            }
          }
          else
          {
            v120 = 1;
          }
          if ( v146 < 0x10 )
            goto LABEL_305;
          operator delete(v145[0]);
LABEL_99:
          v13 = v122;
          v7 = a4;
          break;
        case 'x':
LABEL_20:
          if ( v128 == 3 )
            break;
          v23 = 0;
          if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
          {
            v24 = v124;
            do
            {
              if ( !*((_BYTE *)a3 + 8) )
              {
                v25 = *a3;
                if ( !*a3
                  || ((v26 = **(__int16 ***)(v25 + 56)) == 0LL || **(int **)(v25 + 80) <= 0
                    ? (v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 48LL))(v25))
                    : (v27 = *v26),
                      v27 == -1) )
                {
                  *a3 = 0LL;
                }
                else
                {
                  *((_WORD *)a3 + 5) = v27;
                }
                *((_BYTE *)a3 + 8) = 1;
              }
              if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v24 + 32LL))(
                      v24,
                      72LL,
                      *((unsigned __int16 *)a3 + 5)) )
                break;
              v23 = 1;
              std::istreambuf_iterator<unsigned short>::_Inc(a3);
            }
            while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v7) );
            v9 = v125;
            v13 = v122;
          }
          if ( v130[v128] != 32 )
            break;
          v54 = v120;
          if ( !v23 )
            v54 = 1;
          v120 = v54;
          goto LABEL_101;
        default:
          break;
      }
      v54 = v120;
    }
LABEL_101:
    ++v128;
    v55 = v54 == 0;
    v21 = v128;
    if ( !v55 )
      goto LABEL_329;
  }
  v111 = v135;
  if ( v135 <= 1 )
    goto LABEL_333;
  v112 = v134;
  if ( v136 >= 8 )
    v112 = (void **)v134[0];
  while ( 1 )
  {
    v112 = (void **)((char *)v112 + 2);
    v113 = v134;
    if ( v136 >= 8 )
      v113 = (void **)v134[0];
    if ( v112 == (void **)((char *)v113 + 2 * v111) )
      break;
    if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v7) )
      goto LABEL_325;
    if ( !*((_BYTE *)a3 + 8) )
    {
      v114 = *a3;
      if ( !*a3
        || ((v115 = **(__int16 ***)(v114 + 56)) == 0LL || **(int **)(v114 + 80) <= 0
          ? (v116 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v114 + 48LL))(v114))
          : (v116 = *v115),
            v116 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_WORD *)a3 + 5) = v116;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_WORD *)a3 + 5) != *(_WORD *)v112 )
    {
LABEL_325:
      v111 = v135;
      break;
    }
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    v111 = v135;
  }
  v117 = v134;
  if ( v136 >= 8 )
    v117 = (void **)v134[0];
  if ( v112 == (void **)((char *)v117 + 2 * v111) )
  {
LABEL_333:
    if ( v121 )
      std::string::insert(v9, 0LL, 1uLL, 45);
  }
  else
  {
LABEL_329:
    if ( v9[3] < 0x10uLL )
      v118 = v9;
    else
      v118 = (_BYTE *)*v9;
    v9[2] = 0LL;
    *v118 = 0;
  }
  if ( v136 >= 8 )
    operator delete(v134[0]);
  return v9;
}
