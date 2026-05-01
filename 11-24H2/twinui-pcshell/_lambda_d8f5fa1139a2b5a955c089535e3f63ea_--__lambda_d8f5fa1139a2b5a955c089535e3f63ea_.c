/*
 * XREFs of _lambda_d8f5fa1139a2b5a955c089535e3f63ea_::__lambda_d8f5fa1139a2b5a955c089535e3f63ea_ @ 0x1804AD00C
 * Callers:
 *     _lambda_33b4202f4967ef1cd2a31cded00016d1_::operator() @ 0x1802B3FC0 (_lambda_33b4202f4967ef1cd2a31cded00016d1_--operator().c)
 *     CreationThreadDispatcher::RunSync__lambda_d8f5fa1139a2b5a955c089535e3f63ea___ @ 0x1804ACEE0 (CreationThreadDispatcher--RunSync__lambda_d8f5fa1139a2b5a955c089535e3f63ea___.c)
 *     CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___::_CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___ @ 0x1804AD034 (CAsyncCallbackWithLambda__lambda_78799983d33d247de5fc03aad4230606___--_CAsyncCallbackWithLambda_.c)
 *     __lambda_33b4202f4967ef1cd2a31cded00016d1_::operator()_::_1_::dtor$1 @ 0x1806DDF2B (__lambda_33b4202f4967ef1cd2a31cded00016d1_--operator()_--_1_--dtor$1.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

BOOL __fastcall lambda_d8f5fa1139a2b5a955c089535e3f63ea_::__lambda_d8f5fa1139a2b5a955c089535e3f63ea_(__int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 8));
  return wil::details::unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HFONT__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HFONT__ *,HFONT__ *,0,std::nullptr_t>>((void **)a1);
}
