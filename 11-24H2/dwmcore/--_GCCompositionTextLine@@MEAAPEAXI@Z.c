/*
 * XREFs of ??_GCCompositionTextLine@@MEAAPEAXI@Z @ 0x180275780
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CCompositionTextLine@@MEAA@XZ @ 0x180298930 (--1CCompositionTextLine@@MEAA@XZ.c)
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
