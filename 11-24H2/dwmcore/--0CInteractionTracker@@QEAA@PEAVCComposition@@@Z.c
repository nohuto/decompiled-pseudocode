/*
 * XREFs of ??0CInteractionTracker@@QEAA@PEAVCComposition@@@Z @ 0x1801F3CCC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800DB07C (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ @ 0x1800E2E74 (-UpdatePositionRoundingSuggestion@CInteractionTracker@@AEAAXXZ.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E53E0 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0InteractionSourceManager@@QEAA@PEAVCInteractionTracker@@@Z @ 0x1801F3EE0 (--0InteractionSourceManager@@QEAA@PEAVCInteractionTracker@@@Z.c)
 *     ?RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z @ 0x1801F3F78 (-RegisterInteractionTrackerNotification@CExpressionManager@@QEAAXPEAVCInteractionTracker@@@Z.c)
 */

CInteractionTracker *__fastcall CInteractionTracker::CInteractionTracker(
        CInteractionTracker *this,
        struct CComposition *a2)
{
  CDirtyRegionAnnotation *v3; // rdi
  __int64 v4; // rsi
  CDirtyRegionAnnotation *v5; // rdi
  __int64 v6; // rsi
  int v7; // xmm0_4

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CInteractionTracker::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 36) = 1065353216;
  *((_DWORD *)this + 37) = 1065353216;
  *((_DWORD *)this + 38) = 1065353216;
  *((_DWORD *)this + 45) = 1014350479;
  InteractionSourceManager::InteractionSourceManager((CInteractionTracker *)((char *)this + 208), this);
  *((_QWORD *)this + 41) = 0LL;
  v3 = (CInteractionTracker *)((char *)this + 368);
  *((_QWORD *)this + 42) = 0LL;
  v4 = 2LL;
  *((_QWORD *)this + 43) = 0LL;
  do
  {
    --v4;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v3);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v3);
    v3 = (CDirtyRegionAnnotation *)((char *)v3 + 8);
  }
  while ( v4 );
  v5 = (CInteractionTracker *)((char *)this + 384);
  v6 = 4LL;
  do
  {
    --v6;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v5);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v5);
    v5 = (CDirtyRegionAnnotation *)((char *)v5 + 8);
  }
  while ( v6 );
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 126) = 0;
  v7 = *((_DWORD *)this + 36);
  *((_DWORD *)this + 131) = v7;
  *((_DWORD *)this + 132) = v7;
  *((_DWORD *)this + 136) = 1117126656;
  *((_DWORD *)this + 137) = 1130430464;
  *((_DWORD *)this + 138) = 1104674816;
  *((_DWORD *)this + 139) = 1123680256;
  *((_DWORD *)this + 140) = 1102053376;
  *((_DWORD *)this + 141) = 1106247680;
  *((_DWORD *)this + 142) = 1177280512;
  *((_DWORD *)this + 143) = 1028443341;
  *((_DWORD *)this + 144) = 1084227584;
  *((_QWORD *)this + 80) = 0LL;
  CExpressionManager::RegisterInteractionTrackerNotification(
    *(CExpressionManager **)(*((_QWORD *)this + 3) + 824LL),
    this);
  *((_DWORD *)this + 31) = 1028443341;
  *((_DWORD *)this + 32) = 1028443341;
  *((float *)this + 34) = (float)CCommonRegistryData::MousewheelAnimationDurationMs / 1000.0;
  *((float *)this + 35) = (float)CCommonRegistryData::MousewheelAnimationDurationMs / 1000.0;
  CInteractionTracker::UpdatePositionRoundingSuggestion(this);
  return this;
}
