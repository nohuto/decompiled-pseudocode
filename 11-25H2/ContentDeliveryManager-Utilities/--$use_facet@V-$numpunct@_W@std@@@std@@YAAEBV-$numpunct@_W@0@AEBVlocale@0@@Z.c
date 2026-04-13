/*
 * XREFs of ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x18009D3EC
 * Callers:
 *     ?_Fput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEBD_K444@Z @ 0x180010EC4 (-_Fput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     ?_Iput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEAD_K@Z @ 0x180014E84 (-_Iput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180015EB4 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_W_N@Z @ 0x18001B530 (-do_put@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_18001B530.c)
 *     ?_Getffld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x18009E13C (-_Getffld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 *     ?_Getffldx@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1AEAVios_base@2@PEAH@Z @ 0x18009E700 (-_Getffldx@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV.c)
 *     ?_Getifld@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@1HAEBVlocale@2@@Z @ 0x18009ED1C (-_Getifld@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHPEADAEAV-.c)
 *     ?do_get@?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18009FC10 (-do_get@-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEB_ea_18009FC10.c)
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180005114 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800051A4 (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1800052D8 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     _CxxThrowException_0 @ 0x1800227BC (_CxxThrowException_0.c)
 *     ??Bid@locale@std@@QEAA_KXZ @ 0x18004CBD0 (--Bid@locale@std@@QEAA_KXZ.c)
 *     ?_Getcat@?$numpunct@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180059AD4 (-_Getcat@-$numpunct@_W@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z.c)
 *     ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x180059B7C (-_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct std::locale::facet *__fastcall std::use_facet<std::numpunct<wchar_t>>(std::locale *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  const struct std::locale::facet *v4; // rbx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF
  struct std::_Facet_base *v8; // [rsp+60h] [rbp+18h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v7, 0);
  v2 = std::_Facetptr<std::numpunct<wchar_t>>::_Psave;
  v8 = (struct std::_Facet_base *)std::_Facetptr<std::numpunct<wchar_t>>::_Psave;
  v3 = std::locale::id::operator unsigned __int64((__int64)&std::numpunct<wchar_t>::id);
  v4 = std::locale::_Getfacet(this, v3);
  if ( !v4 )
  {
    if ( v2 )
    {
      v4 = (const struct std::locale::facet *)v2;
    }
    else
    {
      if ( std::numpunct<wchar_t>::_Getcat((__int64 *)&v8, this) == -1 )
      {
        bad_cast::bad_cast((bad_cast *)pExceptionObject, "bad cast");
        throw (bad_cast *)pExceptionObject;
      }
      v4 = v8;
      std::_Facetptr<std::numpunct<wchar_t>>::_Psave = (__int64)v8;
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v8 + 8LL))(v8);
      std::_Facet_Register(v4);
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v7);
  return v4;
}
