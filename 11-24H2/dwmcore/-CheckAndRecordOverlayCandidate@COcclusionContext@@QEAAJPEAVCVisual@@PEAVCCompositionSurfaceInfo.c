/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180100A78
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800FF480 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180236BA0 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18023E480 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x180061570 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$query_to@VISwapChainRealization@@@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVISwapChainRealization@@@Z @ 0x1800D391C (--$query_to@VISwapChainRealization@@@-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil.c)
 *     ?HasLighting@CLightStack@@QEBA_NXZ @ 0x1801C3640 (-HasLighting@CLightStack@@QEBA_NXZ.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180234A5C (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAA_NXZ @ 0x18025C744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@Q.c)
 *     ?OverlayCandidateCollectionEnabled@COverlayContext@@QEBA_NXZ @ 0x18027B130 (-OverlayCandidateCollectionEnabled@COverlayContext@@QEBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COcclusionContext::CheckAndRecordOverlayCandidate(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned int v7; // r14d
  char IsEnabled; // r10
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rax
  COverlayContext **v12; // rbx
  COverlayContext **v13; // r12
  COverlayContext *v14; // r15
  int v15; // eax
  __int64 v16; // rax
  COverlayContext **v17; // rbx
  COverlayContext **v18; // r12
  COverlayContext *v19; // r15
  int v20; // eax
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  CGDISectionBitmapRealization *v23; // [rsp+48h] [rbp-8h] BYREF

  v7 = 0;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ComposedFlipPerf>::GetImpl'::`2'::impl);
  v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 48LL);
  if ( IsEnabled )
  {
    v11 = v10(a3);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v23,
      v11);
    if ( v23 )
    {
      v22 = 0LL;
      if ( (int)wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::query_to<ISwapChainRealization>(
                  &v23,
                  (__int64)&v22) >= 0
        && (!*(_DWORD *)(a1 + 1716) && !CLightStack::HasLighting((CLightStack *)(a1 + 224))
         || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 152LL))(v22)) )
      {
        v12 = *(COverlayContext ***)(a1 + 1800);
        v13 = *(COverlayContext ***)(a1 + 1808);
        while ( v12 != v13 )
        {
          v14 = *v12;
          if ( COverlayContext::OverlayCandidateCollectionEnabled(*v12) )
          {
            v15 = COcclusionContext::CheckAndRecordOverlayCandidateForContext(a1, v14, a2, a3, v22, a4, a5, a6);
            v7 = v15;
            if ( v15 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v15, 0x70Bu, 0LL);
              break;
            }
          }
          ++v12;
        }
      }
LABEL_26:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v22);
    }
  }
  else
  {
    v16 = v10(a3);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v23,
      v16);
    if ( v23 )
    {
      v22 = 0LL;
      if ( (int)wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::query_to<ISwapChainRealization>(
                  &v23,
                  (__int64)&v22) >= 0
        && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 144LL))(v22)
         || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 168LL))(v22))
        && (!*(_DWORD *)(a1 + 1716) && !CLightStack::HasLighting((CLightStack *)(a1 + 224))
         || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v22 + 152LL))(v22)) )
      {
        v17 = *(COverlayContext ***)(a1 + 1800);
        v18 = *(COverlayContext ***)(a1 + 1808);
        while ( v17 != v18 )
        {
          v19 = *v17;
          if ( COverlayContext::OverlayCandidateCollectionEnabled(*v17) )
          {
            v20 = COcclusionContext::CheckAndRecordOverlayCandidateForContext(a1, v19, a2, a3, v22, a4, a5, a6);
            v7 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x729u, 0LL);
              goto LABEL_26;
            }
          }
          ++v17;
        }
      }
      goto LABEL_26;
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v23);
  return v7;
}
