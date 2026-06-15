/*
 * XREFs of ?NDRelease@CSystemEffectWrapper@@UEAAKXZ @ 0x140034F70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioProcessingObject@@UIAudioProcessingObjectConfiguration@@UIAudioProcessingObjectRT@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIApoAuxiliaryInputRT@@UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAudioProcessingObjectPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x140034FF8 (-InternalRelease@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioPro.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007506C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSystemEffectWrapper::NDRelease(CSystemEffectWrapper *this)
{
  char *v2; // rbx
  unsigned int v3; // edi
  __int64 v5; // rcx

  v2 = (char *)this - 128;
  v3 = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioProcessingObject,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>::InternalRelease((char *)this - 128);
  if ( !v3 )
  {
    v5 = *((_QWORD *)this + 1);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      *((_QWORD *)this + 1) = 0LL;
    }
    if ( v2 )
      (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v2 + 48LL))(v2, 1LL);
  }
  return v3;
}
