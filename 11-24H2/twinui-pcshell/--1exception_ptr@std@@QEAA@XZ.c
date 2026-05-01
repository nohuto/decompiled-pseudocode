/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x1802288C4
 * Callers:
 *     ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@@experimental@std@@U?$IAsyncOperation@UPackageVolume@Deployment@Management@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x180338640 (-unhandled_exception@-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UPackage.c)
 *     winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncAction__lambda_da9f5ee43db59325462f58bbda1cfc4c__const___::promise_type_winrt::Windows::Foundation::IAsyncAction_void_::unhandled_exception @ 0x18036147C (winrt--impl--promise_base_std--experimental--coroutine_traits_winrt--Windows--Found_ea_18036147C.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_3de5d145e6ce0c9b4d563a35329ea675____::_1_::dtor$0 @ 0x1806D60F4 (__anonymous_namespace_--RunSynchronousInSTA__lambda_3de5d145e6ce0c9b4d563a35329ea675____--_1_--d.c)
 *     _UwpWindowManagerBridge::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1806D6515 (_UwpWindowManagerBridge--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x1806DB5AF (_std--rethrow_exception_--_1_--dtor$0.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_5724e9f0897f2fd11b6a24af4b09628e____::_1_::dtor$0 @ 0x1806FC9F6 (__anonymous_namespace_--RunSynchronousInSTA__lambda_5724e9f0897f2fd11b6a24af4b09628e____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_0b18bae158eb7b112561ba3eda31e137____::_1_::dtor$0 @ 0x1806FCA08 (__anonymous_namespace_--RunSynchronousInSTA__lambda_0b18bae158eb7b112561ba3eda31e137____--_1_--d.c)
 *     __anonymous_namespace_::RunSynchronousInSTA__lambda_a35eeb229c7164fc066a4b8a11da43cb____::_1_::dtor$0 @ 0x1806FCA1A (__anonymous_namespace_--RunSynchronousInSTA__lambda_a35eeb229c7164fc066a4b8a11da43cb____--_1_--d.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
