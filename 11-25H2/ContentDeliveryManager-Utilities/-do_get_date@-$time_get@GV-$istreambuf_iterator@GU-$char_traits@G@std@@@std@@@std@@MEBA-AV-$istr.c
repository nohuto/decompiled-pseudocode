/*
 * XREFs of ?do_get_date@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180018AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Getint@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0HHAEAHAEBV?$ctype@G@2@@Z @ 0x1800123F8 (-_Getint@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049358 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005AC38 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005CF84 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get_date(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int128 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7)
{
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdx
  void (__fastcall ***v13)(_QWORD, __int64); // r8
  __int64 v14; // r12
  void (__fastcall ***v15)(_QWORD, __int64); // rax
  int v16; // ebx
  char v17; // al
  _DWORD *v18; // rsi
  __int64 v19; // rcx
  __int16 *v20; // rdx
  __int16 v21; // ax
  __int128 v22; // xmm0
  _DWORD *v23; // rbx
  unsigned __int16 *v24; // rbx
  __int64 v25; // rcx
  __int16 *v26; // rdx
  __int16 v27; // ax
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int16 *v30; // rdx
  __int16 v31; // ax
  unsigned __int64 v32; // rax
  unsigned __int16 *v33; // rbx
  __int64 v34; // rcx
  __int16 *v35; // rdx
  __int16 v36; // ax
  __int64 v37; // rcx
  __int16 *v38; // rdx
  __int16 v39; // ax
  int v40; // ebx
  _DWORD *v41; // rbx
  unsigned __int16 *v42; // rbx
  __int64 v43; // rcx
  __int16 *v44; // rdx
  __int16 v45; // ax
  __int64 v46; // rcx
  __int16 *v47; // rdx
  __int16 v48; // ax
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int16 *v51; // rbx
  __int64 v52; // rcx
  __int16 *v53; // rdx
  __int16 v54; // ax
  __int64 v55; // rcx
  __int16 *v56; // rdx
  __int16 v57; // ax
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
  v14 = std::use_facet<std::ctype<unsigned short>>((std::locale *)&v65);
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
  v17 = std::istreambuf_iterator<wchar_t>::equal(a3, a4);
  v18 = a6;
  if ( !v17 )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v19 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v20 = **(__int16 ***)(v19 + 56)) == 0LL || **(int **)(v19 + 80) <= 0
          ? (v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19))
          : (v21 = *v20),
            v21 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *((_WORD *)a3 + 5) = v21;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 32LL))(
           v14,
           4LL,
           *((unsigned __int16 *)a3 + 5)) )
    {
      if ( v16 == 2 )
      {
        v23 = (_DWORD *)(a7 + 16);
        *v18 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                  a1,
                  (__int64 *)a3,
                  (__int64)a4,
                  1,
                  12,
                  (_DWORD *)(a7 + 16),
                  v14);
        --*v23;
        goto LABEL_25;
      }
      if ( v16 == 1 )
      {
        *v18 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                  a1,
                  (__int64 *)a3,
                  (__int64)a4,
                  1,
                  31,
                  (_DWORD *)(a7 + 12),
                  v14);
        goto LABEL_25;
      }
      v64 = *a4;
      v63 = *a3;
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
      v62 = *a4;
      v63 = *a3;
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
    *a3 = v22;
  }
LABEL_25:
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
  {
    v24 = (unsigned __int16 *)a3 + 5;
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v25 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v26 = **(__int16 ***)(v25 + 56)) == 0LL || **(int **)(v25 + 80) <= 0
            ? (v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 48LL))(v25))
            : (v27 = *v26),
              v27 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *((_WORD *)a3 + 5) = v27;
          v24 = (unsigned __int16 *)a3 + 5;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, 72LL, *v24) )
        break;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) );
    v18 = a6;
  }
  v28 = 0x400900000000000LL;
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v29 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v30 = **(__int16 ***)(v29 + 56)) == 0LL || **(int **)(v29 + 80) <= 0
          ? (v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 48LL))(v29))
          : (v31 = *v30),
            v31 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *((_WORD *)a3 + 5) = v31;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 112LL))(
            v14,
            *((unsigned __int16 *)a3 + 5),
            0LL);
    if ( (unsigned __int8)v32 <= 0x3Au && _bittest64(&v28, v32) )
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
  {
    v33 = (unsigned __int16 *)a3 + 5;
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v34 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v35 = **(__int16 ***)(v34 + 56)) == 0LL || **(int **)(v34 + 80) <= 0
            ? (v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 48LL))(v34))
            : (v36 = *v35),
              v36 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *((_WORD *)a3 + 5) = v36;
          v33 = (unsigned __int16 *)a3 + 5;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, 72LL, *v33) )
        break;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) );
    v18 = a6;
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v37 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v38 = **(__int16 ***)(v37 + 56)) == 0LL || **(int **)(v37 + 80) <= 0
          ? (v39 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 48LL))(v37))
          : (v39 = *v38),
            v39 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *((_WORD *)a3 + 5) = v39;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 32LL))(
           v14,
           4LL,
           *((unsigned __int16 *)a3 + 5)) )
    {
      if ( (((_DWORD)v65 - 1) & 0xFFFFFFFD) != 0 )
      {
        *v18 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                  a1,
                  (__int64 *)a3,
                  (__int64)a4,
                  1,
                  31,
                  (_DWORD *)(a7 + 12),
                  v14);
      }
      else
      {
        v41 = (_DWORD *)(a7 + 16);
        *v18 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                  a1,
                  (__int64 *)a3,
                  (__int64)a4,
                  1,
                  12,
                  (_DWORD *)(a7 + 16),
                  v14);
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
        v64 = *a4;
        v63 = *a3;
        (*(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL))(
          a1,
          &v62,
          &v63,
          &v64,
          a5,
          v18,
          a7);
        *a3 = v62;
        if ( v40 == 4 )
          LODWORD(v65) = 3;
      }
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
  {
    v42 = (unsigned __int16 *)a3 + 5;
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v43 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v44 = **(__int16 ***)(v43 + 56)) == 0LL || **(int **)(v43 + 80) <= 0
            ? (v45 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v43 + 48LL))(v43))
            : (v45 = *v44),
              v45 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *((_WORD *)a3 + 5) = v45;
          v42 = (unsigned __int16 *)a3 + 5;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, 72LL, *v42) )
        break;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) );
    v18 = a6;
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
  {
    if ( !*((_BYTE *)a3 + 8) )
    {
      v46 = *(_QWORD *)a3;
      if ( !*(_QWORD *)a3
        || ((v47 = **(__int16 ***)(v46 + 56)) == 0LL || **(int **)(v46 + 80) <= 0
          ? (v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v46 + 48LL))(v46))
          : (v48 = *v47),
            v48 == -1) )
      {
        *(_QWORD *)a3 = 0LL;
      }
      else
      {
        *((_WORD *)a3 + 5) = v48;
      }
      *((_BYTE *)a3 + 8) = 1;
    }
    v49 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 112LL))(
            v14,
            *((unsigned __int16 *)a3 + 5),
            0LL);
    if ( (unsigned __int8)v49 <= 0x3Au )
    {
      v50 = 0x400900000000000LL;
      if ( _bittest64(&v50, v49) )
        std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
  {
    v51 = (unsigned __int16 *)a3 + 5;
    do
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v52 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v53 = **(__int16 ***)(v52 + 56)) == 0LL || **(int **)(v52 + 80) <= 0
            ? (v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 48LL))(v52))
            : (v54 = *v53),
              v54 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *((_WORD *)a3 + 5) = v54;
          v51 = (unsigned __int16 *)a3 + 5;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 32LL))(v14, 72LL, *v51) )
        break;
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) );
    v18 = a6;
  }
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    goto LABEL_133;
  if ( !*((_BYTE *)a3 + 8) )
  {
    v55 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3
      || ((v56 = **(__int16 ***)(v55 + 56)) == 0LL || **(int **)(v55 + 80) <= 0
        ? (v57 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v55 + 48LL))(v55))
        : (v57 = *v56),
          v57 == -1) )
    {
      *(_QWORD *)a3 = 0LL;
    }
    else
    {
      *((_WORD *)a3 + 5) = v57;
    }
    *((_BYTE *)a3 + 8) = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v14 + 32LL))(
         v14,
         4LL,
         *((unsigned __int16 *)a3 + 5)) )
  {
    if ( (_DWORD)v65 == 4 )
    {
      v59 = (_DWORD *)(a7 + 16);
      *v18 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                a1,
                (__int64 *)a3,
                (__int64)a4,
                1,
                12,
                (_DWORD *)(a7 + 16),
                v14);
      --*v59;
      goto LABEL_153;
    }
    if ( (_DWORD)v65 == 3 )
    {
      *v18 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
                a1,
                (__int64 *)a3,
                (__int64)a4,
                1,
                31,
                (_DWORD *)(a7 + 12),
                v14);
      goto LABEL_153;
    }
    v58 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 64LL);
  }
  else
  {
    if ( (_DWORD)v65 != 4 )
    {
LABEL_133:
      *v18 |= 2u;
      goto LABEL_153;
    }
    v58 = *(void (__fastcall **)(__int64, __int128 *, __int128 *, __int128 *, __int64, _DWORD *, __int64))(*(_QWORD *)a1 + 56LL);
  }
  v60 = *a3;
  v64 = *a4;
  v63 = v60;
  v58(a1, &v62, &v63, &v64, a5, v18, a7);
  *a3 = v62;
LABEL_153:
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *v18 |= 1u;
  result = v66;
  *v66 = *a3;
  return result;
}
