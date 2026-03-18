/*
 * XREFs of ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18021F7E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1801EC680 (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 */

void __fastcall CCaptureRenderTarget::DetachFromChannel(CCaptureRenderTarget *this, struct CChannelContext *a2)
{
  CCaptureController *v3; // rcx

  v3 = (CCaptureController *)*((_QWORD *)this + 345);
  *((_QWORD *)this + 345) = 0LL;
  if ( v3 )
    CCaptureController::RemoveRenderTarget(v3, this);
  CNotificationResource::DetachFromChannel(this, a2);
}
