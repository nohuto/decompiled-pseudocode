/*
 * XREFs of ??_GCCompositionTextLine@@MEAAPEAXI@Z @ 0x1802801B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CCompositionTextLine@@MEAA@XZ @ 0x1802A29B0 (--1CCompositionTextLine@@MEAA@XZ.c)
 */

CCompositionTextLine *__fastcall CCompositionTextLine::`scalar deleting destructor'(
        CCompositionTextLine *this,
        char a2)
{
  CCompositionTextLine::~CCompositionTextLine(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
