/*
 * XREFs of ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x140040490
 * Callers:
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$0 @ 0x140091E0D (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$0.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$9 @ 0x140092D04 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$9.c)
 *     _CAudioProcessor::ValidateConnectionFormatMatchesEndpoint_::_1_::dtor$0 @ 0x140093707 (_CAudioProcessor--ValidateConnectionFormatMatchesEndpoint_--_1_--dtor$0.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$6 @ 0x140093DB3 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$6.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$10 @ 0x140093DE9 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$10.c)
 *     _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$9 @ 0x1400955DD (_Windows--Media--Devices--AudioDeviceModulesManager--OnModuleChanged_--_1_--dtor$9.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$8 @ 0x140096890 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    CoTaskMemFree(v1);
}
