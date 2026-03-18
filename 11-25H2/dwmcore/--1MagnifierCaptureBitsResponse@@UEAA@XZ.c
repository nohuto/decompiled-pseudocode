/*
 * XREFs of ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x1802235EC
 * Callers:
 *     ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1802235A0 (--_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 */

void __fastcall MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(MagnifierCaptureBitsResponse *this)
{
  CResource *v2; // rcx

  *(_QWORD *)this = &MagnifierCaptureBitsResponse::`vftable';
  v2 = (CResource *)*((_QWORD *)this + 247);
  if ( v2 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v2);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
