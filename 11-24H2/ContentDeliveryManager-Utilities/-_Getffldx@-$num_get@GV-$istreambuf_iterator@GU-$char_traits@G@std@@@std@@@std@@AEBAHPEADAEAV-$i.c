/*
 * XREFs of ?_Getffldx@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x18005A64C
 * Callers:
 *     ?_Getffld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x18005A088 (-_Getffld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 * Callees:
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003DE1C (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ??$_Find_elem@G@std@@YA_KPEAGG@Z @ 0x180048CEC (--$_Find_elem@G@std@@YA_KPEAGG@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049558 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180049710 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@_KD@Z @ 0x18004ACE8 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@_KD@Z.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18004CA24 (--1locale@std@@QEAA@XZ.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18004CE20 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005B0D8 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005BE70 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005D464 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18005DE34 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?grouping@?$numpunct@G@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18005DE5C (-grouping@-$numpunct@G@std@@QEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@2@XZ.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx(
        __int64 a1,
        _BYTE *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int *a6)
{
  __int64 v6; // r13
  std::locale *v9; // rax
  std::locale *v10; // rax
  const struct std::locale::facet *v11; // rbx
  _WORD *v12; // rdi
  __int64 v13; // rbx
  _WORD *v14; // rax
  __int64 v15; // rcx
  _WORD *v16; // rax
  char *v17; // rdi
  char v18; // r15
  int v19; // r14d
  int v20; // r12d
  _WORD *v21; // rax
  _WORD *v22; // rax
  _WORD *v23; // rax
  void **v24; // rax
  unsigned __int64 v25; // r12
  void **v26; // r13
  __int16 *v27; // rax
  unsigned __int64 v28; // rax
  void **v29; // rax
  void **v30; // rax
  void **v31; // rax
  _WORD *v32; // rax
  void **v33; // rax
  void **v34; // rcx
  char v35; // dl
  void **v36; // rax
  void **v37; // rax
  __int16 *v38; // rax
  unsigned __int64 v39; // rax
  __int16 v40; // bx
  _WORD *v41; // rax
  __int16 *v42; // rax
  unsigned __int64 v43; // rax
  int v44; // r12d
  _WORD *v45; // rax
  _WORD *v46; // rax
  _WORD *v47; // rax
  __int64 v48; // rcx
  _WORD *v49; // rax
  _WORD *v50; // rax
  __int16 *v51; // rax
  unsigned __int64 v52; // rax
  char v54; // [rsp+30h] [rbp-A9h]
  int v55; // [rsp+34h] [rbp-A5h]
  int v56; // [rsp+38h] [rbp-A1h] BYREF
  __int64 v57; // [rsp+40h] [rbp-99h]
  const struct std::locale::facet *v58; // [rsp+48h] [rbp-91h]
  char v59[8]; // [rsp+50h] [rbp-89h] BYREF
  void **v60; // [rsp+58h] [rbp-81h]
  char *v61; // [rsp+60h] [rbp-79h]
  int *v62; // [rsp+68h] [rbp-71h]
  void *v63[3]; // [rsp+70h] [rbp-69h] BYREF
  unsigned __int64 v64; // [rsp+88h] [rbp-51h]
  void *v65[4]; // [rsp+90h] [rbp-49h] BYREF
  _WORD v66[22]; // [rsp+B0h] [rbp-29h] BYREF
  __int16 v67; // [rsp+DCh] [rbp+3h]
  __int16 v68; // [rsp+DEh] [rbp+5h]
  __int16 v69; // [rsp+E0h] [rbp+7h]
  __int16 v70; // [rsp+E2h] [rbp+9h]
  __int16 v71; // [rsp+E4h] [rbp+Bh]
  __int16 v72; // [rsp+E6h] [rbp+Dh]

  v6 = a4;
  v57 = a4;
  v61 = a2;
  v62 = a6;
  v9 = (std::locale *)std::ios_base::getloc(a5, v59);
  v58 = std::use_facet<std::numpunct<unsigned short>>(v9);
  std::locale::~locale((std::locale *)v59);
  std::numpunct<unsigned short>::grouping(v58, v65);
  v10 = (std::locale *)std::ios_base::getloc(a5, &v56);
  v11 = std::use_facet<std::ctype<unsigned short>>(v10);
  std::locale::~locale((std::locale *)&v56);
  (*(void (__fastcall **)(const struct std::locale::facet *, const char *, char *, _WORD *))(*(_QWORD *)v11 + 88LL))(
    v11,
    "0123456789ABCDEFabcdef-+XxPp",
    "",
    v66);
  v12 = a2;
  v13 = 0LL;
  v54 = 0;
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    goto LABEL_7;
  v14 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
  v15 = a3;
  if ( *v14 == v68 )
  {
    *a2 = 43;
  }
  else
  {
    v16 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    if ( *v16 != v67 )
      goto LABEL_7;
    *a2 = 45;
    v15 = a3;
  }
  v12 = a2 + 1;
  std::istreambuf_iterator<unsigned short>::_Inc(v15);
LABEL_7:
  *v12 = 30768;
  v17 = (char *)(v12 + 1);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v55 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v21 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    if ( *v21 == v66[0] )
    {
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
      if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6)
        && ((v22 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3), *v22 == v70)
         || (v23 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3), *v23 == v69)) )
      {
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
      }
      else
      {
        v18 = 1;
      }
    }
  }
  v24 = v65;
  if ( v65[3] >= (void *)0x10 )
    v24 = (void **)v65[0];
  v60 = v24;
  if ( (unsigned __int8)(*(_BYTE *)v24 - 1) > 0x7Du )
  {
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    {
      v38 = (__int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      v39 = std::_Find_elem<unsigned short>(v66, *v38);
      if ( v39 >= 0x16 )
        break;
      if ( v19 < 36 )
      {
        if ( v39 || v19 )
        {
          *v17++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v39];
          ++v19;
        }
      }
      else
      {
        ++v20;
      }
      v18 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    v55 = v20;
    goto LABEL_71;
  }
  if ( v65[2] )
    LOWORD(v56) = (*(__int64 (__fastcall **)(const struct std::locale::facet *))(*(_QWORD *)v58 + 32LL))(v58);
  else
    v56 = 0;
  std::string::string((__int64)v63, 1LL, 0LL);
  v25 = v64;
  v26 = (void **)v63[0];
  while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v57) )
  {
    v27 = (__int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    v28 = std::_Find_elem<unsigned short>(v66, *v27);
    if ( v28 >= 0x16 )
    {
      v31 = v63;
      if ( v25 >= 0x10 )
        v31 = v26;
      if ( !*((_BYTE *)v31 + v13) )
        break;
      if ( !(_WORD)v56 )
        break;
      v32 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v32 != (_WORD)v56 )
        break;
      std::string::append(v63, 1LL);
      ++v13;
      goto LABEL_40;
    }
    v18 = 1;
    if ( v19 < 36 )
    {
      if ( v28 || v19 )
      {
        *v17++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v28];
        ++v19;
      }
    }
    else
    {
      ++v55;
    }
    v29 = v63;
    if ( v25 >= 0x10 )
      v29 = v26;
    if ( *((_BYTE *)v29 + v13) != 127 )
    {
      v30 = v63;
      if ( v25 >= 0x10 )
        v30 = v26;
      ++*((_BYTE *)v30 + v13);
LABEL_40:
      v26 = (void **)v63[0];
      v25 = v64;
    }
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  if ( v13 )
  {
    v33 = v63;
    if ( v25 >= 0x10 )
      v33 = v26;
    if ( *((char *)v33 + v13) > 0 )
    {
      ++v13;
      goto LABEL_47;
    }
LABEL_60:
    v54 = 1;
  }
  else
  {
LABEL_47:
    v34 = v60;
    while ( v13 )
    {
      v35 = *(_BYTE *)v34;
      if ( *(_BYTE *)v34 == 127 )
        break;
      if ( --v13 )
      {
        v36 = v63;
        if ( v25 >= 0x10 )
          v36 = v26;
        if ( v35 != *((_BYTE *)v36 + v13) )
          goto LABEL_60;
      }
      if ( !v13 )
      {
        v37 = v63;
        if ( v25 >= 0x10 )
          v37 = v26;
        if ( v35 < *(char *)v37 )
          goto LABEL_60;
      }
      if ( *((char *)v34 + 1) > 0 )
        v34 = (void **)((char *)v34 + 1);
    }
  }
  std::string::_Tidy(v63, 1, 0LL);
  v20 = v55;
  v6 = v57;
  LODWORD(v13) = 0;
LABEL_71:
  if ( v18 && !v19 )
    *v17++ = 48;
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v40 = (*(__int64 (__fastcall **)(const struct std::locale::facet *))(*(_QWORD *)v58 + 24LL))(v58);
    if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3) == v40 )
    {
      *v17++ = *localeconv()->decimal_point;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    LODWORD(v13) = 0;
  }
  if ( !v19 )
  {
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    {
      v41 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v41 != v66[0] )
        break;
      --v20;
      v18 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    v55 = v20;
    if ( v20 < 0 )
    {
      *v17++ = 48;
      v55 = v20 + 1;
    }
  }
  while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
  {
    v42 = (__int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
    v43 = std::_Find_elem<unsigned short>(v66, *v42);
    if ( v43 >= 0x16 )
      break;
    if ( v19 < 36 )
    {
      *v17++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v43];
      ++v19;
    }
    v18 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  v44 = v55;
  if ( v18 )
  {
    if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
    {
      v45 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
      if ( *v45 == v72 || (v46 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3), *v46 == v71) )
      {
        *v17++ = 112;
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
        v18 = 0;
        if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
          goto LABEL_100;
        v47 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
        v48 = a3;
        if ( *v47 == v68 )
        {
          *v17 = 43;
        }
        else
        {
          v49 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          if ( *v49 != v67 )
            goto LABEL_100;
          *v17 = 45;
          v48 = a3;
        }
        ++v17;
        while ( 1 )
        {
          std::istreambuf_iterator<unsigned short>::_Inc(v48);
LABEL_100:
          if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
            break;
          v50 = (_WORD *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          if ( *v50 != v66[0] )
            break;
          v18 = 1;
          v48 = a3;
        }
        if ( v18 )
          *v17++ = 48;
        while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, v6) )
        {
          v51 = (__int16 *)std::istreambuf_iterator<unsigned short>::operator*(a3);
          v52 = std::_Find_elem<unsigned short>(v66, *v51);
          if ( v52 >= 0x16 )
            break;
          if ( (int)v13 < 8 )
          {
            *v17++ = `std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getffldx'::`2'::_Src[v52];
            LODWORD(v13) = v13 + 1;
          }
          v18 = 1;
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
        }
        v44 = v55;
      }
    }
  }
  if ( v54 || !v18 )
    v17 = v61;
  *v17 = 0;
  *v62 = v44;
  std::string::_Tidy(v65, 1, 0LL);
  return 0LL;
}
