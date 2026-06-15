/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_::_Delete_this @ 0x1800E7990
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_2123d8e56b275a4b963be45688bccc2c_::__lambda_2123d8e56b275a4b963be45688bccc2c_ @ 0x1800E3F88 (_lambda_2123d8e56b275a4b963be45688bccc2c_--__lambda_2123d8e56b275a4b963be45688bccc2c_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_::_Delete_this(
        void *a1,
        char a2)
{
  lambda_2123d8e56b275a4b963be45688bccc2c_::__lambda_2123d8e56b275a4b963be45688bccc2c_((__int64)a1 + 8);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
}
