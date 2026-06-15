/*
 * XREFs of _lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_ @ 0x1800B4E3C
 * Callers:
 *     ?NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z @ 0x180029380 (-NotifyNewAudioProtocol@CVolumeProvider@@UEAAXKI@Z.c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800303E0 (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800357B0 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@H@Z @ 0x18005AA70 (-DisconnectFromRightSubmix@CStreamInstanceProxy@@UEAAJPEAUIAudioStreamInfo@@H@Z.c)
 *     ?CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PEAW4PMP_MATCH_TYPE@@@Z @ 0x180060E00 (-CompareProcessingModeParameters@CSharedStreamGroupProxy@@UEAAJAEBVCProcessingModeParameters@@PE.c)
 *     ?TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z @ 0x18006DBD8 (-TryOpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJPEAPEAUIPropertyStore@@@Z.c)
 *     ?GetControllableDiscoveryMFXEffects@AudioModeEffectsWatcher@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x18006F970 (-GetControllableDiscoveryMFXEffects@AudioModeEffectsWatcher@@UEAAJAEAV-$vector@UAudioEffectInter.c)
 *     ?RevokeSessionsWithoutDataFlowAccess@AudioSessionManagerProvider@@YAJPEBG0@Z @ 0x1800C7B40 (-RevokeSessionsWithoutDataFlowAccess@AudioSessionManagerProvider@@YAJPEBG0@Z.c)
 *     ?GetSubmixHelper@DeviceGraphStore@@YAJAEAV?$unordered_set@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@U?$hash@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@U?$equal_to@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@4@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800FA798 (-GetSubmixHelper@DeviceGraphStore@@YAJAEAV-$unordered_set@V-$com_ptr_t@UIProcessSubmixProxy@@Uer.c)
 *     ?IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ @ 0x180135ABC (-IsSPDIFEndpoint@CEndpointCharacteristics@@QEAA_NXZ.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall lambda_a8a3ec141be49a0429a3d190c13e56dc_::_lambda_a8a3ec141be49a0429a3d190c13e56dc_(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *result; // rax

  *a1 = a2;
  result = a1;
  a1[1] = a3;
  return result;
}
