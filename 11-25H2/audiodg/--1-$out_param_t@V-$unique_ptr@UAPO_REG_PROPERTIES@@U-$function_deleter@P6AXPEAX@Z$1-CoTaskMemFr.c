/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@UAPO_REG_PROPERTIES@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x14003DC14
 * Callers:
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x1400232F0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400333F0 (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400340F0 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140042184 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 *     ?RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@I@Z @ 0x140067970 (-RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMed.c)
 *     ?RuntimeClassInitialize@CBridgeToRenderGraph@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUICrossProcessMemory@@PEAUSYSTEM_AUDIO_STREAM@@KII@Z @ 0x140067D3C (-RuntimeClassInitialize@CBridgeToRenderGraph@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUICrossProces.c)
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$1 @ 0x140091E1F (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$1.c)
 *     _CAPOProcessingHost::RegisterAPONotifications_::_1_::dtor$6 @ 0x140092D16 (_CAPOProcessingHost--RegisterAPONotifications_--_1_--dtor$6.c)
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$14 @ 0x14009325E (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$14.c)
 *     _CAudioProcessor::ValidateConnectionFormatMatchesEndpoint_::_1_::dtor$1 @ 0x140093719 (_CAudioProcessor--ValidateConnectionFormatMatchesEndpoint_--_1_--dtor$1.c)
 *     _CBridgeToApoAuxInput::RuntimeClassInitialize_::_1_::dtor$0 @ 0x140093D59 (_CBridgeToApoAuxInput--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _FillAuxiliaryInputInitStruct_::_1_::dtor$3 @ 0x140093D7D (_FillAuxiliaryInputInitStruct_--_1_--dtor$3.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$11 @ 0x140093DFB (_FillAPOInitSystemEffectsStructure_--_1_--dtor$11.c)
 *     _CBridgeSourceEndpoint::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1400962AD (_CBridgeSourceEndpoint--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CBridgeToRenderGraph::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1400962F5 (_CBridgeToRenderGraph--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(
        __int64 a1)
{
  void *v1; // r8

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(void ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      CoTaskMemFree(v1);
  }
}
