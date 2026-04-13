/*
 * XREFs of ?do_get_time@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B4640
 * Callers:
 *     <none>
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18004CA24 (--1locale@std@@QEAA@XZ.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18004CE20 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005B0D8 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18005DE34 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180083830 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAHAEBV?$ctype@_W@2@@Z @ 0x1800B3860 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get_time(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7)
{
  std::locale *v11; // rax
  const struct std::locale::facet *v12; // rsi
  _DWORD *v13; // r13
  int v14; // eax
  _DWORD *v15; // rbx
  bool v16; // zf
  unsigned __int16 *v17; // rax
  unsigned __int16 *v18; // rax
  char v20; // [rsp+78h] [rbp+10h] BYREF

  v11 = std::ios_base::getloc(a5, (std::locale *)&v20);
  v12 = std::use_facet<std::ctype<wchar_t>>(v11);
  std::locale::~locale((std::locale *)&v20);
  v13 = a7;
  v14 = std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
          a1,
          (__int64)a3,
          a4,
          0,
          23,
          a7 + 2,
          (__int64)v12);
  v15 = a6;
  v16 = (v14 | *a6) == 0;
  *a6 |= v14;
  if ( v16
    && (v17 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3),
        (*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, _QWORD, _QWORD))(*(_QWORD *)v12 + 112LL))(
          v12,
          *v17,
          0LL) == 58) )
  {
    std::istreambuf_iterator<unsigned short>::_Inc((__int64)a3);
    *v15 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
              a1,
              (__int64)a3,
              a4,
              0,
              59,
              v13 + 1,
              (__int64)v12);
  }
  else
  {
    *v15 |= 2u;
  }
  if ( *v15
    || (v18 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3),
        (*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, _QWORD, _QWORD))(*(_QWORD *)v12 + 112LL))(
          v12,
          *v18,
          0LL) != 58) )
  {
    *v15 |= 2u;
  }
  else
  {
    std::istreambuf_iterator<unsigned short>::_Inc((__int64)a3);
    *v15 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
              a1,
              (__int64)a3,
              a4,
              0,
              59,
              v13,
              (__int64)v12);
  }
  *a2 = *a3;
  return a2;
}
