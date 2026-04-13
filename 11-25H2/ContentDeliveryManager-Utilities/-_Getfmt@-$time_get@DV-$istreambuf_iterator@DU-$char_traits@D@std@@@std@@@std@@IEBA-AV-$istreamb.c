/*
 * XREFs of ?_Getfmt@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x18001D370
 * Callers:
 *     ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x18001FB80 (-do_get@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 * Callees:
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800066BC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800093C4 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000BAE4 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<char,std::istreambuf_iterator<char>>::_Getfmt(
        __int64 *a1,
        _OWORD *a2,
        __int128 *a3,
        __int64 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        char *a8)
{
  __int64 *v11; // r14
  __int64 v12; // rbp
  __int64 v13; // rbx
  unsigned __int8 *v14; // rdx
  void (__fastcall ***v15)(_QWORD, __int64); // r8
  struct std::_Facet_base *v16; // r13
  void (__fastcall ***v17)(_QWORD, __int64); // rax
  char *v18; // rsi
  _DWORD *v19; // rbx
  __int64 v20; // rax
  unsigned __int8 *v21; // rbp
  __int64 v22; // rcx
  int v23; // eax
  char v24; // al
  __int64 v25; // rcx
  int v26; // eax
  int v28; // [rsp+38h] [rbp-90h]
  int v29; // [rsp+40h] [rbp-88h]
  __int128 v30; // [rsp+60h] [rbp-68h] BYREF
  __int128 v31; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v32[72]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v34; // [rsp+D8h] [rbp+10h] BYREF

  v11 = a1;
  v12 = a5;
  v13 = **(_QWORD **)(a5 + 64);
  v34 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v16 = std::use_facet<std::ctype<char>>(&v34);
  if ( v13 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v15 = v17;
    if ( v17 )
      (**v17)(v17, 1LL);
  }
  v18 = a8;
  v19 = a6;
  while ( 1 )
  {
    v24 = *v18;
    if ( !*v18 )
      break;
    if ( v24 == 37 )
    {
      v20 = *v11;
      ++v18;
      v30 = *(_OWORD *)a4;
      v31 = *a3;
      LOBYTE(v29) = 0;
      LOBYTE(v28) = *v18;
      *a3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int128 *, __int128 *, __int64, _DWORD *, __int64, int, int))(v20 + 72))(
                         v11,
                         v32,
                         &v31,
                         &v30,
                         v12,
                         v19,
                         a7,
                         v28,
                         v29);
    }
    else if ( v24 == 32 )
    {
      if ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
      {
        v21 = (unsigned __int8 *)a3 + 9;
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
          {
            v22 = *(_QWORD *)a3;
            if ( !*(_QWORD *)a3
              || ((v14 = **(unsigned __int8 ***)(v22 + 56)) == 0LL || **(int **)(v22 + 80) <= 0
                ? (v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 48LL))(v22))
                : (v23 = *v14),
                  v23 == -1) )
            {
              *(_QWORD *)a3 = 0LL;
            }
            else
            {
              *((_BYTE *)a3 + 9) = v23;
              v21 = (unsigned __int8 *)a3 + 9;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( (*(_BYTE *)(*((_QWORD *)v16 + 3) + 2LL * *v21) & 0x48) == 0 )
            break;
          std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
        }
        while ( !std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) );
        v11 = a1;
        v12 = a5;
      }
    }
    else
    {
      if ( !*((_BYTE *)a3 + 8) )
      {
        v25 = *(_QWORD *)a3;
        if ( !*(_QWORD *)a3
          || ((v14 = **(unsigned __int8 ***)(v25 + 56)) == 0LL || **(int **)(v25 + 80) <= 0
            ? (v26 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v25 + 48LL))(
                       v25,
                       v14,
                       v15))
            : (v26 = *v14),
              v26 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *((_BYTE *)a3 + 9) = v26;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      LOBYTE(v14) = *((_BYTE *)a3 + 9);
      if ( (*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, unsigned __int8 *, _QWORD))(*(_QWORD *)v16 + 80LL))(
             v16,
             v14,
             0LL) != *v18 )
      {
        *v19 |= 2u;
        break;
      }
      std::istreambuf_iterator<char>::_Inc((__int64 *)a3);
    }
    ++v18;
  }
  if ( std::istreambuf_iterator<char>::equal((__int64 *)a3, a4) )
    *v19 |= 1u;
  *a2 = *a3;
  return a2;
}
