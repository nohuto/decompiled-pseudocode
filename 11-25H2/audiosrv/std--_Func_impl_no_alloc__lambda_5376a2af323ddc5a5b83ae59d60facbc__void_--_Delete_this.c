/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5376a2af323ddc5a5b83ae59d60facbc__void_::_Delete_this @ 0x1800E2F30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_5376a2af323ddc5a5b83ae59d60facbc_::__lambda_5376a2af323ddc5a5b83ae59d60facbc_ @ 0x1800DF59C (_lambda_5376a2af323ddc5a5b83ae59d60facbc_--__lambda_5376a2af323ddc5a5b83ae59d60facbc_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_5376a2af323ddc5a5b83ae59d60facbc__void_::_Delete_this(
        void *a1,
        char a2)
{
  lambda_5376a2af323ddc5a5b83ae59d60facbc_::__lambda_5376a2af323ddc5a5b83ae59d60facbc_((__int64)a1 + 8);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
}
