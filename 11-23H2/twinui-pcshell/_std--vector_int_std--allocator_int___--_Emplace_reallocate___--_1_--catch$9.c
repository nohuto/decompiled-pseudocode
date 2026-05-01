/*
 * XREFs of _std::vector_int_std::allocator_int___::_Emplace_reallocate___::_1_::catch$9 @ 0x180229B1E
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@H@std@@QEAAXQEAH_K@Z @ 0x18040AACC (-deallocate@-$allocator@H@std@@QEAAXQEAH_K@Z.c)
 */

void __fastcall __noreturn std::vector_int_std::allocator_int___::_Emplace_reallocate___::_1_::catch_9(
        __int64 a1,
        __int64 a2)
{
  std::allocator<int>::deallocate(a1, *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
