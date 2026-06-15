/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioProcessingObject@@UIAudioProcessingObjectConfiguration@@UIAudioProcessingObjectRT@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIApoAuxiliaryInputRT@@UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAudioProcessingObjectPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1400754B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIAudioProcessingObjectConfiguration@@UIAudioProcessingObjectRT@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIApoAuxiliaryInputRT@@UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAudioProcessingObjectPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x14007518C (-FillArrayWithIid@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceS.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioProcessingObject,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>::GetIids(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0xE0uLL);
  if ( v6 )
  {
    v10 = 2;
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>::FillArrayWithIid(
      v7,
      &v10,
      (__int64)v6);
    *a2 = 14;
    *a3 = v8;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
