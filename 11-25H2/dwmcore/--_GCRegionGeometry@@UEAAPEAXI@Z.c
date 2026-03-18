/*
 * XREFs of ??_GCRegionGeometry@@UEAAPEAXI@Z @ 0x1802033E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??1?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEAA@XZ @ 0x18020342C (--1-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEAA@XZ.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 */

CRegionGeometry *__fastcall CRegionGeometry::`scalar deleting destructor'(CRegionGeometry *this, char a2)
{
  CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>::~CRegionGeometryGeneratedT<CRegionGeometry,CGeometry>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease(this, 168LL);
    else
      operator delete(this);
  }
  return this;
}
