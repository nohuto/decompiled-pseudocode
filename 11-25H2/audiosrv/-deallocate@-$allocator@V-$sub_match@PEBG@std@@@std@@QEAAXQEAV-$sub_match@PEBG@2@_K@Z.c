/*
 * XREFs of ?deallocate@?$allocator@V?$sub_match@PEBG@std@@@std@@QEAAXQEAV?$sub_match@PEBG@2@_K@Z @ 0x180131908
 * Callers:
 *     _std::vector_std::sub_match_unsigned_short_const____std::allocator_std::sub_match_unsigned_short_const_______::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$0 @ 0x1801680A4 (_std--vector_std--sub_match_unsigned_short_const____std--allocator_std--sub_match_unsigned_short.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::sub_match<unsigned short const *>>::deallocate(__int64 a1, char *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(24 * a3));
}
