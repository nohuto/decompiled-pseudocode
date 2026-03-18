/*
 * XREFs of ??$ReleaseInterfaceNoNULL@UID2D1PathGeometry@@@@YAXPEAUID2D1PathGeometry@@@Z @ 0x18014E8E8
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18014E034 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

void __fastcall ReleaseInterfaceNoNULL<ID2D1PathGeometry>(CGlobalDrawingContext *a1)
{
  void (*v1)(void); // rax

  if ( a1 )
  {
    v1 = *(void (**)(void))(*(_QWORD *)a1 + 16LL);
    if ( (char *)v1 == (char *)CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(a1);
    else
      v1();
  }
}
