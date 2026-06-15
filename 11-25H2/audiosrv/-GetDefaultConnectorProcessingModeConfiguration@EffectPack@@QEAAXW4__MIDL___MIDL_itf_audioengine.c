/*
 * XREFs of ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180035CD0
 * Callers:
 *     ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003A4AC (-DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_A.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003ED58 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003FDC4 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180061BEC (-RefreshDefaultConnectorFormats@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     ?CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ @ 0x18008FF40 (-CopyCapabilitiesFromEndpoint@EffectPack@@AEAAJXZ.c)
 *     ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18012E2DC (-ResetDeviceFormat@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180036160 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x1800361B0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003E4E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004BA9C (-Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall EffectPack::GetDefaultConnectorProcessingModeConfiguration(
        EffectPack *this,
        int a2,
        struct _GUID *a3,
        struct _GUID *a4,
        struct _GUID *a5)
{
  unsigned __int64 v7; // r14
  __int64 v8; // rdi
  GUID v9; // xmm7
  _QWORD *v10; // rdx
  __int64 SupportedConnectorModesInternal; // rcx
  __int64 v12; // r11
  GUID v13; // xmm6
  __int64 v14; // rbx
  __int64 v15; // rax
  BOOL v16; // esi
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r10
  int v21; // ecx
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // r11
  _QWORD *v25; // r8
  __int64 v26; // rax
  __int64 v27; // r8
  GUID *v28; // rax
  int i; // eax
  _QWORD *v30; // rdx
  __int64 v31; // rcx
  int k; // ecx
  _QWORD *v33; // rdx
  __int64 v34; // rax
  int j; // ecx
  __int64 v36; // rax
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rcx
  PROPVARIANT pvar_8[2]; // [rsp+38h] [rbp-81h] BYREF
  __int64 v41; // [rsp+48h] [rbp-71h]
  GUID v42; // [rsp+58h] [rbp-61h]
  __int64 v43; // [rsp+68h] [rbp-51h]
  SystemEffectChainDescriptor *v44; // [rsp+70h] [rbp-49h]
  unsigned __int64 v45; // [rsp+78h] [rbp-41h]
  GUID v46; // [rsp+88h] [rbp-31h] BYREF

  v7 = a2;
  v8 = (__int64)this;
  v9 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(
                                      this,
                                      a2 & (unsigned int)-(((a2 - 2) & 0xFFFFFFFD) != 0),
                                      0LL,
                                      0LL);
  if ( *(_DWORD *)(SupportedConnectorModesInternal + 8) )
  {
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
      goto LABEL_88;
    v13 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  }
  else
  {
    v13 = GUID_00000000_0000_0000_0000_000000000000;
  }
  while ( 1 )
  {
    v46 = v13;
    if ( !a4 )
      break;
    if ( v7 >= *(_QWORD *)(v8 + 1456) )
    {
      _o_terminate(SupportedConnectorModesInternal, v10);
      __debugbreak();
      JUMPOUT(0x180036151LL);
    }
    v14 = *(_QWORD *)(v8 + 1464) + 96 * v7;
    v15 = *(_QWORD *)(v8 + 1584);
    v8 = 1LL;
    v16 = 1;
    *(_OWORD *)pvar_8 = 0LL;
    v41 = 0LL;
    v17 = *(_QWORD *)(v15 + 80);
    if ( v17 )
    {
      if ( (*(int (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v17 + 40LL))(
             v17,
             &PKEY_AudioEndpoint_Disable_SysFx,
             pvar_8) >= 0
        && LOWORD(pvar_8[0]) == 19 )
      {
        v16 = LODWORD(pvar_8[1]) == 0;
      }
      PropVariantClear(pvar_8);
      if ( !v16 && (_DWORD)v7 != 3 )
      {
        for ( i = 0; i < *(_DWORD *)(v14 + 8); ++i )
        {
          v30 = (_QWORD *)(*(_QWORD *)v14 + 16LL * i);
          v31 = *v30 - *(_QWORD *)&v13.Data1;
          if ( *v30 == *(_QWORD *)&v13.Data1 )
            v31 = v30[1] - *(_QWORD *)v13.Data4;
          if ( !v31 )
            goto LABEL_55;
        }
        i = -1;
LABEL_55:
        LOBYTE(v8) = i != -1;
        goto LABEL_32;
      }
    }
    v42 = v13;
    if ( *(_BYTE *)(v14 + 52) )
    {
      v7 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      while ( v18 < *(int *)(v14 + 40) )
      {
        if ( v19 < 0 || (int)v7 >= *(_DWORD *)(v14 + 40) )
        {
          ATL::_AtlRaiseException(0xC000008C, (unsigned int)v10);
          __debugbreak();
        }
        v20 = *(_QWORD *)(v19 + *(_QWORD *)(v14 + 32));
        if ( *(_BYTE *)(v20 + 20) )
        {
          for ( j = 0; j < *(_DWORD *)(v20 + 8); ++j )
          {
            v10 = (_QWORD *)(*(_QWORD *)v20 + 16LL * j);
            v36 = *v10 - *(_QWORD *)&v13.Data1;
            if ( *v10 == *(_QWORD *)&v13.Data1 )
              v36 = v10[1] - *(_QWORD *)v13.Data4;
            if ( !v36 )
            {
              if ( j == -1 )
                break;
              EnterCriticalSection((LPCRITICAL_SECTION)(v14 + 56));
              v43 = v14 + 56;
              if ( (v7 & 0x80000000) != 0LL || (int)v7 >= *(_DWORD *)(v14 + 40) )
                goto LABEL_87;
              v38 = *(_QWORD *)(v14 + 32) + 16LL * (int)v7;
              v39 = *(_QWORD *)(v38 + 8);
              if ( v39 )
                _InterlockedAdd((volatile signed __int32 *)(v39 + 8), 1u);
              v44 = *(SystemEffectChainDescriptor **)v38;
              v7 = *(_QWORD *)(v38 + 8);
              v45 = v7;
              if ( (int)SystemEffectChainDescriptor::Resolve(v44, (struct SystemEffectDescriptor *)v14) < 0 )
              {
                if ( v7 )
                  std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
                if ( v14 != -56 )
                  LeaveCriticalSection((LPCRITICAL_SECTION)(v14 + 56));
                goto LABEL_30;
              }
              if ( v7 )
                std::_Ref_count_base::_Decref((std::_Ref_count_base *)v7);
              if ( v14 != -56 )
                LeaveCriticalSection((LPCRITICAL_SECTION)(v14 + 56));
              goto LABEL_18;
            }
          }
        }
        v7 = (unsigned int)(v7 + 1);
        ++v18;
        v19 += 16LL;
      }
    }
LABEL_18:
    v21 = 0;
    v22 = 0LL;
    v23 = 0LL;
LABEL_19:
    if ( v22 >= *(int *)(v14 + 40) )
    {
LABEL_30:
      v27 = *(_QWORD *)(v14 + 16);
      if ( v27 )
      {
        for ( k = 0; k < *(_DWORD *)(v27 + 8); ++k )
        {
          v33 = (_QWORD *)(*(_QWORD *)v27 + 16LL * k);
          v34 = *v33 - *(_QWORD *)&v42.Data1;
          if ( *v33 == *(_QWORD *)&v42.Data1 )
            v34 = v33[1] - *(_QWORD *)v42.Data4;
          if ( !v34 )
          {
            if ( k != -1 )
              goto LABEL_32;
            break;
          }
        }
      }
LABEL_31:
      LOBYTE(v8) = 0;
LABEL_32:
      v28 = &v46;
      if ( !(_BYTE)v8 )
        v28 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v9 = *v28;
      break;
    }
    if ( v23 < 0 || v21 >= *(_DWORD *)(v14 + 40) )
    {
      ATL::_AtlRaiseException(0xC000008C, (unsigned int)v10);
      __debugbreak();
    }
    v24 = *(_QWORD *)(v23 + *(_QWORD *)(v14 + 32));
    for ( LODWORD(v10) = 0; ; LODWORD(v10) = (_DWORD)v10 + 1 )
    {
      if ( (int)v10 >= *(_DWORD *)(v24 + 8) )
        goto LABEL_42;
      v25 = (_QWORD *)(*(_QWORD *)v24 + 16LL * (int)v10);
      v26 = *v25 - *(_QWORD *)&v13.Data1;
      if ( *v25 == *(_QWORD *)&v13.Data1 )
        v26 = v25[1] - *(_QWORD *)v13.Data4;
      if ( !v26 )
        break;
    }
    if ( (_DWORD)v10 == -1 )
    {
LABEL_42:
      ++v21;
      ++v22;
      v23 += 16LL;
      goto LABEL_19;
    }
    if ( v21 == -1 )
      goto LABEL_30;
    if ( v21 >= 0 && v21 < *(_DWORD *)(v14 + 40) )
    {
      if ( !*(_QWORD *)(*(_QWORD *)(v14 + 32) + 16LL * v21) )
        goto LABEL_31;
      goto LABEL_32;
    }
    ATL::_AtlRaiseException(0xC000008C, (unsigned int)v10);
LABEL_87:
    ATL::_AtlRaiseException(0xC000008C, v37);
LABEL_88:
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         v12) == -1 )
      v13 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                       SupportedConnectorModesInternal,
                       0LL);
    else
      v13 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  if ( a3 )
    *a3 = v13;
  if ( a4 )
    *a4 = v9;
  if ( a5 )
    *a5 = v13;
}
