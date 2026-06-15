/*
 * XREFs of ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x1800A4994
 * Callers:
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV?$shared_ptr@VEffectPack@@@std@@@Z @ 0x180040B98 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@AEAAJAEAV-$shared_ptr@VEffectPack@@@std@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180036160 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003CD24 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z @ 0x18003D52C (-AddEnhancementsDisabledProcessingMode@SystemEffectDescriptor@@QEAAJU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003E4E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003E5F8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ @ 0x18003E69C (-AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ.c)
 *     ?AddOsProcessingModeSupport@EffectPack@@AEAAJXZ @ 0x180049E14 (-AddOsProcessingModeSupport@EffectPack@@AEAAJXZ.c)
 *     ?MarkDescriptorsAsInitialized@EffectPack@@QEAAXXZ @ 0x18004BB84 (-MarkDescriptorsAsInitialized@EffectPack@@QEAAXXZ.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x18004BC10 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 *     ??A?$span@VCAudioSignalProcessingModeArray@@$0?0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_K@Z @ 0x18004E258 (--A-$span@VCAudioSignalProcessingModeArray@@$0-0@gsl@@QEBAAEAVCAudioSignalProcessingModeArray@@_.c)
 *     ??A?$span@H$0?0@gsl@@QEBAAEAH_K@Z @ 0x18004E3B0 (--A-$span@H$0-0@gsl@@QEBAAEAH_K@Z.c)
 *     ?AposRegisteredAsSfxMfxEfx@EffectPackConfiguration@@QEBA_NXZ @ 0x180080350 (-AposRegisteredAsSfxMfxEfx@EffectPackConfiguration@@QEBA_NXZ.c)
 *     ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x18008FF40 (-CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ.c)
 */

__int64 __fastcall EffectPack::DeriveEffectiveConnectorAndEffectPackCapabilities(EffectPack *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  unsigned __int64 i; // rbx
  _DWORD *v6; // rax
  EffectPackConfiguration *v7; // rcx
  BOOL v8; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 j; // rbx
  int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rax
  struct _GUID *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  SystemEffectDescriptor *v18; // rax
  signed int k; // esi
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  SystemEffectDescriptor *v23; // rbx
  __int64 v24; // rax
  struct _GUID v25; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 2128) )
  {
    v2 = EffectPack::CopyCapabilitiesFromEndpoint(this);
    if ( v2 < 0 )
    {
      v3 = 2401LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    for ( i = 0LL; i < *((_QWORD *)this + 219); *v6 = 0 )
      v6 = (_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)this + 219, i++);
    v8 = *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)this + 202, 0LL)
      && (EffectPackConfiguration::AposRegisteredAsSfxMfxEfx(*((EffectPackConfiguration **)this + 196))
       || !EffectPackConfiguration::AposRegisteredAsLfxGfx(v7));
    *(_DWORD *)gsl::span<int,-1>::operator[]((unsigned __int64 *)this + 202, 0LL) = v8;
    for ( j = 0LL; j < 5; ++j )
    {
      if ( ((j - 2) & 0xFFFFFFFFFFFFFFFDuLL) != 0 )
      {
        v12 = EffectPack::FixupProcessingModeSupport(this, (unsigned int)j, v9, v10);
        v13 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x973,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
            (const char *)(unsigned int)v12);
          return v13;
        }
      }
    }
    v2 = EffectPack::AddOsProcessingModeSupport(this);
    if ( v2 < 0 )
    {
      v3 = 2422LL;
      goto LABEL_4;
    }
    v14 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 214, 0LL);
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         v14,
                         &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
    {
      v16 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 214, 0LL);
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v16,
                           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
      {
        v17 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 214, 0LL);
        v15 = (struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v17, 0);
      }
    }
    v25 = *v15;
    if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add((__int64)this + 2000, &v25) )
    {
      v2 = -2147024882;
      v3 = 2434LL;
      goto LABEL_4;
    }
    v18 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                      (unsigned __int64 *)this + 182,
                                      0LL);
    v25 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v2 = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v18, &v25);
    if ( v2 < 0 )
    {
      v3 = 2437LL;
      goto LABEL_4;
    }
    if ( *(_BYTE *)(*((_QWORD *)this + 198) + 8235LL) )
    {
      for ( k = 0;
            k < *(_DWORD *)(gsl::span<CAudioSignalProcessingModeArray,-1>::operator[](
                              (unsigned __int64 *)this + 214,
                              0LL)
                          + 8);
            ++k )
      {
        v20 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 214, 0LL);
        v21 = (_QWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v20, k);
        v22 = *v21 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
        if ( *v21 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
          v22 = v21[1] - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
        if ( v22 )
        {
          v23 = (SystemEffectDescriptor *)gsl::span<SystemEffectDescriptor,-1>::operator[](
                                            (unsigned __int64 *)this + 182,
                                            0LL);
          v24 = gsl::span<CAudioSignalProcessingModeArray,-1>::operator[]((unsigned __int64 *)this + 214, 0LL);
          v25 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v24, k);
          v2 = SystemEffectDescriptor::AddEnhancementsDisabledProcessingMode(v23, &v25);
          if ( v2 < 0 )
          {
            v3 = 2449LL;
            goto LABEL_4;
          }
        }
      }
    }
    EffectPack::MarkDescriptorsAsInitialized(this);
    *((_BYTE *)this + 2128) = 1;
  }
  return 0LL;
}
