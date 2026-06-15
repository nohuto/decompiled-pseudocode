/*
 * XREFs of _std::_Global_new_std::_Func_impl_no_alloc__lambda_401f33ed1035a8d15a958bb8e80586a7__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_401f33ed1035a8d15a958bb8e80586a7____::_2_::_Guard_type::__Guard_type @ 0x180128868
 * Callers:
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_401f33ed1035a8d15a958bb8e80586a7__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_401f33ed1035a8d15a958bb8e80586a7___ @ 0x180126ED4 (std--_Global_new_std--_Func_impl_no_alloc__lambda_401f33ed1035a8d15a958bb8e80586a7__long_SystemE.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_401f33ed1035a8d15a958bb8e80586a7__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_401f33ed1035a8d15a958bb8e80586a7____::_2_::_Guard_type::__Guard_type(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0xC0);
}
