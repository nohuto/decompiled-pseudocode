/*
 * XREFs of ??$?0U?$char_traits@G@std@@V?$allocator@G@1@@?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@W4syntax_option_type@regex_constants@1@@Z @ 0x1801428E8
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180145224 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 * Callees:
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??$_Reset@PEBG@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_constants@1@@Z @ 0x1801433D8 (--$_Reset@PEBG@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_.c)
 *     ??0?$regex_traits@G@std@@QEAA@XZ @ 0x1801440A0 (--0-$regex_traits@G@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::basic_regex<unsigned short,std::regex_traits<unsigned short>>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8

  *a1 = 0LL;
  std::regex_traits<unsigned short>::regex_traits<unsigned short>(a1 + 1);
  std::wstring::c_str(a2, v4);
  v7 = std::wstring::c_str(v6, v5);
  std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Reset<unsigned short const *>(a1, v7, v8, 256LL);
  return a1;
}
