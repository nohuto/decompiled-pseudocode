/*
 * XREFs of ??_ECRedirectedVisualContent@@MEAAPEAXI@Z @ 0x1800C06B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CRedirectedVisualContent@@MEAA@XZ @ 0x1800C06FC (--1CRedirectedVisualContent@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CRedirectedVisualContent *__fastcall CRedirectedVisualContent::`vector deleting destructor'(
        CRedirectedVisualContent *this,
        char a2)
{
  CRedirectedVisualContent::~CRedirectedVisualContent(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 112LL);
    else
      operator delete(this);
  }
  return this;
}
