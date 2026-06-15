/*
 * XREFs of _std::vector_std::sub_match_unsigned_short_const____std::allocator_std::sub_match_unsigned_short_const_______::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$0 @ 0x1801680A4
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@V?$sub_match@PEBG@std@@@std@@QEAAXQEAV?$sub_match@PEBG@2@_K@Z @ 0x180131908 (-deallocate@-$allocator@V-$sub_match@PEBG@std@@@std@@QEAAXQEAV-$sub_match@PEBG@2@_K@Z.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::sub_match_unsigned_short_const____std::allocator_std::sub_match_unsigned_short_const_______::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::sub_match<unsigned short const *>>::deallocate(a1, *(char **)(a2 + 72), *(_QWORD *)(a2 + 80));
  throw;
}
