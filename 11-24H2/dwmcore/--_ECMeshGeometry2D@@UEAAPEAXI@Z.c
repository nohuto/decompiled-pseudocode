/*
 * XREFs of ??_ECMeshGeometry2D@@UEAAPEAXI@Z @ 0x18020B680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ??1?$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@UEAA@XZ @ 0x18020B6CC (--1-$CMeshGeometry2DGeneratedT@VCMeshGeometry2D@@VCGeometry2D@@@@UEAA@XZ.c)
 */

CMeshGeometry2D *__fastcall CMeshGeometry2D::`vector deleting destructor'(CMeshGeometry2D *this, char a2)
{
  CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>::~CMeshGeometry2DGeneratedT<CMeshGeometry2D,CGeometry2D>(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
