/*
 * XREFs of ??0?$regex_traits@G@std@@QEAA@XZ @ 0x18013B5CC
 * Callers:
 *     ??$?0U?$char_traits@G@std@@V?$allocator@G@1@@?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@W4syntax_option_type@regex_constants@1@@Z @ 0x180139E98 (--$-0U-$char_traits@G@std@@V-$allocator@G@1@@-$basic_regex@GV-$regex_traits@G@std@@@std@@QEAA@AE.c)
 *     ??$_Uninitialized_move@PEAV?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@YAPEAV?$basic_regex@GV?$regex_traits@G@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@0@@Z @ 0x18013A9E4 (--$_Uninitialized_move@PEAV-$basic_regex@GV-$regex_traits@G@std@@@std@@V-$allocator@V-$basic_reg.c)
 *     ??0?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@PEBGW4syntax_option_type@regex_constants@1@@Z @ 0x18013B504 (--0-$basic_regex@GV-$regex_traits@G@std@@@std@@QEAA@PEBGW4syntax_option_type@regex_constants@1@@.c)
 * Callees:
 *     ?_Cache_locale@?$_Regex_traits@G@std@@AEAAXXZ @ 0x18013ED6C (-_Cache_locale@-$_Regex_traits@G@std@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::regex_traits<unsigned short>::regex_traits<unsigned short>(__int64 a1)
{
  *(_QWORD *)(a1 + 24) = std::locale::_Init(1);
  std::_Regex_traits<unsigned short>::_Cache_locale(a1);
  return a1;
}
