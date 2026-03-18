/*
 * XREFs of ??_ECVirtualMonitorCaptureRenderTarget@@MEAAPEAXI@Z @ 0x180280A30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ @ 0x18028E2B0 (--1CVirtualMonitorCaptureRenderTarget@@MEAA@XZ.c)
 */

CVirtualMonitorCaptureRenderTarget *__fastcall CVirtualMonitorCaptureRenderTarget::`vector deleting destructor'(
        CVirtualMonitorCaptureRenderTarget *this,
        char a2)
{
  CVirtualMonitorCaptureRenderTarget::~CVirtualMonitorCaptureRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
