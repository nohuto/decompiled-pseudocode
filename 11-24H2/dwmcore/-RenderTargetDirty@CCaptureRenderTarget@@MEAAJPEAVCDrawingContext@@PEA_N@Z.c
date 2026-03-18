/*
 * XREFs of ?RenderTargetDirty@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180214E20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180097480 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802364E0 (-RenderCursors@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NXZ @ 0x180244CF8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID45522024@@@details@wil@@QEAA_NX.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureRenderTarget::RenderTargetDirty(
        CCaptureRenderTarget *this,
        struct CDrawingContext *a2,
        bool *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rax
  int v11; // eax

  v6 = 0;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID45522024>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID45522024>::GetImpl'::`2'::impl) )
  {
    v7 = *((_QWORD *)this + 345);
    if ( v7 )
    {
      if ( *(_QWORD *)(v7 + 128) != *(_QWORD *)(v7 + 136) )
      {
        *a3 = 0;
LABEL_7:
        v9 = *(_QWORD *)this;
        *((_DWORD *)this + 748) = -1;
        (*(void (__fastcall **)(CCaptureRenderTarget *))(v9 + 264))(this);
        return v6;
      }
    }
  }
  v8 = COffScreenRenderTarget::RenderTargetDirty(this, a2, a3);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x34Eu, 0LL);
  }
  else if ( *a3 )
  {
    v11 = CCaptureRenderTarget::RenderCursors(this, a2);
    v6 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x352u, 0LL);
  }
  if ( !*a3 )
    goto LABEL_7;
  return v6;
}
