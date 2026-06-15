/*
 * XREFs of std::_Func_impl_no_alloc__lambda_58be061a777e3803beb2fa2cac2678e0__void_::_Delete_this @ 0x1800BFD40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029ADC (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_58be061a777e3803beb2fa2cac2678e0__void_::_Delete_this(
        volatile signed __int32 **a1,
        char a2)
{
  wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(a1 + 2);
  if ( a2 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
}
