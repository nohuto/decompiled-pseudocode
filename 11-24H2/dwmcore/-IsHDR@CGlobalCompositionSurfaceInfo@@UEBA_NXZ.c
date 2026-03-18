/*
 * XREFs of ?IsHDR@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18009CEE0
 * Callers:
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x18009B4E8 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x18009B6D0 (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::IsHDR(CGlobalCompositionSurfaceInfo *this)
{
  char v1; // bl
  __int64 v3; // rcx

  v1 = 0;
  if ( *((_DWORD *)this + 36) == 3 )
  {
    v3 = *((_QWORD *)this + 26);
    if ( v3 )
      return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 248LL))(v3) != 0;
  }
  else if ( *((_DWORD *)this + 60) == 1 )
  {
    return (unsigned int)*(_QWORD *)((char *)this + 260) > 0xC8;
  }
  return v1;
}
