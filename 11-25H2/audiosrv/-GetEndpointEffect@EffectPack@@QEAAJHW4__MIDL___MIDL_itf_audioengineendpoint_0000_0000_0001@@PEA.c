/*
 * XREFs of ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180037BF8
 * Callers:
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18003E7C8 (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18007B8A4 (-GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18007E724 (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180089E24 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18012C868 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800351A0 (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180036310 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800366C0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x180037E04 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x18004BC10 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ?ResolveAllOverridingChains@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005A690 (-ResolveAllOverridingChains@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 */

__int64 __fastcall EffectPack::GetEndpointEffect(
        EffectPack *this,
        __int64 a2,
        int a3,
        struct ICompositeSystemEffect **a4,
        struct IAudioProcessingObject **a5,
        struct IAudioSystemEffects2 **a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v8; // rbp
  __int64 v10; // r14
  __int64 v11; // rcx
  CEndpointCharacteristics *v12; // rcx
  char *v13; // rax
  __int64 v15; // rax
  GUID v16; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v17; // [rsp+B8h] [rbp+10h]

  v17 = a2;
  v6 = 0;
  v8 = a3;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( (unsigned __int64)a3 >= *((_QWORD *)this + 180) )
    goto LABEL_24;
  v10 = 96LL * a3;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v10 + *((_QWORD *)this + 181)));
  if ( v8 >= *((_QWORD *)this + 182) )
    goto LABEL_24;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v10 + *((_QWORD *)this + 183)));
  if ( v8 >= *((_QWORD *)this + 184) )
    goto LABEL_24;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v10 + *((_QWORD *)this + 185)));
  if ( v8 >= *((_QWORD *)this + 202) )
    goto LABEL_24;
  if ( *(_DWORD *)(*((_QWORD *)this + 203) + 4 * v8) )
  {
    if ( v17 )
      goto LABEL_23;
    if ( v8 >= *((_QWORD *)this + 184) )
      goto LABEL_24;
    v11 = v10 + *((_QWORD *)this + 185);
    v16 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    if ( (unsigned __int8)SystemEffectDescriptor::IsModeSupportedForStreaming(v11, &v16, 1LL) )
    {
      if ( !(_DWORD)v8 )
      {
        v12 = (CEndpointCharacteristics *)*((_QWORD *)this + 198);
        if ( !*((_BYTE *)v12 + 8235) && !CEndpointCharacteristics::AreEnhancementsEnabled(v12) )
        {
          v13 = (char *)this + 2000;
LABEL_20:
          if ( *((_DWORD *)v13 + 2) > 1u )
            return v6;
LABEL_23:
          v15 = gsl::span<SystemEffectDescriptor,-1>::operator[]((char *)this + 1472, v8);
          v16 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          return (unsigned int)EffectPack::GetInitializedSystemEffectInterface(
                                 (__int64)this,
                                 v15,
                                 3,
                                 1,
                                 (__int128 *)&v16,
                                 v17,
                                 0,
                                 v8,
                                 a4,
                                 a5,
                                 a6);
        }
      }
      EffectPack::ResolveAllOverridingChains(this, (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v8);
      if ( v8 < *((_QWORD *)this + 214) )
      {
        v13 = (char *)(*((_QWORD *)this + 215) + 16 * v8);
        goto LABEL_20;
      }
LABEL_24:
      _o_terminate(this, a2);
      __debugbreak();
      JUMPOUT(0x180037DFELL);
    }
  }
  return v6;
}
