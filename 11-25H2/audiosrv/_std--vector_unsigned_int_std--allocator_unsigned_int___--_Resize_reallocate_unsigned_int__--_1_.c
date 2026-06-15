/*
 * XREFs of _std::vector_unsigned_int_std::allocator_unsigned_int___::_Resize_reallocate_unsigned_int__::_1_::catch$0 @ 0x180168050
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@I@std@@QEAAXQEAI_K@Z @ 0x1801318F0 (-deallocate@-$allocator@I@std@@QEAAXQEAI_K@Z.c)
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_int_std::allocator_unsigned_int___::_Resize_reallocate_unsigned_int__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<unsigned int>::deallocate(a1, *(char **)(a2 + 104), *(_QWORD *)(a2 + 88));
  throw;
}
