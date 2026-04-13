/*
 * XREFs of ?_Getfmt@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x180012168
 * Callers:
 *     ?do_get@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800185A0 (-do_get@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 * Callees:
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049358 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005AC38 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005CF84 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_OWORD *__fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getfmt(
        __int64 *a1,
        _OWORD *a2,
        __int128 *a3,
        __int128 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        char *a8)
{
  __int64 *v11; // r15
  __int64 v12; // r14
  __int64 v13; // rbx
  void (__fastcall ***v14)(_QWORD, __int64); // r8
  __int64 v15; // r13
  void (__fastcall ***v16)(_QWORD, __int64); // rax
  char *v17; // rsi
  _DWORD *v18; // rbx
  __int64 v19; // rax
  unsigned __int16 *v20; // r14
  __int64 v21; // rcx
  __int16 *v22; // rdx
  __int16 v23; // ax
  char v24; // al
  __int64 v25; // rcx
  __int16 *v26; // rdx
  __int16 v27; // ax
  int v29; // [rsp+38h] [rbp-90h]
  int v30; // [rsp+40h] [rbp-88h]
  __int128 v31; // [rsp+60h] [rbp-68h] BYREF
  __int128 v32; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v33[72]; // [rsp+80h] [rbp-48h] BYREF
  __int64 v35; // [rsp+D8h] [rbp+10h] BYREF

  v11 = a1;
  v12 = a5;
  v13 = **(_QWORD **)(a5 + 64);
  v35 = v13;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v15 = std::use_facet<std::ctype<unsigned short>>((std::locale *)&v35);
  if ( v13 )
  {
    v16 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = v16;
    if ( v16 )
      (**v16)(v16, 1LL);
  }
  v17 = a8;
  v18 = a6;
  while ( 1 )
  {
    v24 = *v17;
    if ( !*v17 )
      break;
    if ( v24 == 37 )
    {
      v19 = *v11;
      ++v17;
      v31 = *a4;
      v32 = *a3;
      LOBYTE(v30) = 0;
      LOBYTE(v29) = *v17;
      *a3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int128 *, __int128 *, __int64, _DWORD *, __int64, int, int))(v19 + 72))(
                         v11,
                         v33,
                         &v32,
                         &v31,
                         v12,
                         v18,
                         a7,
                         v29,
                         v30);
    }
    else if ( v24 == 32 )
    {
      if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
      {
        v20 = (unsigned __int16 *)a3 + 5;
        do
        {
          if ( !*((_BYTE *)a3 + 8) )
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
              *((_WORD *)a3 + 5) = v23;
              v20 = (unsigned __int16 *)a3 + 5;
            }
            *((_BYTE *)a3 + 8) = 1;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v15 + 32LL))(v15, 72LL, *v20) )
            break;
          std::istreambuf_iterator<unsigned short>::_Inc(a3);
        }
        while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) );
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
          || ((v26 = **(__int16 ***)(v25 + 56)) == 0LL || **(int **)(v25 + 80) <= 0
            ? (v27 = (*(__int64 (__fastcall **)(__int64, __int16 *, void (__fastcall ***)(_QWORD, __int64)))(*(_QWORD *)v25 + 48LL))(
                       v25,
                       v26,
                       v14))
            : (v27 = *v26),
              v27 == -1) )
        {
          *(_QWORD *)a3 = 0LL;
        }
        else
        {
          *((_WORD *)a3 + 5) = v27;
        }
        *((_BYTE *)a3 + 8) = 1;
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 112LL))(
             v15,
             *((unsigned __int16 *)a3 + 5),
             0LL) != *v17 )
      {
        *v18 |= 2u;
        break;
      }
      std::istreambuf_iterator<unsigned short>::_Inc(a3);
    }
    ++v17;
  }
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *v18 |= 1u;
  *a2 = *a3;
  return a2;
}
