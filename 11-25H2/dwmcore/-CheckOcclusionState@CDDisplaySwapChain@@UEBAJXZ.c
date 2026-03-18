/*
 * XREFs of ?CheckOcclusionState@CDDisplaySwapChain@@UEBAJXZ @ 0x180211C30
 * Callers:
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x18023F210 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_FBR@@@details@wil@@QEAA_NXZ @ 0x18024CF98 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DDisplay_FBR@@@details@wil@@QEAA_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplaySwapChain::CheckOcclusionState(CDDisplaySwapChain *this)
{
  __int64 v1; // rcx
  int v2; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 51);
  v5 = 0;
  v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v1 + 48LL))(v1, &v5);
  v3 = v2;
  if ( v2 >= 0 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DDisplay_FBR>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DDisplay_FBR>::GetImpl'::`2'::impl) )
    {
      if ( v5 )
      {
        if ( v5 == 1 || v5 == 3 )
          return 142213121;
        if ( v5 == 4 )
          return 142213129;
      }
    }
    else if ( v5 && (v5 == 1 || v5 == 3) )
    {
      return 142213121;
    }
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v2, 0x96u, 0LL);
  return v3;
}
