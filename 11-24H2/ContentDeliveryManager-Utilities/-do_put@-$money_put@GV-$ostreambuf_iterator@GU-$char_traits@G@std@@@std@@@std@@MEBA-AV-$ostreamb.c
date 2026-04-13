/*
 * XREFs of ?do_put@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@GAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180019BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Putmfld@?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@_NAEAVios_base@2@G1V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@G@Z @ 0x180016CAC (-_Putmfld@-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostrea.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002264D (--3@YAXPEAX@Z_0.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049558 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005BFF4 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005C11C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005C228 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::money_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::do_put(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        char a4,
        __int64 a5,
        unsigned __int16 a6,
        _QWORD *a7)
{
  __int64 v10; // rbx
  __int64 v11; // rsi
  void (__fastcall ***v12)(_QWORD, __int64); // rax
  char v13; // si
  __int64 v14; // rdx
  unsigned __int64 v15; // r11
  _WORD *v16; // rcx
  unsigned __int64 i; // r8
  _QWORD *v18; // rcx
  _WORD *v19; // rax
  __int16 v20; // r10
  __int16 v21; // cx
  unsigned __int16 v22; // bx
  __int128 v25; // [rsp+68h] [rbp-71h] BYREF
  _WORD v26[8]; // [rsp+78h] [rbp-61h] BYREF
  __int64 v27; // [rsp+88h] [rbp-51h]
  __int64 v28; // [rsp+90h] [rbp-49h]
  __int64 v29; // [rsp+98h] [rbp-41h]
  void *v30[2]; // [rsp+A0h] [rbp-39h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-29h]
  unsigned __int64 v32; // [rsp+B8h] [rbp-21h]
  _WORD v33[12]; // [rsp+C0h] [rbp-19h] BYREF

  v29 = -2LL;
  v10 = **(_QWORD **)(a5 + 64);
  *(_QWORD *)&v25 = v10;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
  v11 = std::use_facet<std::ctype<unsigned short>>((std::locale *)&v25);
  if ( v10 )
  {
    v12 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v10 = 0LL;
    if ( v12 )
      (**v12)(v12, 1LL);
  }
  (*(void (__fastcall **)(__int64, const char *, char *, _WORD *))(*(_QWORD *)v11 + 88LL))(v11, "0123456789-", "", v33);
  v13 = v10;
  v14 = v10;
  v15 = a7[2];
  if ( v15 )
  {
    v16 = a7[3] < 8uLL ? a7 : (_WORD *)*a7;
    if ( *v16 == v33[10] )
    {
      v13 = 1;
      v14 = 1LL;
    }
  }
  for ( i = v14; i < v15; ++i )
  {
    if ( a7[3] < 8uLL )
      v18 = a7;
    else
      v18 = (_QWORD *)*a7;
    v19 = v33;
    if ( v33[0] )
    {
      v20 = *((_WORD *)v18 + i);
      v21 = v33[0];
      do
      {
        if ( v21 == v20 )
          break;
        v21 = *++v19;
      }
      while ( *v19 );
    }
    if ( (unsigned __int64)(v19 - v33) >= 0xA )
      break;
  }
  v32 = 7LL;
  v31 = v10;
  LOWORD(v30[0]) = v10;
  std::wstring::assign(v30);
  if ( v31 == v10 )
    std::wstring::append(v30, 1LL, v33[0]);
  v22 = v33[0];
  v28 = 7LL;
  v27 = 0LL;
  v26[0] = 0;
  std::wstring::assign(v26, v30, 0LL, -1LL);
  v25 = *a3;
  std::money_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Putmfld(
    a1,
    a2,
    &v25,
    a4,
    a5,
    a6,
    v13,
    (__int64)v26,
    v22);
  if ( v32 >= 8 )
    operator delete(v30[0]);
  return a2;
}
