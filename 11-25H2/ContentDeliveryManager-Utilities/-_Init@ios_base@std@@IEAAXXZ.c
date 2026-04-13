/*
 * XREFs of ?_Init@ios_base@std@@IEAAXXZ @ 0x18005AF68
 * Callers:
 *     ??0?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA@PEAV?$basic_streambuf@GU?$char_traits@G@std@@@1@_N@Z @ 0x18004A8E8 (--0-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA@PEAV-$basic_streambuf@GU-$char_traits@G@std.c)
 *     ?init@?$basic_ios@_WU?$char_traits@_W@std@@@std@@IEAAXPEAV?$basic_streambuf@_WU?$char_traits@_W@std@@@2@_N@Z @ 0x1800882E8 (-init@-$basic_ios@_WU-$char_traits@_W@std@@@std@@IEAAXPEAV-$basic_streambuf@_WU-$char_traits@_W@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180004554 (--2@YAPEAX_K@Z.c)
 *     ?_Init@locale@std@@CAPEAV_Locimp@12@_N@Z @ 0x180005328 (-_Init@locale@std@@CAPEAV_Locimp@12@_N@Z.c)
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18005BEB0 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::ios_base::_Init(std::ios_base *this)
{
  struct std::locale::_Locimp **v2; // rdi

  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 513;
  *((_QWORD *)this + 4) = 6LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  std::ios_base::clear(this, 0, 0);
  v2 = (struct std::locale::_Locimp **)operator new(8uLL);
  if ( v2 )
    *v2 = std::locale::_Init(1);
  else
    v2 = 0LL;
  *((_QWORD *)this + 8) = v2;
}
