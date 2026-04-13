/*
 * XREFs of ?do_get_time@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800193C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Getint@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0HHAEAHAEBV?$ctype@G@2@@Z @ 0x1800123F8 (-_Getint@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHAEAV-$istrea.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049358 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005AC38 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get_time(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v11; // rbx
  __int64 v12; // rsi
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  _DWORD *v14; // r14
  int v15; // eax
  _DWORD *v16; // rbx
  bool v17; // zf
  __int64 v18; // rcx
  __int16 *v19; // rdx
  __int16 v20; // ax
  __int64 v21; // rcx
  __int16 *v22; // rdx
  __int16 v23; // ax

  v11 = **(_QWORD **)(a5 + 64);
  a5 = v11;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = std::use_facet<std::ctype<unsigned short>>((std::locale *)&a5);
  if ( v11 )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v14 = a7;
  v15 = std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
          a1,
          (__int64 *)a3,
          a4,
          0,
          23,
          a7 + 2,
          v12);
  v16 = a6;
  v17 = (v15 | *a6) == 0;
  *a6 |= v15;
  if ( !v17 )
    goto LABEL_17;
  if ( !*(_BYTE *)(a3 + 8) )
  {
    v18 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3
      || ((v19 = **(__int16 ***)(v18 + 56)) == 0LL || **(int **)(v18 + 80) <= 0
        ? (v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 48LL))(v18))
        : (v20 = *v19),
          v20 == -1) )
    {
      *(_QWORD *)a3 = 0LL;
    }
    else
    {
      *(_WORD *)(a3 + 10) = v20;
    }
    *(_BYTE *)(a3 + 8) = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 112LL))(
         v12,
         *(unsigned __int16 *)(a3 + 10),
         0LL) == 58 )
  {
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    *v16 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
              a1,
              (__int64 *)a3,
              a4,
              0,
              59,
              v14 + 1,
              v12);
  }
  else
  {
LABEL_17:
    *v16 |= 2u;
  }
  if ( *v16 )
    goto LABEL_31;
  if ( !*(_BYTE *)(a3 + 8) )
  {
    v21 = *(_QWORD *)a3;
    if ( !*(_QWORD *)a3
      || ((v22 = **(__int16 ***)(v21 + 56)) == 0LL || **(int **)(v21 + 80) <= 0
        ? (v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21))
        : (v23 = *v22),
          v23 == -1) )
    {
      *(_QWORD *)a3 = 0LL;
    }
    else
    {
      *(_WORD *)(a3 + 10) = v23;
    }
    *(_BYTE *)(a3 + 8) = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v12 + 112LL))(
         v12,
         *(unsigned __int16 *)(a3 + 10),
         0LL) != 58 )
  {
LABEL_31:
    *v16 |= 2u;
  }
  else
  {
    std::istreambuf_iterator<unsigned short>::_Inc(a3);
    *v16 |= std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
              a1,
              (__int64 *)a3,
              a4,
              0,
              59,
              v14,
              v12);
  }
  *a2 = *(_OWORD *)a3;
  return a2;
}
