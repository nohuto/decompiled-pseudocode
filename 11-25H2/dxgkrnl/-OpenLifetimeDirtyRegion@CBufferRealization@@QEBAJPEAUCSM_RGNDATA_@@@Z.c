/*
 * XREFs of ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAUCSM_RGNDATA_@@@Z @ 0x14002CC34
 * Callers:
 *     ?OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAUCSM_RGNDATA_@@@Z @ 0x14002C03C (-OpenLifetimeDirtyRegion@CCompositionSurface@@QEBAJ_KAEBUCSM_REALIZATION_INFO@@PEAUCSM_RGNDATA_@.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE_@@@Z @ 0x14002C0A0 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE_@@@Z.c)
 * Callees:
 *     DxgkGetWin32kImportTable @ 0x14000CC5C (DxgkGetWin32kImportTable.c)
 *     ?IRegionToRgnDataAndReset@@YAJPEAUIRegion@@PEAUCSM_RGNDATA_@@@Z @ 0x14002CCC4 (-IRegionToRgnDataAndReset@@YAJPEAUIRegion@@PEAUCSM_RGNDATA_@@@Z.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CBufferRealization::OpenLifetimeDirtyRegion(CBufferRealization *this, struct CSM_RGNDATA_ *a2)
{
  __int64 Win32kImportTable; // rax
  int v5; // ebx
  struct IRegion *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  Win32kImportTable = DxgkGetWin32kImportTable();
  v5 = (*(__int64 (__fastcall **)(struct IRegion **))(Win32kImportTable + 40))(&v7);
  if ( v5 >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(struct IRegion *, _QWORD, __int64))(*(_QWORD *)v7 + 48LL))(
           v7,
           *((_QWORD *)this + 9),
           5LL);
    if ( v5 >= 0 )
      v5 = IRegionToRgnDataAndReset(v7, a2);
    (**(void (__fastcall ***)(struct IRegion *))v7)(v7);
  }
  return (unsigned int)v5;
}
