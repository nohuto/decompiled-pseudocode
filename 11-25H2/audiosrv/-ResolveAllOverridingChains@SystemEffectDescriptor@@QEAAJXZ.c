/*
 * XREFs of ?ResolveAllOverridingChains@SystemEffectDescriptor@@QEAAJXZ @ 0x180036310
 * Callers:
 *     ?IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800312D4 (-IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180031D9C (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800342A8 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ?EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180034CF8 (-EndpointConnectorSupportsProcessingModes@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180034D94 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x180035B48 (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x1800361B0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     ?CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@@Z @ 0x1800372A8 (-CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x18003758C (-GetSupportedProcessingModes@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@W.c)
 *     ?GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180037BF8 (-GetEndpointEffect@EffectPack@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18004B200 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     ?ResolveAllOverridingChains@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005A690 (-ResolveAllOverridingChains@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180066618 (-GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineend.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@V?$CSimpleArrayEqualHelper@V?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@ATL@@@ATL@@QEAAXXZ @ 0x180036D50 (-RemoveAll@-$CSimpleArray@V-$shared_ptr@VSystemEffectChainDescriptor@@@std@@V-$CSimpleArrayEqual.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x1800A6DDC (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SystemEffectDescriptor::ResolveAllOverridingChains(SystemEffectDescriptor *this)
{
  __int64 v1; // r13
  struct _RTL_CRITICAL_SECTION *v3; // r12
  unsigned int v4; // edx
  char *v5; // r14
  int v6; // ebx
  __int64 v7; // rbp
  __int64 v8; // rdi
  __int64 i; // r15
  char *v10; // rax
  char *v11; // rcx
  __int64 v12; // rax
  void *v13; // rcx
  volatile signed __int32 **v14; // rdi
  __int64 v15; // rsi
  volatile signed __int32 *v16; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  std::_Ref_count_base *v22; // rax
  void *Block; // [rsp+28h] [rbp-70h] BYREF
  __int64 v24; // [rsp+30h] [rbp-68h]
  __int64 v25; // [rsp+38h] [rbp-60h]
  std::_Ref_count_base *v26; // [rsp+40h] [rbp-58h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  unsigned int v28; // [rsp+A0h] [rbp+8h]
  std::_Ref_count_base *v29; // [rsp+A8h] [rbp+10h]
  __int64 v30; // [rsp+B0h] [rbp+18h] BYREF
  SystemEffectDescriptor *v31; // [rsp+B8h] [rbp+20h] BYREF

  if ( *((_BYTE *)this + 52) )
  {
    v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
    v5 = 0LL;
    Block = 0LL;
    v6 = 0;
    v24 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    for ( i = 0LL; ; i += 16LL )
    {
      if ( (int)v8 >= *((_DWORD *)this + 10) )
      {
        LODWORD(i) = 0;
        v7 = v6;
        v8 = 0LL;
        goto LABEL_18;
      }
      if ( i < 0 || (int)v8 >= *((_DWORD *)this + 10) )
        break;
      v1 = *((_QWORD *)this + 4);
      if ( v6 == (_DWORD)v7 )
      {
        if ( (_DWORD)v7 )
        {
          v7 = (unsigned int)(2 * v6);
          if ( (v6 & 0x40000000) != 0 )
            goto LABEL_37;
        }
        else
        {
          v7 = 1LL;
        }
        if ( (unsigned int)v7 > 0x7FFFFFFuLL
          || (v10 = (char *)_o__recalloc(v5, (unsigned int)v7, 16LL), (v5 = v10) == 0LL) )
        {
LABEL_37:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F4,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)0x8007000ELL);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&Block);
          if ( v3 )
            LeaveCriticalSection(v3);
          return 2147942414LL;
        }
        HIDWORD(v24) = v7;
        Block = v10;
      }
      v11 = &v5[16 * v6];
      if ( v11 )
      {
        *(_QWORD *)v11 = 0LL;
        *((_QWORD *)v11 + 1) = 0LL;
        v12 = *(_QWORD *)(v1 + i + 8);
        if ( v12 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
          v7 = HIDWORD(v24);
          v6 = v24;
          v5 = (char *)Block;
        }
        *(_QWORD *)v11 = *(_QWORD *)(v1 + i);
        *((_QWORD *)v11 + 1) = *(_QWORD *)(v1 + i + 8);
      }
      LODWORD(v24) = ++v6;
      v8 = (unsigned int)(v8 + 1);
    }
    ATL::_AtlRaiseException(0xC000008C, v4);
LABEL_58:
    *(_BYTE *)(v1 + 20) = 1;
LABEL_54:
    if ( v22 )
      std::_Ref_count_base::_Decref(v22);
    while ( 1 )
    {
      LODWORD(i) = i + 1;
      ++v8;
      v5 += 16;
LABEL_18:
      if ( v8 >= v7 )
        break;
      if ( v8 < 0 || (int)i >= v6 )
      {
        ATL::_AtlRaiseException(0xC000008C, v4);
        __debugbreak();
      }
      v1 = *(_QWORD *)v5;
      if ( *(_BYTE *)(*(_QWORD *)v5 + 20LL) )
      {
        v18 = *(_QWORD *)(v1 + 32);
        if ( v18 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
          v6 = v24;
        }
        v25 = *(_QWORD *)(v1 + 24);
        v19 = v25;
        v29 = *(std::_Ref_count_base **)(v1 + 32);
        v26 = v29;
        *(_DWORD *)(v1 + 16) = 0;
        *(_BYTE *)(v1 + 20) = 0;
        v30 = v1;
        v31 = this;
        v20 = *(_QWORD *)(v19 + 56);
        if ( !v20 )
        {
          std::_Xbad_function_call();
          __debugbreak();
          JUMPOUT(0x1800366AFLL);
        }
        v21 = (*(__int64 (__fastcall **)(__int64, SystemEffectDescriptor **, __int64 *))(*(_QWORD *)v20 + 16LL))(
                v20,
                &v31,
                &v30);
        v28 = v21;
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x63,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)(unsigned int)v21);
          if ( v29 )
            std::_Ref_count_base::_Decref(v26);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1FA,
            (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
            (const char *)v28);
          ATL::CSimpleArray<std::shared_ptr<SystemEffectChainDescriptor>,ATL::CSimpleArrayEqualHelper<std::shared_ptr<SystemEffectChainDescriptor>>>::RemoveAll(&Block);
          if ( v3 )
            LeaveCriticalSection(v3);
          return v28;
        }
        if ( *(_DWORD *)(v1 + 16) )
        {
LABEL_52:
          v22 = v26;
        }
        else
        {
          v25 = 0LL;
          v22 = 0LL;
          v26 = 0LL;
          if ( v29 )
          {
            std::_Ref_count_base::_Decref(v29);
            goto LABEL_52;
          }
        }
        if ( (*(_BYTE *)(v1 + 16) & 1) != 0 )
          goto LABEL_58;
        goto LABEL_54;
      }
    }
    v13 = Block;
    if ( Block )
    {
      if ( v6 > 0 )
      {
        v14 = (volatile signed __int32 **)((char *)Block + 8);
        v15 = (unsigned int)v6;
        do
        {
          v16 = *v14;
          if ( *v14 )
          {
            if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
              if ( _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
            }
          }
          v14 += 2;
          --v15;
        }
        while ( v15 );
        v13 = Block;
      }
      free(v13);
    }
    if ( v3 )
      LeaveCriticalSection(v3);
  }
  return 0LL;
}
