/*
 * XREFs of ??_GCSharedSectionWrapper@@MEAAPEAXI@Z @ 0x1802A6320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CSharedSectionWrapper@@MEAA@XZ @ 0x1802A62EC (--1CSharedSectionWrapper@@MEAA@XZ.c)
 */

CCachedVisualImage **__fastcall CSharedSectionWrapper::`scalar deleting destructor'(
        CCachedVisualImage **this,
        __int64 a2,
        __int64 a3)
{
  char v3; // di

  v3 = a2;
  CSharedSectionWrapper::~CSharedSectionWrapper(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
