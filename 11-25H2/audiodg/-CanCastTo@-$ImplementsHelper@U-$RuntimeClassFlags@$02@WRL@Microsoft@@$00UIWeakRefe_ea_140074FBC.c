/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIAudioProcessingObjectConfiguration@@UIAudioProcessingObjectRT@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIApoAuxiliaryInputRT@@UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAudioProcessingObjectPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x140074FBC
 * Callers:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioProcessingObject@@UIAudioProcessingObjectConfiguration@@UIAudioProcessingObjectRT@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIApoAuxiliaryInputRT@@UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAudioProcessingObjectPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioProcessingObject@@UIAudioProcessingObjectConfiguration@@UIAudioProcessingObjectRT@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIApoAuxiliaryInputRT@@UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAudioProcessingObjectPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x140074B38 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioProcessing.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x14002CD60 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAudioProcessingObjectPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x140074F10 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIApoAcousticEchoCancel.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>::CanCastTo(
        __int64 a1,
        const struct _GUID *a2)
{
  const struct _GUID *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  const struct _GUID *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  const struct _GUID *v10; // rcx
  const struct _GUID *v11; // rcx
  const struct _GUID *v12; // rcx
  const struct _GUID *v13; // r10

  if ( InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( InlineIsEqualGUID(v2, &GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8)
      || InlineIsEqualGUID(v6, &GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c)
      || InlineIsEqualGUID(v10, &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17)
      || InlineIsEqualGUID(v11, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768)
      || InlineIsEqualGUID(v12, &GUID_f851809c_c177_49a0_b1b2_b66f017943ab) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IApoAcousticEchoCancellation,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>::CanCastTo(
                             v9 + 8,
                             v13);
    }
    return v8;
  }
}
