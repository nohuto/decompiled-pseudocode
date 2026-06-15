/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIApoAcousticEchoCancellation@@UIApoAcousticEchoCancellation2@@UIAudioProcessingObjectPreferredFormatSupport@@UIAudioSystemEffectsCustomFormats@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1800AF100
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IApoAcousticEchoCancellation,IApoAcousticEchoCancellation2,IAudioProcessingObjectPreferredFormatSupport,IAudioSystemEffectsCustomFormats>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[21] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x58);
  return a1;
}
