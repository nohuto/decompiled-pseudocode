/*
 * XREFs of ??1?$EventRegistration@UIApplicationViewCollection@@UIApplicationViewChangeListener@@@details@AppViewEventHelpers@@UEAA@XZ @ 0x1806BF9B0
 * Callers:
 *     ??_GShellHookRegistration@details@AppViewEventHelpers@@UEAAPEAXI@Z @ 0x1806BFC40 (--_GShellHookRegistration@details@AppViewEventHelpers@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VSmartCookie@@U?$default_delete@VSmartCookie@@@std@@@std@@QEAA@XZ @ 0x1802CEC6C (--1-$unique_ptr@VSmartCookie@@U-$default_delete@VSmartCookie@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall AppViewEventHelpers::details::EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>::~EventRegistration<IApplicationViewCollection,IApplicationViewChangeListener>(
        __int64 a1)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 64));
  std::unique_ptr<SmartCookie>::~unique_ptr<SmartCookie>((_QWORD *)(a1 + 48));
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>,IImmersiveApplicationTransitionHelper>(a1 + 8);
}
