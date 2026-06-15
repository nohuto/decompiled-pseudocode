/*
 * XREFs of ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x14004BCC0
 * Callers:
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$0 @ 0x140092659 (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$0.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents_::_1_::dtor$0 @ 0x140092B3E (_Windows--Media--Devices--AudioDeviceModulesManager--RegisterBrokerEvents_--_1_--dtor$0.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBroker::RuntimeClassInitialize_::_1_::dtor$1 @ 0x140092B62 (_Windows--Media--Devices--Internal--AudioDeviceBroker--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock_::_1_::dtor$0 @ 0x140092C52 (_CDeviceGraphObjectCacheManager--GetObjectCacheForEndpoint_UnderLock_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectCacheManager::SaveObjectCacheForEndpoint_::_1_::dtor$0 @ 0x140093C0D (_CDeviceGraphObjectCacheManager--SaveObjectCacheForEndpoint_--_1_--dtor$0.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$3 @ 0x140095D43 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_140095D43.c)
 *     _RpcOptionsHelper::GetRpcOptions_::_1_::dtor$0 @ 0x140095DBC (_RpcOptionsHelper--GetRpcOptions_--_1_--dtor$0.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$1 @ 0x140096AD1 (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Win_ea_140096AD1.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$2 @ 0x140096AE3 (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_140096AE3.c)
 *     _Windows::Internal::Details::GitInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager___Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs____Windows::Internal::GitPtrSupportsAgile_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager___Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs______2_::Invoke_::_1_::dtor$0 @ 0x140096B07 (_Windows--Internal--Details--GitInvokeHelper_Windows--Foundation--ITypedEventHandler_Windows--Me.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$4 @ 0x140096CB8 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL::WeakRef::~WeakRef(__int64 *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this);
}
