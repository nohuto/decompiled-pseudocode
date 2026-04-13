/*
 * XREFs of ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18009FFB0
 * Callers:
 *     <none>
 * Callees:
 *     _Stoulx @ 0x180004C98 (_Stoulx.c)
 *     ??$_Getloctxt@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBG@Z @ 0x180048D18 (--$_Getloctxt@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@YAHAEAV-$istreambuf_ite.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@_K_W@Z @ 0x18004ADB0 (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@_K_W@Z.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18004CA24 (--1locale@std@@QEAA@XZ.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005BCA8 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005BF0C (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005BFF4 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005D464 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?falsename@?$numpunct@G@std@@QEBA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@XZ @ 0x18005D964 (-falsename@-$numpunct@G@std@@QEBA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@2@XZ.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18005DE34 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?truename@?$numpunct@_W@std@@QEBA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@XZ @ 0x18005E884 (-truename@-$numpunct@_W@std@@QEBA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@2.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x18009D78C (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     ?_Getifld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1HAEBVlocale@2@@Z @ 0x18009F0BC (-_Getifld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

_OWORD *__fastcall std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        bool *a7)
{
  int v10; // edi
  std::locale *v11; // rax
  const struct std::locale::facet *v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  __int16 *v15; // r9
  std::locale *v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // ebx
  int v20; // [rsp+30h] [rbp-91h] BYREF
  char *v21; // [rsp+38h] [rbp-89h] BYREF
  int v22[2]; // [rsp+40h] [rbp-81h]
  _BYTE v23[8]; // [rsp+48h] [rbp-79h] BYREF
  _QWORD v24[4]; // [rsp+50h] [rbp-71h] BYREF
  _QWORD v25[4]; // [rsp+70h] [rbp-51h] BYREF
  char v26[32]; // [rsp+90h] [rbp-31h] BYREF

  *(_QWORD *)v22 = a1;
  v10 = -1;
  if ( (*(_DWORD *)(a5 + 24) & 0x4000) != 0 )
  {
    v11 = std::ios_base::getloc(a5, (std::locale *)&v21);
    v12 = std::use_facet<std::numpunct<wchar_t>>(v11);
    std::locale::~locale((std::locale *)&v21);
    std::wstring::wstring((__int64)v24, 1LL, 0LL);
    v13 = (_QWORD *)std::numpunct<unsigned short>::falsename((__int64)v12, (__int64)v25);
    std::wstring::append(v24, v13, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    std::wstring::_Tidy(v25, 1, 0LL);
    std::wstring::append(v24, 1uLL, 0);
    v14 = (_QWORD *)std::numpunct<wchar_t>::truename((__int64)v12, (__int64)v25);
    std::wstring::append(v24, v14, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    std::wstring::_Tidy(v25, 1, 0LL);
    v15 = (__int16 *)v24;
    if ( v24[3] >= 8uLL )
      v15 = (__int16 *)v24[0];
    v10 = std::_Getloctxt<unsigned short,std::istreambuf_iterator<unsigned short>>((__int64)a3, a4, 2uLL, v15);
    std::wstring::_Tidy(v24, 1, 0LL);
  }
  else
  {
    v21 = 0LL;
    v20 = 0;
    v16 = std::ios_base::getloc(a5, (std::locale *)v23);
    v17 = std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getifld(
            *(__int64 *)v22,
            v26,
            (__int64)a3,
            a4,
            *(_DWORD *)(a5 + 24),
            v16);
    v18 = Stoulx(v26, &v21, v17, &v20);
    std::locale::~locale((std::locale *)v23);
    if ( v21 != v26 && !v20 && v18 <= 1 )
      v10 = v18;
  }
  if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, a4) )
    *a6 |= 1u;
  if ( v10 >= 0 )
    *a7 = v10 != 0;
  else
    *a6 |= 2u;
  *a2 = *a3;
  return a2;
}
