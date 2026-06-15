/*
 * XREFs of ?CreateEffectChain@SystemEffectChainDescriptor@@KAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@I1AEAV?$shared_ptr@VSystemEffectChainDescriptor@@@std@@@Z @ 0x18003E220
 * Callers:
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003CD24 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 *     ?SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@@Z @ 0x18003D56C (-SetDefaultEffectChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 *     ?CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@V?$function@$$A6AJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@@Z@std@@@Z @ 0x18003D98C (-CreateOverridingChain@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@IPEBU_G.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x18003E41C (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ??$make_shared@VSystemEffectChainDescriptor@@$$V@std@@YA?AV?$shared_ptr@VSystemEffectChainDescriptor@@@0@XZ @ 0x18003E47C (--$make_shared@VSystemEffectChainDescriptor@@$$V@std@@YA-AV-$shared_ptr@VSystemEffectChainDescri.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x18003E510 (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 */

__int64 __fastcall SystemEffectChainDescriptor::CreateEffectChain(
        __int64 a1,
        unsigned int a2,
        const struct _GUID *a3,
        unsigned int a4,
        struct _GUID *a5,
        CAudioSignalProcessingModeArray **a6)
{
  __int64 v10; // rax
  CAudioSignalProcessingModeArray *v11; // rsi
  volatile signed __int32 *v12; // rbx
  int v13; // edi
  std::_Ref_count_base *v14; // rcx
  __int64 v16; // rdx
  __int64 v17; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v18; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v10 = std::make_shared<SystemEffectChainDescriptor,>(&v17);
  v11 = *(CAudioSignalProcessingModeArray **)v10;
  v12 = *(volatile signed __int32 **)(v10 + 8);
  *(_QWORD *)v10 = 0LL;
  *(_QWORD *)(v10 + 8) = 0LL;
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
  v13 = CAudioSignalProcessingModeArray::AddMultiple(v11, *(_DWORD *)(a1 + 8), *(const struct _GUID **)a1);
  if ( v13 < 0 )
  {
    v16 = 47LL;
  }
  else
  {
    v13 = SystemEffectChainDescriptor::ReplaceEffectChain(v11, a2, a3, a4, a5);
    if ( v13 >= 0 )
    {
      if ( v12 )
        _InterlockedIncrement(v12 + 2);
      *a6 = v11;
      v14 = a6[1];
      a6[1] = (CAudioSignalProcessingModeArray *)v12;
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      if ( v12 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
      return 0LL;
    }
    v16 = 48LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v13);
  if ( v12 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
  return (unsigned int)v13;
}
