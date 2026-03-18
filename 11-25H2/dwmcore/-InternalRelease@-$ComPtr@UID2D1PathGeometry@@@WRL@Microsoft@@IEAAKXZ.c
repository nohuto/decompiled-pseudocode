/*
 * XREFs of ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x18013A67C
 * Callers:
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180089900 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800A3AFC (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x18013A3D8 (--1CInteraction@@MEAA@XZ.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1801A7850 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x1801A8190 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CPathData@@MEAA@XZ @ 0x1801A8474 (--1CPathData@@MEAA@XZ.c)
 *     ?CreateDCompStats@CInteraction@@QEAAPEAVIDCompositionInteractionStats@@XZ @ 0x180230F54 (-CreateDCompStats@CInteraction@@QEAAPEAVIDCompositionInteractionStats@@XZ.c)
 *     ?ReportInertiaStop@CInteraction@@QEAAJXZ @ 0x180231EC8 (-ReportInertiaStop@CInteraction@@QEAAJXZ.c)
 *     ?Reset@CPathData@@AEAAXXZ @ 0x1802575BC (-Reset@CPathData@@AEAAXXZ.c)
 *     ?FlattenToLineSegments@CShape@@UEBAJMPEAPEAV1@@Z @ 0x180263C40 (-FlattenToLineSegments@CShape@@UEBAJMPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC850 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(CGlobalDrawingContext **a1)
{
  __int64 result; // rax
  CGlobalDrawingContext *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
    {
      return CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v3);
    }
    else if ( (char *)v4 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      return CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v3);
    }
    else if ( (char *)v4 == (char *)CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
    {
      return CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v3);
    }
    else
    {
      return v4();
    }
  }
  return result;
}
