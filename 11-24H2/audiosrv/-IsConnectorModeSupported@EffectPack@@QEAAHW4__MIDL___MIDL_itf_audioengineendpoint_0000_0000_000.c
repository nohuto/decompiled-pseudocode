/*
 * XREFs of ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x180030D88
 * Callers:
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180034E44 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVEffectPack@@PEAUIPropertyStore@@PEAVSystemEffectDesc.c)
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180035060 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800357B0 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003B110 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800691B0 (-AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001.c)
 *     ?IsSWAPOFallbackSupported@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180071684 (-IsSWAPOFallbackSupported@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_00.c)
 *     ?UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x1800815EC (-UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audio.c)
 *     ?IsProcessingModeSupportedOnHostConnector@CPolicyConfig@@QEAAHPEBGU_GUID@@@Z @ 0x1801064B8 (-IsProcessingModeSupportedOnHostConnector@CPolicyConfig@@QEAAHPEBGU_GUID@@@Z.c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180031550 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall EffectPack::IsConnectorModeSupported(_QWORD *a1, __int64 a2, int a3, _QWORD *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rbp
  _QWORD *v8; // rsi
  __int64 v9; // rax
  BOOL v10; // ebx
  __int64 v11; // r14
  __int64 v12; // rbx
  int i; // eax
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  PROPVARIANT pvar[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]

  v4 = 0;
  v5 = (int)a2;
  v8 = a1;
  if ( (_DWORD)a2 )
    goto LABEL_27;
  v9 = a1[198];
  if ( *(_BYTE *)(v9 + 8235) )
    goto LABEL_27;
  a1 = *(_QWORD **)(v9 + 80);
  v10 = 1;
  if ( !a1 )
    goto LABEL_27;
  v18 = 0LL;
  *(_OWORD *)pvar = 0LL;
  if ( (*(int (__fastcall **)(_QWORD *, const PROPERTYKEY *, PROPVARIANT *))(*a1 + 40LL))(
         a1,
         &PKEY_AudioEndpoint_Disable_SysFx,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    v10 = LODWORD(pvar[1]) == 0;
  }
  PropVariantClear(pvar);
  if ( v10 || a3 == 1 )
  {
LABEL_27:
    if ( v5 >= v8[180]
      || (v11 = 96 * v5,
          SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(96 * v5 + v8[181])),
          v5 >= v8[182])
      || (SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v11 + v8[183])), v5 >= v8[184])
      || (SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v11 + v8[185])), v5 >= v8[214]) )
    {
      _o_terminate(a1, a2);
      __debugbreak();
      JUMPOUT(0x180030F09LL);
    }
    v12 = v8[215] + 16 * v5;
  }
  else
  {
    v12 = (__int64)(v8 + 250);
  }
  for ( i = 0; i < *(_DWORD *)(v12 + 8); ++i )
  {
    v14 = (_QWORD *)(*(_QWORD *)v12 + 16LL * i);
    v15 = *v14 - *a4;
    if ( *v14 == *a4 )
      v15 = v14[1] - a4[1];
    if ( !v15 )
      goto LABEL_20;
  }
  i = -1;
LABEL_20:
  LOBYTE(v4) = i != -1;
  return v4;
}
