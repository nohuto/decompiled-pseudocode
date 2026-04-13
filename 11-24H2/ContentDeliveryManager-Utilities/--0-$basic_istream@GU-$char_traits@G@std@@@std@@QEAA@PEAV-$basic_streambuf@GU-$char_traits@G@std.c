/*
 * XREFs of ??0?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@_N@Z @ 0x18004AAE8
 * Callers:
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x18004ABB0 (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 *     ??0?$basic_iostream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@@Z @ 0x18005FF3C (--0-$basic_iostream@GU-$char_traits@G@std@@@std@@QEAA@PEAV-$basic_streambuf@GU-$char_traits@G@st.c)
 * Callees:
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049558 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18004CA24 (--1locale@std@@QEAA@XZ.c)
 *     ?_Init@ios_base@std@@IEAAXXZ @ 0x18005B408 (-_Init@ios_base@std@@IEAAXXZ.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18005DE34 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18005E76C (-setstate@-$basic_ios@GU-$char_traits@G@std@@@std@@QEAAXH_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::basic_istream<unsigned short>::basic_istream<unsigned short>(_QWORD *a1, __int64 a2, char a3)
{
  std::ios_base *v5; // rsi
  std::locale *v6; // rax
  const struct std::locale::facet *v7; // rbx
  __int64 v8; // rdx
  char v10; // [rsp+38h] [rbp+10h] BYREF
  char v11; // [rsp+40h] [rbp+18h]

  v11 = a3;
  *(_QWORD *)((char *)a1 + *(int *)(*a1 + 4LL)) = &std::basic_istream<unsigned short>::`vftable';
  *(_DWORD *)((char *)a1 + *(int *)(*a1 + 4LL) - 4) = *(_DWORD *)(*a1 + 4LL) - 24;
  a1[1] = 0LL;
  v5 = (std::ios_base *)((char *)a1 + *(int *)(*a1 + 4LL));
  std::ios_base::_Init(v5);
  *((_QWORD *)v5 + 9) = a2;
  *((_QWORD *)v5 + 10) = 0LL;
  v6 = (std::locale *)std::ios_base::getloc(v5, &v10);
  v7 = std::use_facet<std::ctype<unsigned short>>(v6);
  std::locale::~locale((std::locale *)&v10);
  v8 = *(_QWORD *)v7;
  LOBYTE(v8) = 32;
  *((_WORD *)v5 + 44) = (*(__int64 (__fastcall **)(const struct std::locale::facet *, __int64))(*(_QWORD *)v7 + 96LL))(
                          v7,
                          v8);
  if ( !*((_QWORD *)v5 + 9) )
    std::basic_ios<unsigned short>::setstate(v5, 4LL);
  return a1;
}
