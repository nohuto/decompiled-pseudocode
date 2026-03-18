/*
 * XREFs of ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18005FD04
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18005F0C0 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@.c)
 * Callees:
 *     ??1?$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ @ 0x180009304 (--1-$expandable_buffer_base@PEAVCOverlayContext@@$01@detail@@QEAA@XZ.c)
 *     ?clear@?$vector_facade@PEAVCResponseItemBase@@V?$buffer_impl@PEAVCResponseItemBase@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800419D4 (-clear@-$vector_facade@PEAVCResponseItemBase@@V-$buffer_impl@PEAVCResponseItemBase@@$01$00Vliber.c)
 *     ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x18005E3CC (-FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV-$span@PEAVOverlayPlaneInfo@COv.c)
 *     ??$?0$0?0V?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@$0A@@?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEAA@AEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801D3C00 (--$-0$0-0V-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneI.c)
 *     ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801DC3D0 (-GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 *     ?erase@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@QEAVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x1801E34A4 (-erase@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneInfo.c)
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N@Z @ 0x180231CCC (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAXAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil@@QEAA_NXZ @ 0x18026D368 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWM_MPO_Enhancement@@@details@wil.c)
 */

char __fastcall COverlayContext::TrimCheckCandidatesList(_QWORD *a1, _QWORD *a2)
{
  char v4; // di
  char IsEnabled; // al
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 *v8; // rcx
  __int64 *v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // rcx
  __int64 *v12; // rdx
  COverlayContext **v13; // r14
  char v14; // r15
  COverlayContext **i; // r12
  COverlayContext *v16; // r13
  _QWORD v18[2]; // [rsp+20h] [rbp-99h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-89h] BYREF
  void *v20[3]; // [rsp+40h] [rbp-79h] BYREF
  _BYTE v21[128]; // [rsp+58h] [rbp-61h] BYREF
  __int64 v22; // [rsp+D8h] [rbp+1Fh] BYREF

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
        goto LABEL_20;
      }
LABEL_4:
      gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v18, a2);
      v19[0] = *a2 + 8LL * (int)COverlayContext::FindLowestPriorityOverlayCandidateIndex(v18);
      detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::erase(
        a2,
        v18,
        v19);
LABEL_20:
      v13 = (COverlayContext **)a1[1];
      v14 = 0;
      for ( i = &v13[*a1]; v13 != i; ++v13 )
      {
        v16 = *v13;
        v20[0] = v21;
        v20[1] = v21;
        v20[2] = &v22;
        gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v18, a2);
        COverlayContext::GetContextCandidates(v16, v18, v20);
        gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::span<COverlayContext::OverlayPlaneInfo *,-1>(v19, v20);
        COverlayContext::DeriveDesktopPlaneAttributes(v16);
        if ( *((_BYTE *)v16 + 19088) && *((_BYTE *)v16 + 19089) )
          v14 = 1;
        detail::vector_facade<CResponseItemBase *,detail::buffer_impl<CResponseItemBase *,2,1,detail::liberal_expansion_policy>>::clear(v20);
        detail::expandable_buffer_base<COverlayContext *,2>::~expandable_buffer_base<COverlayContext *,2>(v20);
      }
      if ( a2[1] != *a2 || v14 )
        return 1;
      return v4;
    }
    v8 = (__int64 *)a1[1];
    v9 = &v8[*a1];
    while ( v8 != v9 )
    {
      v10 = *v8;
      if ( *(_BYTE *)(*v8 + 19088) && *(_BYTE *)(v10 + 19089) )
        goto LABEL_19;
      ++v8;
    }
  }
  else
  {
    if ( v6 != *a2 )
      goto LABEL_4;
    v11 = (__int64 *)a1[1];
    v12 = &v11[*a1];
    while ( v11 != v12 )
    {
      v10 = *v11;
      if ( *(_BYTE *)(*v11 + 19088) && *(_BYTE *)(v10 + 19089) )
      {
LABEL_19:
        *(_BYTE *)(v10 + 19608) = 0;
        goto LABEL_20;
      }
      ++v11;
    }
  }
  return v4;
}
