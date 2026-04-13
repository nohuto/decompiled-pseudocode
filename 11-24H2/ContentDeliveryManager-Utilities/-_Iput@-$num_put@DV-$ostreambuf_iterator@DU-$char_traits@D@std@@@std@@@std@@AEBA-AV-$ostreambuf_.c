/*
 * XREFs of ?_Iput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEAD_K@Z @ 0x180009564
 * Callers:
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DJ@Z @ 0x18000B040 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$ostreambuf.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DK@Z @ 0x18000B100 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000B100.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBX@Z @ 0x18000B530 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000B530.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_J@Z @ 0x18000B5E0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000B5E0.c)
 *     ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@D_K@Z @ 0x18000B6A0 (-do_put@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000B6A0.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800066CC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x180006AB0 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ??4?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@QEAAAEAV01@D@Z @ 0x180006BFC (--4-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@QEAAAEAV01@D@Z.c)
 *     ?insert@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z @ 0x18000BBC8 (-insert@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_K0D@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002264D (--3@YAXPEAX@Z_0.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005C0A4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
_OWORD *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::_Iput(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int8 a5,
        _BYTE *a6,
        unsigned __int64 a7)
{
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  struct std::_Facet_base *v12; // r12
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  void **v14; // r9
  __int64 v15; // rbx
  struct std::_Facet_base *v16; // r14
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  void **v18; // rbx
  __int64 v19; // r9
  char v20; // r14
  char v21; // cl
  unsigned __int64 v22; // rsi
  __int64 v23; // rbx
  unsigned __int64 v24; // rbx
  int v25; // eax
  __int128 v26; // xmm0
  unsigned __int8 *v27; // r14
  __int64 v28; // r12
  unsigned __int8 *v29; // r14
  __int64 v30; // r12
  unsigned __int8 *v31; // r14
  __int64 v32; // r12
  void **v33; // r14
  unsigned __int8 *v34; // r14
  __int64 v35; // rsi
  _OWORD *v36; // rbx
  __int128 v38; // [rsp+48h] [rbp-61h] BYREF
  _OWORD *v39; // [rsp+58h] [rbp-51h]
  __int64 v40; // [rsp+60h] [rbp-49h]
  void *v41[2]; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v42; // [rsp+78h] [rbp-31h]
  unsigned __int64 v43; // [rsp+80h] [rbp-29h]
  void *v44[3]; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int64 v45; // [rsp+A0h] [rbp-9h]

  v40 = -2LL;
  v39 = a2;
  v9 = a7;
  v10 = a7 && ((*a6 - 43) & 0xFD) == 0;
  if ( (*(_DWORD *)(a4 + 24) & 0xE00) == 0x800 && v10 + 2 <= a7 && a6[v10] == 48 && ((a6[v10 + 1] - 88) & 0xDF) == 0 )
    v10 += 2LL;
  v11 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v38 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<char>>((__int64 *)&v38);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v43 = 15LL;
  v42 = 0LL;
  LOBYTE(v41[0]) = 0;
  std::string::assign(v41, a7, 0LL);
  v14 = v41;
  if ( v43 >= 0x10 )
    v14 = (void **)v41[0];
  (*(void (__fastcall **)(struct std::_Facet_base *, _BYTE *, _BYTE *, void **))(*(_QWORD *)v12 + 56LL))(
    v12,
    a6,
    &a6[a7],
    v14);
  v15 = **(_QWORD **)(a4 + 64);
  *(_QWORD *)&v38 = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::numpunct<char>>((__int64 *)&v38);
  if ( v15 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  (*(void (__fastcall **)(struct std::_Facet_base *, void **))(*(_QWORD *)v16 + 40LL))(v16, v44);
  v18 = v44;
  if ( v45 >= 0x10 )
    v18 = (void **)v44[0];
  if ( (unsigned __int8)(*(_BYTE *)v18 - 1) <= 0x7Du )
  {
    v20 = (*(__int64 (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v16 + 32LL))(v16);
    while ( 1 )
    {
      v21 = *(_BYTE *)v18;
      if ( *(_BYTE *)v18 == 127 || v21 <= 0 || v21 >= v9 - v10 )
        break;
      v9 -= v21;
      LOBYTE(v19) = v20;
      std::string::insert(v41, v9, 1LL, v19);
      if ( *((char *)v18 + 1) > 0 )
        v18 = (void **)((char *)v18 + 1);
    }
  }
  v22 = v42;
  v23 = *(_QWORD *)(a4 + 40);
  if ( v23 <= 0 || v23 <= v42 )
    v24 = 0LL;
  else
    v24 = v23 - v42;
  v25 = *(_DWORD *)(a4 + 24) & 0x1C0;
  v26 = *a3;
  v38 = *a3;
  if ( v25 == 64 )
  {
    v31 = (unsigned __int8 *)v41;
    if ( v43 >= 0x10 )
      v31 = (unsigned __int8 *)v41[0];
    v32 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v38, *v31++);
        --v32;
      }
      while ( v32 );
      goto LABEL_54;
    }
  }
  else if ( v25 == 256 )
  {
    v29 = (unsigned __int8 *)v41;
    if ( v43 >= 0x10 )
      v29 = (unsigned __int8 *)v41[0];
    v30 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v38, *v29++);
        --v30;
      }
      while ( v30 );
      v26 = v38;
    }
    v38 = v26;
    if ( v24 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v38, a5);
        --v24;
      }
      while ( v24 );
      v26 = v38;
    }
    v24 = 0LL;
  }
  else
  {
    if ( v24 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v38, a5);
        --v24;
      }
      while ( v24 );
      v26 = v38;
    }
    v24 = 0LL;
    v27 = (unsigned __int8 *)v41;
    if ( v43 >= 0x10 )
      v27 = (unsigned __int8 *)v41[0];
    v38 = v26;
    v28 = v10;
    if ( v10 )
    {
      do
      {
        std::ostreambuf_iterator<char>::operator=((__int64)&v38, *v27++);
        --v28;
      }
      while ( v28 );
LABEL_54:
      v26 = v38;
    }
  }
  *a3 = v26;
  v33 = v41;
  if ( v43 >= 0x10 )
    v33 = (void **)v41[0];
  v34 = (unsigned __int8 *)v33 + v10;
  v38 = v26;
  v35 = v22 - v10;
  if ( v35 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v38, *v34++);
      --v35;
    }
    while ( v35 );
    v26 = v38;
  }
  *(_QWORD *)(a4 + 40) = 0LL;
  v38 = v26;
  if ( v24 )
  {
    do
    {
      std::ostreambuf_iterator<char>::operator=((__int64)&v38, a5);
      --v24;
    }
    while ( v24 );
    v26 = v38;
  }
  v36 = v39;
  *v39 = v26;
  if ( v45 >= 0x10 )
    operator delete(v44[0]);
  v45 = 15LL;
  v44[2] = 0LL;
  LOBYTE(v44[0]) = 0;
  if ( v43 >= 0x10 )
    operator delete(v41[0]);
  return v36;
}
