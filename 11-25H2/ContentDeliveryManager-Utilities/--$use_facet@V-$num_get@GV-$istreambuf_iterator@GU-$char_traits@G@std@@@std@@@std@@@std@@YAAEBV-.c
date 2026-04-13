/*
 * XREFs of ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180049434
 * Callers:
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x18001524C (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x18004C930 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x18004CA80 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 * Callees:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180005114 (--0_Lockit@std@@QEAA@H@Z.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x1800051A4 (--1_Lockit@std@@QEAA@XZ.c)
 *     ?_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z @ 0x1800052D8 (-_Facet_Register@std@@YAXPEAV_Facet_base@1@@Z.c)
 *     _CxxThrowException_0 @ 0x1800227BC (_CxxThrowException_0.c)
 *     ??Bid@locale@std@@QEAA_KXZ @ 0x18004CBD0 (--Bid@locale@std@@QEAA_KXZ.c)
 *     ?_Getcat@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x180059A28 (-_Getcat@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@SA_KPEAPEBVfacet@l.c)
 *     ?_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z @ 0x180059B7C (-_Getfacet@locale@std@@QEBAPEBVfacet@12@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

const struct std::locale::facet *__fastcall std::use_facet<std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>>(
        std::locale *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  const struct std::locale::facet *v4; // rbx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+58h] [rbp+10h] BYREF
  struct std::_Facet_base *v8; // [rsp+60h] [rbp+18h] BYREF

  std::_Lockit::_Lockit((std::_Lockit *)&v7, 0);
  v2 = std::_Facetptr<std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>>::_Psave;
  v8 = (struct std::_Facet_base *)std::_Facetptr<std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>>::_Psave;
  v3 = std::locale::id::operator unsigned __int64(&std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::id);
  v4 = std::locale::_Getfacet(this, v3);
  if ( !v4 )
  {
    if ( v2 )
    {
      v4 = (const struct std::locale::facet *)v2;
    }
    else
    {
      if ( std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getcat(&v8, this) == -1 )
      {
        bad_cast::bad_cast((bad_cast *)pExceptionObject, "bad cast");
        throw (bad_cast *)pExceptionObject;
      }
      v4 = v8;
      std::_Facetptr<std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>>::_Psave = (__int64)v8;
      (*(void (__fastcall **)(struct std::_Facet_base *))(*(_QWORD *)v8 + 8LL))(v8);
      std::_Facet_Register(v4);
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v7);
  return v4;
}
