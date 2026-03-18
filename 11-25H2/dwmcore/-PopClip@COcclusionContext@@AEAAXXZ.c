/*
 * XREFs of ?PopClip@COcclusionContext@@AEAAXXZ @ 0x180206ABC
 * Callers:
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B8E40 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Pop@COcclusionContext@@UEAAJXZ @ 0x180206A20 (-Pop@COcclusionContext@@UEAAJXZ.c)
 * Callees:
 *     ?Pop@CBaseClipStack@@QEAAXXZ @ 0x1801178F0 (-Pop@CBaseClipStack@@QEAAXXZ.c)
 *     ?Pop@?$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateType@COcclusionContext@@@Z @ 0x1801D8840 (-Pop@-$CWatermarkStack@W4StackStateType@COcclusionContext@@$0EA@$01$09@@QEAA_NPEAW4StackStateTyp.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 */

void __fastcall COcclusionContext::PopClip(COcclusionContext *this)
{
  int v2; // eax
  __int64 v3; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  CWatermarkStack<enum COcclusionContext::StackStateType,64,2,10>::Pop((__int64)this + 1752, &v4);
  CBaseClipStack::Pop((COcclusionContext *)((char *)this + 128));
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl) )
  {
    v2 = *((_DWORD *)this + 52);
    if ( v2 )
      *((_DWORD *)this + 52) = v2 - 1;
    v3 = 176LL;
  }
  else
  {
    v3 = 152LL;
  }
  CBaseClipStack::Pop((COcclusionContext *)((char *)this + v3));
}
