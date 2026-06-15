/*
 * XREFs of _std::_Global_new_std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo_____lambda_783f8bafea3f8c2f6eb6dded7328b263____::_2_::_Guard_type::__Guard_type @ 0x1800B7528
 * Callers:
 *     _lambda_c5ba6885c59c7d44add3d2e24646e672_::operator() @ 0x1800B81D4 (_lambda_c5ba6885c59c7d44add3d2e24646e672_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Copy @ 0x1800C0F60 (std--_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___--_Co.c)
 *     _std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___::_Copy_::_1_::dtor$0 @ 0x18016474C (_std--_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo___--_C.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_783f8bafea3f8c2f6eb6dded7328b263__void_IAudioStreamInfo_____lambda_783f8bafea3f8c2f6eb6dded7328b263____::_2_::_Guard_type::__Guard_type(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0x48);
}
