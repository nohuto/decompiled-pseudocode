/*
 * XREFs of ?DetermineViewDistance@@YA_NQEAXAEBUtagSIZE@@H1PEAI@Z @ 0x14036B63C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x14030DAE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHIPEAU_GDIINFO@@PEAU_DPI_INFORMATIO.c)
 * Callees:
 *     ?HeuristicallyDetermineViewingDistance@@YAIAEBUtagSIZE@@H0@Z @ 0x14005DC0C (-HeuristicallyDetermineViewingDistance@@YAIAEBUtagSIZE@@H0@Z.c)
 *     ?OemSpecifiedViewDist@@YAIQEAX@Z @ 0x14036B6A0 (-OemSpecifiedViewDist@@YAIQEAX@Z.c)
 */

char __fastcall DetermineViewDistance(
        void *const a1,
        const struct tagSIZE *a2,
        int a3,
        const struct tagSIZE *a4,
        unsigned int *a5)
{
  unsigned int v9; // eax

  if ( a3 )
  {
    v9 = OemSpecifiedViewDist(a1);
    *a5 = v9;
    if ( v9 )
      return 1;
  }
  *a5 = HeuristicallyDetermineViewingDistance(a2, a3, a4);
  return 0;
}
