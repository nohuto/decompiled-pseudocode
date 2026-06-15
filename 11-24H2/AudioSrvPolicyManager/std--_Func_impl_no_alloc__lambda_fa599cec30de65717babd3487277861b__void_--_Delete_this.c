/*
 * XREFs of std::_Func_impl_no_alloc__lambda_fa599cec30de65717babd3487277861b__void_::_Delete_this @ 0x18002AF90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_fa599cec30de65717babd3487277861b__void_::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x10);
}
