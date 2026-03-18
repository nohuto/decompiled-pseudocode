/*
 * XREFs of ??_GCCompositionMipmapSurface@@UEAAPEAXI@Z @ 0x1802A1740
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1CCompositionMipmapSurface@@UEAA@XZ @ 0x1802A1648 (--1CCompositionMipmapSurface@@UEAA@XZ.c)
 */

CCompositionMipmapSurface *__fastcall CCompositionMipmapSurface::`scalar deleting destructor'(
        CCompositionMipmapSurface *this,
        char a2)
{
  CCompositionMipmapSurface::~CCompositionMipmapSurface(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
