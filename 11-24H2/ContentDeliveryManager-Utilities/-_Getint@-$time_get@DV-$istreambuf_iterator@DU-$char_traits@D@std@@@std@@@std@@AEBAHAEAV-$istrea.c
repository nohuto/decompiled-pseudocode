/*
 * XREFs of ?_Getint@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0HHAEAHAEBV?$ctype@D@2@@Z @ 0x18001D5F0
 * Callers:
 *     ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x18001FB90 (-do_get@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 *     ?do_get_date@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800200A0 (-do_get_date@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istr.c)
 *     ?do_get_time@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180020900 (-do_get_time@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istr.c)
 *     ?do_get_year@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180020B90 (-do_get_year@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istr.c)
 * Callees:
 *     _Stolx @ 0x180004BAC (_Stolx.c)
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800093D4 (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000BAF4 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::time_get<char,std::istreambuf_iterator<char>>::_Getint(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rdi
  unsigned __int8 *v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  char v13; // al
  char v14; // r15
  unsigned __int8 *v15; // rdx
  _BYTE *v16; // rsi
  __int64 v17; // rcx
  int v18; // eax
  unsigned __int8 *v19; // rdx
  _BYTE *v20; // rsi
  __int64 v21; // rcx
  int v22; // eax
  unsigned __int8 v23; // al
  unsigned __int8 *v24; // rax
  int v25; // edi
  __int64 result; // rax
  int v27; // [rsp+20h] [rbp-40h] BYREF
  int v28; // [rsp+24h] [rbp-3Ch]
  unsigned __int8 *v29; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v30; // [rsp+30h] [rbp-30h]
  unsigned __int8 v31; // [rsp+38h] [rbp-28h] BYREF
  char v32; // [rsp+39h] [rbp-27h] BYREF
  char v33; // [rsp+57h] [rbp-9h] BYREF

  v7 = &v31;
  v28 = a4;
  v30 = a6;
  v29 = 0LL;
  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a2, a3) )
  {
    if ( !*(_BYTE *)(a2 + 8) )
    {
      v11 = *(_QWORD *)a2;
      if ( !*(_QWORD *)a2
        || ((v10 = **(unsigned __int8 ***)(v11 + 56)) == 0LL || **(int **)(v11 + 80) <= 0
          ? (v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 48LL))(v11))
          : (v12 = *v10),
            v12 == -1) )
      {
        *(_QWORD *)a2 = 0LL;
      }
      else
      {
        *(_BYTE *)(a2 + 9) = v12;
      }
      *(_BYTE *)(a2 + 8) = 1;
    }
    LOBYTE(v10) = *(_BYTE *)(a2 + 9);
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, _QWORD))(*(_QWORD *)a7 + 80LL))(a7, v10, 0LL);
    if ( v13 == 43 )
    {
      v31 = 43;
    }
    else
    {
      if ( v13 != 45 )
        goto LABEL_17;
      v31 = 45;
    }
    v7 = (unsigned __int8 *)&v32;
    std::istreambuf_iterator<char>::_Inc((__int64 *)a2);
  }
LABEL_17:
  v14 = 0;
  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a2, a3) )
  {
    v16 = (_BYTE *)(a2 + 9);
    do
    {
      if ( !*(_BYTE *)(a2 + 8) )
      {
        v17 = *(_QWORD *)a2;
        if ( !*(_QWORD *)a2
          || ((v15 = **(unsigned __int8 ***)(v17 + 56)) == 0LL || **(int **)(v17 + 80) <= 0
            ? (v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 48LL))(v17))
            : (v18 = *v15),
              v18 == -1) )
        {
          *(_QWORD *)a2 = 0LL;
        }
        else
        {
          *(_BYTE *)(a2 + 9) = v18;
          v16 = (_BYTE *)(a2 + 9);
        }
        *(_BYTE *)(a2 + 8) = 1;
      }
      LOBYTE(v15) = *v16;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, _QWORD))(*(_QWORD *)a7 + 80LL))(a7, v15, 0LL) != 48 )
        break;
      v14 = 1;
      std::istreambuf_iterator<char>::_Inc((__int64 *)a2);
    }
    while ( !std::istreambuf_iterator<char>::equal((__int64 *)a2, a3) );
    if ( v14 )
      *v7++ = 48;
  }
  if ( !std::istreambuf_iterator<char>::equal((__int64 *)a2, a3) )
  {
    v20 = (_BYTE *)(a2 + 9);
    do
    {
      if ( !*(_BYTE *)(a2 + 8) )
      {
        v21 = *(_QWORD *)a2;
        if ( !*(_QWORD *)a2
          || ((v19 = **(unsigned __int8 ***)(v21 + 56)) == 0LL || **(int **)(v21 + 80) <= 0
            ? (v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 48LL))(v21))
            : (v22 = *v19),
              v22 == -1) )
        {
          *(_QWORD *)a2 = 0LL;
        }
        else
        {
          *(_BYTE *)(a2 + 9) = v22;
          v20 = (_BYTE *)(a2 + 9);
        }
        *(_BYTE *)(a2 + 8) = 1;
      }
      LOBYTE(v19) = *v20;
      v23 = (*(__int64 (__fastcall **)(__int64, unsigned __int8 *, _QWORD))(*(_QWORD *)a7 + 80LL))(a7, v19, 0LL);
      if ( (unsigned __int8)(v23 - 48) > 9u )
        break;
      *v7 = v23;
      if ( v7 < (unsigned __int8 *)&v33 )
        ++v7;
      v14 = 1;
      std::istreambuf_iterator<char>::_Inc((__int64 *)a2);
    }
    while ( !std::istreambuf_iterator<char>::equal((__int64 *)a2, a3) );
  }
  v27 = 0;
  v24 = &v31;
  if ( v14 )
    v24 = v7;
  *v24 = 0;
  v25 = Stolx(&v31, &v29, 0xAu, &v27);
  result = (unsigned __int8)std::istreambuf_iterator<char>::equal((__int64 *)a2, a3);
  if ( v29 == &v31 || v27 || v25 < v28 || a5 < v25 )
    return (unsigned __int8)result | 2u;
  *v30 = v25;
  return result;
}
