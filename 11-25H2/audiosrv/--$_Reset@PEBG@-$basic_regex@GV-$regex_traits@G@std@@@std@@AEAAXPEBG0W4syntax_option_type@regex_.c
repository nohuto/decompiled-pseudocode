/*
 * XREFs of ??$_Reset@PEBG@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_constants@1@@Z @ 0x18013A988
 * Callers:
 *     ??$?0U?$char_traits@G@std@@V?$allocator@G@1@@?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@W4syntax_option_type@regex_constants@1@@Z @ 0x180139E98 (--$-0U-$char_traits@G@std@@V-$allocator@G@1@@-$basic_regex@GV-$regex_traits@G@std@@@std@@QEAA@AE.c)
 *     ??0?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@PEBGW4syntax_option_type@regex_constants@1@@Z @ 0x18013B504 (--0-$basic_regex@GV-$regex_traits@G@std@@@std@@QEAA@PEBGW4syntax_option_type@regex_constants@1@@.c)
 * Callees:
 *     ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x1801317B0 (-_Tidy@-$vector@IV-$allocator@I@std@@@std@@AEAAXXZ.c)
 *     ??0?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAA@AEBV?$regex_traits@G@1@PEBG1W4syntax_option_type@regex_constants@1@@Z @ 0x18013B3F8 (--0-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAA@AEBV-$regex_traits@G@1@PEBG1W4syntax_option_.c)
 *     ?_Compile@?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ @ 0x18013F4F0 (-_Compile@-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAAPEAV_Root_node@2@XZ.c)
 *     ?_Reset@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXPEAV_Root_node@2@@Z @ 0x1801403C0 (-_Reset@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXPEAV_Root_node@2@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Reset<unsigned short const *>(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  __int64 v5; // rax
  _BYTE v6[32]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v7[120]; // [rsp+50h] [rbp-78h] BYREF

  std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>(
    (unsigned int)v6,
    a1 + 8,
    a2,
    a3,
    a4);
  v5 = std::_Parser<unsigned short const *,unsigned short,std::regex_traits<unsigned short>>::_Compile(v6);
  std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Reset(a1, v5);
  std::vector<unsigned int>::_Tidy((__int64)v7);
}
