/*
 * XREFs of ?_Iput@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEAD_K@Z @ 0x180014ACC
 * Callers:
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GJ@Z @ 0x18001A4C0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$ostreambuf.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GK@Z @ 0x18001A580 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18001A580.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@GPEBX@Z @ 0x18001A9B0 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18001A9B0.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@G_J@Z @ 0x18001AA60 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18001AA60.c)
 *     ?do_put@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@AEAVios_base@2@G_K@Z @ 0x18001AB20 (-do_put@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-A_ea_18001AB20.c)
 * Callees:
 *     ?_Put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@PEB_W_K@Z @ 0x180016BEC (-_Put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreambu.c)
 *     ?_Rep@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@G_K@Z @ 0x180017E28 (-_Rep@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_i.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z @ 0x18001BBB8 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K0G@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002264D (--3@YAXPEAX@Z_0.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049558 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180049710 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005C2DC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Iput(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 a5,
        _BYTE *a6,
        unsigned __int64 a7)
{
  int v9; // r12d
  unsigned __int64 v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  void **v14; // r9
  __int64 v15; // rbx
  __int64 v16; // r15
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  void **v18; // rbx
  unsigned __int16 v19; // r15
  char v20; // cl
  unsigned __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rbx
  int v24; // eax
  unsigned __int16 v25; // r15
  __int128 *v26; // rax
  void **v27; // r9
  __int128 *v28; // rax
  void **v29; // r9
  __int128 v30; // xmm0
  void **v31; // r9
  void **v32; // rax
  __int128 v33; // xmm0
  __int64 v34; // rbx
  __int64 v36; // [rsp+28h] [rbp-91h]
  __int128 v37; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v38[2]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v39; // [rsp+68h] [rbp-51h]
  __int64 v40; // [rsp+70h] [rbp-49h]
  void *v41[2]; // [rsp+78h] [rbp-41h] BYREF
  unsigned __int64 v42; // [rsp+88h] [rbp-31h]
  unsigned __int64 v43; // [rsp+90h] [rbp-29h]
  void *v44[3]; // [rsp+98h] [rbp-21h] BYREF
  unsigned __int64 v45; // [rsp+B0h] [rbp-9h]

  v40 = -2LL;
  v39 = a2;
  v9 = a1;
  *(_QWORD *)&v37 = a1;
  v10 = a7;
  if ( !a7 || (v11 = 1LL, ((*a6 - 43) & 0xFD) != 0) )
    v11 = 0LL;
  if ( (*(_DWORD *)(a4 + 24) & 0xE00) == 0x800 && v11 + 2 <= a7 && a6[v11] == 48 && ((a6[v11 + 1] - 88) & 0xDF) == 0 )
    v11 += 2LL;
  v12 = **(_QWORD **)(a4 + 64);
  v38[0] = v12;
  (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 8LL))(v12);
  v38[0] = std::use_facet<std::ctype<unsigned short>>((std::locale *)v38);
  if ( v12 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v12 + 16LL))(v12);
    v12 = 0LL;
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v43 = 7LL;
  v42 = v12;
  LOWORD(v41[0]) = v12;
  std::wstring::assign(v41, a7, 0LL);
  v14 = v41;
  if ( v43 >= 8 )
    v14 = (void **)v41[0];
  (*(void (__fastcall **)(_QWORD, _BYTE *, _BYTE *, void **))(*(_QWORD *)v38[0] + 88LL))(v38[0], a6, &a6[a7], v14);
  v15 = **(_QWORD **)(a4 + 64);
  v38[0] = v15;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = std::use_facet<std::numpunct<unsigned short>>((std::locale *)v38);
  if ( v15 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v16 + 40LL))(v16, v44);
  v18 = v44;
  if ( v45 >= 0x10 )
    v18 = (void **)v44[0];
  if ( (unsigned __int8)(*(_BYTE *)v18 - 1) <= 0x7Du )
  {
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
    v20 = *(_BYTE *)v18;
    if ( *(_BYTE *)v18 != 127 )
    {
      do
      {
        if ( v20 <= 0 || v20 >= v10 - v11 )
          break;
        v10 -= v20;
        std::wstring::insert(v41, v10, 1LL, v19);
        if ( *((char *)v18 + 1) > 0 )
          v18 = (void **)((char *)v18 + 1);
        v20 = *(_BYTE *)v18;
      }
      while ( *(_BYTE *)v18 != 127 );
      v9 = v37;
    }
  }
  v21 = v42;
  v22 = *(_QWORD *)(a4 + 40);
  if ( v22 <= 0 || v22 <= v42 )
    v23 = 0LL;
  else
    v23 = v22 - v42;
  v24 = *(_DWORD *)(a4 + 24) & 0x1C0;
  v37 = *a3;
  if ( v24 == 64 )
  {
    v31 = v41;
    if ( v43 >= 8 )
      LODWORD(v31) = v41[0];
    v28 = (__int128 *)std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(
                        v9,
                        (unsigned int)v38,
                        (unsigned int)&v37,
                        (_DWORD)v31,
                        v11);
    v25 = a5;
    goto LABEL_42;
  }
  if ( v24 != 256 )
  {
    v25 = a5;
    v26 = (__int128 *)std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Rep(
                        v9,
                        (unsigned int)v38,
                        (unsigned int)&v37,
                        a5,
                        v23);
    v23 = 0LL;
    v27 = v41;
    if ( v43 >= 8 )
      LODWORD(v27) = v41[0];
    v37 = *v26;
    v28 = (__int128 *)std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(
                        v9,
                        (unsigned int)v38,
                        (unsigned int)&v37,
                        (_DWORD)v27,
                        v11);
LABEL_42:
    v30 = *v28;
    goto LABEL_43;
  }
  v29 = v41;
  if ( v43 >= 8 )
    LODWORD(v29) = v41[0];
  v37 = *(_OWORD *)std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(
                     v9,
                     (unsigned int)v38,
                     (unsigned int)&v37,
                     (_DWORD)v29,
                     v11);
  v25 = a5;
  v30 = *(_OWORD *)std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Rep(
                     v9,
                     (unsigned int)v38,
                     (unsigned int)&v37,
                     a5,
                     v23);
  v23 = 0LL;
LABEL_43:
  *a3 = v30;
  v32 = v41;
  if ( v43 >= 8 )
    LODWORD(v32) = v41[0];
  v37 = v30;
  v33 = *(_OWORD *)std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(
                     v9,
                     (unsigned int)v38,
                     (unsigned int)&v37,
                     (int)v32 + 2 * (int)v11,
                     v21 - v11);
  *(_QWORD *)(a4 + 40) = 0LL;
  v37 = v33;
  v36 = v23;
  v34 = v39;
  std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Rep(v9, v39, (unsigned int)&v37, v25, v36);
  if ( v45 >= 0x10 )
    operator delete(v44[0]);
  v45 = 15LL;
  v44[2] = 0LL;
  LOBYTE(v44[0]) = 0;
  if ( v43 >= 8 )
    operator delete(v41[0]);
  return v34;
}
