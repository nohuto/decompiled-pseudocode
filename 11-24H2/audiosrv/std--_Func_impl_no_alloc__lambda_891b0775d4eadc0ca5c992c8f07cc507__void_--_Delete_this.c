/*
 * XREFs of std::_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_::_Delete_this @ 0x1800E79D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_891b0775d4eadc0ca5c992c8f07cc507_::__lambda_891b0775d4eadc0ca5c992c8f07cc507_ @ 0x1800E3FB8 (_lambda_891b0775d4eadc0ca5c992c8f07cc507_--__lambda_891b0775d4eadc0ca5c992c8f07cc507_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_::_Delete_this(
        void *a1,
        char a2)
{
  lambda_891b0775d4eadc0ca5c992c8f07cc507_::__lambda_891b0775d4eadc0ca5c992c8f07cc507_((__int64)a1 + 8);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
