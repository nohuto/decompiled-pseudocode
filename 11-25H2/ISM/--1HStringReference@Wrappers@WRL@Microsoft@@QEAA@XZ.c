/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18009C250
 * Callers:
 *     _PnpApiWrapper::Details::EnumerateDevices_::_1_::dtor$1 @ 0x1801CA740 (_PnpApiWrapper--Details--EnumerateDevices_--_1_--dtor$1.c)
 *     _wil::GetActivationFactory_Windows::System::IDispatcherQueueControllerStatics__::_1_::dtor$1 @ 0x1801CDBB3 (_wil--GetActivationFactory_Windows--System--IDispatcherQueueControllerStatics__--_1_--dtor$1.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncActionCompletedHandler_Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncCausalityOptions_&SetConstantToDefaultAsyncCasualityName_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::TraceOperationStart_::_1_::dtor$0 @ 0x1801CE001 (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncActionCompletedHandler_Microsoft--WRL--Det.c)
 *     _PnpApiWrapper::Details::OnDeviceNotification_::_1_::dtor$1 @ 0x1801CEB62 (_PnpApiWrapper--Details--OnDeviceNotification_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
