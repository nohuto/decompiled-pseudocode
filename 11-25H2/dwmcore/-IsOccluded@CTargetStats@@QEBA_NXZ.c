/*
 * XREFs of ?IsOccluded@CTargetStats@@QEBA_NXZ @ 0x1801405F4
 * Callers:
 *     ?SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180140050 (-SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV-$vector_facade@VCSortedMonitorTarget@CRender.c)
 * Callees:
 *     <none>
 */

bool __fastcall CTargetStats::IsOccluded(CTargetStats *this)
{
  return *((_DWORD *)this + 10) == 1;
}
