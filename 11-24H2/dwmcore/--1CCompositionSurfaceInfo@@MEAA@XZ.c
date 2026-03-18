/*
 * XREFs of ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180203BA0
 * Callers:
 *     ??1CGlobalCompositionSurfaceInfo@@MEAA@XZ @ 0x1801A4ABC (--1CGlobalCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ??_ECCompositionSurfaceInfo@@MEAAPEAXI@Z @ 0x180291280 (--_ECCompositionSurfaceInfo@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCompositionSurfaceInfo::~CCompositionSurfaceInfo(CCompositionSurfaceInfo *this)
{
  bool v1; // zf

  v1 = *((_QWORD *)this + 4) == 0LL;
  *(_QWORD *)this = &CCompositionSurfaceInfo::`vftable'{for `CMILCOMBaseT<IUnknown,IUnknown,CMilObjectDeleter>'};
  *((_QWORD *)this + 2) = &CCompositionSurfaceInfo::`vftable'{for `IDeviceResourceNotify'};
  if ( !v1 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 3) + 8LL))(
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 5));
    CloseHandle(*((HANDLE *)this + 4));
  }
  detail::vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>::~vector_facade<ICompositionSurfaceInfoListener *,detail::buffer_impl<ICompositionSurfaceInfoListener *,1,1,detail::liberal_expansion_policy>>((void **)this + 8);
}
