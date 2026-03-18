/*
 * XREFs of ?PostPresentForComputeScribble@CScribbleSwapChain@@IEAAX_N@Z @ 0x180247740
 * Callers:
 *     ?PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z @ 0x1801726B8 (-PostPresent@CDDisplaySwapChain@@IEAAX_N0@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x1801C1038 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_InkMPOCapsChange@@@details@wil@@QEAA_NXZ @ 0x18029CF4C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_InkMPOCapsChange@@@details@wil@@Q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CScribbleSwapChain::PostPresentForComputeScribble(CScribbleSwapChain *this, char a2)
{
  unsigned __int8 v4; // di
  int v5; // eax
  int v6; // esi

  if ( *((_DWORD *)this + 68) )
  {
    v4 = 0;
    if ( !a2
      && (*((_BYTE *)this + 276)
       || (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 32) + 104LL))((char *)this + 256)) )
    {
      v4 = 1;
    }
    if ( *((_BYTE *)this + 277) != v4 )
    {
      if ( *((_DWORD *)this + 68) == 1 )
      {
        v5 = (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 32) + 80LL))((char *)this + 256, v4);
        v6 = v5;
        if ( v5 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0xE1u, 0LL);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_InkMPOCapsChange>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_InkMPOCapsChange>::GetImpl'::`2'::impl) )
        {
          if ( v6 < 0 )
            goto LABEL_15;
        }
        else
        {
          if ( v6 < 0 )
            goto LABEL_15;
          *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 746LL) = 1;
        }
      }
      *((_BYTE *)this + 277) = v4;
    }
  }
LABEL_15:
  if ( a2 )
    CScribbleSwapChain::ReleaseComputeScribbleResources(this);
}
