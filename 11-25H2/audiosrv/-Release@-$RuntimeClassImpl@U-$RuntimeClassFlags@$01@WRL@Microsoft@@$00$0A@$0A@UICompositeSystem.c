/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectPreferredFormatSupport@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180142460
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectPreferredFormatSupport@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1801424C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICo_ea_1801424C0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectPreferredFormatSupport@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1801424D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICo_ea_1801424D0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectPreferredFormatSupport@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1801424E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICo_ea_1801424E0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectPreferredFormatSupport@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1801424F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICo_ea_1801424F0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectPreferredFormatSupport@@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180142500 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICo_ea_180142500.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectPreferredFormatSupport@@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x180142510 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICo_ea_180142510.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@UIAudioSystemEffectsCustomFormats@@UIApoAcousticEchoCancellation@@UIApoAuxiliaryInputConfiguration@@UIAudioProcessingObjectPreferredFormatSupport@@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x180142520 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICo_ea_180142520.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18004FFD0 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal,IAudioSystemEffectsCustomFormats,IApoAcousticEchoCancellation,IApoAuxiliaryInputConfiguration,IAudioProcessingObjectPreferredFormatSupport>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // r9

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 68), a2);
  if ( !v2 )
  {
    if ( v3 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 48LL))(v3, v2 + 1);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v2;
}
