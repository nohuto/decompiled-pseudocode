/*
 * XREFs of ?GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180059FA8
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003B110 (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x1800313A0 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x1800313F0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180031550 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180031900 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003A750 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

void __fastcall EffectPack::GetExclusiveModeProcessingModeConfiguration(
        EffectPack *this,
        __int64 a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  unsigned __int64 v6; // r14
  EffectPack *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rbx
  int i; // eax
  _QWORD *v12; // rdx
  __int64 v13; // rcx
  __int64 SupportedConnectorModesInternal; // rcx
  __int64 v15; // rcx
  GUID v16; // xmm0
  GUID v17; // xmm0
  __int64 v18; // rcx
  GUID v19; // [rsp+20h] [rbp-28h]

  v6 = (int)a2;
  v8 = this;
  if ( (_DWORD)a2
    || (this = (EffectPack *)*((_QWORD *)this + 198), *((_BYTE *)this + 8235))
    || CEndpointCharacteristics::AreEnhancementsEnabled(this) )
  {
    if ( v6 >= *((_QWORD *)v8 + 180)
      || (v9 = 96 * v6,
          SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(96 * v6 + *((_QWORD *)v8 + 181))),
          v6 >= *((_QWORD *)v8 + 182))
      || (SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v9 + *((_QWORD *)v8 + 183))),
          v6 >= *((_QWORD *)v8 + 184))
      || (SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v9 + *((_QWORD *)v8 + 185))),
          v6 >= *((_QWORD *)v8 + 214)) )
    {
      _o_terminate(this, a2);
      __debugbreak();
      JUMPOUT(0x18005A1A4LL);
    }
    v10 = *((_QWORD *)v8 + 215) + 16 * v6;
  }
  else
  {
    v10 = (__int64)v8 + 2000;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(v10 + 8) )
      goto LABEL_16;
    v12 = (_QWORD *)(*(_QWORD *)v10 + 16LL * i);
    v13 = *v12 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *v12 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v13 = v12[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( !v13 )
      break;
  }
  if ( i == -1 )
  {
LABEL_16:
    SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(
                                        v8,
                                        (((_DWORD)v6 - 2) & 0xFFFFFFFD) != 0 ? (unsigned int)v6 : 0,
                                        0,
                                        0);
    if ( !*(_DWORD *)(SupportedConnectorModesInternal + 8) )
    {
      v16 = GUID_00000000_0000_0000_0000_000000000000;
      goto LABEL_19;
    }
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) != -1 )
    {
      v16 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
LABEL_19:
      v19 = v16;
      v17 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      goto LABEL_21;
    }
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v15,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      v16 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v18, 0);
      goto LABEL_19;
    }
  }
  v17 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v19 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
LABEL_21:
  if ( a3 )
  {
    *a3 = v19;
    v17 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  if ( a4 )
  {
    *a4 = v17;
    v17 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  if ( a5 )
    *a5 = v17;
}
