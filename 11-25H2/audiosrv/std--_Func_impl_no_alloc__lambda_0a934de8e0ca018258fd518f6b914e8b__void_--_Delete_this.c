/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Delete_this @ 0x1800F3D60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _lambda_0a934de8e0ca018258fd518f6b914e8b_::__lambda_0a934de8e0ca018258fd518f6b914e8b_ @ 0x1800EED04 (_lambda_0a934de8e0ca018258fd518f6b914e8b_--__lambda_0a934de8e0ca018258fd518f6b914e8b_.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Delete_this(
        __int64 *a1,
        char a2)
{
  lambda_0a934de8e0ca018258fd518f6b914e8b_::__lambda_0a934de8e0ca018258fd518f6b914e8b_(a1 + 1);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
