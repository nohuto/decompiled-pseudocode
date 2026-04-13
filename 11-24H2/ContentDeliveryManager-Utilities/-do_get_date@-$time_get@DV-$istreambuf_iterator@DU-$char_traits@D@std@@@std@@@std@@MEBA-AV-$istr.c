/*
 * XREFs of ?do_get_date@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800200A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800066CC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800093D4 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000BAF4 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAEAHAEBV?$ctype@D@2@@Z @ 0x18001D5F0 (-_Getint@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::do_get_date(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdx
  void (__fastcall ***v13)(_QWORD, __int64); // r8
  struct std::_Facet_base *v14; // r12
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  int v16; // ebx
  char v17; // al
  _DWORD *v18; // rsi
  __int64 v19; // rcx
  unsigned __int8 *v20; // rdx
  int v21; // eax
  __int128 v22; // xmm0
  _DWORD *v23; // rbx
  unsigned __int8 *v24; // rbx
  __int64 v25; // rcx
  unsigned __int8 *v26; // rdx
  int v27; // eax
  unsigned __int8 *v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rcx
  int v31; // eax
  unsigned __int64 v32; // rax
  unsigned __int8 *v33; // rbx
  __int64 v34; // rcx
  unsigned __int8 *v35; // rdx
  int v36; // eax
  __int64 v37; // rcx
  unsigned __int8 *v38; // rdx
  int v39; // eax
  int v40; // ebx
  _DWORD *v41; // rbx
  unsigned __int8 *v42; // rbx
  __int64 v43; // rcx
  unsigned __int8 *v44; // rdx
  int v45; // eax
  unsigned __int8 *v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int8 *v51; // rbx
  __int64 v52; // rcx
  unsigned __int8 *v53; // rdx
  int v54; // eax
  __int64 v55; // rcx
  unsigned __int8 *v56; // rdx
  int v57; // eax
  void (__fastcall *v58)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64); // rax
  _DWORD *v59; // rbx
  __int128 v60; // xmm1
  _OWORD *result; // rax
  __int128 v62; // [rsp+50h] [rbp-30h] BYREF
  __int128 v63; // [rsp+60h] [rbp-20h] BYREF
  __int128 v64; // [rsp+70h] [rbp-10h] BYREF
  __int64 v65; // [rsp+C0h] [rbp+40h] BYREF
  _OWORD *v66; // [rsp+C8h] [rbp+48h]

  v66 = a2;
  v10 = a5;
  v11 = **(_QWORD **)(a5 + 64);
  v65 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v14 = std::use_facet<std::ctype<char>>(&v65);
  if ( v11 )
  {
    v15 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v13 = v15;
    if ( v15 )
      (**v15)(v15, 1LL);
  }
  v16 = (*(__int64 (__fastcall **)(__int64, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)a1 + 24LL))(
          a1,
          v12,
          v13);
  if ( !v16 )
    v16 = 2;
  LODWORD(v65) = v16;
  v17 = std::istreambuf_iterator<char>::equal((__int64 *)a3, a4);
  v18 = a6;
  if ( !v17 )
  {
    if ( !*(_BYTE *)(a3 + 8) )
    {
      v19 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v20 = **(unsigned __int8 ***)(v19 + 56)) == 0LL || **(int **)(v19 + 80) <= 0
          ? (v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19))
          : (v21 = *v20),
            v21 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *(_BYTE *)(a3 + 9) = v21;
      }
      *(_BYTE *)(a3 + 8) = 1;
    }
    if ( (*(_WORD *)(*((_QWORD *)v14 + 3) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 4) != 0 )
    {
      if ( v16 == 2 )
      {
        v23 = (_DWORD *)(a7 + 16);
        *v18 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                  a1,
                  a3,
                  a4,
                  1,
                  12,
                  (_DWORD *)(a7 + 16),
                  (__int64)v14);
        --*v23;
        goto LABEL_25;
      }
      if ( v16 == 1 )
      {
        *v18 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                  a1,
                  a3,
                  a4,
                  1,
                  31,
                  (_DWORD *)(a7 + 12),
                  (__int64)v14);
        goto LABEL_25;
      }
      v64 = *(_OWORD *)a4;
      v63 = *(_OWORD *)a3;
      (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL))(
        a1,
        &v62,
        &v63,
        &v64,
        v10,
        v18,
        a7);
      v22 = v62;
    }
    else
    {
      v62 = *(_OWORD *)a4;
      v63 = *(_OWORD *)a3;
      (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
        a1,
        &v64,
        &v63,
        &v62,
        v10,
        v18,
        a7);
      v22 = v64;
      LODWORD(v65) = 2;
    }
    *(_OWORD *)a3 = v22;
  }
LABEL_25:
  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
  {
    v24 = (unsigned __int8 *)(a3 + 9);
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
          v24 = (unsigned __int8 *)(a3 + 9);
        }
        *(_BYTE *)(a3 + 8) = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v14 + 3) + 2LL * *v24) & 0x48) == 0 )
        break;
      std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
    }
    while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) );
  }
  v29 = 0x400900000000000LL;
  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
  {
    if ( !*(_BYTE *)(a3 + 8) )
    {
      v30 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v28 = **(unsigned __int8 ***)(v30 + 56)) == 0LL || **(int **)(v30 + 80) <= 0
          ? (v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 48LL))(v30))
          : (v31 = *v28),
            v31 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *(_BYTE *)(a3 + 9) = v31;
      }
      *(_BYTE *)(a3 + 8) = 1;
    }
    LOBYTE(v28) = *(_BYTE *)(a3 + 9);
    v32 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int8 *, _QWORD))(*(_QWORD *)v14 + 80LL))(
            v14,
            v28,
            0LL);
    if ( (unsigned __int8)v32 <= 0x3Au && _bittest64(&v29, v32) )
      std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
  }
  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
  {
    v33 = (unsigned __int8 *)(a3 + 9);
    do
    {
      if ( !*(_BYTE *)(a3 + 8) )
      {
        v34 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v35 = **(unsigned __int8 ***)(v34 + 56)) == 0LL || **(int **)(v34 + 80) <= 0
            ? (v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 48LL))(v34))
            : (v36 = *v35),
              v36 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *(_BYTE *)(a3 + 9) = v36;
          v33 = (unsigned __int8 *)(a3 + 9);
        }
        *(_BYTE *)(a3 + 8) = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v14 + 3) + 2LL * *v33) & 0x48) == 0 )
        break;
      std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
    }
    while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) );
  }
  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
  {
    if ( !*(_BYTE *)(a3 + 8) )
    {
      v37 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v38 = **(unsigned __int8 ***)(v37 + 56)) == 0LL || **(int **)(v37 + 80) <= 0
          ? (v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 48LL))(v37))
          : (v39 = *v38),
            v39 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *(_BYTE *)(a3 + 9) = v39;
      }
      *(_BYTE *)(a3 + 8) = 1;
    }
    if ( (*(_WORD *)(*((_QWORD *)v14 + 3) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 4) != 0 )
    {
      if ( (((_DWORD)v65 - 1) & 0xFFFFFFFD) != 0 )
      {
        *v18 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                  a1,
                  a3,
                  a4,
                  1,
                  31,
                  (_DWORD *)(a7 + 12),
                  (__int64)v14);
      }
      else
      {
        v41 = (_DWORD *)(a7 + 16);
        *v18 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                  a1,
                  a3,
                  a4,
                  1,
                  12,
                  (_DWORD *)(a7 + 16),
                  (__int64)v14);
        --*v41;
      }
    }
    else
    {
      v40 = v65;
      if ( (_DWORD)v65 == 2 )
      {
        *v18 |= 2u;
      }
      else
      {
        v64 = *(_OWORD *)a4;
        v63 = *(_OWORD *)a3;
        (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
          a1,
          &v62,
          &v63,
          &v64,
          a5,
          v18,
          a7);
        *(_OWORD *)a3 = v62;
        if ( v40 == 4 )
          LODWORD(v65) = 3;
      }
    }
  }
  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
  {
    v42 = (unsigned __int8 *)(a3 + 9);
    do
    {
      if ( !*(_BYTE *)(a3 + 8) )
      {
        v43 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v44 = **(unsigned __int8 ***)(v43 + 56)) == 0LL || **(int **)(v43 + 80) <= 0
            ? (v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 48LL))(v43))
            : (v45 = *v44),
              v45 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *(_BYTE *)(a3 + 9) = v45;
          v42 = (unsigned __int8 *)(a3 + 9);
        }
        *(_BYTE *)(a3 + 8) = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v14 + 3) + 2LL * *v42) & 0x48) == 0 )
        break;
      std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
    }
    while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) );
  }
  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
  {
    if ( !*(_BYTE *)(a3 + 8) )
    {
      v47 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v46 = **(unsigned __int8 ***)(v47 + 56)) == 0LL || **(int **)(v47 + 80) <= 0
          ? (v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v47 + 48LL))(v47))
          : (v48 = *v46),
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
    LOBYTE(v46) = *(_BYTE *)(a3 + 9);
    v49 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int8 *, _QWORD))(*(_QWORD *)v14 + 80LL))(
            v14,
            v46,
            0LL);
    if ( (unsigned __int8)v49 <= 0x3Au )
    {
      v50 = 0x400900000000000LL;
      if ( _bittest64(&v50, v49) )
        std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
    }
  }
  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
  {
    v51 = (unsigned __int8 *)(a3 + 9);
    do
    {
      if ( !*(_BYTE *)(a3 + 8) )
      {
        v52 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v53 = **(unsigned __int8 ***)(v52 + 56)) == 0LL || **(int **)(v52 + 80) <= 0
            ? (v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 48LL))(v52))
            : (v54 = *v53),
              v54 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *(_BYTE *)(a3 + 9) = v54;
          v51 = (unsigned __int8 *)(a3 + 9);
        }
        *(_BYTE *)(a3 + 8) = 1;
      }
      if ( (*(_BYTE *)(*((_QWORD *)v14 + 3) + 2LL * *v51) & 0x48) == 0 )
        break;
      std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
    }
    while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) );
  }
  if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
    goto LABEL_129;
  if ( !*(_BYTE *)(a3 + 8) )
  {
    v55 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3
      || ((v56 = **(unsigned __int8 ***)(v55 + 56)) == 0LL || **(int **)(v55 + 80) <= 0
        ? (v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 48LL))(v55))
        : (v57 = *v56),
          v57 == -1) )
    {
      *(_QWORD *)a3 = 0LL;
    }
    else
    {
      *(_BYTE *)(a3 + 9) = v57;
    }
    *(_BYTE *)(a3 + 8) = 1;
  }
  if ( (*(_WORD *)(*((_QWORD *)v14 + 3) + 2LL * *(unsigned __int8 *)(a3 + 9)) & 4) != 0 )
  {
    if ( (_DWORD)v65 == 4 )
    {
      v59 = (_DWORD *)(a7 + 16);
      *v18 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                a1,
                a3,
                a4,
                1,
                12,
                (_DWORD *)(a7 + 16),
                (__int64)v14);
      --*v59;
      goto LABEL_149;
    }
    if ( (_DWORD)v65 == 3 )
    {
      *v18 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
                a1,
                a3,
                a4,
                1,
                31,
                (_DWORD *)(a7 + 12),
                (__int64)v14);
      goto LABEL_149;
    }
    v58 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL);
  }
  else
  {
    if ( (_DWORD)v65 != 4 )
    {
LABEL_129:
      *v18 |= 2u;
      goto LABEL_149;
    }
    v58 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL);
  }
  v60 = *(_OWORD *)a3;
  v64 = *(_OWORD *)a4;
  v63 = v60;
  v58(a1, &v62, &v63, &v64, a5, v18, a7);
  *(_OWORD *)a3 = v62;
LABEL_149:
  if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
    *v18 |= 1u;
  result = v66;
  *v66 = *(_OWORD *)a3;
  return result;
}
