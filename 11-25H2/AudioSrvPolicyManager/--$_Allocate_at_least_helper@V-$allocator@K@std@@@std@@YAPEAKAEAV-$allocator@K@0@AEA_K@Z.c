/*
 * XREFs of ??$_Allocate_at_least_helper@V?$allocator@K@std@@@std@@YAPEAKAEAV?$allocator@K@0@AEA_K@Z @ 0x180032774
 * Callers:
 *     ??$_Emplace_reallocate@AEAK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z @ 0x180012B70 (--$_Emplace_reallocate@AEAK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEAK@Z.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z @ 0x180015710 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@AEAAPEAKQEAKAEBK@Z.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18001F874 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

_QWORD *__fastcall std::_Allocate_at_least_helper<std::allocator<unsigned long>>(__int64 a1, _QWORD *a2)
{
  if ( *a2 > 0x3FFFFFFFFFFFFFFFuLL )
    std::_Throw_bad_array_new_length();
  return std::_Allocate<16,std::_Default_allocate_traits,0>(4LL * *a2);
}
