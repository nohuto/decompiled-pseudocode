/*
 * XREFs of _std::vector_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short____std::allocator_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short_______::_Emplace_reallocate_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short____const_&__::_1_::catch$0 @ 0x180171DDF
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@std@@@std@@YAXPEAV?$basic_regex@GV?$regex_traits@G@std@@@0@QEAV10@AEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@0@@Z @ 0x180142A60 (--$_Destroy_range@V-$allocator@V-$basic_regex@GV-$regex_traits@G@std@@@std@@@std@@@std@@YAXPEAV-.c)
 *     ?deallocate@?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@std@@QEAAXQEAV?$basic_regex@GV?$regex_traits@G@std@@@2@_K@Z @ 0x180149578 (-deallocate@-$allocator@V-$basic_regex@GV-$regex_traits@G@std@@@std@@@std@@QEAAXQEAV-$basic_rege.c)
 *     _CxxThrowException_0 @ 0x180167F30 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short____std::allocator_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short_______::_Emplace_reallocate_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short____const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>::deallocate(
    v3,
    *(char **)(a2 + 32),
    *(_QWORD *)(a2 + 120));
  throw;
}
