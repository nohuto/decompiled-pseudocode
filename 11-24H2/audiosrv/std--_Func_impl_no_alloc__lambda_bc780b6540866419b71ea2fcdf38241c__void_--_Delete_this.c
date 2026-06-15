/*
 * XREFs of std::_Func_impl_no_alloc__lambda_bc780b6540866419b71ea2fcdf38241c__void_::_Delete_this @ 0x1800BFD80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_bc780b6540866419b71ea2fcdf38241c__void_::_Delete_this(
        void *a1,
        char a2)
{
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
