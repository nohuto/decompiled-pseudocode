/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@std@@@std@@YAXPEAV?$basic_regex@GV?$regex_traits@G@std@@@0@QEAV10@AEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@0@@Z @ 0x180142A60
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@YAPEAV?$basic_regex@GV?$regex_traits@G@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@0@@Z @ 0x180143434 (--$_Uninitialized_move@PEAV-$basic_regex@GV-$regex_traits@G@std@@@std@@V-$allocator@V-$basic_reg.c)
 *     ??1?$vector@V?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@QEAA@XZ @ 0x1801442D8 (--1-$vector@V-$basic_regex@GV-$regex_traits@G@std@@@std@@V-$allocator@V-$basic_regex@GV-$regex_t.c)
 *     ??1EffectPackConfiguration@@QEAA@XZ @ 0x180144340 (--1EffectPackConfiguration@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@AEAAXQEAV?$basic_regex@GV?$regex_traits@G@std@@@2@_K1@Z @ 0x1801478F0 (-_Change_array@-$vector@V-$basic_regex@GV-$regex_traits@G@std@@@std@@V-$allocator@V-$basic_regex.c)
 *     _std::vector_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short____std::allocator_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short_______::_Emplace_reallocate_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short____const_&__::_1_::catch$0 @ 0x180171DDF (_std--vector_std--basic_regex_unsigned_short_std--regex_traits_unsigned_short____std--allocator_.c)
 * Callees:
 *     ??1?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@XZ @ 0x1801441C8 (--1-$basic_regex@GV-$regex_traits@G@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::~basic_regex<unsigned short,std::regex_traits<unsigned short>>(v3);
      v3 += 40LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
