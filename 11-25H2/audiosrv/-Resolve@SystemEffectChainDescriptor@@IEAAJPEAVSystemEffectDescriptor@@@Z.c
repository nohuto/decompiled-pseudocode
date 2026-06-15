/*
 * XREFs of ?Resolve@SystemEffectChainDescriptor@@IEAAJPEAVSystemEffectDescriptor@@@Z @ 0x18004BA9C
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800342A8 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     ?GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180034D94 (-GetStreamEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800351A0 (-GetInitializedSystemEffectInterface@EffectPack@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180035CD0 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     ?IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE@@@Z @ 0x180037E04 (-IsModeSupportedForStreaming@SystemEffectDescriptor@@QEAA_NU_GUID@@W4SED_ENHANCEMENTSENABLESTATE.c)
 *     ?GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEAPEAU2@W4SED_RESOLVEOPT@@@Z @ 0x18004AE8C (-GetSystemEffectClsidsForMode@SystemEffectDescriptor@@QEAAJU_GUID@@W4SED_DISCOVERYSTATE@@PEAIPEA.c)
 *     ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004B4A8 (-IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@W4SED_RESOLVEOPT@@@Z @ 0x18004B824 (-GetChainDescriptorForMode@SystemEffectDescriptor@@AEAAPEAVSystemEffectChainDescriptor@@U_GUID@@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SystemEffectChainDescriptor::Resolve(
        SystemEffectChainDescriptor *this,
        struct SystemEffectDescriptor *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  std::_Ref_count_base *v5; // rsi
  std::_Ref_count_base *v6; // rdi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebp
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  SystemEffectChainDescriptor *v12; // [rsp+50h] [rbp+8h] BYREF
  struct SystemEffectDescriptor *v13; // [rsp+58h] [rbp+10h] BYREF

  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  v4 = *((_QWORD *)this + 3);
  v5 = (std::_Ref_count_base *)*((_QWORD *)this + 4);
  v6 = v5;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = 0;
  v12 = this;
  v13 = a2;
  v7 = *(_QWORD *)(v4 + 56);
  if ( !v7 )
  {
    std::_Xbad_function_call();
    __debugbreak();
LABEL_16:
    *((_BYTE *)this + 20) = 1;
    goto LABEL_12;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, struct SystemEffectDescriptor **, SystemEffectChainDescriptor **))(*(_QWORD *)v7 + 16LL))(
         v7,
         &v13,
         &v12);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)v8);
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    return v9;
  }
  if ( !*((_DWORD *)this + 4) )
  {
    v6 = 0LL;
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
  }
  if ( (*((_BYTE *)this + 16) & 1) != 0 )
    goto LABEL_16;
LABEL_12:
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  return 0LL;
}
