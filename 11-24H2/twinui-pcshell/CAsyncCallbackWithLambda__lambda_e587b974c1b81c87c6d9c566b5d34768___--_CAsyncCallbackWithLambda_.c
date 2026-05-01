/*
 * XREFs of CAsyncCallbackWithLambda__lambda_e587b974c1b81c87c6d9c566b5d34768___::_CAsyncCallbackWithLambda__lambda_e587b974c1b81c87c6d9c566b5d34768___ @ 0x1804EBD30
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_54981fe6d81686fb634cf26ccc6441d4___::_scalar_deleting_destructor_ @ 0x1804EC230 (CAsyncCallbackWithLambda__lambda_54981fe6d81686fb634cf26ccc6441d4___--_scalar_deleting_destructo.c)
 *     CAsyncCallbackWithLambda__lambda_e587b974c1b81c87c6d9c566b5d34768___::_scalar_deleting_destructor_ @ 0x1804F9F50 (CAsyncCallbackWithLambda__lambda_e587b974c1b81c87c6d9c566b5d34768___--_scalar_deleting_destructo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_e587b974c1b81c87c6d9c566b5d34768___::_CAsyncCallbackWithLambda__lambda_e587b974c1b81c87c6d9c566b5d34768___(
        __int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>(a1 + 8);
}
