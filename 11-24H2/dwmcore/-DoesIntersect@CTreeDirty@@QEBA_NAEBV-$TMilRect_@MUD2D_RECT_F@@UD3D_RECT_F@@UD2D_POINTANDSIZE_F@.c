/*
 * XREFs of ?DoesIntersect@CTreeDirty@@QEBA_NAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801EF2A4
 * Callers:
 *     ?GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z @ 0x1801D4E40 (-GetSyncLockCount@CLegacyRenderTarget@@UEBAI_KI@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z @ 0x180231EE4 (-EndOverlayCandidateCollection@COverlayContext@@QEAAXPEBVCOcclusionContext@@PEBVCVisualTree@@@Z.c)
 *     ?GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z @ 0x18027F320 (-GetSyncLockCount@CDDisplayRenderTarget@@UEBAI_KI@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800750E0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CTreeDirty::DoesIntersect(__int64 a1, const struct D2D_RECT_F *a2)
{
  const struct D2D_RECT_F *v3; // r8
  const struct D2D_RECT_F *v4; // r9
  const struct D2D_RECT_F *v5; // r8

  if ( *(_BYTE *)(a1 + 2324) )
    return 1;
  v3 = (const struct D2D_RECT_F *)(a1 + 20);
  if ( a1 == -20 && MEMORY[0xFFFFFFFFFFFFFFFC] )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  v4 = &v3[*(unsigned int *)(a1 + 16)];
  while ( v3 != v4 )
  {
    if ( !IsEmpty(a2)
      && !IsEmpty(v5)
      && a2->right > v5->left
      && v5->right > a2->left
      && a2->bottom > v5->top
      && v5->bottom > a2->top )
    {
      return 1;
    }
    v3 = v5 + 1;
  }
  return 0;
}
