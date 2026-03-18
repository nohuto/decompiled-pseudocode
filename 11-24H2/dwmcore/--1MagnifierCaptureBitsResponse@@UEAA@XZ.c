/*
 * XREFs of ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x1802175AC
 * Callers:
 *     ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x180217560 (--_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 */

void __fastcall MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(
        MagnifierCaptureBitsResponse *this,
        __int64 a2,
        __int64 a3)
{
  CCachedVisualImage *v4; // rcx

  *(_QWORD *)this = &MagnifierCaptureBitsResponse::`vftable';
  v4 = (CCachedVisualImage *)*((_QWORD *)this + 247);
  if ( v4 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v4, a2, a3);
  CaptureBitsResponse::~CaptureBitsResponse(this);
}
