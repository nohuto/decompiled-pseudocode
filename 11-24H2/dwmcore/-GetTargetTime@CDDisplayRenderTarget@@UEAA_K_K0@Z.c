/*
 * XREFs of ?GetTargetTime@CDDisplayRenderTarget@@UEAA_K_K0@Z @ 0x1801033B0
 * Callers:
 *     ?SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180104410 (-SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV-$vector_facade@VCSortedMonitorTarget@CRender.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CDDisplayRenderTarget::GetTargetTime(
        CDDisplayRenderTarget *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  if ( *((_DWORD *)this + 8256) == 1 )
    return 0LL;
  else
    return CTargetStats::GetTargetTime((CDDisplayRenderTarget *)((char *)this + 32984), a2, a3);
}
