/*
 * XREFs of ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18002D664
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18002CA40 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009BF4 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x18002E0FC (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     ?erase@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@QEAVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x18002F908 (-erase@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneInfo.c)
 *     ?clear@?$vector_facade@PEAVCResponseItemBase@@V?$buffer_impl@PEAVCResponseItemBase@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006B814 (-clear@-$vector_facade@PEAVCResponseItemBase@@V-$buffer_impl@PEAVCResponseItemBase@@$01$00Vliber.c)
 *     ??$?0$0?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E0C30 (--$-0$0-0V-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneI.c)
 *     ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E7960 (-GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x1802076B0 (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@COv.c)
 *     ?FindHighestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18023D1B0 (-FindHighestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@CO.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?IsCandidateSupportedSingleton@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAVOverlayPlaneInfo@1@@Z @ 0x180276FD4 (-IsCandidateSupportedSingleton@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PE.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x180277ABC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 */

char __fastcall COverlayContext::TrimCheckCandidatesList(_QWORD *a1, _QWORD *a2)
{
  char v4; // di
  char IsEnabled; // al
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 HighestPriorityOverlayCandidateIndex; // r14
  __int64 LowestPriorityOverlayCandidateIndex; // rcx
  __int64 *v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 *v14; // rdx
  COverlayContext **v15; // r14
  char v16; // r15
  COverlayContext **i; // r12
  COverlayContext *v18; // r13
  _BYTE v20[16]; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-89h] BYREF
  void *v22[3]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v23[128]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v24; // [rsp+D8h] [rbp+1Fh] BYREF

  v4 = 0;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWM_MPO_Enhancement>::GetImpl'::`2'::impl);
  v6 = a2[1];
  if ( IsEnabled )
  {
    v7 = (v6 - *a2) >> 3;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        detail::vector_facade<CResponseItemBase *,detail::buffer_impl<CResponseItemBase *,2,1,detail::liberal_expansion_policy>>::clear(a2);
        goto LABEL_24;
      }
      gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v20, a2);
      HighestPriorityOverlayCandidateIndex = (int)COverlayContext::FindHighestPriorityOverlayCandidateIndex(v20);
      if ( (unsigned __int8)COverlayContext::IsCandidateSupportedSingleton(
                              a1,
                              *(_QWORD *)(*a2 + 8 * HighestPriorityOverlayCandidateIndex)) )
      {
        gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v20, a2);
        LODWORD(HighestPriorityOverlayCandidateIndex) = COverlayContext::FindLowestPriorityOverlayCandidateIndex(v20);
      }
      LowestPriorityOverlayCandidateIndex = (int)HighestPriorityOverlayCandidateIndex;
LABEL_7:
      v21[0] = *a2 + 8 * LowestPriorityOverlayCandidateIndex;
      detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::erase(
        a2,
        v20,
        v21);
LABEL_24:
      v15 = (COverlayContext **)a1[1];
      v16 = 0;
      for ( i = &v15[*a1]; v15 != i; ++v15 )
      {
        v18 = *v15;
        v22[0] = v23;
        v22[1] = v23;
        v22[2] = &v24;
        gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v20, a2);
        COverlayContext::GetContextCandidates(v18, v20, v22);
        gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v21, v22);
        COverlayContext::DeriveDesktopPlaneAttributes(v18);
        if ( *((_BYTE *)v18 + 19472) && *((_BYTE *)v18 + 19473) )
          v16 = 1;
        detail::vector_facade<CResponseItemBase *,detail::buffer_impl<CResponseItemBase *,2,1,detail::liberal_expansion_policy>>::clear(v22);
        detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(v22);
      }
      if ( a2[1] != *a2 || v16 )
        return 1;
      return v4;
    }
    v10 = (__int64 *)a1[1];
    v11 = &v10[*a1];
    while ( v10 != v11 )
    {
      v12 = *v10;
      if ( *(_BYTE *)(*v10 + 19472) && *(_BYTE *)(v12 + 19473) )
        goto LABEL_23;
      ++v10;
    }
  }
  else
  {
    if ( v6 != *a2 )
    {
      gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v20, a2);
      LowestPriorityOverlayCandidateIndex = (int)COverlayContext::FindLowestPriorityOverlayCandidateIndex(v20);
      goto LABEL_7;
    }
    v13 = (__int64 *)a1[1];
    v14 = &v13[*a1];
    while ( v13 != v14 )
    {
      v12 = *v13;
      if ( *(_BYTE *)(*v13 + 19472) && *(_BYTE *)(v12 + 19473) )
      {
LABEL_23:
        *(_BYTE *)(v12 + 19796) = 0;
        goto LABEL_24;
      }
      ++v13;
    }
  }
  return v4;
}
