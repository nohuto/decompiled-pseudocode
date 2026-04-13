/*
 * XREFs of ?_Getint@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0HHAEAHAEBV?$ctype@G@2@@Z @ 0x180012408
 * Callers:
 *     ?do_get@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800185B0 (-do_get@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 *     ?do_get_date@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180018AC0 (-do_get_date@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istr.c)
 *     ?do_get_time@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800193D0 (-do_get_time@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istr.c)
 *     ?do_get_year@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180019670 (-do_get_year@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istr.c)
 * Callees:
 *     _Stolx @ 0x180004BAC (_Stolx.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005B0D8 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005D464 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rdi
  __int64 v10; // rcx
  __int16 *v11; // rdx
  __int16 v12; // ax
  char v13; // al
  char v14; // r15
  unsigned __int16 *v15; // rsi
  __int64 v16; // rcx
  __int16 *v17; // rdx
  __int16 v18; // ax
  unsigned __int16 *v19; // rsi
  __int64 v20; // rcx
  __int16 *v21; // rdx
  __int16 v22; // ax
  unsigned __int8 v23; // al
  unsigned __int8 *v24; // rax
  int v25; // edi
  __int64 result; // rax
  int v27; // [rsp+20h] [rbp-50h] BYREF
  int v28; // [rsp+24h] [rbp-4Ch]
  unsigned __int8 *v29; // [rsp+28h] [rbp-48h]
  unsigned __int8 *v30; // [rsp+30h] [rbp-40h] BYREF
  _DWORD *v31; // [rsp+38h] [rbp-38h]
  unsigned __int8 v32; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v33[30]; // [rsp+41h] [rbp-2Fh] BYREF
  char v34; // [rsp+5Fh] [rbp-11h] BYREF

  v7 = &v32;
  v28 = a4;
  v31 = a6;
  v30 = 0LL;
  v29 = &v32;
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a2, a3) )
  {
    if ( !*((_BYTE *)a2 + 8) )
    {
      v10 = *a2;
      if ( !*a2
        || ((v11 = **(__int16 ***)(v10 + 56)) == 0LL || **(int **)(v10 + 80) <= 0
          ? (v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10))
          : (v12 = *v11),
            v12 == -1) )
      {
        *a2 = 0LL;
      }
      else
      {
        *((_WORD *)a2 + 5) = v12;
      }
      *((_BYTE *)a2 + 8) = 1;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(
            a7,
            *((unsigned __int16 *)a2 + 5),
            0LL);
    if ( v13 == 43 )
    {
      v32 = 43;
    }
    else
    {
      if ( v13 != 45 )
        goto LABEL_17;
      v32 = 45;
    }
    v7 = v33;
    v29 = v33;
    std::istreambuf_iterator<unsigned short>::_Inc(a2);
  }
LABEL_17:
  v14 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a2, a3) )
  {
    v15 = (unsigned __int16 *)a2 + 5;
    do
    {
      if ( !*((_BYTE *)a2 + 8) )
      {
        v16 = *a2;
        if ( !*a2
          || ((v17 = **(__int16 ***)(v16 + 56)) == 0LL || **(int **)(v16 + 80) <= 0
            ? (v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 48LL))(v16))
            : (v18 = *v17),
              v18 == -1) )
        {
          *a2 = 0LL;
        }
        else
        {
          *((_WORD *)a2 + 5) = v18;
          v15 = (unsigned __int16 *)a2 + 5;
        }
        *((_BYTE *)a2 + 8) = 1;
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(a7, *v15, 0LL) != 48 )
        break;
      v14 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a2);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a2, a3) );
    v7 = v29;
    if ( v14 )
    {
      *v29 = 48;
      ++v7;
    }
  }
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a2, a3) )
  {
    v19 = (unsigned __int16 *)a2 + 5;
    do
    {
      if ( !*((_BYTE *)a2 + 8) )
      {
        v20 = *a2;
        if ( !*a2
          || ((v21 = **(__int16 ***)(v20 + 56)) == 0LL || **(int **)(v20 + 80) <= 0
            ? (v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20))
            : (v22 = *v21),
              v22 == -1) )
        {
          *a2 = 0LL;
        }
        else
        {
          *((_WORD *)a2 + 5) = v22;
          v19 = (unsigned __int16 *)a2 + 5;
        }
        *((_BYTE *)a2 + 8) = 1;
      }
      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(a7, *v19, 0LL);
      if ( (unsigned __int8)(v23 - 48) > 9u )
        break;
      *v7 = v23;
      if ( v7 < (unsigned __int8 *)&v34 )
        ++v7;
      v14 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a2);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a2, a3) );
  }
  v27 = 0;
  v24 = &v32;
  if ( v14 )
    v24 = v7;
  *v24 = 0;
  v25 = Stolx(&v32, &v30, 0xAu, &v27);
  result = (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a2, a3);
  if ( v30 == &v32 || v27 || v25 < v28 || a5 < v25 )
    return (unsigned __int8)result | 2u;
  *v31 = v25;
  return result;
}
