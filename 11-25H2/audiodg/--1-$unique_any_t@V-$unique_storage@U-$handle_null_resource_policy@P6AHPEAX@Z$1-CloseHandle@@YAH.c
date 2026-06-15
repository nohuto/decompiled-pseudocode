/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x140049074
 * Callers:
 *     _CAudioDGModule::CAudioDGModule_::_1_::dtor$3 @ 0x140095127 (_CAudioDGModule--CAudioDGModule_--_1_--dtor$3.c)
 *     _Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::InitializeEvents_::_1_::dtor$0 @ 0x140095425 (_Windows--Media--Devices--Internal--AudioDeviceBrokerDevice--InitializeEvents_--_1_--dtor$0.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$2 @ 0x140095982 (_CAudioPump--CAudioPump_--_1_--dtor$2.c)
 *     _CAudioPump::CAudioPump_::_1_::dtor$10 @ 0x140095A47 (_CAudioPump--CAudioPump_--_1_--dtor$10.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$15 @ 0x1400968D8 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$15.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  return wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(a1);
}
