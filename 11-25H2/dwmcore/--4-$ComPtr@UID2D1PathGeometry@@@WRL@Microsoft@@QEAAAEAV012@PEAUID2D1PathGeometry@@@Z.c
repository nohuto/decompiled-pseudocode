/*
 * XREFs of ??4?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1PathGeometry@@@Z @ 0x1800AC7A0
 * Callers:
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180089900 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x1801A8190 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC850 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CGlobalDrawingContext **__fastcall Microsoft::WRL::ComPtr<ID2D1PathGeometry>::operator=(
        CGlobalDrawingContext **a1,
        CGlobalDrawingContext *a2)
{
  CGlobalDrawingContext *v4; // rcx
  __int64 (__fastcall *v5)(CGlobalDrawingContext *); // rax

  if ( *a1 == a2 )
    return a1;
  if ( a2 )
    (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = *a1;
  *a1 = a2;
  if ( !v4 )
    return a1;
  v5 = *(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v4 + 16LL);
  if ( v5 == CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
  {
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v4);
    return a1;
  }
  if ( v5 != CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
  {
    if ( v5 == CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v4);
      return a1;
    }
    ((void (*)(void))v5)();
    return a1;
  }
  CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v4);
  return a1;
}
