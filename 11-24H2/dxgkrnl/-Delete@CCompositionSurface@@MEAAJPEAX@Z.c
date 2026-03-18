/*
 * XREFs of ?Delete@CCompositionSurface@@MEAAJPEAX@Z @ 0x140016F50
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x140016F88 (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CCompositionSurface::Delete(CCompositionSurface *this, void *a2)
{
  __int64 v3; // rcx

  CCompositionSurface::ReleaseAllBuffers(this);
  v3 = *((_QWORD *)this + 20);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
