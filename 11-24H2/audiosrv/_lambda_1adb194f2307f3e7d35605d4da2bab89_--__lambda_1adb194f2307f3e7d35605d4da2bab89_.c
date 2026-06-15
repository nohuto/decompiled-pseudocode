/*
 * XREFs of _lambda_1adb194f2307f3e7d35605d4da2bab89_::__lambda_1adb194f2307f3e7d35605d4da2bab89_ @ 0x18014F9F4
 * Callers:
 *     ?OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z @ 0x180075520 (-OnDeviceStateChanged@AtmosCheck@@UEAAJPEBGK@Z.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1adb194f2307f3e7d35605d4da2bab89___::_CTaskWrapper__lambda_1adb194f2307f3e7d35605d4da2bab89___ @ 0x18014FA1C (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1adb194f2307f3e7d35605d4da2bab89___--_CTask.c)
 * Callees:
 *     ??1?$shared_any_t@V?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180027F9C (--1-$shared_any_t@V-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6A.c)
 */

__int64 __fastcall lambda_1adb194f2307f3e7d35605d4da2bab89_::__lambda_1adb194f2307f3e7d35605d4da2bab89_(__int64 *a1)
{
  wil::shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>::~shared_any_t<wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>>((__int64)(a1 + 1));
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a1);
}
