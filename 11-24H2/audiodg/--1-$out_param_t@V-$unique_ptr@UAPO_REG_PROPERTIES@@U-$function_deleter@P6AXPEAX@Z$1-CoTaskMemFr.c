/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@UAPO_REG_PROPERTIES@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x14003D914
 * Callers:
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140022FF0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x1400330F0 (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140033DF0 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ?Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@@Z @ 0x140041E84 (-Initialize@CFormatConverterPipe@@QEAAJPEAUIDeviceGraphObjectCache@@PEBUtWAVEFORMATEX@@PEBUFORMA.c)
 *     ?RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMediaType@@I@Z @ 0x140067900 (-RuntimeClassInitialize@CBridgeSourceEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@_JPEAUIAudioMed.c)
 *     ?RuntimeClassInitialize@CBridgeToRenderGraph@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUICrossProcessMemory@@PEAUSYSTEM_AUDIO_STREAM@@KII@Z @ 0x140067CCC (-RuntimeClassInitialize@CBridgeToRenderGraph@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUICrossProces.c)
 *     _CAudioProcessor::AddAPOOutputConnection_::_1_::dtor$1 @ 0x14009189F (_CAudioProcessor--AddAPOOutputConnection_--_1_--dtor$1.c)
 *     _CAPOProcessingHost::RegisterAPONotifications_::_1_::dtor$6 @ 0x140092766 (_CAPOProcessingHost--RegisterAPONotifications_--_1_--dtor$6.c)
 *     _CAPOProcessNode::CreateAPOProcessNode_::_1_::dtor$14 @ 0x140092CBE (_CAPOProcessNode--CreateAPOProcessNode_--_1_--dtor$14.c)
 *     _CAudioProcessor::ValidateConnectionFormatMatchesEndpoint_::_1_::dtor$1 @ 0x140093179 (_CAudioProcessor--ValidateConnectionFormatMatchesEndpoint_--_1_--dtor$1.c)
 *     _CBridgeToApoAuxInput::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1400937B9 (_CBridgeToApoAuxInput--RuntimeClassInitialize_--_1_--dtor$0.c)
 *     _FillAuxiliaryInputInitStruct_::_1_::dtor$3 @ 0x1400937EF (_FillAuxiliaryInputInitStruct_--_1_--dtor$3.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$11 @ 0x14009386D (_FillAPOInitSystemEffectsStructure_--_1_--dtor$11.c)
 *     _CBridgeSourceEndpoint::RuntimeClassInitialize_::_1_::dtor$1 @ 0x140095D31 (_CBridgeSourceEndpoint--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CBridgeToRenderGraph::RuntimeClassInitialize_::_1_::dtor$0 @ 0x140095D79 (_CBridgeToRenderGraph--RuntimeClassInitialize_--_1_--dtor$0.c)
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
