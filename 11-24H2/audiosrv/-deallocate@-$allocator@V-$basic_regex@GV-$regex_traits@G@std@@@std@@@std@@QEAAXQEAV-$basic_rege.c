/*
 * XREFs of ?deallocate@?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@std@@QEAAXQEAV?$basic_regex@GV?$regex_traits@G@std@@@2@_K@Z @ 0x180149578
 * Callers:
 *     _std::vector_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short____std::allocator_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short_______::_Emplace_reallocate_std::basic_regex_unsigned_short_std::regex_traits_unsigned_short____const_&__::_1_::catch$0 @ 0x180171DDF (_std--vector_std--basic_regex_unsigned_short_std--regex_traits_unsigned_short____std--allocator_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::basic_regex<unsigned short,std::regex_traits<unsigned short>>>::deallocate(
        __int64 a1,
        char *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(40 * a3));
}
