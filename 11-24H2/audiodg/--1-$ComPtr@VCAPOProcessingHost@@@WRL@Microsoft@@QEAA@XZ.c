/*
 * XREFs of ??1?$ComPtr@VCAPOProcessingHost@@@WRL@Microsoft@@QEAA@XZ @ 0x14004A014
 * Callers:
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$0 @ 0x140092901 (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--Media--.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Media::Devices::AudioDeviceModulesManager_Windows::Media::Devices::IAudioDeviceModulesManager_void____::_1_::dtor$2 @ 0x140092B08 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Media--Devices--AudioDeviceModulesManager_W.c)
 *     _Microsoft::WRL::Details::Make_CAPOProcessingHost__::_1_::dtor$0 @ 0x1400938C7 (_Microsoft--WRL--Details--Make_CAPOProcessingHost__--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioSystemEffectsPropertyChangeNotificationsHandler_CAudioSystemEffectsPropertyChangeNotificationsHandler_unsigned_short____GUID_&_IMMDevice___&__::_1_::dtor$1 @ 0x1400941ED (_Microsoft--WRL--Details--MakeAndInitialize_CAudioSystemEffectsPropertyChangeNotificationsHandle.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$0 @ 0x140094C2D (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandler_Windows--M.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::CheckExecutionEnvironment_::_1_::dtor$0 @ 0x140096ABF (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_140096ABF.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::ComPtr<CAPOProcessingHost>::~ComPtr<CAPOProcessingHost>(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
