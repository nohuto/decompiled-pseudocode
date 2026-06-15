/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectPreferredFormatSupport@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180141970
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectPreferredFormatSupport>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[17] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x48);
  return a1;
}
