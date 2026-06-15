/*
 * XREFs of _std::_Global_new_std::_Func_impl_no_alloc__lambda_337836fad6503ddf3ac4b1bf88bbe274__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_337836fad6503ddf3ac4b1bf88bbe274____::_2_::_Guard_type::__Guard_type @ 0x180130934
 * Callers:
 *     std::_Global_new_std::_Func_impl_no_alloc__lambda_337836fad6503ddf3ac4b1bf88bbe274__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_337836fad6503ddf3ac4b1bf88bbe274___ @ 0x18012EDE0 (std--_Global_new_std--_Func_impl_no_alloc__lambda_337836fad6503ddf3ac4b1bf88bbe274__long_SystemE.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Global_new_std::_Func_impl_no_alloc__lambda_337836fad6503ddf3ac4b1bf88bbe274__long_SystemEffectDescriptor___SystemEffectChainDescriptor_____lambda_337836fad6503ddf3ac4b1bf88bbe274____::_2_::_Guard_type::__Guard_type(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)0xC0);
}
