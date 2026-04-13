/*
 * XREFs of ?do_put@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_WO@Z @ 0x18001A280
 * Callers:
 *     <none>
 * Callees:
 *     ?_Putmfld@?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@_NAEAVios_base@2@_W1V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@3@Z @ 0x180017510 (-_Putmfld@-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ost.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002264D (--3@YAXPEAX@Z_0.c)
 *     sprintf_s_0 @ 0x1800227A8 (sprintf_s_0.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005BFF4 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005C11C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005C2DC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180083830 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::do_put(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        char a4,
        __int64 a5,
        unsigned __int16 a6,
        double a7)
{
  double v9; // xmm3_8
  unsigned __int64 i; // r14
  int v11; // eax
  __int64 v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rdi
  void (__fastcall ***v16)(_QWORD, __int64); // r8
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  unsigned __int16 v18; // di
  void **v19; // r9
  _QWORD v22[3]; // [rsp+60h] [rbp-89h] BYREF
  __int64 v23; // [rsp+78h] [rbp-71h]
  _WORD v24[8]; // [rsp+80h] [rbp-69h] BYREF
  __int64 v25; // [rsp+90h] [rbp-59h]
  __int64 v26; // [rsp+98h] [rbp-51h]
  __int64 v27; // [rsp+A0h] [rbp-49h]
  void *v28[3]; // [rsp+A8h] [rbp-41h] BYREF
  unsigned __int64 v29; // [rsp+C0h] [rbp-29h]
  char Buffer[40]; // [rsp+C8h] [rbp-21h] BYREF

  v27 = -2LL;
  v23 = a1;
  v9 = a7;
  if ( a7 < 0.0 )
    *(_QWORD *)&v9 = *(_QWORD *)&a7 ^ _xmm;
  for ( i = 0LL; v9 >= 1.0e35 && i < 0x1388; i += 10LL )
    v9 = v9 / 1.0e10;
  v11 = sprintf_s_0(Buffer, 0x28uLL, "%.0Lf", v9);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = **(_QWORD **)(a5 + 64);
    v22[1] = v13;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v15 = std::use_facet<std::ctype<wchar_t>>((std::locale *)&v22[1]);
    v22[1] = v15;
    if ( v13 )
    {
      v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v16 = v17;
      if ( v17 )
        (**v17)(v17, 1LL);
    }
    LOBYTE(v14) = 48;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v15 + 96LL))(
            v15,
            v14,
            v16);
    v29 = 7LL;
    v28[2] = 0LL;
    LOWORD(v28[0]) = 0;
    std::wstring::assign(v28, v12, 0LL);
    v19 = v28;
    if ( v29 >= 8 )
      v19 = (void **)v28[0];
    (*(void (__fastcall **)(_QWORD, char *, char *, void **))(*(_QWORD *)v22[1] + 88LL))(
      v22[1],
      Buffer,
      &Buffer[v12],
      v19);
    std::wstring::append(v28, i, v18);
    v26 = 7LL;
    v25 = 0LL;
    v24[0] = 0;
    std::wstring::assign(v24, v28, 0LL, -1LL);
    *(_OWORD *)&v22[1] = *a3;
    std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Putmfld(
      v23,
      (__int64)a2,
      (__int128 *)&v22[1],
      a4,
      a5,
      a6,
      a7 < 0.0,
      (__int64)v24,
      v18);
    if ( v29 >= 8 )
      operator delete(v28[0]);
  }
  else
  {
    *a2 = *a3;
  }
  return a2;
}
