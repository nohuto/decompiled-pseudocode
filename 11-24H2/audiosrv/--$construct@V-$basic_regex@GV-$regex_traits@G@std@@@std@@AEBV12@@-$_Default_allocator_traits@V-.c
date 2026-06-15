/*
 * XREFs of ??$construct@V?$basic_regex@GV?$regex_traits@G@std@@@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@1@QEAV?$basic_regex@GV?$regex_traits@G@std@@@1@AEBV31@@Z @ 0x1801434BC
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$basic_regex@GV?$regex_traits@G@std@@@std@@@?$vector@V?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@AEAAPEAV?$basic_regex@GV?$regex_traits@G@std@@@1@QEAV21@AEBV21@@Z @ 0x180142A98 (--$_Emplace_reallocate@AEBV-$basic_regex@GV-$regex_traits@G@std@@@std@@@-$vector@V-$basic_regex@.c)
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180145224 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 * Callees:
 *     ?_Cache_locale@?$_Regex_traits@G@std@@AEAAXXZ @ 0x1801477E4 (-_Cache_locale@-$_Regex_traits@G@std@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>>::construct<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>,std::basic_regex<unsigned short,std::regex_traits<unsigned short>> const &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v5; // rbx
  __int64 v6; // rcx

  *a2 = 0LL;
  v5 = a2 + 1;
  v6 = a3[4];
  a2[4] = v6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  std::_Regex_traits<unsigned short>::_Cache_locale(v5);
  return std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Reset(a2, *a3);
}
