/*
 * XREFs of ??1_Lockit@std@@QEAA@XZ @ 0x1800051B4
 * Callers:
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x180005338 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     ?_Locimp_dtor@_Locimp@locale@std@@CAXPEAV123@@Z @ 0x1800053E8 (-_Locimp_dtor@_Locimp@locale@std@@CAXPEAV123@@Z.c)
 *     tidy_global @ 0x180005640 (tidy_global.c)
 *     ??$use_facet@V?$codecvt@DDH@std@@@std@@YAAEBV?$codecvt@DDH@0@AEBVlocale@0@@Z @ 0x180006580 (--$use_facet@V-$codecvt@DDH@std@@@std@@YAAEBV-$codecvt@DDH@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$ctype@D@std@@@std@@YAAEBV?$ctype@D@0@AEBVlocale@0@@Z @ 0x1800066CC (--$use_facet@V-$ctype@D@std@@@std@@YAAEBV-$ctype@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180006818 (--$use_facet@V-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180006964 (--$use_facet@V-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$numpunct@D@std@@@std@@YAAEBV?$numpunct@D@0@AEBVlocale@0@@Z @ 0x180006AB0 (--$use_facet@V-$numpunct@D@std@@@std@@YAAEBV-$numpunct@D@0@AEBVlocale@0@@Z.c)
 *     ?_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z @ 0x18000993C (-_Locimp_Addfac@_Locimp@locale@std@@CAXPEAV123@PEAVfacet@23@_K@Z.c)
 *     ?_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z @ 0x180009A3C (-_Locimp_ctor@_Locimp@locale@std@@CAXPEAV123@AEBV123@@Z.c)
 *     ?_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180009B20 (-_Makeloc@_Locimp@locale@std@@CAPEAV123@AEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ??$use_facet@V?$codecvt@GDH@std@@@std@@YAAEBV?$codecvt@GDH@0@AEBVlocale@0@@Z @ 0x18000EFAC (--$use_facet@V-$codecvt@GDH@std@@@std@@YAAEBV-$codecvt@GDH@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$codecvt@_WDH@std@@@std@@YAAEBV?$codecvt@_WDH@0@AEBVlocale@0@@Z @ 0x18000F0F8 (--$use_facet@V-$codecvt@_WDH@std@@@std@@YAAEBV-$codecvt@_WDH@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$collate@G@std@@@std@@YAAEBV?$collate@G@0@AEBVlocale@0@@Z @ 0x18000F244 (--$use_facet@V-$collate@G@std@@@std@@YAAEBV-$collate@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$collate@_W@std@@@std@@YAAEBV?$collate@_W@0@AEBVlocale@0@@Z @ 0x18000F390 (--$use_facet@V-$collate@_W@std@@@std@@YAAEBV-$collate@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$messages@G@std@@@std@@YAAEBV?$messages@G@0@AEBVlocale@0@@Z @ 0x18000F4DC (--$use_facet@V-$messages@G@std@@@std@@YAAEBV-$messages@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$messages@_W@std@@@std@@YAAEBV?$messages@_W@0@AEBVlocale@0@@Z @ 0x18000F628 (--$use_facet@V-$messages@_W@std@@@std@@YAAEBV-$messages@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18000F774 (--$use_facet@V-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEB.c)
 *     ??$use_facet@V?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$money_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18000F8C0 (--$use_facet@V-$money_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YA.c)
 *     ??$use_facet@V?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$money_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18000FA0C (--$use_facet@V-$money_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEB.c)
 *     ??$use_facet@V?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$money_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18000FB58 (--$use_facet@V-$money_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YA.c)
 *     ??$use_facet@V?$moneypunct@G$00@std@@@std@@YAAEBV?$moneypunct@G$00@0@AEBVlocale@0@@Z @ 0x18000FCA4 (--$use_facet@V-$moneypunct@G$00@std@@@std@@YAAEBV-$moneypunct@G$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@G$0A@@std@@@std@@YAAEBV?$moneypunct@G$0A@@0@AEBVlocale@0@@Z @ 0x18000FDF0 (--$use_facet@V-$moneypunct@G$0A@@std@@@std@@YAAEBV-$moneypunct@G$0A@@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$00@std@@@std@@YAAEBV?$moneypunct@_W$00@0@AEBVlocale@0@@Z @ 0x18000FF3C (--$use_facet@V-$moneypunct@_W$00@std@@@std@@YAAEBV-$moneypunct@_W$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@_W$0A@@std@@@std@@YAAEBV?$moneypunct@_W$0A@@0@AEBVlocale@0@@Z @ 0x180010088 (--$use_facet@V-$moneypunct@_W$0A@@std@@@std@@YAAEBV-$moneypunct@_W$0A@@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800101D4 (--$use_facet@V-$num_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180010320 (--$use_facet@V-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAAE.c)
 *     ??$use_facet@V?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18001046C (--$use_facet@V-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ??$use_facet@V?$time_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$time_put@GV?$ostreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800105B8 (--$use_facet@V-$time_put@GV-$ostreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ??$use_facet@V?$time_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$time_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180010704 (--$use_facet@V-$time_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAA.c)
 *     ?_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x18001525C (-_Makeushloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ?_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x180015EC4 (-_Makewloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ??$use_facet@V?$collate@D@std@@@std@@YAAEBV?$collate@D@0@AEBVlocale@0@@Z @ 0x18001C0AC (--$use_facet@V-$collate@D@std@@@std@@YAAEBV-$collate@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$messages@D@std@@@std@@YAAEBV?$messages@D@0@AEBVlocale@0@@Z @ 0x18001C1F8 (--$use_facet@V-$messages@D@std@@@std@@YAAEBV-$messages@D@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18001C344 (--$use_facet@V-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEB.c)
 *     ??$use_facet@V?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$money_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18001C490 (--$use_facet@V-$money_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEB.c)
 *     ??$use_facet@V?$moneypunct@D$00@std@@@std@@YAAEBV?$moneypunct@D$00@0@AEBVlocale@0@@Z @ 0x18001C5DC (--$use_facet@V-$moneypunct@D$00@std@@@std@@YAAEBV-$moneypunct@D$00@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$moneypunct@D$0A@@std@@@std@@YAAEBV?$moneypunct@D$0A@@0@AEBVlocale@0@@Z @ 0x18001C728 (--$use_facet@V-$moneypunct@D$0A@@std@@@std@@YAAEBV-$moneypunct@D$0A@@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18001C874 (--$use_facet@V-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ??$use_facet@V?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@@std@@YAAEBV?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18001C9C0 (--$use_facet@V-$time_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@@std@@YAAEBV.c)
 *     ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x18001E950 (-_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180049558 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@@std@@YAAEBV?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@0@AEBVlocale@0@@Z @ 0x180049634 (--$use_facet@V-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@@std@@YAAEBV-.c)
 *     ??$use_facet@V?$numpunct@G@std@@@std@@YAAEBV?$numpunct@G@0@AEBVlocale@0@@Z @ 0x180049710 (--$use_facet@V-$numpunct@G@std@@@std@@YAAEBV-$numpunct@G@0@AEBVlocale@0@@Z.c)
 *     ??1_Locinfo@std@@QEAA@XZ @ 0x18004C938 (--1_Locinfo@std@@QEAA@XZ.c)
 *     ??Bid@locale@std@@QEAA_KXZ @ 0x18004CDD0 (--Bid@locale@std@@QEAA_KXZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180083830 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$num_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x18009D6B0 (--$use_facet@V-$num_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAAE.c)
 *     ??$use_facet@V?$numpunct@_W@std@@@std@@YAAEBV?$numpunct@_W@0@AEBVlocale@0@@Z @ 0x18009D78C (--$use_facet@V-$numpunct@_W@std@@@std@@YAAEBV-$numpunct@_W@0@AEBVlocale@0@@Z.c)
 *     ??$use_facet@V?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@@std@@YAAEBV?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@0@AEBVlocale@0@@Z @ 0x1800B2F88 (--$use_facet@V-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@@std@@YAA.c)
 *     _std::locale::_Locimp::_Locimp_Addfac_::_1_::dtor$0 @ 0x1800B6EAB (_std--locale--_Locimp--_Locimp_Addfac_--_1_--dtor$0.c)
 *     _std::use_facet_std::time_put_char_std::ostreambuf_iterator_char_std::char_traits_char________::_1_::dtor$0 @ 0x1800B6EE1 (_std--use_facet_std--time_put_char_std--ostreambuf_iterator_char_std--char_traits_char________--.c)
 *     _std::locale::_Locimp::_Locimp_ctor_::_1_::dtor$1 @ 0x1800B6FB7 (_std--locale--_Locimp--_Locimp_ctor_--_1_--dtor$1.c)
 *     _std::use_facet_std::time_get_wchar_t_std::istreambuf_iterator_wchar_t_std::char_traits_wchar_t________::_1_::dtor$0 @ 0x1800B8652 (_std--use_facet_std--time_get_wchar_t_std--istreambuf_iterator_wchar_t_std--char_traits_wchar_t_.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$0 @ 0x1800B8728 (_std--_Locinfo--_Locinfo_--_1_--dtor$0.c)
 * Callees:
 *     _Mtxunlock @ 0x18000D010 (_Mtxunlock.c)
 */

void __fastcall std::_Lockit::~_Lockit(std::_Lockit *this)
{
  __int64 v1; // rax

  v1 = *(int *)this;
  if ( (_DWORD)v1 )
  {
    if ( (int)v1 < 4 )
      Mtxunlock(&CriticalSection + v1);
  }
  else
  {
    unlock_0(12LL);
  }
}
