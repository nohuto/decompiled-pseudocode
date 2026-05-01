/*
 * XREFs of std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void_::_Delete_this @ 0x18066F7A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_67f0fced1d981ef80ea3a06f45134b83_::__lambda_67f0fced1d981ef80ea3a06f45134b83_ @ 0x18066C954 (_lambda_67f0fced1d981ef80ea3a06f45134b83_--__lambda_67f0fced1d981ef80ea3a06f45134b83_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_67f0fced1d981ef80ea3a06f45134b83__void_::_Delete_this(
        void *a1,
        char a2)
{
  lambda_67f0fced1d981ef80ea3a06f45134b83_::__lambda_67f0fced1d981ef80ea3a06f45134b83_((__int64)a1 + 8);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x40);
}
