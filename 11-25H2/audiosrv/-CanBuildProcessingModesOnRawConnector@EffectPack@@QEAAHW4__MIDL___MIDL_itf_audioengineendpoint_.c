/*
 * XREFs of ?CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@@Z @ 0x1800372A8
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800328EC (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003ED58 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004CF24 (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180089E24 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800BE314 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 * Callees:
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180036310 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800366C0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18003758C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EffectPack::CanBuildProcessingModesOnRawConnector(__int64 i, __int64 a2, int a3)
{
  unsigned __int64 v4; // r15
  __int64 v5; // rbx
  void *v6; // r14
  unsigned int v7; // r13d
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r14
  _BOOL8 v13; // r8
  signed int v15; // eax
  __int64 v16; // r12
  __int64 v17; // rax
  int j; // ecx
  _QWORD *v19; // r8
  __int64 v20; // rdx
  void *v21; // [rsp+20h] [rbp-20h] BYREF
  signed int v22; // [rsp+28h] [rbp-18h]
  int v23; // [rsp+2Ch] [rbp-14h]
  GUID v24; // [rsp+30h] [rbp-10h]
  signed int v25; // [rsp+88h] [rbp+48h]
  __int64 v27; // [rsp+98h] [rbp+58h]

  v4 = (int)a2;
  v5 = i;
  v6 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  v7 = 0;
  v24 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( (_DWORD)a2
    || (i = *(_QWORD *)(i + 1584), *(_BYTE *)(i + 8235))
    || CEndpointCharacteristics::AreEnhancementsEnabled((CEndpointCharacteristics *)i)
    || a3 == 1 )
  {
    if ( v4 >= *(_QWORD *)(v5 + 1440) )
      goto LABEL_51;
    v8 = 96 * v4;
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(96 * v4 + *(_QWORD *)(v5 + 1448)));
    if ( v4 >= *(_QWORD *)(v5 + 1456) )
      goto LABEL_51;
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v8 + *(_QWORD *)(v5 + 1464)));
    if ( v4 >= *(_QWORD *)(v5 + 1472) )
      goto LABEL_51;
    SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v8 + *(_QWORD *)(v5 + 1480)));
    if ( v4 >= *(_QWORD *)(v5 + 1712) )
      goto LABEL_51;
    v9 = *(_QWORD *)(v5 + 1720) + 16 * v4;
  }
  else
  {
    v9 = v5 + 2000;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (int)i >= *(_DWORD *)(v9 + 8) )
      goto LABEL_22;
    a2 = *(_QWORD *)v9 + 16LL * (int)i;
    v10 = *(_QWORD *)a2 - *(_QWORD *)&v24.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&v24.Data1 )
      v10 = *(_QWORD *)(a2 + 8) - *(_QWORD *)v24.Data4;
    if ( !v10 )
      break;
  }
  if ( (_DWORD)i != -1 )
  {
    if ( v4 < *(_QWORD *)(v5 + 1456) )
    {
      v11 = 96 * v4;
      v12 = 96 * v4 + *(_QWORD *)(v5 + 1464);
      v13 = a3 == 1
         || CEndpointCharacteristics::AreEnhancementsEnabled(*(CEndpointCharacteristics **)(v5 + 1584))
         || (_DWORD)v4 == 3;
      SystemEffectDescriptor::GetSupportedProcessingModes(v12, &v21, v13);
      v15 = 0;
      v16 = 0LL;
      v6 = v21;
      for ( i = (__int64)v21; ; i = v27 + 16 )
      {
        v27 = i;
        a2 = v22;
        v25 = v15;
        if ( v16 >= v22 )
          break;
        if ( v16 < 0 || v15 >= v22 )
        {
          ATL::_AtlRaiseException(0xC000008C, v22);
          __debugbreak();
        }
        v24 = *(GUID *)i;
        if ( (_DWORD)v4
          || (i = *(_QWORD *)(v5 + 1584), *(_BYTE *)(i + 8235))
          || CEndpointCharacteristics::AreEnhancementsEnabled((CEndpointCharacteristics *)i)
          || a3 == 1 )
        {
          if ( v4 >= *(_QWORD *)(v5 + 1440) )
            goto LABEL_51;
          SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v11 + *(_QWORD *)(v5 + 1448)));
          if ( v4 >= *(_QWORD *)(v5 + 1456) )
            goto LABEL_51;
          SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v11 + *(_QWORD *)(v5 + 1464)));
          if ( v4 >= *(_QWORD *)(v5 + 1472) )
            goto LABEL_51;
          SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v11 + *(_QWORD *)(v5 + 1480)));
          if ( v4 >= *(_QWORD *)(v5 + 1712) )
            goto LABEL_51;
          v17 = *(_QWORD *)(v5 + 1720) + 16 * v4;
        }
        else
        {
          v17 = v5 + 2000;
        }
        for ( j = 0; ; ++j )
        {
          if ( j >= *(_DWORD *)(v17 + 8) )
            goto LABEL_21;
          v19 = (_QWORD *)(*(_QWORD *)v17 + 16LL * j);
          v20 = *v19 - *(_QWORD *)&v24.Data1;
          if ( *v19 == *(_QWORD *)&v24.Data1 )
            v20 = v19[1] - *(_QWORD *)v24.Data4;
          if ( !v20 )
            break;
        }
        if ( j == -1 )
        {
LABEL_21:
          v7 = 1;
          goto LABEL_22;
        }
        v15 = v25 + 1;
        ++v16;
      }
      goto LABEL_22;
    }
LABEL_51:
    _o_terminate(i, a2);
    __debugbreak();
    JUMPOUT(0x180037584LL);
  }
LABEL_22:
  if ( v6 )
    free(v6);
  return v7;
}
