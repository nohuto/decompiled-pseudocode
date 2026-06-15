/*
 * XREFs of ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJU_GUID@@IPEBU2@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180039630
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x180035060 (-AugmentOEMSpeechProcessingSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18005C46C (-AddSpatialAudioProcessingSupportForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ @ 0x1800680B0 (-AddProcessingModeSupport_for_VSS@EffectPack@@AEAAJXZ.c)
 *     ?AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@W4EnhancementsDisabledSupport@@@Z @ 0x18008BC98 (-AddInternalVoiceProcessingMode@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_00.c)
 *     _lambda_8ba24c4cf53db699b74a350d628b126d_::operator() @ 0x180131684 (_lambda_8ba24c4cf53db699b74a350d628b126d_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z @ 0x180027D1C (--0-$function@$$A6AXPEAUIAudioStreamInfo@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180032B00 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x180039C00 (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18003A868 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemEffectDescriptor::CreateOverridingChain(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  unsigned int v10; // edi
  __int64 v11; // rbx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  void (__fastcall *v14)(__int64 *, __int64); // rax
  __int64 v16; // rax
  int OverridingChain; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  void *Block; // [rsp+50h] [rbp-19h] BYREF
  int v21; // [rsp+58h] [rbp-11h]
  int v22; // [rsp+5Ch] [rbp-Dh]
  _BYTE v23[72]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+47h]

  Block = 0LL;
  v21 = 0;
  v22 = 0;
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(&Block, a2) )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)0x8007000ELL);
    if ( Block )
      free(Block);
    v11 = a7;
    v12 = *(__int64 **)(a7 + 56);
    if ( !v12 )
      return v10;
    v13 = *v12;
    v14 = *(void (__fastcall **)(__int64 *, __int64))(*v12 + 32);
LABEL_6:
    LOBYTE(v13) = v12 != (__int64 *)v11;
    v14(v12, v13);
    *(_QWORD *)(v11 + 56) = 0LL;
    return v10;
  }
  v11 = a7;
  v16 = std::function<void (IAudioStreamInfo *)>::function<void (IAudioStreamInfo *)>((__int64)v23, a7);
  OverridingChain = SystemEffectDescriptor::CreateOverridingChain(a1, (unsigned int)&Block, a3, a4, a5, a6, v16);
  v10 = OverridingChain;
  if ( OverridingChain < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x137,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (const char *)(unsigned int)OverridingChain);
    if ( Block )
      free(Block);
    v12 = *(__int64 **)(a7 + 56);
    if ( !v12 )
      return v10;
    v14 = *(void (__fastcall **)(__int64 *, __int64))(*v12 + 32);
    goto LABEL_6;
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&Block);
  v19 = *(_QWORD *)(a7 + 56);
  if ( v19 )
  {
    LOBYTE(v18) = v19 != a7;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v18);
    *(_QWORD *)(a7 + 56) = 0LL;
  }
  return 0LL;
}
