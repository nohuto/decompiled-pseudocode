/*
 * XREFs of ?GetTargetTime@CDDisplayRenderTarget@@UEAA_K_K0@Z @ 0x180210C70
 * Callers:
 *     ?SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV?$vector_facade@VCSortedMonitorTarget@CRenderTargetManager@@V?$buffer_impl@VCSortedMonitorTarget@CRenderTargetManager@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180140050 (-SortMonitorTargets@CRenderTargetManager@@AEAAXPEAV-$vector_facade@VCSortedMonitorTarget@CRender.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CDDisplayRenderTarget::GetTargetTime(
        CDDisplayRenderTarget *this,
        unsigned __int64 a2,
        LARGE_INTEGER a3)
{
  if ( *((_DWORD *)this + 8352) == 1 )
    return 0LL;
  else
    return CTargetStats::GetTargetTime((CDDisplayRenderTarget *)((char *)this + 33368), a2, a3);
}
