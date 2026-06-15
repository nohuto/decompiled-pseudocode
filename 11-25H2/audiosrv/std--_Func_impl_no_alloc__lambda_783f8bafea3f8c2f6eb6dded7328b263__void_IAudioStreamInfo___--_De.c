/*
 * XREFs of std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Delete_this @ 0x1800C10D0
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_ @ 0x180023370 (_lambda_95aa79fe68308ee8971a6083ea2ebe7c_--__lambda_95aa79fe68308ee8971a6083ea2ebe7c_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Delete_this(
        void *a1,
        __int64 a2)
{
  char v3; // bl

  v3 = a2;
  lambda_95aa79fe68308ee8971a6083ea2ebe7c_::__lambda_95aa79fe68308ee8971a6083ea2ebe7c_((__int64)a1 + 8, a2);
  if ( v3 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
}
