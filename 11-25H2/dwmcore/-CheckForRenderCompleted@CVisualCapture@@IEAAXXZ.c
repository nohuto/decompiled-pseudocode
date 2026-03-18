/*
 * XREFs of ?CheckForRenderCompleted@CVisualCapture@@IEAAXXZ @ 0x1802B21AC
 * Callers:
 *     ?CheckOcclusionState@CVisualCapture@@UEAAJ_N@Z @ 0x1802B2210 (-CheckOcclusionState@CVisualCapture@@UEAAJ_N@Z.c)
 *     ?RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802B26B0 (-RenderTargetDirty@CVisualCapture@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800E5580 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 */

void __fastcall CVisualCapture::CheckForRenderCompleted(CVisualCapture *this)
{
  if ( *((_DWORD *)this + 696) == 2 )
  {
    if ( WaitForSingleObject(*((HANDLE *)this + 347), 0) )
      CComposition::ScheduleCompositionPass(*((_QWORD *)this + 3), 0, 0x400u);
    else
      CVisualCapture::SendCaptureCompleted(this);
  }
}
