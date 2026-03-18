/*
 * XREFs of ??_GCDelegatedInkCanvas@@EEAAPEAXI@Z @ 0x1802990A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CDelegatedInkCanvas@@EEAA@XZ @ 0x180298FAC (--1CDelegatedInkCanvas@@EEAA@XZ.c)
 */

CDelegatedInkCanvas *__fastcall CDelegatedInkCanvas::`scalar deleting destructor'(CDelegatedInkCanvas *this, char a2)
{
  CDelegatedInkCanvas::~CDelegatedInkCanvas(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
