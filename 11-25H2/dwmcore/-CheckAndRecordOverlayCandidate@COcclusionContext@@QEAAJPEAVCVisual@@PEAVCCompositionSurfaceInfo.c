/*
 * XREFs of ?CheckAndRecordOverlayCandidate@COcclusionContext@@QEAAJPEAVCVisual@@PEAVCCompositionSurfaceInfo@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023D960
 * Callers:
 *     ?CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180055A90 (-CollectOcclusion@CWindowNode@@UEAAJPEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z.c)
 *     ?AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x18023FB60 (-AddOcclusionInformation@CCompositionSurfaceBitmap@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@.c)
 *     ?AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z @ 0x180245D90 (-AddOcclusionInformation@CSurfaceBrush@@UEAAJPEAVCOcclusionContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x18003F160 (--0-$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z.c)
 *     ??$query_to@VISwapChainRealization@@@?$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVISwapChainRealization@@@Z @ 0x1800A18CC (--$query_to@VISwapChainRealization@@@-$com_ptr_t@VIBitmapRealization@@Uerr_returncode_policy@wil.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HasLighting@CLightStack@@QEBA_NXZ @ 0x1801D6650 (-HasLighting@CLightStack@@QEBA_NXZ.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@AEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x18023E0CC (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_StereoDFlip@@@details@wil@@QEAA_NXZ @ 0x180286334 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_StereoDFlip@@@details@wil@@QEAA_N.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  _QWORD *v12; // rbx
  _QWORD *v13; // r15
  int v14; // eax
  __int64 v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // r15
  int v18; // eax
  __int64 v20; // [rsp+40h] [rbp-10h] BYREF
  CGDISectionBitmapRealization *v21; // [rsp+48h] [rbp-8h] BYREF

  v7 = 0;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_StereoDFlip>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_StereoDFlip>::GetImpl'::`2'::impl);
  v10 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 48LL);
  if ( IsEnabled )
  {
    v11 = v10(a3);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v21,
      v11);
    if ( v21 )
    {
      v20 = 0LL;
      if ( (int)wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::query_to<ISwapChainRealization>(
                  &v21,
                  (__int64)&v20) >= 0
        && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 144LL))(v20)
         || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 168LL))(v20))
        && (!*(_DWORD *)(a1 + 1716) && !CLightStack::HasLighting((CLightStack *)(a1 + 224))
         || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 152LL))(v20)) )
      {
        v12 = *(_QWORD **)(a1 + 1800);
        v13 = *(_QWORD **)(a1 + 1808);
        while ( v12 != v13 )
        {
          if ( *(_BYTE *)(*v12 + 19779LL) )
          {
            v14 = COcclusionContext::CheckAndRecordOverlayCandidateForContext(a1, *v12, a2, a3, v20, a4, a5, a6);
            v7 = v14;
            if ( v14 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, 0x6F4u, 0LL);
              break;
            }
          }
          ++v12;
        }
      }
LABEL_27:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
    }
  }
  else
  {
    v15 = v10(a3);
    wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
      &v21,
      v15);
    if ( v21 )
    {
      v20 = 0LL;
      if ( (int)wil::com_ptr_t<IBitmapRealization,wil::err_returncode_policy>::query_to<ISwapChainRealization>(
                  &v21,
                  (__int64)&v20) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 144LL))(v20)
        && (!*(_DWORD *)(a1 + 1716) && !CLightStack::HasLighting((CLightStack *)(a1 + 224))
         || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v20 + 152LL))(v20)) )
      {
        v16 = *(_QWORD **)(a1 + 1800);
        v17 = *(_QWORD **)(a1 + 1808);
        while ( v16 != v17 )
        {
          if ( *(_BYTE *)(*v16 + 19779LL) )
          {
            v18 = COcclusionContext::CheckAndRecordOverlayCandidateForContext(a1, *v16, a2, a3, v20, a4, a5, a6);
            v7 = v18;
            if ( v18 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x710u, 0LL);
              goto LABEL_27;
            }
          }
          ++v16;
        }
      }
      goto LABEL_27;
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
  return v7;
}
