/*
 * XREFs of ?setstate@?$basic_ios@GU?$char_traits@G@std@@@std@@QEAAXH_N@Z @ 0x18005E28C
 * Callers:
 *     ??0?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@_N@Z @ 0x18004A8E8 (--0-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@PEAV-$basic_streambuf@GU-$char_traits@G@std.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x18004C930 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x18004CA80 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x18005B224 (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x18005B3EC (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x18005D764 (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@PEB_W@Z @ 0x18005E848 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@PEB.c)
 *     ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x1800882E8 (-init@-$basic_ios@_WU-$char_traits@_W@std@@@std@@IEAAXPEAV-$basic_streambuf@_WU-$char_traits@_W@.c)
 *     ??5?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x18009DA8C (--5-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x18009F0E0 (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 *     ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@_W@Z @ 0x1800A33A8 (--$-6_WU-$char_traits@_W@std@@@std@@YAAEAV-$basic_ostream@_WU-$char_traits@_W@std@@@0@AEAV10@_W@.c)
 *     ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800B28F4 (--$-5_WU-$char_traits@_W@std@@_W@std@@YAAEAV-$basic_istream@_WU-$char_traits@_W@std@@@0@AEAV10@A.c)
 *     _std::basic_istream_wchar_t_std::char_traits_wchar_t___::operator___::_1_::catch$3 @ 0x1800B84E6 (_std--basic_istream_wchar_t_std--char_traits_wchar_t___--operator___--_1_--catch$3.c)
 *     _std::basic_istream_wchar_t_std::char_traits_wchar_t___::_Ipfx_::_1_::catch$1 @ 0x1800B8B60 (_std--basic_istream_wchar_t_std--char_traits_wchar_t___--_Ipfx_--_1_--catch$1.c)
 *     _std::operator___wchar_t_std::char_traits_wchar_t____::_1_::catch$1 @ 0x1800B8C15 (_std--operator___wchar_t_std--char_traits_wchar_t____--_1_--catch$1.c)
 *     _std::operator___wchar_t_std::char_traits_wchar_t__wchar_t__::_1_::catch$3 @ 0x1800BC983 (_std--operator___wchar_t_std--char_traits_wchar_t__wchar_t__--_1_--catch$3.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18005BEB0 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 */

void __fastcall std::basic_ios<unsigned short>::setstate(__int64 a1, int a2, char a3)
{
  int v3; // eax
  char v4; // dl

  if ( a2 )
  {
    v3 = *(_DWORD *)(a1 + 16) | a2;
    v4 = v3 | 4;
    if ( *(_QWORD *)(a1 + 72) )
      v4 = v3;
    std::ios_base::clear((std::ios_base *)a1, v4, a3);
  }
}
