/*
 * XREFs of ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180031D9C
 * Callers:
 *     ?GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z @ 0x180030844 (-GetProcessingPeriod@EffectPack@@QEAAJHPEA_J0@Z.c)
 *     AudioServerGetDevicePeriod @ 0x1800380C0 (AudioServerGetDevicePeriod.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800319B0 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800334C0 (-GetConnectorFormatForProcessingMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_00.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180036160 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x1800361B0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180036310 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800366C0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003E4E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPack::GetMinProcessingPeriodForExclusiveMode(
        EffectPack *this,
        struct tWAVEFORMATEX *a2,
        __int64 *a3)
{
  CEndpointCharacteristics *v5; // rcx
  char *v6; // rdx
  int i; // eax
  _QWORD *v8; // r8
  __int64 v9; // rcx
  __int64 SupportedConnectorModesInternal; // rcx
  __int64 v11; // rcx
  GUID v12; // xmm0
  int ConnectorFormatForProcessingMode; // esi
  const struct tWAVEFORMATEX *v14; // r15
  __int64 v15; // r8
  __int64 v16; // r14
  int j; // eax
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  GUID *v20; // rax
  _QWORD *v21; // rdi
  _QWORD *v22; // r14
  _QWORD *v23; // rcx
  __int64 v24; // rax
  const struct tWAVEFORMATEX ***v25; // rbx
  const struct tWAVEFORMATEX ***v26; // rsi
  __int64 v27; // rax
  void *v28; // rcx
  int k; // eax
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  GUID v33; // xmm0
  void *v34; // rcx
  __int64 v35; // rcx
  LPVOID pv; // [rsp+20h] [rbp-50h] BYREF
  LPVOID *p_pv; // [rsp+28h] [rbp-48h]
  struct tWAVEFORMATEX *v38; // [rsp+30h] [rbp-40h] BYREF
  char v39; // [rsp+38h] [rbp-38h]
  GUID v40; // [rsp+40h] [rbp-30h] BYREF
  struct _GUID v41; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  pv = 0LL;
  v40 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  v5 = (CEndpointCharacteristics *)*((_QWORD *)this + 198);
  if ( *((_BYTE *)v5 + 8235) || (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(v5) )
  {
    if ( !*((_QWORD *)this + 180) )
      goto LABEL_67;
    SystemEffectDescriptor::ResolveAllOverridingChains(*((SystemEffectDescriptor **)this + 181));
    if ( !*((_QWORD *)this + 182) )
      goto LABEL_67;
    SystemEffectDescriptor::ResolveAllOverridingChains(*((SystemEffectDescriptor **)this + 183));
    if ( !*((_QWORD *)this + 184) )
      goto LABEL_67;
    SystemEffectDescriptor::ResolveAllOverridingChains(*((SystemEffectDescriptor **)this + 185));
    if ( !*((_QWORD *)this + 214) )
      goto LABEL_67;
    v6 = (char *)*((_QWORD *)this + 215);
  }
  else
  {
    v6 = (char *)this + 2000;
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)v6 + 2) )
      goto LABEL_15;
    v8 = (_QWORD *)(*(_QWORD *)v6 + 16LL * i);
    v9 = *v8 - *(_QWORD *)&v40.Data1;
    if ( *v8 == *(_QWORD *)&v40.Data1 )
      v9 = v8[1] - *(_QWORD *)v40.Data4;
    if ( !v9 )
      break;
  }
  if ( i != -1 )
    goto LABEL_18;
LABEL_15:
  SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(this, 0LL, 0LL, 0LL);
  if ( !*(_DWORD *)(SupportedConnectorModesInternal + 8) )
  {
    v12 = GUID_00000000_0000_0000_0000_000000000000;
    goto LABEL_19;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       SupportedConnectorModesInternal,
                       &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) != -1 )
  {
    v12 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    goto LABEL_19;
  }
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                       v11,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) != -1 )
  {
LABEL_18:
    v12 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    goto LABEL_19;
  }
  v12 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v35, 0LL);
LABEL_19:
  v40 = v12;
  *a3 = 0LL;
  p_pv = &pv;
  v38 = 0LL;
  v39 = 1;
  v41 = v40;
  ConnectorFormatForProcessingMode = EffectPack::GetConnectorFormatForProcessingMode(
                                       this,
                                       eHostProcessConnector,
                                       &v41,
                                       &v38);
  if ( v39 )
  {
    v5 = (CEndpointCharacteristics *)*p_pv;
    a2 = v38;
    *p_pv = v38;
    if ( v5 )
      CoTaskMemFree(v5);
  }
  if ( ConnectorFormatForProcessingMode < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2110,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ConnectorFormatForProcessingMode);
    v34 = pv;
    pv = 0LL;
    if ( v34 )
      CoTaskMemFree(v34);
    return (unsigned int)ConnectorFormatForProcessingMode;
  }
  v14 = (const struct tWAVEFORMATEX *)pv;
  *a3 = 30000LL;
  if ( !*((_QWORD *)this + 236) )
  {
LABEL_67:
    _o_terminate(v5, a2);
    __debugbreak();
    JUMPOUT(0x180032189LL);
  }
  v15 = *((_QWORD *)this + 237);
  v41 = v40;
  v16 = *((_QWORD *)this + 198);
  for ( j = 0; ; ++j )
  {
    if ( j >= *(_DWORD *)(v15 + 16) )
      goto LABEL_30;
    v18 = (_QWORD *)(*(_QWORD *)v15 + 16LL * j);
    v19 = *v18 - *(_QWORD *)&v41.Data1;
    if ( *v18 == *(_QWORD *)&v41.Data1 )
      v19 = v18[1] - *(_QWORD *)v41.Data4;
    if ( !v19 )
      break;
  }
  if ( j == -1 )
  {
LABEL_30:
    v41 = v40;
    v20 = &v41;
    goto LABEL_31;
  }
  v41 = v40;
  for ( k = 0; ; ++k )
  {
    if ( k >= *(_DWORD *)(v15 + 16) )
      goto LABEL_59;
    v31 = (_QWORD *)(*(_QWORD *)v15 + 16LL * k);
    v32 = *v31 - *(_QWORD *)&v41.Data1;
    if ( *v31 == *(_QWORD *)&v41.Data1 )
      v32 = v31[1] - *(_QWORD *)v41.Data4;
    if ( !v32 )
      break;
  }
  if ( k == -1 )
  {
LABEL_59:
    v33 = GUID_00000000_0000_0000_0000_000000000000;
    goto LABEL_57;
  }
  if ( k < 0 )
  {
    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v31);
    __debugbreak();
  }
  v33 = *(GUID *)(*(_QWORD *)(v15 + 8) + 16LL * k);
LABEL_57:
  v40 = v33;
  v20 = &v40;
LABEL_31:
  v41 = *v20;
  v21 = *(_QWORD **)(v16 + 272);
  v22 = *(_QWORD **)(v16 + 280);
  while ( v21 != v22 )
  {
    v23 = (_QWORD *)*v21;
    v24 = *(_QWORD *)*v21 - *(_QWORD *)&v41.Data1;
    if ( !v24 )
      v24 = v23[1] - *(_QWORD *)v41.Data4;
    if ( !v24 )
    {
      v25 = (const struct tWAVEFORMATEX ***)v23[2];
      v26 = (const struct tWAVEFORMATEX ***)v23[3];
      while ( v25 != v26 )
      {
        if ( (unsigned int)CompareWaveFormat(v14, **v25) )
        {
          v27 = (unsigned int)(int)((double)*((int *)*v25 + 4) * 10000000.0 / (double)(int)v14->nSamplesPerSec + 0.5);
          if ( v27 >= *a3 )
            v27 = *a3;
          *a3 = v27;
          goto LABEL_42;
        }
        ++v25;
      }
    }
    ++v21;
  }
LABEL_42:
  v28 = pv;
  pv = 0LL;
  if ( v28 )
    CoTaskMemFree(v28);
  return 0LL;
}
