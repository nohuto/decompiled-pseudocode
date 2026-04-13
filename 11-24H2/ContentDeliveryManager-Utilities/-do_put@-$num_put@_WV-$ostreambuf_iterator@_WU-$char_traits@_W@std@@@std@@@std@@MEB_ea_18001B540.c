/*
 * XREFs of ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_W_N@Z @ 0x18001B540
 * Callers:
 *     <none>
 * Callees:
 *     ?_Put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@PEB_W_K@Z @ 0x180016BEC (-_Put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreambu.c)
 *     ?_Rep@?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@GU?$char_traits@G@std@@@2@V32@G_K@Z @ 0x180017E28 (-_Rep@-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$ostreambuf_i.c)
 *     ??3@YAXPEAX@Z_0 @ 0x18002264D (--3@YAXPEAX@Z_0.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180059830 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x18009D78C (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
_OWORD *__fastcall std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::do_put(
        __int64 a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 a5,
        char a6)
{
  unsigned __int64 v10; // rbx
  __int64 *v11; // rsi
  void (__fastcall ***v12)(_QWORD, __int64); // r8
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rbx
  unsigned __int16 *v18; // r9
  __int128 v19; // xmm0
  __int128 v21; // [rsp+40h] [rbp-59h] BYREF
  __int64 v22; // [rsp+50h] [rbp-49h]
  void *v23[2]; // [rsp+58h] [rbp-41h] BYREF
  unsigned __int64 v24; // [rsp+68h] [rbp-31h]
  unsigned __int64 v25; // [rsp+70h] [rbp-29h]
  void *v26[4]; // [rsp+78h] [rbp-21h] BYREF

  v22 = -2LL;
  if ( (*(_DWORD *)(a4 + 24) & 0x4000) != 0 )
  {
    v10 = **(_QWORD **)(a4 + 64);
    *(_QWORD *)&v21 = v10;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = (__int64 *)std::use_facet<std::numpunct<wchar_t>>((std::locale *)&v21);
    if ( v10 )
    {
      v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v10 + 16LL))(v10);
      v12 = v13;
      v10 = 0LL;
      if ( v13 )
        (**v13)(v13, 1LL);
    }
    v25 = 7LL;
    v24 = v10;
    LOWORD(v23[0]) = v10;
    v14 = *v11;
    if ( a6 == (_BYTE)v10 )
      (*(void (__fastcall **)(__int64 *, void **, void (__fastcall ***)(_QWORD, __int64)))(v14 + 48))(v11, v26, v12);
    else
      (*(void (__fastcall **)(__int64 *, void **, void (__fastcall ***)(_QWORD, __int64)))(v14 + 56))(v11, v26, v12);
    v25 = 7LL;
    v24 = v10;
    LOWORD(v23[0]) = v10;
    std::wstring::_Assign_rv(v23, v26);
    if ( v26[3] >= (void *)8 )
      operator delete(v26[0]);
    v15 = *(_QWORD *)(a4 + 40);
    v16 = v24;
    if ( v15 <= 0 || v15 <= v24 )
      v17 = 0LL;
    else
      v17 = v15 - v24;
    if ( (*(_DWORD *)(a4 + 24) & 0x1C0) != 0x40 )
    {
      v21 = *a3;
      *a3 = *std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Rep(
               a1,
               v26,
               (__int64)&v21,
               a5,
               v17);
      v17 = 0LL;
    }
    v18 = (unsigned __int16 *)v23;
    if ( v25 >= 8 )
      v18 = (unsigned __int16 *)v23[0];
    v21 = *a3;
    v19 = *std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Put(a1, v26, (__int64)&v21, v18, v16);
    *(_QWORD *)(a4 + 40) = 0LL;
    v21 = v19;
    std::num_put<unsigned short,std::ostreambuf_iterator<unsigned short>>::_Rep(a1, a2, (__int64)&v21, a5, v17);
    if ( v25 >= 8 )
      operator delete(v23[0]);
  }
  else
  {
    v21 = *a3;
    (*(void (__fastcall **)(__int64, _OWORD *, __int128 *))(*(_QWORD *)a1 + 72LL))(a1, a2, &v21);
  }
  return a2;
}
