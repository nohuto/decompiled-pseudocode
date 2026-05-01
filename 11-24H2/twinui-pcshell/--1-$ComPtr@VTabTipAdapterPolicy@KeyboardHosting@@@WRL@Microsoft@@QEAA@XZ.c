/*
 * XREFs of ??1?$ComPtr@VTabTipAdapterPolicy@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D0D18
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_KeyboardHosting::TabTipAdapterPolicy_KeyboardHosting::TabTipAdapterPolicy_winrt::Windows::Internal::Shell::TouchKeyboard::ITapInvokeTelemetryDataProvider_&__::_1_::dtor$2 @ 0x1806D3333 (_Microsoft--WRL--Details--MakeAndInitialize_KeyboardHosting--TabTipAdapterPolicy_Ke_ea_1806D3333.c)
 *     _TouchKeyboardExperienceManager::PerformDelayedInitialization_::_1_::dtor$1 @ 0x1806EDA00 (_TouchKeyboardExperienceManager--PerformDelayedInitialization_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::~ComPtr<KeyboardHosting::TabTipAdapterPolicy>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<KeyboardHosting::TabTipAdapterPolicy>::InternalRelease(a1);
}
