/*
 * XREFs of ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000E320
 * Callers:
 *     ?InitializeLoopbackConstrictorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x1400042B4 (-InitializeLoopbackConstrictorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessi.c)
 *     ?InitializePlaybackConstrictorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140004344 (-InitializePlaybackConstrictorInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessi.c)
 *     ??4CConnectionNode@@QEAAXAEAV0@@Z @ 0x14000CE40 (--4CConnectionNode@@QEAAXAEAV0@@Z.c)
 *     ?SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000E860 (-SetLeftFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z @ 0x14000E8A0 (-SetRightFormat@CAPOProcessNode@@UEAAXPEAUIAudioMediaType@@@Z.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14002533C (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAPEAVCConnectionNode@@@Z @ 0x140027360 (-AttachEndpointToConnection@CAudioProcessor@@AEAAJ_KPEAUIAudioEndpoint@@AEAV-$CAtlList@PEAVCConn.c)
 *     ?AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z @ 0x14002E170 (-AddPipe@CAudioDeviceGraph@@UEAAJPEAVCPipeInstance@@@Z.c)
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingObject@@@Z @ 0x140033290 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJU_GUID@@PEBGW4APO_TYPE@@AEBU2@PEAPEAUIAudioProcessingOb.c)
 *     ?CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z @ 0x140038FA4 (-CreateDummyProcessNode@CProcessNode@@SAJW4AUDIO_DIRECTION@@PEBUtWAVEFORMATEX@@PEAPEAV1@@Z.c)
 *     ??0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@_J@Z @ 0x140045938 (--0CEndpointInstance@@IEAA@PEAUIAudioEndpointRT@@_J@Z.c)
 *     ?InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioenginepolicy_0000_0009_0002@@@Z @ 0x14004EC80 (-InitializeAPORemote@CAPOWrapperSrv@@UEAAJPEBGPEAU_GUID@@U2@HHHPEAU__MIDL___MIDL_itf_audioengine.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140050990 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140050B10 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 *     ?CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14006BD54 (-CreateBridgeStreamPipeInstanceToTargetApo@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBR.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct IUnknown *__fastcall ATL::AtlComPtrAssign(struct IUnknown **a1, struct IUnknown *a2)
{
  if ( !a1 )
    return 0LL;
  if ( a2 )
    ((void (__fastcall *)(struct IUnknown *))a2->lpVtbl->AddRef)(a2);
  if ( *a1 )
    ((void (__fastcall *)(_QWORD))(*a1)->lpVtbl->Release)(*a1);
  *a1 = a2;
  return a2;
}
