/*
 * XREFs of ?FindMajorityScreenContent@COverlayContext@@QEBAPEAVCCompositionSurfaceInfo@@W4BufferContentType@@@Z @ 0x18009B920
 * Callers:
 *     ?CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ @ 0x18009B4E8 (-CheckForFullscreenVideoNotifications@CFSVPProvider@@QEAAXXZ.c)
 *     ?CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ @ 0x18009B6D0 (-CheckForMajorityScreenVideoNotifications@CLegacyRenderTarget@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall COverlayContext::FindMajorityScreenContent(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v5; // rbx
  __int64 v6; // rdi

  v2 = a1[2439];
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 16);
    if ( v3 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 88LL))(v3) == 1 )
        return *(_QWORD *)(a1[2439] + 16LL);
    }
  }
  v5 = a1[1585];
  v6 = a1[1586];
  while ( v5 != v6 )
  {
    if ( *(int *)(v5 + 360) >= 1
      && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 16) + 88LL))(*(_QWORD *)(v5 + 16)) == 1 )
    {
      return *(_QWORD *)(v5 + 16);
    }
    v5 += 392LL;
  }
  return 0LL;
}
