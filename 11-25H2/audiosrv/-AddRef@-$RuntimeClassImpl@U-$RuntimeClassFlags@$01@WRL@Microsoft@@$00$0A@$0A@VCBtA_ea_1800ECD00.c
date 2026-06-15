/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCBtAudioResourceManagerBase@@UIEndpointCustomFormatHandler@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800ECD00
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCBtAudioResourceManagerBase@@UIEndpointCustomFormatHandler@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800ECD20 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCBtA_ea_1800ECD20.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCBtAudioResourceManagerBase@@UIEndpointCustomFormatHandler@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1800ECD30 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCBtA_ea_1800ECD30.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCBtAudioResourceManagerBase@@UIEndpointCustomFormatHandler@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800ECD40 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCBtA_ea_1800ECD40.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCBtAudioResourceManagerBase@@UIEndpointCustomFormatHandler@@@Details@WRL@Microsoft@@WBPA@EAAKXZ @ 0x1800ECD50 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCBtA_ea_1800ECD50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CBtAudioResourceManagerBase,IEndpointCustomFormatHandler>::AddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 508), a2);
}
