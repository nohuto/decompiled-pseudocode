/*
 * XREFs of ?deallocate@?$allocator@I@std@@QEAAXQEAI_K@Z @ 0x18013A984
 * Callers:
 *     _std::vector_unsigned_int_std::allocator_unsigned_int___::_Resize_reallocate_unsigned_int__::_1_::catch$0 @ 0x1801715D5 (_std--vector_unsigned_int_std--allocator_unsigned_int___--_Resize_reallocate_unsigned_int__--_1_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<unsigned int>::deallocate(__int64 a1, char *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(4 * a3));
}
