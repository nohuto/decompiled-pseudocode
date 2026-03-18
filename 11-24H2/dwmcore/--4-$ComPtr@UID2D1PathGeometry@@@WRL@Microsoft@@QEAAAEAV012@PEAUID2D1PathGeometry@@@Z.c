/*
 * XREFs of ??4?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1PathGeometry@@@Z @ 0x18007A980
 * Callers:
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800D0D60 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x1801ACCD0 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AB80 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CGlobalDrawingContext **__fastcall Microsoft::WRL::ComPtr<ID2D1PathGeometry>::operator=(
        CGlobalDrawingContext **a1,
        CGlobalDrawingContext *a2,
        __int64 a3)
{
  CGlobalDrawingContext *v5; // rcx
  __int64 (__fastcall *v6)(CGlobalDrawingContext *); // rax

  if ( *a1 == a2 )
    return a1;
  if ( a2 )
    (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = *a1;
  *a1 = a2;
  if ( !v5 )
    return a1;
  v6 = *(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v5 + 16LL);
  if ( v6 == CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
  {
    CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v5);
    return a1;
  }
  if ( (char *)v6 != (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
  {
    if ( v6 == CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v5);
      return a1;
    }
    ((void (*)(void))v6)();
    return a1;
  }
  CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
    v5,
    (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
    a3);
  return a1;
}
