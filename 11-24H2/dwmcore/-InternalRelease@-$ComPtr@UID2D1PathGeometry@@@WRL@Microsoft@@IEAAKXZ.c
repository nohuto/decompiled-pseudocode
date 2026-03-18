/*
 * XREFs of ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800956F8
 * Callers:
 *     ??1CInteraction@@MEAA@XZ @ 0x180095454 (--1CInteraction@@MEAA@XZ.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800D0D60 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1801AC390 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x1801ACCD0 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CPathData@@MEAA@XZ @ 0x1801ACFFC (--1CPathData@@MEAA@XZ.c)
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1801AD040 (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?CreateDCompStats@CInteraction@@QEAAPEAVIDCompositionInteractionStats@@XZ @ 0x180225744 (-CreateDCompStats@CInteraction@@QEAAPEAVIDCompositionInteractionStats@@XZ.c)
 *     ?ReportInertiaStop@CInteraction@@QEAAJXZ @ 0x180226258 (-ReportInertiaStop@CInteraction@@QEAAJXZ.c)
 *     ?Reset@CPathData@@AEAAXXZ @ 0x18024C1EC (-Reset@CPathData@@AEAAXXZ.c)
 *     ?FlattenToLineSegments@CShape@@UEBAJMPEAPEAV1@@Z @ 0x180258D00 (-FlattenToLineSegments@CShape@@UEBAJMPEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(
        CGlobalDrawingContext **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  CGlobalDrawingContext *v5; // rcx
  __int64 (*v6)(void); // rax

  result = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    *a1 = 0LL;
    v6 = *(__int64 (**)(void))(*(_QWORD *)v5 + 16LL);
    if ( (char *)v6 == (char *)CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
    {
      return CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v5);
    }
    else if ( (char *)v6 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      return CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
               v5,
               (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
               a3);
    }
    else if ( (char *)v6 == (char *)CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
    {
      return CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v5);
    }
    else
    {
      return v6();
    }
  }
  return result;
}
