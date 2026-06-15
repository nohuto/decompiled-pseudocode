/*
 * XREFs of std::_Func_impl_no_alloc__lambda_3ea45eb7d205feda3a4dede396fc4e77__void_::_Delete_this @ 0x1800E2F70
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_3ea45eb7d205feda3a4dede396fc4e77_::__lambda_3ea45eb7d205feda3a4dede396fc4e77_ @ 0x1800DF5CC (_lambda_3ea45eb7d205feda3a4dede396fc4e77_--__lambda_3ea45eb7d205feda3a4dede396fc4e77_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_3ea45eb7d205feda3a4dede396fc4e77__void_::_Delete_this(
        void *a1,
        char a2)
{
  lambda_3ea45eb7d205feda3a4dede396fc4e77_::__lambda_3ea45eb7d205feda3a4dede396fc4e77_((__int64)a1 + 8);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
