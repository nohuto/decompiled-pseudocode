/*
 * XREFs of ?InternalRelease@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioProcessingObject@@UIAudioProcessingObjectConfiguration@@UIAudioProcessingObjectRT@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIApoAuxiliaryInputRT@@UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAudioProcessingObjectPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x140034CF8
 * Callers:
 *     ?NDRelease@CSystemEffectWrapper@@UEAAKXZ @ 0x140034C70 (-NDRelease@CSystemEffectWrapper@@UEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioProcessingObject@@UIAudioProcessingObjectConfiguration@@UIAudioProcessingObjectRT@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIApoAuxiliaryInputRT@@UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAudioProcessingObjectPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140073300 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioProcessingO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioProcessingObject,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>::InternalRelease(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // edx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 120);
  while ( 1 )
  {
    if ( v1 < 0 )
      return Microsoft::WRL::Details::SafeUnknownDecrementReference(
               (Microsoft::WRL::Details *)(2 * v1 + 16),
               (volatile int *)((unsigned __int64)v1 >> 63));
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      break;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 120), v1 - 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return 2147483646LL;
}
