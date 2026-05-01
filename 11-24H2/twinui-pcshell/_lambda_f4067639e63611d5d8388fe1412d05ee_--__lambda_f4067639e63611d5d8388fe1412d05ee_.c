/*
 * XREFs of _lambda_f4067639e63611d5d8388fe1412d05ee_::__lambda_f4067639e63611d5d8388fe1412d05ee_ @ 0x1804C60E0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___::_CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___ @ 0x1804C6110 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_f4067639e63611d5d8388fe1412d05ee___--_CTask.c)
 *     ?InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z @ 0x1804C64A0 (-InvokeSwitchItem@CMultitaskingViewControllerBase@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1801068A4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

__int64 __fastcall lambda_f4067639e63611d5d8388fe1412d05ee_::__lambda_f4067639e63611d5d8388fe1412d05ee_(__int64 a1)
{
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)(a1 + 16));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(a1 + 8));
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)a1);
}
