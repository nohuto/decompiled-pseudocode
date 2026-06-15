/*
 * XREFs of std::_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_::_Delete_this @ 0x18002EB10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002067C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::__lambda_aa732a8a991b7eb0f1632fe44cffa677_ @ 0x18002C1E8 (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--__lambda_aa732a8a991b7eb0f1632fe44cffa677_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_aa732a8a991b7eb0f1632fe44cffa677__void_::_Delete_this(
        __int64 *a1,
        char a2)
{
  lambda_aa732a8a991b7eb0f1632fe44cffa677_::__lambda_aa732a8a991b7eb0f1632fe44cffa677_(a1 + 1);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
