/*
 * XREFs of _lambda_93656037d821f0cf4f10769c2d148d9f_::__lambda_93656037d821f0cf4f10769c2d148d9f_ @ 0x18055C950
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_93656037d821f0cf4f10769c2d148d9f___ @ 0x18055BD50 (CreationThreadDispatcher--RunSync__lambda_93656037d821f0cf4f10769c2d148d9f___.c)
 *     CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f___::_CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f___ @ 0x18055CA3C (CAsyncCallbackWithLambda__lambda_74c676e1075650fb24d91a9b16da121f___--_CAsyncCallbackWithLambda_.c)
 *     _lambda_c876813055a0f8eb90a291ca9ab0fec3_::operator() @ 0x18055D178 (_lambda_c876813055a0f8eb90a291ca9ab0fec3_--operator().c)
 *     __lambda_c876813055a0f8eb90a291ca9ab0fec3_::operator()_::_1_::dtor$2 @ 0x1806F2CFD (__lambda_c876813055a0f8eb90a291ca9ab0fec3_--operator()_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_93656037d821f0cf4f10769c2d148d9f_::__lambda_93656037d821f0cf4f10769c2d148d9f_(__int64 *a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 7);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1 + 6);
  return wil::com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>::~com_ptr_t<VirtualDesktopGestureWindow,wil::err_returncode_policy>(a1);
}
