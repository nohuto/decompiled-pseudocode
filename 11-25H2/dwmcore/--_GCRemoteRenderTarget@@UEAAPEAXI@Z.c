/*
 * XREFs of ??_GCRemoteRenderTarget@@UEAAPEAXI@Z @ 0x180280620
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CRemoteRenderTarget@@UEAA@XZ @ 0x18027FAB0 (--1CRemoteRenderTarget@@UEAA@XZ.c)
 */

CRemoteRenderTarget *__fastcall CRemoteRenderTarget::`scalar deleting destructor'(CRemoteRenderTarget *this, char a2)
{
  CRemoteRenderTarget::~CRemoteRenderTarget(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
