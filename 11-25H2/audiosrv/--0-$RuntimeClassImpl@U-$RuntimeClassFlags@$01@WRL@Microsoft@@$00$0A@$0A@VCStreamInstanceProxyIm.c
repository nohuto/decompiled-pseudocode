/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCStreamInstanceProxyImpl@@UIStreamInstanceProxy@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x180065E1C
 * Callers:
 *     ??$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@PEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIStreamGroupProxy@@AEA_J@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeStreamInstanceProxy@@$$QEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIStreamGroupProxy@@AEA_J@Z @ 0x1800B6230 (--$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@PEAUBRIDGE_STREAM.c)
 *     ??$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAPEAUIAudioGraphCallback@@_JAEAPEAUSystemAudioStream@@@Details@WRL@Microsoft@@YAJPEAPEAUIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAPEAUIAudioGraphCallback@@$$QEA_JAEAPEAUSystemAudioStream@@@Z @ 0x1800EDF78 (--$MakeAndInitialize@VCStreamInstanceProxy@@UIStreamInstanceProxy@@AEAPEAUSYSTEM_AUDIO_STREAM_DE.c)
 * Callees:
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCStreamInstanceProxyImpl@@@Details@23@UIBridgeStreamInstanceProxy@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180065E3C (--0-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$ImplementsMarker@VCStreamIn.c)
 */

__int64 Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CStreamInstanceProxyImpl,IStreamInstanceProxy>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CStreamInstanceProxyImpl,IStreamInstanceProxy>()
{
  __int64 v0; // rcx
  __int64 result; // rax

  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CStreamInstanceProxyImpl>,IBridgeStreamInstanceProxy>();
  result = v0;
  *(_DWORD *)(v0 + 52) = 1;
  return result;
}
