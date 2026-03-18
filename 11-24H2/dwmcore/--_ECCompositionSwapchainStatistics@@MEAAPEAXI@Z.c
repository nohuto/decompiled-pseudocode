/*
 * XREFs of ??_ECCompositionSwapchainStatistics@@MEAAPEAXI@Z @ 0x1801EEEF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??1CCompositionSwapchainStatistics@@MEAA@XZ @ 0x1801EEF3C (--1CCompositionSwapchainStatistics@@MEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CCompositionSwapchainStatistics *__fastcall CCompositionSwapchainStatistics::`vector deleting destructor'(
        CCompositionSwapchainStatistics *this,
        char a2)
{
  CCompositionSwapchainStatistics::~CCompositionSwapchainStatistics(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 104LL);
    else
      operator delete(this);
  }
  return this;
}
