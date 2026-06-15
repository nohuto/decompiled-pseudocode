/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIAudioProcessingObjectConfiguration@@UIAudioProcessingObjectRT@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIApoAuxiliaryInputRT@@UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAudioProcessingObjectPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x140072C8C
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioProcessingObject@@UIAudioProcessingObjectConfiguration@@UIAudioProcessingObjectRT@@UIAudioSystemEffects3@@UIApoAuxiliaryInputConfiguration@@UIApoAuxiliaryInputRT@@UIApoAcousticEchoCancellation@@UIAudioAmbisonics@@UIAudioProcessingObjectPreferredFormatSupport@@UISystemEffectWrapper@@UIAudioProcessingObjectNotifications2@@UIAPOWrapperSrv@@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x140072FC0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioProcessingO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,IAudioProcessingObjectConfiguration,IAudioProcessingObjectRT,IAudioSystemEffects3,IApoAuxiliaryInputConfiguration,IApoAuxiliaryInputRT,IApoAcousticEchoCancellation,IAudioAmbisonics,IAudioProcessingObjectPreferredFormatSupport,ISystemEffectWrapper,IAudioProcessingObjectNotifications2,IAPOWrapperSrv>::FillArrayWithIid(
        __int64 a1,
        _DWORD *a2,
        __int64 a3)
{
  unsigned int v3; // ecx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 result; // rax

  v3 = *a2 + 1;
  *(GUID *)(a3 + 16LL * (unsigned int)*a2) = GUID_00000038_0000_0000_c000_000000000046;
  v4 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v4) = GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8;
  v5 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v5) = GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c;
  v6 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v6) = GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17;
  v7 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v7) = GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768;
  v8 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v8) = GUID_f851809c_c177_49a0_b1b2_b66f017943ab;
  v9 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v9) = GUID_25385759_3236_4101_a943_25693dfb5d2d;
  v10 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v10) = GUID_8ab91395_f920_4132_873f_7a40607f7901;
  v11 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v11) = GUID_51cbd3c4_f1f3_4d2f_a0e1_7e9c4dd0feb3;
  v12 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v12) = GUID_1c5c2642_7b14_48c8_94d0_f2a41d7ea9bc;
  v13 = 2LL * v3++;
  *(GUID *)(a3 + 8 * v13) = GUID_ca2cfbde_a9d6_4eb0_bc95_c4d026b380f0;
  *(GUID *)(a3 + 16LL * v3) = GUID_67309ffa_1e7c_48f2_b96f_9b25b183ba25;
  result = v3 + 1;
  *a2 = result;
  return result;
}
