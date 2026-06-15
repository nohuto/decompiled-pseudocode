/*
 * XREFs of ??1?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@XZ @ 0x1801441C8
 * Callers:
 *     ??$_Destroy_range@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@std@@@std@@YAXPEAV?$basic_regex@GV?$regex_traits@G@std@@@0@QEAV10@AEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@0@@Z @ 0x180142A60 (--$_Destroy_range@V-$allocator@V-$basic_regex@GV-$regex_traits@G@std@@@std@@@std@@@std@@YAXPEAV-.c)
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180145224 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 *     _EffectPackConfiguration::ReadConfiguration_::_1_::dtor$35 @ 0x1801720BA (_EffectPackConfiguration--ReadConfiguration_--_1_--dtor$35.c)
 *     _EffectPackConfiguration::ReadConfiguration_::_1_::dtor$36 @ 0x1801720CC (_EffectPackConfiguration--ReadConfiguration_--_1_--dtor$36.c)
 *     _EffectPackConfiguration::ReadConfiguration_::_1_::dtor$39 @ 0x1801720F0 (_EffectPackConfiguration--ReadConfiguration_--_1_--dtor$39.c)
 * Callees:
 *     ?_Tidy@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x1801491DC (-_Tidy@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 */

void __fastcall std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::~basic_regex<unsigned short,std::regex_traits<unsigned short>>(
        __int64 a1)
{
  std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Tidy(a1);
  std::locale::~locale((std::locale *)(a1 + 24));
}
