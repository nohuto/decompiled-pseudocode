/*
 * XREFs of ?_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z @ 0x180016CAC
 * Callers:
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180019BC0 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreamb.c)
 *     ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GO@Z @ 0x180019E00 (-do_put@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA_ea_180019E00.c)
 * Callees:
 *     ??$use_facet@V?$moneypunct@G$00@std@@@std@@YAAEBV?$moneypunct@G$00@0@AEBVlocale@0@@Z @ 0x18000FCA4 (--$use_facet@V-$moneypunct@G$00@std@@@std@@YAAEBV-$moneypunct@G$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@G$0A@@std@@@std@@YAAEBV?$moneypunct@G$0A@@0@AEBVlocale@0@@Z @ 0x18000FDF0 (--$use_facet@V-$moneypunct@G$0A@@std@@@std@@YAAEBV-$moneypunct@G$0A@@0@AEBVlocale@0@@Z.c)
 *     ?_Put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@V?$_String_const_iterator@V?$_String_val@U?$_Simple_types@_W@std@@@std@@@2@_K@Z @ 0x180016B2C (-_Put@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@CA-AV-$ostreambu.c)
 *     ?_Rep@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@CA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_W_K@Z @ 0x180017D74 (-_Rep@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@CA-AV-$ostreambu.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x18001BBB8 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002264D (--3@YAXPEAX@Z_0.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180059830 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall std::money_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Putmfld(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7,
        __int64 a8,
        unsigned __int16 a9)
{
  __int128 *v9; // r14
  __int64 v10; // r13
  __int64 *v11; // rbx
  __int64 v12; // rbx
  struct std::_Facet_base *v13; // r15
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  __int64 v15; // rbx
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  int v17; // eax
  unsigned int v18; // esi
  unsigned __int64 v19; // rbx
  void **v20; // rax
  void **v21; // rax
  unsigned __int16 v22; // r13
  void **v23; // rbx
  unsigned __int64 v24; // rsi
  char v25; // cl
  __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rax
  unsigned __int16 *i; // rdx
  char v30; // cl
  unsigned __int64 v31; // rcx
  __int64 v32; // rsi
  unsigned __int64 v33; // rsi
  int v34; // r13d
  unsigned __int64 v35; // rax
  char v36; // al
  unsigned __int64 v37; // r9
  unsigned __int16 *v38; // r8
  char *v39; // rcx
  __int128 v40; // xmm0
  __int128 *v41; // rax
  _QWORD *v42; // rbx
  int *v43; // rax
  unsigned __int16 **v44; // rcx
  unsigned __int16 v45; // ax
  unsigned __int16 v46; // r8
  int *v47; // rax
  unsigned __int16 **v48; // rcx
  unsigned __int16 *v49; // rdx
  unsigned __int64 v50; // r9
  __int128 *v51; // rax
  __int64 v52; // r9
  unsigned __int16 *v53; // r8
  unsigned __int16 v54; // r8
  __int64 v55; // rcx
  int *v56; // rax
  unsigned __int16 **v57; // rcx
  unsigned __int16 *v58; // rdx
  __int64 v59; // rcx
  void **v60; // r8
  __int64 v61; // rbx
  __int128 v63; // [rsp+38h] [rbp-D0h] BYREF
  __int128 *v64; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v65; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v66; // [rsp+58h] [rbp-B0h]
  __int128 v67; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v68; // [rsp+78h] [rbp-90h]
  __int64 v69; // [rsp+80h] [rbp-88h]
  __int64 v70; // [rsp+88h] [rbp-80h]
  char v71; // [rsp+90h] [rbp-78h] BYREF
  char v72[16]; // [rsp+A0h] [rbp-68h] BYREF
  char v73; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v74; // [rsp+C0h] [rbp-48h] BYREF
  char v75; // [rsp+D0h] [rbp-38h] BYREF
  char v76; // [rsp+E0h] [rbp-28h] BYREF
  char v77; // [rsp+F0h] [rbp-18h] BYREF
  char v78[16]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v79; // [rsp+110h] [rbp+8h]
  void *v80[2]; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v81; // [rsp+128h] [rbp+20h]
  unsigned __int64 v82; // [rsp+130h] [rbp+28h]
  void *v83[2]; // [rsp+138h] [rbp+30h] BYREF
  unsigned __int64 v84; // [rsp+148h] [rbp+40h]
  unsigned __int64 v85; // [rsp+150h] [rbp+48h]
  void *v86[3]; // [rsp+158h] [rbp+50h] BYREF
  unsigned __int64 v87; // [rsp+170h] [rbp+68h]
  void *v88[3]; // [rsp+178h] [rbp+70h] BYREF
  unsigned __int64 v89; // [rsp+190h] [rbp+88h]

  v70 = -2LL;
  v9 = a3;
  v64 = a3;
  v69 = a2;
  v10 = a5;
  v68 = a5;
  v79 = a8;
  v11 = *(__int64 **)(a5 + 64);
  if ( a4 )
  {
    v12 = *v11;
    *(_QWORD *)&v67 = v12;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = std::use_facet<std::moneypunct<unsigned short,1>>((__int64 *)&v67);
    if ( v12 )
    {
      v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v14 )
        (**v14)(v14, 1LL);
    }
  }
  else
  {
    v15 = *v11;
    *(_QWORD *)&v67 = v15;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v13 = std::use_facet<std::moneypunct<unsigned short,0>>((__int64 *)&v67);
    if ( v15 )
    {
      v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      if ( v16 )
        (**v16)(v16, 1LL);
    }
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 40LL))(v13, v86);
  v17 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v13 + 72LL))(v13);
  v18 = -v17;
  if ( v17 > 0 )
    v18 = v17;
  LODWORD(v65) = v18;
  v19 = v18;
  v66 = v18;
  if ( *(_QWORD *)(a8 + 16) > (unsigned __int64)v18 )
  {
    v20 = v86;
    if ( v87 >= 0x10 )
      v20 = (void **)v86[0];
    if ( *(_BYTE *)v20 != 127 )
    {
      v21 = v86;
      if ( v87 >= 0x10 )
        v21 = (void **)v86[0];
      if ( *(char *)v21 > 0 )
      {
        v22 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v13 + 32LL))(v13);
        v23 = v86;
        if ( v87 >= 0x10 )
          v23 = (void **)v86[0];
        v24 = *(_QWORD *)(a8 + 16) - v66;
        v25 = *(_BYTE *)v23;
        if ( *(_BYTE *)v23 != 127 )
        {
          do
          {
            if ( v25 <= 0 || v25 >= v24 )
              break;
            v24 -= v25;
            std::wstring::insert(a8, v24, 1LL, v22);
            if ( *((char *)v23 + 1) > 0 )
              v23 = (void **)((char *)v23 + 1);
            v25 = *(_BYTE *)v23;
          }
          while ( *(_BYTE *)v23 != 127 );
          v9 = v64;
        }
        v18 = v65;
        v10 = v68;
        v19 = v66;
      }
    }
  }
  else
  {
    std::wstring::insert(a8, 0LL, v18 - *(_QWORD *)(a8 + 16) + 1LL, a9);
  }
  v82 = 7LL;
  v81 = 0LL;
  LOWORD(v80[0]) = 0;
  v26 = *(_QWORD *)v13;
  if ( a7 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int128 **))(v26 + 88))(v13, &v64);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 64LL))(v13, v88);
    if ( v82 >= 8 )
      operator delete(v80[0]);
  }
  else
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, __int128 **))(v26 + 80))(v13, &v64);
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 56LL))(v13, v88);
    if ( v82 >= 8 )
      operator delete(v80[0]);
  }
  v82 = 7LL;
  v81 = 0LL;
  LOWORD(v80[0]) = 0;
  std::wstring::_Assign_rv(v80, v88);
  if ( v89 >= 8 )
    operator delete(v88[0]);
  v85 = 7LL;
  v84 = 0LL;
  LOWORD(v83[0]) = 0;
  if ( (*(_BYTE *)(v10 + 24) & 8) != 0 )
  {
    (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v13 + 48LL))(v13, v88);
    if ( v85 >= 8 )
      operator delete(v83[0]);
    v85 = 7LL;
    v84 = 0LL;
    LOWORD(v83[0]) = 0;
    std::wstring::_Assign_rv(v83, v88);
    if ( v89 >= 8 )
      operator delete(v88[0]);
  }
  LOBYTE(v27) = 0;
  v28 = 0LL;
  for ( i = 0LL; (unsigned __int64)i < 4; i = (unsigned __int16 *)((char *)i + 1) )
  {
    v30 = *((_BYTE *)&v64 + (_QWORD)i);
    switch ( v30 )
    {
      case ' ':
        ++v28;
LABEL_55:
        v27 = (unsigned __int8)v27;
        if ( i != (unsigned __int16 *)3 )
          v27 = 1LL;
        continue;
      case '$':
        v28 += v84;
        continue;
      case '+':
        v28 += v81;
        continue;
    }
    if ( v30 != 118 )
    {
      if ( v30 != 120 )
        continue;
      goto LABEL_55;
    }
    v31 = *(_QWORD *)(a8 + 16);
    if ( v31 <= v19 )
      v31 = v19 + 1;
    v28 += v31 + (v18 != 0);
  }
  v32 = *(_QWORD *)(v10 + 40);
  if ( v32 <= 0 || v32 <= v28 )
    v33 = 0LL;
  else
    v33 = v32 - v28;
  v34 = *(_DWORD *)(v10 + 24) & 0x1C0;
  if ( v34 != 64 && (v34 != 256 || !(_BYTE)v27) )
  {
    v67 = *v9;
    *v9 = *(_OWORD *)std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Rep(&v63, &v67, a6, v33);
    v33 = 0LL;
  }
  v35 = 0LL;
  *(_QWORD *)&v67 = 0LL;
  while ( 2 )
  {
    v36 = *((_BYTE *)&v64 + v35);
    switch ( v36 )
    {
      case ' ':
        v63 = *v9;
        *v9 = *(_OWORD *)std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Rep(v78, &v63, a6, 1LL);
        goto LABEL_121;
      case '$':
        v38 = (unsigned __int16 *)v83;
        if ( v85 >= 8 )
          v38 = (unsigned __int16 *)v83[0];
        v37 = v84;
        v39 = &v77;
        goto LABEL_78;
      case '+':
        if ( !v81 )
          break;
        v38 = (unsigned __int16 *)v80;
        if ( v82 >= 8 )
          v38 = (unsigned __int16 *)v80[0];
        v37 = 1LL;
        v39 = &v76;
        goto LABEL_78;
      case 'v':
        v37 = *(_QWORD *)(a8 + 16);
        if ( (_DWORD)v65 )
        {
          if ( v37 <= v19 )
          {
            v42 = (_QWORD *)*((_QWORD *)v9 + 1);
            if ( !v42
              || (!*(_QWORD *)v42[8] || (v43 = (int *)v42[11], *v43 <= 0)
                ? (v45 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(*v42 + 24LL))(
                           *((_QWORD *)v9 + 1),
                           a9,
                           v27))
                : (--*v43, v44 = (unsigned __int16 **)v42[8], i = *v44, ++*v44, v45 = a9, *i = a9),
                  v45 == 0xFFFF) )
            {
              *(_BYTE *)v9 = 1;
            }
            v46 = (*(__int64 (__fastcall **)(struct std::_Facet_base *, unsigned __int16 *, __int64))(*(_QWORD *)v13 + 24LL))(
                    v13,
                    i,
                    v27);
            if ( !v42
              || (!*(_QWORD *)v42[8] || (v47 = (int *)v42[11], *v47 <= 0)
                ? (v46 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*v42 + 24LL))(v42, v46))
                : (--*v47, v48 = (unsigned __int16 **)v42[8], v49 = *v48, ++*v48, *v49 = v46),
                  v46 == 0xFFFF) )
            {
              *(_BYTE *)v9 = 1;
            }
            v19 = v66;
            v50 = v66 - *(_QWORD *)(a8 + 16);
            v63 = *v9;
            v51 = (__int128 *)std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Rep(v72, &v63, a9, v50);
            if ( *(_QWORD *)(a8 + 24) < 8uLL )
              v38 = (unsigned __int16 *)a8;
            else
              v38 = *(unsigned __int16 **)a8;
            v40 = *v51;
            v37 = *(_QWORD *)(a8 + 16);
            v39 = &v73;
            goto LABEL_79;
          }
          v52 = v37 - v19;
          if ( *(_QWORD *)(a8 + 24) < 8uLL )
            v53 = (unsigned __int16 *)a8;
          else
            v53 = *(unsigned __int16 **)a8;
          v63 = *v9;
          *v9 = *std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(&v74, (__int64)&v63, v53, v52);
          v54 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v13 + 24LL))(v13);
          v55 = *((_QWORD *)v9 + 1);
          if ( !v55
            || (!**(_QWORD **)(v55 + 64) || (v56 = *(int **)(v55 + 88), *v56 <= 0)
              ? (v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v55 + 24LL))(v55, v54))
              : (--*v56, v57 = *(unsigned __int16 ***)(v55 + 64), v58 = *v57, ++*v57, *v58 = v54),
                v54 == 0xFFFF) )
          {
            *(_BYTE *)v9 = 1;
          }
          if ( *(_QWORD *)(a8 + 24) < 8uLL )
            v59 = a8;
          else
            v59 = *(_QWORD *)a8;
          v38 = (unsigned __int16 *)(v59 + 2LL * *(_QWORD *)(a8 + 16) - 2 * v19);
          v37 = v19;
          v39 = &v75;
        }
        else
        {
          if ( *(_QWORD *)(a8 + 24) < 8uLL )
            v38 = (unsigned __int16 *)a8;
          else
            v38 = *(unsigned __int16 **)a8;
          v39 = &v71;
        }
LABEL_78:
        v40 = *v9;
LABEL_79:
        v63 = v40;
        v41 = std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(v39, (__int64)&v63, v38, v37);
LABEL_123:
        *v9 = *v41;
        break;
      case 'x':
LABEL_121:
        if ( v34 != 256 )
          break;
        v63 = *v9;
        v41 = (__int128 *)std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Rep(v88, &v63, a6, v33);
        v33 = 0LL;
        goto LABEL_123;
    }
    v35 = v67 + 1;
    *(_QWORD *)&v67 = v35;
    if ( v35 < 4 )
      continue;
    break;
  }
  if ( v81 > 1 )
  {
    v60 = v80;
    if ( v82 >= 8 )
      v60 = (void **)v80[0];
    v63 = *v9;
    *v9 = *std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(
             v88,
             (__int64)&v63,
             (unsigned __int16 *)v60 + 1,
             v81 - 1);
  }
  *(_QWORD *)(v68 + 40) = 0LL;
  v63 = *v9;
  v61 = v69;
  std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Rep(v69, &v63, a6, v33);
  if ( v85 >= 8 )
    operator delete(v83[0]);
  v85 = 7LL;
  v84 = 0LL;
  LOWORD(v83[0]) = 0;
  if ( v82 >= 8 )
    operator delete(v80[0]);
  v82 = 7LL;
  v81 = 0LL;
  LOWORD(v80[0]) = 0;
  if ( v87 >= 0x10 )
    operator delete(v86[0]);
  v87 = 15LL;
  v86[2] = 0LL;
  LOBYTE(v86[0]) = 0;
  if ( *(_QWORD *)(a8 + 24) >= 8uLL )
    operator delete(*(void **)a8);
  *(_QWORD *)(a8 + 24) = 7LL;
  *(_QWORD *)(a8 + 16) = 0LL;
  *(_WORD *)a8 = 0;
  return v61;
}
