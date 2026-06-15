/*
 * XREFs of ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18004B200
 * Callers:
 *     ?PopulateControllableEffects@AudioModeEffectsWatcher@@AEAAJPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x18001FC04 (-PopulateControllableEffects@AudioModeEffectsWatcher@@AEAAJPEAUEndpointCharacteristicsDescriptor.c)
 *     ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800331CC (-CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpo.c)
 *     ?DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@3@Z @ 0x1800497EC (-DeriveMixFormatFromDevicePipeFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x180049C1C (-IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID.c)
 *     ?GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18007B8A4 (-GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18007E724 (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180089E24 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800BE314 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18012C868 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800351A0 (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180036310 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800366C0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004B4A8 (-IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 */

__int64 __fastcall EffectPack::GetModeEffect(
        unsigned __int64 this,
        struct _GUID *a2,
        unsigned int a3,
        int a4,
        struct ICompositeSystemEffect **a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  unsigned int v7; // ebx
  unsigned __int64 v8; // r13
  EffectPack *v9; // rdi
  __int64 v10; // r14
  __int64 v11; // rax
  int v12; // r9d
  _QWORD *v13; // r8
  __int64 v14; // rdx
  __int128 v16[4]; // [rsp+60h] [rbp-48h] BYREF
  __int128 *v17; // [rsp+B8h] [rbp+10h]

  v17 = (__int128 *)a2;
  v7 = 0;
  v8 = a4;
  v9 = (EffectPack *)this;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( (unsigned __int64)a4 >= *(_QWORD *)(this + 1440) )
    goto LABEL_36;
  v10 = 96LL * a4;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v10 + *(_QWORD *)(this + 1448)));
  if ( v8 >= *((_QWORD *)v9 + 182) )
    goto LABEL_36;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v10 + *((_QWORD *)v9 + 183)));
  if ( v8 >= *((_QWORD *)v9 + 184) )
    goto LABEL_36;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v10 + *((_QWORD *)v9 + 185)));
  if ( v8 >= *((_QWORD *)v9 + 202) )
    goto LABEL_36;
  if ( *(_DWORD *)(*((_QWORD *)v9 + 203) + 4 * v8) )
  {
    if ( a3 || (v16[0] = *v17, (unsigned int)EffectPack::IsAPOModeSupported(v9, 0LL, v16, (unsigned int)v8)) )
    {
      v16[0] = *v17;
      if ( (_DWORD)v8
        || (this = *((_QWORD *)v9 + 198), *(_BYTE *)(this + 8235))
        || CEndpointCharacteristics::AreEnhancementsEnabled((CEndpointCharacteristics *)this) )
      {
        if ( v8 >= *((_QWORD *)v9 + 180) )
          goto LABEL_36;
        SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v10 + *((_QWORD *)v9 + 181)));
        if ( v8 >= *((_QWORD *)v9 + 182) )
          goto LABEL_36;
        SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v10 + *((_QWORD *)v9 + 183)));
        if ( v8 >= *((_QWORD *)v9 + 184) )
          goto LABEL_36;
        SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v10 + *((_QWORD *)v9 + 185)));
        if ( v8 >= *((_QWORD *)v9 + 214) )
          goto LABEL_36;
        v11 = *((_QWORD *)v9 + 215) + 16 * v8;
      }
      else
      {
        v11 = (__int64)v9 + 2000;
      }
      this = 0LL;
      v12 = 1;
      while ( 1 )
      {
        if ( (int)this >= *(_DWORD *)(v11 + 8) )
          goto LABEL_27;
        v13 = (_QWORD *)(*(_QWORD *)v11 + 16LL * (int)this);
        a2 = (struct _GUID *)(*v13 - *(_QWORD *)&v16[0]);
        if ( *v13 == *(_QWORD *)&v16[0] )
          a2 = (struct _GUID *)(v13[1] - *((_QWORD *)&v16[0] + 1));
        if ( !a2 )
          break;
        this = (unsigned int)(this + 1);
      }
      if ( (_DWORD)this == -1 )
LABEL_27:
        v12 = 0;
      if ( v8 < *((_QWORD *)v9 + 182) )
      {
        v14 = v10 + *((_QWORD *)v9 + 183);
        v16[0] = *v17;
        return (unsigned int)EffectPack::GetInitializedSystemEffectInterface(
                               (__int64)v9,
                               v14,
                               2,
                               v12,
                               v16,
                               a3,
                               0,
                               v8,
                               a5,
                               a6,
                               a7);
      }
LABEL_36:
      _o_terminate(this, a2);
      __debugbreak();
      JUMPOUT(0x18004B49FLL);
    }
  }
  return v7;
}
