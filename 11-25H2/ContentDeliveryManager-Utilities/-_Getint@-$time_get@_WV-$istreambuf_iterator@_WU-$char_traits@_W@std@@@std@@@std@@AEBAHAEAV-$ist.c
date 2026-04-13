/*
 * XREFs of ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAHAEBV?$ctype@_W@2@@Z @ 0x1800B3540
 * Callers:
 *     ?do_get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800B38B0 (-do_get@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istrea.c)
 *     ?do_get_date@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B3D70 (-do_get_date@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$i.c)
 *     ?do_get_time@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B4320 (-do_get_time@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$i.c)
 *     ?do_get_year@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B44E0 (-do_get_year@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$i.c)
 * Callees:
 *     _Stolx @ 0x180004B9C (_Stolx.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18004CC20 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005AC38 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005CF84 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rbx
  unsigned __int16 *v11; // rax
  char v12; // al
  char i; // si
  unsigned __int16 *v14; // rax
  unsigned __int8 *v15; // r14
  unsigned __int16 *v16; // rax
  unsigned __int8 v17; // al
  unsigned __int8 *v18; // rax
  int v19; // ebx
  __int64 result; // rax
  int v21; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 *v22; // [rsp+28h] [rbp-38h] BYREF
  _DWORD *v23; // [rsp+30h] [rbp-30h]
  unsigned __int8 v24; // [rsp+38h] [rbp-28h] BYREF
  char v25; // [rsp+39h] [rbp-27h] BYREF
  char v26; // [rsp+57h] [rbp-9h] BYREF

  v7 = &v24;
  v22 = 0LL;
  v23 = a6;
  if ( std::istreambuf_iterator<wchar_t>::equal(a2, a3) )
    goto LABEL_7;
  v11 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a2);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(a7, *v11, 0LL);
  if ( v12 == 43 )
  {
    v24 = 43;
LABEL_6:
    v7 = (unsigned __int8 *)&v25;
    std::istreambuf_iterator<unsigned short>::_Inc(a2);
    goto LABEL_7;
  }
  if ( v12 == 45 )
  {
    v24 = 45;
    goto LABEL_6;
  }
LABEL_7:
  for ( i = 0; !std::istreambuf_iterator<wchar_t>::equal(a2, a3); i = 1 )
  {
    v14 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a2);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(a7, *v14, 0LL) != 48 )
      break;
    std::istreambuf_iterator<unsigned short>::_Inc(a2);
  }
  if ( i )
    *v7++ = 48;
  while ( 1 )
  {
    v15 = v7;
    if ( std::istreambuf_iterator<wchar_t>::equal(a2, a3) )
      break;
    v16 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a2);
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(a7, *v16, 0LL);
    if ( (unsigned __int8)(v17 - 48) > 9u )
      break;
    *v7 = v17;
    i = 1;
    std::istreambuf_iterator<unsigned short>::_Inc(a2);
    ++v7;
    if ( v15 >= (unsigned __int8 *)&v26 )
      v7 = v15;
  }
  v18 = &v24;
  v21 = 0;
  if ( i )
    v18 = v7;
  *v18 = 0;
  v19 = Stolx(&v24, &v22, 0xAu, &v21);
  result = (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a2, a3);
  if ( v22 == &v24 || v21 || v19 < a4 || a5 < v19 )
    return (unsigned __int8)result | 2u;
  *v23 = v19;
  return result;
}
