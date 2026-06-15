/*
 * XREFs of ??0?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@PEBGW4syntax_option_type@regex_constants@1@@Z @ 0x180143FD8
 * Callers:
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180145224 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 * Callees:
 *     ??$_Reset@PEBG@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_constants@1@@Z @ 0x1801433D8 (--$_Reset@PEBG@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_.c)
 *     ??0?$regex_traits@G@std@@QEAA@XZ @ 0x1801440A0 (--0-$regex_traits@G@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::basic_regex<unsigned short,std::regex_traits<unsigned short>>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v4; // rax

  *a1 = 0LL;
  std::regex_traits<unsigned short>::regex_traits<unsigned short>(a1 + 1);
  v4 = -1LL;
  do
    ++v4;
  while ( *(_WORD *)(a2 + 2 * v4) );
  std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Reset<unsigned short const *>(
    (__int64)a1,
    a2,
    a2 + 2 * v4,
    1);
  return a1;
}
