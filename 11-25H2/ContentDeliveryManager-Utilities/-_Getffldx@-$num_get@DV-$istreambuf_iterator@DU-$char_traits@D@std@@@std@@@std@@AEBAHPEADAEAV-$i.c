/*
 * XREFs of ?_Getffldx@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x180008174
 * Callers:
 *     ?_Getffld@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x1800076D0 (-_Getffld@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800066BC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x180006AA0 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800093C4 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000BAE4 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002263D (--3@YAXPEAX@Z_0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005B994 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  __int64 v9; // rbx
  void (__fastcall ***v10)(_QWORD, __int64); // r8
  struct std::_Facet_base *v11; // r15
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  __int64 v13; // rbx
  struct std::_Facet_base *v14; // rsi
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  _WORD *v16; // rbx
  __int64 v17; // rcx
  unsigned __int8 *v18; // rdx
  int v19; // eax
  char v20; // al
  char *v21; // rbx
  int v22; // r14d
  __int64 v23; // rsi
  __int64 v24; // rcx
  unsigned __int8 *v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  unsigned __int8 *v28; // rdx
  int v29; // eax
  char v30; // al
  void **v31; // r13
  char v32; // r12
  unsigned __int64 v33; // r15
  char v34; // al
  void **v35; // r14
  int v36; // r13d
  __int64 v37; // rcx
  unsigned __int8 *v38; // rdx
  int v39; // eax
  char *v40; // rax
  char j; // cl
  unsigned __int64 v42; // rax
  void **v43; // rax
  void **v44; // rax
  void **v45; // rax
  __int64 v46; // rcx
  unsigned __int8 *v47; // rdx
  int v48; // eax
  void **v49; // rax
  char v50; // cl
  void **v51; // rax
  __int64 v52; // r13
  char v53; // r12
  char v54; // si
  __int64 v55; // rdx
  unsigned __int8 *v56; // r8
  int v57; // eax
  void **v58; // rax
  __int64 v59; // rcx
  unsigned __int8 *v60; // rdx
  int v61; // eax
  char *v62; // rax
  char i; // cl
  unsigned __int64 v64; // rax
  int v65; // r14d
  __int64 v66; // rcx
  unsigned __int8 *v67; // rdx
  int v68; // eax
  int v69; // r15d
  __int64 v70; // rcx
  unsigned __int8 *v71; // rdx
  int v72; // eax
  char *v73; // rax
  char k; // cl
  unsigned __int64 v75; // rax
  __int64 v76; // rcx
  unsigned __int8 *v77; // rdx
  int v78; // eax
  char v79; // al
  int v80; // esi
  __int64 v81; // rcx
  unsigned __int8 *v82; // rdx
  int v83; // eax
  char v84; // al
  __int64 v85; // rcx
  unsigned __int8 *v86; // rdx
  int v87; // eax
  __int64 v88; // rcx
  unsigned __int8 *v89; // rdx
  int v90; // eax
  char *v91; // rax
  char m; // cl
  unsigned __int64 v93; // rax
  char v95; // [rsp+38h] [rbp-99h]
  char v96; // [rsp+39h] [rbp-98h]
  int v97; // [rsp+3Ch] [rbp-95h]
  __int64 v98; // [rsp+40h] [rbp-91h] BYREF
  __int64 v99; // [rsp+48h] [rbp-89h]
  struct std::_Facet_base *v100; // [rsp+50h] [rbp-81h] BYREF
  void **v101; // [rsp+58h] [rbp-79h]
  char *v102; // [rsp+60h] [rbp-71h]
  int *v103; // [rsp+68h] [rbp-69h]
  __int64 v104; // [rsp+70h] [rbp-61h]
  void *v105[3]; // [rsp+78h] [rbp-59h] BYREF
  __int64 v106; // [rsp+90h] [rbp-41h]
  void *v107[3]; // [rsp+98h] [rbp-39h] BYREF
  unsigned __int64 v108; // [rsp+B0h] [rbp-21h]
  _BYTE v109[22]; // [rsp+B8h] [rbp-19h] BYREF
  char v110; // [rsp+CEh] [rbp-3h]
  char v111; // [rsp+CFh] [rbp-2h]
  char v112; // [rsp+D0h] [rbp-1h]
  char v113; // [rsp+D1h] [rbp+0h]
  char v114; // [rsp+D2h] [rbp+1h]
  char v115; // [rsp+D3h] [rbp+2h]

  v104 = -2LL;
  v99 = a4;
  v102 = a2;
  v103 = a6;
  v9 = **(_QWORD **)(a5 + 64);
  v100 = (struct std::_Facet_base *)v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v11 = std::use_facet<std::numpunct<char>>((__int64 *)&v100);
  v100 = v11;
  if ( v9 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v10 = v12;
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v11 + 40LL))(
    v11,
    v107,
    v10);
  v13 = **(_QWORD **)(a5 + 64);
  v98 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = std::use_facet<std::ctype<char>>(&v98);
  if ( v13 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, const char *, char *, _BYTE *))(*(_QWORD *)v14 + 56LL))(
    v14,
    "0123456789ABCDEFabcdef-+XxPp",
    "",
    v109);
  v16 = a2;
  v96 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, a4) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v17 = *a3;
      if ( !*a3
        || ((v18 = **(unsigned __int8 ***)(v17 + 56)) == 0LL || **(int **)(v17 + 80) <= 0
          ? (v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 48LL))(v17))
          : (v19 = *v18),
            v19 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v19;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v20 = *((_BYTE *)a3 + 9);
    if ( v20 == v111 )
    {
      *a2 = 43;
    }
    else
    {
      if ( v20 != v110 )
        goto LABEL_23;
      *a2 = 45;
    }
    v16 = a2 + 1;
    std::istreambuf_iterator<char>::_Inc(a3);
  }
LABEL_23:
  *v16 = 30768;
  v21 = (char *)(v16 + 1);
  v95 = 0;
  v22 = 0;
  LODWORD(v98) = 0;
  v23 = 0LL;
  v97 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, a4) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v24 = *a3;
      if ( !*a3
        || ((v25 = **(unsigned __int8 ***)(v24 + 56)) == 0LL || **(int **)(v24 + 80) <= 0
          ? (v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24))
          : (v26 = *v25),
            v26 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v26;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v109[0] )
    {
      std::istreambuf_iterator<char>::_Inc(a3);
      if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, a4) )
        goto LABEL_49;
      if ( !*((_BYTE *)a3 + 8) )
      {
        v27 = *a3;
        if ( !*a3
          || ((v28 = **(unsigned __int8 ***)(v27 + 56)) == 0LL || **(int **)(v27 + 80) <= 0
            ? (v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 48LL))(v27))
            : (v29 = *v28),
              v29 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v29;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v30 = *((_BYTE *)a3 + 9);
      if ( v30 == v113 || v30 == v112 )
        std::istreambuf_iterator<char>::_Inc(a3);
      else
LABEL_49:
        v95 = 1;
    }
  }
  v31 = v107;
  if ( v108 >= 0x10 )
    v31 = (void **)v107[0];
  v101 = v31;
  if ( (unsigned __int8)(*(_BYTE *)v31 - 1) > 0x7Du )
  {
    v52 = v99;
    if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v99) )
      goto LABEL_118;
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v59 = *a3;
        if ( !*a3
          || ((v60 = **(unsigned __int8 ***)(v59 + 56)) == 0LL || **(int **)(v59 + 80) <= 0
            ? (v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v59 + 48LL))(v59))
            : (v61 = *v60),
              v61 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v61;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v62 = v109;
      for ( i = v109[0]; i && i != *((_BYTE *)a3 + 9); i = *v62 )
        ++v62;
      v64 = v62 - v109;
      if ( v64 >= 0x16 )
        break;
      if ( v22 < 36 )
      {
        if ( v64 || v22 )
        {
          *v21++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v64];
          ++v22;
        }
      }
      else
      {
        LODWORD(v23) = v23 + 1;
      }
      v95 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v52) );
    v97 = v23;
    LODWORD(v98) = v22;
  }
  else
  {
    if ( v107[2] )
      v32 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 32LL))(v11);
    else
      v32 = 0;
    v33 = 15LL;
    v106 = 15LL;
    LOWORD(v105[0]) = 0;
    v105[2] = (void *)1;
    v34 = std::istreambuf_iterator<char>::equal(a3, v99);
    v35 = (void **)v105[0];
    if ( !v34 )
    {
      v36 = 0;
      while ( 1 )
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v37 = *a3;
          if ( !*a3
            || ((v38 = **(unsigned __int8 ***)(v37 + 56)) == 0LL || **(int **)(v37 + 80) <= 0
              ? (v39 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, _QWORD))(*(_QWORD *)v37 + 48LL))(
                         v37,
                         v38,
                         0LL))
              : (v39 = *v38),
                v39 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v39;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        v40 = v109;
        for ( j = v109[0]; j && j != *((_BYTE *)a3 + 9); j = *v40 )
          ++v40;
        v42 = v40 - v109;
        if ( v42 >= 0x16 )
        {
          v45 = v105;
          if ( v33 >= 0x10 )
            v45 = v35;
          if ( !*((_BYTE *)v45 + v23) || !v32 )
            goto LABEL_102;
          if ( !*((_BYTE *)a3 + 8) )
          {
            v46 = *a3;
            if ( !*a3
              || ((v47 = **(unsigned __int8 ***)(v46 + 56)) == 0LL || **(int **)(v46 + 80) <= 0
                ? (v48 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, _QWORD))(*(_QWORD *)v46 + 48LL))(
                           v46,
                           v47,
                           0LL))
                : (v48 = *v47),
                  v48 == -1) )
            {
              *a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v48;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( *((_BYTE *)a3 + 9) != v32 )
          {
LABEL_102:
            LODWORD(v98) = v36;
            v31 = v101;
            if ( v23 )
            {
              v49 = v105;
              if ( v33 >= 0x10 )
                v49 = v35;
              if ( *((char *)v49 + v23) > 0 )
              {
                ++v23;
                break;
              }
LABEL_113:
              v96 = 1;
            }
            goto LABEL_114;
          }
          std::string::append(v105, 1LL);
          ++v23;
        }
        else
        {
          v95 = 1;
          if ( v36 < 36 )
          {
            if ( v42 || v36 )
            {
              *v21++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v42];
              ++v36;
            }
          }
          else
          {
            ++v97;
          }
          v43 = v105;
          if ( v33 >= 0x10 )
            v43 = v35;
          if ( *((_BYTE *)v43 + v23) == 127 )
            goto LABEL_101;
          v44 = v105;
          if ( v33 >= 0x10 )
            v44 = v35;
          ++*((_BYTE *)v44 + v23);
        }
        v35 = (void **)v105[0];
        v33 = v106;
LABEL_101:
        std::istreambuf_iterator<char>::_Inc(a3);
        if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v99) )
          goto LABEL_102;
      }
    }
    while ( v23 )
    {
      v50 = *(_BYTE *)v31;
      if ( *(_BYTE *)v31 == 127 )
        break;
      if ( --v23 )
      {
        v51 = v105;
        if ( v33 >= 0x10 )
          v51 = v35;
        if ( v50 != *((_BYTE *)v51 + v23) )
          goto LABEL_113;
      }
      else
      {
        v58 = v105;
        if ( v33 >= 0x10 )
          v58 = v35;
        if ( v50 < *(char *)v58 )
          goto LABEL_113;
      }
      if ( *((char *)v31 + 1) > 0 )
        v31 = (void **)((char *)v31 + 1);
    }
LABEL_114:
    if ( v33 >= 0x10 )
      operator delete(v35);
    v52 = v99;
    v22 = v98;
  }
  v11 = v100;
LABEL_118:
  v53 = v95;
  if ( v95 && !v22 )
    *v21++ = 48;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v52) )
  {
    v54 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v11 + 24LL))(v11);
    if ( !*((_BYTE *)a3 + 8) )
    {
      v55 = *a3;
      if ( !*a3
        || ((v56 = **(unsigned __int8 ***)(v55 + 56)) == 0LL || **(int **)(v55 + 80) <= 0
          ? (v57 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v55 + 48LL))(*a3))
          : (v57 = *v56),
            v57 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v57;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( *((_BYTE *)a3 + 9) == v54 )
    {
      *v21++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
  }
  if ( v22 )
  {
    v69 = v97;
  }
  else
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v52) )
    {
      v65 = v97;
      do
      {
        if ( !*((_BYTE *)a3 + 8) )
        {
          v66 = *a3;
          if ( !*a3
            || ((v67 = **(unsigned __int8 ***)(v66 + 56)) == 0LL || **(int **)(v66 + 80) <= 0
              ? (v68 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 48LL))(v66))
              : (v68 = *v67),
                v68 == -1) )
          {
            *a3 = 0LL;
          }
          else
          {
            *((_BYTE *)a3 + 9) = v68;
          }
          *((_BYTE *)a3 + 8) = 1;
        }
        if ( *((_BYTE *)a3 + 9) != v109[0] )
          break;
        --v65;
        v53 = 1;
        std::istreambuf_iterator<char>::_Inc(a3);
      }
      while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v52) );
      v97 = v65;
      v22 = v98;
    }
    v69 = v97;
    if ( v97 < 0 )
    {
      *v21++ = 48;
      v69 = ++v97;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v52) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v70 = *a3;
        if ( !*a3
          || ((v71 = **(unsigned __int8 ***)(v70 + 56)) == 0LL || **(int **)(v70 + 80) <= 0
            ? (v72 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v70 + 48LL))(v70))
            : (v72 = *v71),
              v72 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v72;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v73 = v109;
      for ( k = v109[0]; k && k != *((_BYTE *)a3 + 9); k = *v73 )
        ++v73;
      v75 = v73 - v109;
      if ( v75 >= 0x16 )
        break;
      if ( v22 < 36 )
      {
        *v21++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v75];
        ++v22;
      }
      v53 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v52) );
    v69 = v97;
  }
  if ( !v53 || (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v52) )
    goto LABEL_267;
  if ( !*((_BYTE *)a3 + 8) )
  {
    v76 = *a3;
    if ( !*a3
      || ((v77 = **(unsigned __int8 ***)(v76 + 56)) == 0LL || **(int **)(v76 + 80) <= 0
        ? (v78 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v76 + 48LL))(v76))
        : (v78 = *v77),
          v78 == -1) )
    {
      *a3 = 0LL;
    }
    else
    {
      *((_BYTE *)a3 + 9) = v78;
    }
    *((_BYTE *)a3 + 8) = 1;
  }
  v79 = *((_BYTE *)a3 + 9);
  if ( v79 != v115 && v79 != v114 )
    goto LABEL_267;
  *v21++ = 112;
  std::istreambuf_iterator<char>::_Inc(a3);
  v53 = 0;
  v80 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v52) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v81 = *a3;
      if ( !*a3
        || ((v82 = **(unsigned __int8 ***)(v81 + 56)) == 0LL || **(int **)(v81 + 80) <= 0
          ? (v83 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v81 + 48LL))(v81))
          : (v83 = *v82),
            v83 == -1) )
      {
        *a3 = 0LL;
      }
      else
      {
        *((_BYTE *)a3 + 9) = v83;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v84 = *((_BYTE *)a3 + 9);
    if ( v84 == v111 )
    {
      *v21 = 43;
LABEL_230:
      ++v21;
      std::istreambuf_iterator<char>::_Inc(a3);
      goto LABEL_231;
    }
    if ( v84 == v110 )
    {
      *v21 = 45;
      goto LABEL_230;
    }
  }
LABEL_231:
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v52) )
  {
    while ( 1 )
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v85 = *a3;
        if ( !*a3
          || ((v86 = **(unsigned __int8 ***)(v85 + 56)) == 0LL || **(int **)(v85 + 80) <= 0
            ? (v87 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v85 + 48LL))(v85))
            : (v87 = *v86),
              v87 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v87;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      if ( *((_BYTE *)a3 + 9) != v109[0] )
        break;
      v53 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
      if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v52) )
        goto LABEL_246;
    }
    if ( !v53 )
      goto LABEL_247;
LABEL_246:
    *v21++ = 48;
  }
LABEL_247:
  if ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v52) )
  {
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v88 = *a3;
        if ( !*a3
          || ((v89 = **(unsigned __int8 ***)(v88 + 56)) == 0LL || **(int **)(v88 + 80) <= 0
            ? (v90 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v88 + 48LL))(v88))
            : (v90 = *v89),
              v90 == -1) )
        {
          *a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v90;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      v91 = v109;
      for ( m = v109[0]; m && m != *((_BYTE *)a3 + 9); m = *v91 )
        ++v91;
      v93 = v91 - v109;
      if ( v93 >= 0x16 )
        break;
      if ( v80 < 8 )
      {
        *v21++ = `std::num_get<char,std::istreambuf_iterator<char>>::_Getffldx'::`2'::_Src[v93];
        ++v80;
      }
      v53 = 1;
      std::istreambuf_iterator<char>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<char>::equal(a3, v52) );
    v69 = v97;
  }
LABEL_267:
  if ( v96 || !v53 )
    v21 = v102;
  *v21 = 0;
  *v103 = v69;
  if ( v108 >= 0x10 )
    operator delete(v107[0]);
  return 0LL;
}
