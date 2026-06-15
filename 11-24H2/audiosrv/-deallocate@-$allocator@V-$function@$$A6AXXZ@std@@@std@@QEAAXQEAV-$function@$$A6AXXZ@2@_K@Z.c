/*
 * XREFs of ?deallocate@?$allocator@V?$function@$$A6AXXZ@std@@@std@@QEAAXQEAV?$function@$$A6AXXZ@2@_K@Z @ 0x1800E24DC
 * Callers:
 *     _std::vector_std::function_void___cdecl(void)__std::allocator_std::function_void___cdecl(void)_____::_Emplace_reallocate_std::function_void___cdecl(void)__const_&__::_1_::catch$0 @ 0x18016E587 (_std--vector_std--function_void___cdecl(void)__std--allocator_std--function_void___cdecl(void)__.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::function<void (void)>>::deallocate(__int64 a1, char *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(a3 << 6));
}
