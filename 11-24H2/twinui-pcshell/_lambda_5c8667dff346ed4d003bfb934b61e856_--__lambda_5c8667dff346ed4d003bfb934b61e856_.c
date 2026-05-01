/*
 * XREFs of _lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_ @ 0x1802CAC14
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___::_CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___ @ 0x1802F5B88 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_5c8667dff346ed4d003bfb934b61e856___--_CTask.c)
 *     ?ShowAsStandalone@CAppViewManager@@UEAAJPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPresentationRequestedArgs@@@Z @ 0x1802F96B0 (-ShowAsStandalone@CAppViewManager@@UEAAJPEAUIViewEventArgsForShowAsStandalone@ViewManagerInterop.c)
 *     ?DragSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z @ 0x1804CF340 (-DragSwitchItem@CAsyncSwitchItemController@@UEAAXPEAUISwitchItem@@PEAUIExternalDragCallback@@@Z.c)
 *     ?_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelayedAppActivation@@PEAUISplashScreen@@@Z @ 0x1804E8460 (-_PerformDelayedActivationInternal@CSwitchController@@AEAAJPEAUIImmersiveApplication@@PEAUIDelay.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

__int64 __fastcall lambda_5c8667dff346ed4d003bfb934b61e856_::__lambda_5c8667dff346ed4d003bfb934b61e856_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
