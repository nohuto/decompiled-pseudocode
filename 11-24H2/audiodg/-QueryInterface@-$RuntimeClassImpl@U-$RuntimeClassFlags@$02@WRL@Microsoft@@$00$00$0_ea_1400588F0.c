/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400588F0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400677D0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1400677D0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400677E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1400677E0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400677F0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1400677F0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140067800 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_140067800.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140067810 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_140067810.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::QueryInterface(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassBaseT<3>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>>(
           a1,
           a2,
           a3);
}
