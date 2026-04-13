/*
 * XREFs of ??$use_facet@V?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800B2F88
 * Callers:
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180015EC4 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800B2C14 (--$-5_WU-$char_traits@_W@std@@_W@std@@YAAEAV-$basic_istream@_WU-$char_traits@_W@std@@@0@AEAV10@A.c)
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180005124 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800051B4 (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1800052E8 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     _CxxThrowException_0 @ 0x1800227CC (_CxxThrowException_0.c)
 *     ??Bid@locale@std@@QEAA_KXZ @ 0x18004CDD0 (--Bid@locale@std@@QEAA_KXZ.c)
 *     ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x18005A01C (-_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z.c)
 *     ?_Getcat@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x1800B3628 (-_Getcat@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@SA_KPEAPEBVfac.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct std::locale::facet *__fastcall std::use_facet<std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>>(
        std::locale *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  const struct std::locale::facet *v4; // rbx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF
  struct std::_Facet_base *v8; // [rsp+60h] [rbp+18h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v7, 0);
  v2 = std::_Facetptr<std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>>::_Psave;
  v8 = (struct std::_Facet_base *)std::_Facetptr<std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>>::_Psave;
  v3 = std::locale::id::operator unsigned __int64((__int64)&std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::id);
  v4 = std::locale::_Getfacet(this, v3);
  if ( !v4 )
  {
    if ( v2 )
    {
      v4 = (const struct std::locale::facet *)v2;
    }
    else
    {
      if ( std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getcat(&v8, this) == -1 )
      {
        bad_cast::bad_cast((bad_cast *)pExceptionObject, "bad cast");
        throw (bad_cast *)pExceptionObject;
      }
      v4 = v8;
      std::_Facetptr<std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>>::_Psave = (__int64)v8;
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v8 + 8LL))(v8);
      std::_Facet_Register(v4);
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v7);
  return v4;
}
