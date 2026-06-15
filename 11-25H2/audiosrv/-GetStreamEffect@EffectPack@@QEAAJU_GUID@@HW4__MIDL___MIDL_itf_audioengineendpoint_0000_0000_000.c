/*
 * XREFs of ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180034D94
 * Callers:
 *     ?GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18007B8A4 (-GetSystemEffect@EffectPack@@QEAAJW4APO_TYPE@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAUIAudioMediaType@@@Z @ 0x1800875E0 (-DeriveOverridingMixFormatInternal@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800BE314 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 *     ?DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18012B53C (-DeriveStreamFormatFromMixFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoin.c)
 *     ?InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ @ 0x18012C868 (-InitializeCriticalAPOMetadata@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800351A0 (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180036160 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180036310 (-ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800366C0 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004BA9C (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ??A?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAAEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@H@Z @ 0x18004CD60 (--A-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqualHelper@V.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPack::GetStreamEffect(
        unsigned __int64 this,
        struct _GUID *a2,
        int a3,
        int a4,
        struct ICompositeSystemEffect **a5,
        struct IAudioProcessingObject **a6,
        struct IAudioSystemEffects2 **a7)
{
  unsigned __int64 v7; // r12
  struct _GUID *v9; // r14
  unsigned __int64 v10; // r13
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // rdi
  int v14; // esi
  __int64 i; // r14
  __int64 v16; // r10
  __int64 j; // r9
  __int64 v18; // r11
  int k; // eax
  _QWORD *v20; // r8
  __int64 v21; // r8
  int m; // eax
  bool v23; // zf
  __int64 v24; // rdx
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  __int64 v28; // rcx
  std::_Ref_count_base *v29; // rsi
  struct _GUID v30; // [rsp+68h] [rbp-21h] BYREF
  struct _GUID v31; // [rsp+78h] [rbp-11h]
  struct _GUID v32; // [rsp+88h] [rbp-1h]
  struct _GUID *v33; // [rsp+E0h] [rbp+57h]

  v33 = a2;
  v7 = a4;
  v9 = a2;
  v10 = this;
  v11 = 0;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( (unsigned __int64)a4 >= *(_QWORD *)(this + 1440) )
    goto LABEL_73;
  v12 = 96LL * a4;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v12 + *(_QWORD *)(this + 1448)));
  if ( v7 >= *(_QWORD *)(v10 + 1456) )
    goto LABEL_73;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v12 + *(_QWORD *)(v10 + 1464)));
  if ( v7 >= *(_QWORD *)(v10 + 1472) )
    goto LABEL_73;
  SystemEffectDescriptor::ResolveAllOverridingChains((SystemEffectDescriptor *)(v12 + *(_QWORD *)(v10 + 1480)));
  if ( v7 >= *(_QWORD *)(v10 + 1616) )
    goto LABEL_73;
  if ( !*(_DWORD *)(*(_QWORD *)(v10 + 1624) + 4 * v7) )
    return v11;
  if ( a3 )
    goto LABEL_44;
  if ( v7 >= *(_QWORD *)(v10 + 1440) )
    goto LABEL_73;
  v13 = v12 + *(_QWORD *)(v10 + 1448);
  if ( (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(*(CEndpointCharacteristics **)(v10 + 1584))
    || (_DWORD)v7 == 3 )
  {
    v31 = *v9;
    v30 = v31;
    if ( *(_BYTE *)(v13 + 52) )
    {
      v14 = 0;
      for ( i = 0LL; ; i += 16LL )
      {
        if ( v14 >= *(_DWORD *)(v13 + 40) )
          goto LABEL_22;
        if ( v14 < 0 || v14 >= *(_DWORD *)(v13 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
          __debugbreak();
        }
        if ( *(_BYTE *)(*(_QWORD *)(i + *(_QWORD *)(v13 + 32)) + 20LL) )
        {
          v26 = (_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                            v13 + 32,
                            (unsigned int)v14);
          if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(*v26, &v30) != -1 )
            break;
        }
        ++v14;
      }
      EnterCriticalSection((LPCRITICAL_SECTION)(v13 + 56));
      v27 = (_QWORD *)ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::operator[](
                        v13 + 32,
                        (unsigned int)v14);
      v28 = v27[1];
      if ( v28 )
        _InterlockedIncrement((volatile signed __int32 *)(v28 + 8));
      *(_QWORD *)&v32.Data1 = *v27;
      v29 = (std::_Ref_count_base *)v27[1];
      *(_QWORD *)v32.Data4 = v29;
      if ( (int)SystemEffectChainDescriptor::Resolve(
                  *(SystemEffectChainDescriptor **)&v32.Data1,
                  (struct SystemEffectDescriptor *)v13) < 0 )
      {
        if ( v29 )
          std::_Ref_count_base::_Decref(v29);
        if ( v13 != -56 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 56));
        goto LABEL_34;
      }
      if ( v29 )
        std::_Ref_count_base::_Decref(v29);
      if ( v13 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v13 + 56));
    }
LABEL_22:
    this = 0LL;
    v16 = 0LL;
    for ( j = 0LL; ; j += 16LL )
    {
      if ( v16 >= *(int *)(v13 + 40) )
        goto LABEL_34;
      if ( j < 0 || (int)this >= *(_DWORD *)(v13 + 40) )
      {
        ATL::_AtlRaiseException(0xC000008C, (unsigned int)a2);
        __debugbreak();
      }
      v18 = *(_QWORD *)(j + *(_QWORD *)(v13 + 32));
      for ( k = 0; ; ++k )
      {
        if ( k >= *(_DWORD *)(v18 + 8) )
          goto LABEL_54;
        v20 = (_QWORD *)(*(_QWORD *)v18 + 16LL * k);
        a2 = (struct _GUID *)(*v20 - *(_QWORD *)&v30.Data1);
        if ( *v20 == *(_QWORD *)&v30.Data1 )
          a2 = (struct _GUID *)(v20[1] - *(_QWORD *)v30.Data4);
        if ( !a2 )
          break;
      }
      if ( k != -1 )
        break;
LABEL_54:
      this = (unsigned int)(this + 1);
      ++v16;
    }
    if ( (_DWORD)this != -1 )
    {
      if ( (this & 0x80000000) != 0LL || (int)this >= *(_DWORD *)(v13 + 40) )
      {
        ATL::_AtlRaiseException(0xC000008C, 0);
        __debugbreak();
      }
      v23 = *(_QWORD *)(*(_QWORD *)(v13 + 32) + 16LL * (int)this) == 0LL;
      goto LABEL_43;
    }
LABEL_34:
    v21 = *(_QWORD *)(v13 + 16);
    if ( v21 )
    {
      for ( m = 0; m < *(_DWORD *)(v21 + 8); ++m )
      {
        a2 = (struct _GUID *)(*(_QWORD *)v21 + 16LL * m);
        this = *(_QWORD *)&a2->Data1 - *(_QWORD *)&v31.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&v31.Data1 )
          this = *(_QWORD *)a2->Data4 - *(_QWORD *)v31.Data4;
        if ( !this )
          goto LABEL_42;
      }
    }
    return v11;
  }
  v30 = *v9;
  for ( m = 0; m < *(_DWORD *)(v13 + 8); ++m )
  {
    a2 = (struct _GUID *)(*(_QWORD *)v13 + 16LL * m);
    this = *(_QWORD *)&a2->Data1 - *(_QWORD *)&v30.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&v30.Data1 )
      this = *(_QWORD *)a2->Data4 - *(_QWORD *)v30.Data4;
    if ( !this )
      goto LABEL_42;
  }
  m = -1;
LABEL_42:
  v23 = m == -1;
LABEL_43:
  if ( !v23 )
  {
LABEL_44:
    if ( v7 < *(_QWORD *)(v10 + 1440) )
    {
      v24 = *(_QWORD *)(v10 + 1448) + 96 * v7;
      v32 = *v33;
      return (unsigned int)EffectPack::GetInitializedSystemEffectInterface(v10, v24, 1LL);
    }
LABEL_73:
    _o_terminate(this, a2);
    __debugbreak();
    JUMPOUT(0x18003518FLL);
  }
  return v11;
}
