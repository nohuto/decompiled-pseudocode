/*
 * XREFs of ??$CreateProxy@VCLegacyVisualCaptureRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCLegacyVisualCaptureRenderTargetProxy@@@Z @ 0x180082EB4
 * Callers:
 *     ?CreateLegacyVisualCaptureRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCLegacyVisualCaptureRenderTargetProxy@@@Z @ 0x18009B40C (-CreateLegacyVisualCaptureRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCLegacyVisualCaptureRenderT.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CBaseRenderTargetProxy@@QEAA@XZ @ 0x18009760C (--0CBaseRenderTargetProxy@@QEAA@XZ.c)
 *     ?Initialize@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEAUIDwmChannel@@@Z @ 0x180098D2C (-Initialize@CLegacyVisualCaptureRenderTargetProxy@@QEAAJPEAUIDwmChannel@@@Z.c)
 */

__int64 __fastcall CCompositor::CreateProxy<CLegacyVisualCaptureRenderTargetProxy>(
        __int64 a1,
        CBaseRenderTargetProxy **a2)
{
  CBaseRenderTargetProxy *v4; // rbx
  CLegacyVisualCaptureRenderTargetProxy *v5; // rcx
  int v6; // eax
  unsigned int v7; // edi

  *a2 = 0LL;
  v4 = (CBaseRenderTargetProxy *)DefaultHeap::AllocClear(0x18uLL);
  if ( v4 )
  {
    *(_OWORD *)v4 = 0LL;
    *((_QWORD *)v4 + 2) = 0LL;
    CBaseRenderTargetProxy::CBaseRenderTargetProxy(v4);
    *(_QWORD *)v4 = &CIndirectSwapchainRenderTargetProxy::`vftable';
    CMILRefCountBase::AddRef(v4);
    v6 = CLegacyVisualCaptureRenderTargetProxy::Initialize(v5, *(struct IDwmChannel **)(a1 + 24));
    v7 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v6, 0x6Fu, 0LL);
    }
    else
    {
      *a2 = v4;
      v7 = 0;
    }
  }
  else
  {
    v4 = 0LL;
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x6Du, 0LL);
  }
  if ( v4 )
    CBaseObject::Release(v4);
  return v7;
}
