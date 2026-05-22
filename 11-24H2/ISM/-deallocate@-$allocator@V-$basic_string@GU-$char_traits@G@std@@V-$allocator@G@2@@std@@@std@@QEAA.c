/*
 * XREFs of ?deallocate@?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAAXQEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@_K@Z @ 0x1800CBDE0
 * Callers:
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Emplace_reallocate_unsigned_short_const___&_unsigned___int64_&__::_1_::catch$0 @ 0x1801D514D (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_un.c)
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Emplace_reallocate_unsigned_short____::_1_::catch$0 @ 0x1801D5184 (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-_ea_1801D5184.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::wstring>::deallocate(__int64 a1, char *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(32 * a3));
}
