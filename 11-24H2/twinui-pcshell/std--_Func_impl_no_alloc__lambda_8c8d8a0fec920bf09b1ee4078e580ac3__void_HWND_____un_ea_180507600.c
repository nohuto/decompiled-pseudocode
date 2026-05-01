/*
 * XREFs of std::_Func_impl_no_alloc__lambda_8c8d8a0fec920bf09b1ee4078e580ac3__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Delete_this @ 0x180507600
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_8c8d8a0fec920bf09b1ee4078e580ac3_::__lambda_8c8d8a0fec920bf09b1ee4078e580ac3_ @ 0x1804F8B88 (_lambda_8c8d8a0fec920bf09b1ee4078e580ac3_--__lambda_8c8d8a0fec920bf09b1ee4078e580ac3_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_8c8d8a0fec920bf09b1ee4078e580ac3__void_HWND_____unsigned_short_const___unsigned_short_const___unsigned_long_::_Delete_this(
        void *a1,
        __int64 a2)
{
  char v3; // bl

  v3 = a2;
  lambda_8c8d8a0fec920bf09b1ee4078e580ac3_::__lambda_8c8d8a0fec920bf09b1ee4078e580ac3_((__int64)a1 + 8, a2);
  if ( v3 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
}
