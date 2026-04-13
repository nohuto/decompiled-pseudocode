/*
 * XREFs of ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800076D0
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAM@Z @ 0x18000A650 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000A650.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAN@Z @ 0x18000A750 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000A750.c)
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEAO@Z @ 0x18000A840 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000A840.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800066BC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x180006AA0 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180008174 (-_Getffldx@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$i.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800093C4 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000BAE4 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002263D (--3@YAXPEAX@Z_0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005B994 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::num_get<char,std::istreambuf_iterator<char>>::_Getffld(
        int a1,
        char *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rbx
  void (__fastcall ***v11)(_QWORD, __int64); // r8
  struct std::_Facet_base *v12; // r15
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char *v14; // r14
  __int64 v15; // rbx
  struct std::_Facet_base *v16; // rsi
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  __int64 v18; // rcx
  unsigned __int8 *v19; // rdx
  int v20; // eax
  char v21; // al
  char v22; // r12
  int v23; // esi
  __int64 v24; // rbx
  void **v25; // r13
  unsigned __int64 v26; // r15
  char v27; // al
  void **v28; // rsi
  int v29; // r13d
  __int64 v30; // rcx
  unsigned __int8 *v31; // rdx
  int v32; // eax
  char *v33; // rax
  char j; // cl
  unsigned __int64 v35; // rax
  void **v36; // rax
  void **v37; // rax
  void **v38; // rax
  __int64 v39; // rcx
  unsigned __int8 *v40; // rdx
  int v41; // eax
  void **v42; // rax
  char v43; // cl
  void **v44; // rax
  __int64 v45; // r13
  char v46; // bl
  __int64 v47; // rdx
  unsigned __int8 *v48; // r8
  int v49; // eax
  void **v50; // rax
  __int64 v51; // rcx
  unsigned __int8 *v52; // rdx
  int v53; // eax
  char *v54; // rax
  char i; // cl
  unsigned __int64 v56; // rax
  int v57; // esi
  __int64 v58; // rcx
  unsigned __int8 *v59; // rdx
  int v60; // eax
  unsigned int v61; // r15d
  __int64 v62; // rcx
  unsigned __int8 *v63; // rdx
  int v64; // eax
  char *v65; // rax
  char k; // cl
  unsigned __int64 v67; // rax
  __int64 v68; // rcx
  unsigned __int8 *v69; // rdx
  int v70; // eax
  char v71; // al
  int v72; // ebx
  __int64 v73; // rcx
  unsigned __int8 *v74; // rdx
  int v75; // eax
  char v76; // al
  __int64 v77; // rcx
  unsigned __int8 *v78; // rdx
  int v79; // eax
  __int64 v80; // rcx
  unsigned __int8 *v81; // rdx
  int v82; // eax
  char *v83; // rax
  char m; // cl
  unsigned __int64 v85; // rax
  char v86; // [rsp+38h] [rbp-79h]
  char v87; // [rsp+39h] [rbp-78h]
  int v88; // [rsp+3Ch] [rbp-75h]
  __int64 v89; // [rsp+40h] [rbp-71h] BYREF
  __int64 v90; // [rsp+48h] [rbp-69h]
  struct std::_Facet_base *v91; // [rsp+50h] [rbp-61h] BYREF
  void **v92; // [rsp+58h] [rbp-59h]
  char *v93; // [rsp+60h] [rbp-51h]
  __int64 v94; // [rsp+68h] [rbp-49h]
  void *v95[3]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v96; // [rsp+88h] [rbp-29h]
  void *v97[3]; // [rsp+90h] [rbp-21h] BYREF
  unsigned __int64 v98; // [rsp+A8h] [rbp-9h]
  _BYTE v99[10]; // [rsp+B0h] [rbp-1h] BYREF
  char v100; // [rsp+BAh] [rbp+9h]
  char v101; // [rsp+BBh] [rbp+Ah]
  char v102; // [rsp+BCh] [rbp+Bh]
  char v103; // [rsp+BDh] [rbp+Ch]

  v94 = -2LL;
  v90 = a4;
  v93 = a2;
  if ( (*(_DWORD *)(a5 + 24) & 0x3000) == 0x3000 )
    return std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx(a1, (_DWORD)a2, (_DWORD)a3, a4, a5, a6);
  v10 = **(_QWORD **)(a5 + 64);
  v91 = (struct std::_Facet_base *)v10;
  (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 12288LL, a6);
  v12 = std::use_facet<std::numpunct<char>>((__int64 *)&v91);
  v91 = v12;
  if ( v10 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v11 = v13;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v12 + 40LL))(
    v12,
    v97,
    v11);
  v14 = a2;
  v87 = 0;
  v15 = **(_QWORD **)(a5 + 64);
  v89 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::ctype<char>>(&v89);
  if ( v15 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _BYTE *))(*(_QWORD *)v16 + 56LL))(
    v16,
    "0123456789-+Ee",
    "",
    v99);
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, a4) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v18 = *a3;
      if ( !*a3
        || ((v19 = **(unsigned __int8 ***)(v18 + 56)) == 0LL || **(int **)(v18 + 80) <= 0
          ? (v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18))
          : (v20 = *v19),
            v20 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v20;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v21 = *((_BYTE *)a3 + 9);
    if ( v21 == v101 )
    {
      *a2 = 43;
    }
    else
    {
      if ( v21 != v100 )
        goto LABEL_25;
      *a2 = 45;
    }
    v14 = a2 + 1;
    std::istreambuf_iterator<char>::_Inc(a3);
  }
LABEL_25:
  v22 = 0;
  v86 = 0;
  v23 = 0;
  LODWORD(v89) = 0;
  v24 = 0LL;
  v88 = 0;
  v25 = v97;
  if ( v98 >= 0x10 )
    v25 = (void **)v97[0];
  v92 = v25;
  if ( (unsigned __int8)(*(_BYTE *)v25 - 1) > 0x7Du )
  {
    v45 = v90;
    if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v90) )
      goto LABEL_94;
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v51 = *a3;
        if ( !*a3
          || ((v52 = **(unsigned __int8 ***)(v51 + 56)) == 0LL || **(int **)(v51 + 80) <= 0
            ? (v53 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v51 + 48LL))(v51))
            : (v53 = *v52),
              v53 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v53;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v54 = v99;
      for ( i = v99[0]; i && i != *((_BYTE *)a3 + 9); i = *v54 )
        ++v54;
      v56 = v54 - v99;
      if ( v56 >= 0xA )
        break;
      if ( v23 < 36 )
      {
        if ( v56 || v23 )
        {
          *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v56];
          ++v23;
        }
      }
      else
      {
        LODWORD(v24) = v24 + 1;
      }
      v22 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v45) );
    v88 = v24;
    LODWORD(v89) = v23;
  }
  else
  {
    if ( v97[2] )
      v22 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 32LL))(v12);
    v26 = 15LL;
    v96 = 15LL;
    LOWORD(v95[0]) = 0;
    v95[2] = (void *)1;
    v27 = std::istreambuf_iterator<char>::equal(a3, v90);
    v28 = (void **)v95[0];
    if ( !v27 )
    {
      v29 = 0;
      while ( 1 )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v30 = *a3;
          if ( !*a3
            || ((v31 = **(unsigned __int8 ***)(v30 + 56)) == 0LL || **(int **)(v30 + 80) <= 0
              ? (v32 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, _QWORD))(*(_QWORD *)v30 + 48LL))(
                         v30,
                         v31,
                         0LL))
              : (v32 = *v31),
                v32 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v32;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        v33 = v99;
        for ( j = v99[0]; j && j != *((_BYTE *)a3 + 9); j = *v33 )
          ++v33;
        v35 = v33 - v99;
        if ( v35 >= 0xA )
        {
          v38 = v95;
          if ( v26 >= 0x10 )
            v38 = v28;
          if ( !*((_BYTE *)v38 + v24) || !v22 )
            goto LABEL_76;
          if ( !*((_BYTE *)a3 + 8) )
          {
            v39 = *a3;
            if ( !*a3
              || ((v40 = **(unsigned __int8 ***)(v39 + 56)) == 0LL || **(int **)(v39 + 80) <= 0
                ? (v41 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, _QWORD))(*(_QWORD *)v39 + 48LL))(
                           v39,
                           v40,
                           0LL))
                : (v41 = *v40),
                  v41 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v41;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v22 )
          {
LABEL_76:
            LODWORD(v89) = v29;
            v25 = v92;
            if ( v24 )
            {
              v42 = v95;
              if ( v26 >= 0x10 )
                v42 = v28;
              if ( *((char *)v42 + v24) > 0 )
              {
                ++v24;
                break;
              }
LABEL_87:
              v87 = 1;
            }
            goto LABEL_88;
          }
          std::string::append(v95, 1LL);
          ++v24;
        }
        else
        {
          v86 = 1;
          if ( v29 < 36 )
          {
            if ( v35 || v29 )
            {
              *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v35];
              ++v29;
            }
          }
          else
          {
            ++v88;
          }
          v36 = v95;
          if ( v26 >= 0x10 )
            v36 = v28;
          if ( *((_BYTE *)v36 + v24) == 127 )
            goto LABEL_75;
          v37 = v95;
          if ( v26 >= 0x10 )
            v37 = v28;
          ++*((_BYTE *)v37 + v24);
        }
        v28 = (void **)v95[0];
        v26 = v96;
LABEL_75:
        std::istreambuf_iterator<char>::_Inc(a3);
        if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v90) )
          goto LABEL_76;
      }
    }
    while ( v24 )
    {
      v43 = *(_BYTE *)v25;
      if ( *(_BYTE *)v25 == 127 )
        break;
      if ( --v24 )
      {
        v44 = v95;
        if ( v26 >= 0x10 )
          v44 = v28;
        if ( v43 != *((_BYTE *)v44 + v24) )
          goto LABEL_87;
      }
      else
      {
        v50 = v95;
        if ( v26 >= 0x10 )
          v50 = v28;
        if ( v43 < *(char *)v50 )
          goto LABEL_87;
      }
      if ( *((char *)v25 + 1) > 0 )
        v25 = (void **)((char *)v25 + 1);
    }
LABEL_88:
    if ( v26 >= 0x10 )
      operator delete(v28);
    v45 = v90;
    v22 = v86;
    v23 = v89;
  }
  v12 = v91;
  if ( v22 && !v23 )
    *v14++ = 48;
LABEL_94:
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v45) )
  {
    v46 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v12 + 24LL))(v12);
    if ( !*((_BYTE *)a3 + 8) )
    {
      v47 = *a3;
      if ( !*a3
        || ((v48 = **(unsigned __int8 ***)(v47 + 56)) == 0LL || **(int **)(v47 + 80) <= 0
          ? (v49 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v47 + 48LL))(*a3))
          : (v49 = *v48),
            v49 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v49;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v46 )
    {
      *v14++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
  }
  if ( v23 )
  {
    v61 = v88;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v45) )
    {
      v57 = v88;
      do
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v58 = *a3;
          if ( !*a3
            || ((v59 = **(unsigned __int8 ***)(v58 + 56)) == 0LL || **(int **)(v58 + 80) <= 0
              ? (v60 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 48LL))(v58))
              : (v60 = *v59),
                v60 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v60;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) != v99[0] )
          break;
        --v57;
        v22 = 1;
        std::istreambuf_iterator<char>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v45) );
      v88 = v57;
      v23 = v89;
    }
    v61 = v88;
    if ( v88 < 0 )
    {
      *v14++ = 48;
      v61 = ++v88;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v45) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v62 = *a3;
        if ( !*a3
          || ((v63 = **(unsigned __int8 ***)(v62 + 56)) == 0LL || **(int **)(v62 + 80) <= 0
            ? (v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 48LL))(v62))
            : (v64 = *v63),
              v64 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v64;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v65 = v99;
      for ( k = v99[0]; k && k != *((_BYTE *)a3 + 9); k = *v65 )
        ++v65;
      v67 = v65 - v99;
      if ( v67 >= 0xA )
        break;
      if ( v23 < 36 )
      {
        *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v67];
        ++v23;
      }
      v22 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v45) );
    v61 = v88;
  }
  if ( v22 && !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v45) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v68 = *a3;
      if ( !*a3
        || ((v69 = **(unsigned __int8 ***)(v68 + 56)) == 0LL || **(int **)(v68 + 80) <= 0
          ? (v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 48LL))(v68))
          : (v70 = *v69),
            v70 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v70;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v71 = *((_BYTE *)a3 + 9);
    if ( v71 == v103 || v71 == v102 )
    {
      *v14++ = 101;
      std::istreambuf_iterator<char>::_Inc(a3);
      v22 = 0;
      v72 = 0;
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v45) )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v73 = *a3;
          if ( !*a3
            || ((v74 = **(unsigned __int8 ***)(v73 + 56)) == 0LL || **(int **)(v73 + 80) <= 0
              ? (v75 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v73 + 48LL))(v73))
              : (v75 = *v74),
                v75 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v75;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        v76 = *((_BYTE *)a3 + 9);
        if ( v76 == v101 )
        {
          *v14 = 43;
LABEL_203:
          ++v14;
          std::istreambuf_iterator<char>::_Inc(a3);
          goto LABEL_204;
        }
        if ( v76 == v100 )
        {
          *v14 = 45;
          goto LABEL_203;
        }
      }
LABEL_204:
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v45) )
      {
        while ( 1 )
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v77 = *a3;
            if ( !*a3
              || ((v78 = **(unsigned __int8 ***)(v77 + 56)) == 0LL || **(int **)(v77 + 80) <= 0
                ? (v79 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77 + 48LL))(v77))
                : (v79 = *v78),
                  v79 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v79;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v99[0] )
            break;
          v22 = 1;
          std::istreambuf_iterator<char>::_Inc(a3);
          if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v45) )
            goto LABEL_219;
        }
        if ( !v22 )
          goto LABEL_220;
LABEL_219:
        *v14++ = 48;
      }
LABEL_220:
      if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v45) )
      {
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v80 = *a3;
            if ( !*a3
              || ((v81 = **(unsigned __int8 ***)(v80 + 56)) == 0LL || **(int **)(v80 + 80) <= 0
                ? (v82 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v80 + 48LL))(v80))
                : (v82 = *v81),
                  v82 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v82;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          v83 = v99;
          for ( m = v99[0]; m && m != *((_BYTE *)a3 + 9); m = *v83 )
            ++v83;
          v85 = v83 - v99;
          if ( v85 >= 0xA )
            break;
          if ( v72 < 8 )
          {
            *v14++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffld'::`2'::_Src[v85];
            ++v72;
          }
          v22 = 1;
          std::istreambuf_iterator<char>::_Inc(a3);
        }
        while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v45) );
        v61 = v88;
      }
    }
  }
  if ( v87 || !v22 )
    v14 = v93;
  *v14 = 0;
  if ( v98 >= 0x10 )
    operator delete(v97[0]);
  return v61;
}
