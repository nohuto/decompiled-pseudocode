/*
 * XREFs of ??1CPolygon@@EEAA@XZ @ 0x1801EC0DC
 * Callers:
 *     ??_ECPolygon@@EEAAPEAXI@Z @ 0x1801EC090 (--_ECPolygon@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@IEAAKXZ @ 0x1801EC130 (-InternalRelease@-$ComPtr@VClipPlaneInfoRef@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CPolygon::~CPolygon(CPolygon *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CPolygon::`vftable';
  v2 = *((_QWORD *)this + 31);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 31) = 0LL;
  }
  Microsoft::WRL::ComPtr<ClipPlaneInfoRef>::InternalRelease((char *)this + 256);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 16);
}
