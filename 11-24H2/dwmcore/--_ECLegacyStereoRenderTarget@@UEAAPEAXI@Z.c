/*
 * XREFs of ??_ECLegacyStereoRenderTarget@@UEAAPEAXI@Z @ 0x180275AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CLegacyStereoRenderTarget@@UEAA@XZ @ 0x1802752B8 (--1CLegacyStereoRenderTarget@@UEAA@XZ.c)
 */

CLegacyStereoRenderTarget *__fastcall CLegacyStereoRenderTarget::`vector deleting destructor'(
        CLegacyStereoRenderTarget *this,
        __int64 a2,
        __int64 a3)
{
  char v3; // di

  v3 = a2;
  CLegacyStereoRenderTarget::~CLegacyStereoRenderTarget(this, a2, a3);
  if ( (v3 & 1) != 0 )
  {
    if ( (v3 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
