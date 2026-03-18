/*
 * XREFs of ??_GCEffectCompilationService@@EEAAPEAXI@Z @ 0x18025F280
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CEffectCompilationService@@EEAA@XZ @ 0x18025F1B4 (--1CEffectCompilationService@@EEAA@XZ.c)
 */

CEffectCompilationService *__fastcall CEffectCompilationService::`scalar deleting destructor'(
        CEffectCompilationService *this,
        char a2)
{
  CEffectCompilationService::~CEffectCompilationService(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
