/*
 * XREFs of ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x14004C190
 * Callers:
 *     _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$0 @ 0x140092BD9 (_GraphStreamingResourceManager--RegisterDevice_--_1_--dtor$0.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::RegisterBrokerEvents_::_1_::dtor$0 @ 0x1400930DC (_Windows--Media--Devices--AudioDeviceModulesManager--RegisterBrokerEvents_--_1_--dtor$0.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBroker::RuntimeClassInitialize_::_1_::dtor$1 @ 0x140093100 (_Windows--Media--Devices--Internal--AudioDeviceBroker--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectCacheManager::GetObjectCacheForEndpoint_UnderLock_::_1_::dtor$0 @ 0x1400931F2 (_CDeviceGraphObjectCacheManager--GetObjectCacheForEndpoint_UnderLock_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectCacheManager::SaveObjectCacheForEndpoint_::_1_::dtor$0 @ 0x14009419B (_CDeviceGraphObjectCacheManager--SaveObjectCacheForEndpoint_--_1_--dtor$0.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$3 @ 0x1400962BF (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_1400962BF.c)
 *     _RpcOptionsHelper::GetRpcOptions_::_1_::dtor$0 @ 0x140096338 (_RpcOptionsHelper--GetRpcOptions_--_1_--dtor$0.c)
 *     _Microsoft::WRL::AsyncBase_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____Microsoft::WRL::Details::Nil_1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$1 @ 0x14009704D (_Microsoft--WRL--AsyncBase_Windows--Foundation--IAsyncOperationCompletedHandler_Win_ea_14009704D.c)
 *     _Windows::Internal::AsyncBaseFTM_Windows::Foundation::IAsyncOperationCompletedHandler_Windows::Media::Devices::ModuleCommandResult____1_Microsoft::WRL::AsyncOptions__1_0_&GUID_CAUSALITY_WINDOWS_PLATFORM_ID_2___::FireCompletion_::_1_::dtor$2 @ 0x14009705F (_Windows--Internal--AsyncBaseFTM_Windows--Foundation--IAsyncOperationCompletedHandl_ea_14009705F.c)
 *     _Windows::Internal::Details::GitInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager___Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs____Windows::Internal::GitPtrSupportsAgile_Windows::Foundation::ITypedEventHandler_Windows::Media::Devices::AudioDeviceModulesManager___Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs______2_::Invoke_::_1_::dtor$0 @ 0x140097083 (_Windows--Internal--Details--GitInvokeHelper_Windows--Foundation--ITypedEventHandler_Windows--Me.c)
 *     _CSpatialCrossProcessBaseEndpoint::CSpatialCrossProcessBaseEndpoint_::_1_::dtor$4 @ 0x140097234 (_CSpatialCrossProcessBaseEndpoint--CSpatialCrossProcessBaseEndpoint_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall Microsoft::WRL::WeakRef::~WeakRef(__int64 *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this);
}
