/*
 * XREFs of ?do_get_time@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800208F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800066BC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800093C4 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAEAHAEBV?$ctype@D@2@@Z @ 0x18001D5E0 (-_Getint@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::do_get_time(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v11; // rbx
  struct std::_Facet_base *v12; // rsi
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  _DWORD *v14; // r14
  int v15; // eax
  unsigned __int8 *v16; // rdx
  _DWORD *v17; // rbx
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax

  v11 = **(_QWORD **)(a5 + 64);
  a5 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<char>>(&a5);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v14 = a7;
  v15 = std::time_get<char,std::istreambuf_iterator<char>>::_Getint(a1, a3, a4, 0, 23, a7 + 2, (__int64)v12);
  v17 = a6;
  v18 = (v15 | *a6) == 0;
  *a6 |= v15;
  if ( !v18 )
    goto LABEL_17;
  if ( !*(_BYTE *)(a3 + 8) )
  {
    v19 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3
      || ((v16 = **(unsigned __int8 ***)(v19 + 56)) == 0LL || **(int **)(v19 + 80) <= 0
        ? (v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19))
        : (v20 = *v16),
          v20 == -1) )
    {
      *(_QWORD *)a3 = 0LL;
    }
    else
    {
      *(_BYTE *)(a3 + 9) = v20;
    }
    *(_BYTE *)(a3 + 8) = 1;
  }
  LOBYTE(v16) = *(_BYTE *)(a3 + 9);
  if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, unsigned __int8 *, _QWORD))(*(_QWORD *)v12 + 80LL))(
         v12,
         v16,
         0LL) == 58 )
  {
    std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
    *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(a1, a3, a4, 0, 59, v14 + 1, (__int64)v12);
  }
  else
  {
LABEL_17:
    *v17 |= 2u;
  }
  if ( *v17 )
    goto LABEL_31;
  if ( !*(_BYTE *)(a3 + 8) )
  {
    v21 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3
      || ((v16 = **(unsigned __int8 ***)(v21 + 56)) == 0LL || **(int **)(v21 + 80) <= 0
        ? (v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21))
        : (v22 = *v16),
          v22 == -1) )
    {
      *(_QWORD *)a3 = 0LL;
    }
    else
    {
      *(_BYTE *)(a3 + 9) = v22;
    }
    *(_BYTE *)(a3 + 8) = 1;
  }
  LOBYTE(v16) = *(_BYTE *)(a3 + 9);
  if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, unsigned __int8 *, _QWORD))(*(_QWORD *)v12 + 80LL))(
         v12,
         v16,
         0LL) != 58 )
  {
LABEL_31:
    *v17 |= 2u;
  }
  else
  {
    std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
    *v17 |= std::time_get<char,std::istreambuf_iterator<char>>::_Getint(a1, a3, a4, 0, 59, v14, (__int64)v12);
  }
  *a2 = *(_OWORD *)a3;
  return a2;
}
