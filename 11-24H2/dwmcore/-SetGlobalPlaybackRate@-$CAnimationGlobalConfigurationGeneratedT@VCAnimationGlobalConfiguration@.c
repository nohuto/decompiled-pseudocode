/*
 * XREFs of ?SetGlobalPlaybackRate@?$CAnimationGlobalConfigurationGeneratedT@VCAnimationGlobalConfiguration@@VCResource@@@@QEAAJM@Z @ 0x1802789B0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnGlobalPlaybackRateChanged@CAnimationGlobalConfiguration@@QEAAXXZ @ 0x180293250 (-OnGlobalPlaybackRateChanged@CAnimationGlobalConfiguration@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationGlobalConfigurationGeneratedT<CAnimationGlobalConfiguration,CResource>::SetGlobalPlaybackRate(
        float *a1,
        float a2)
{
  if ( a2 != a1[18] )
  {
    a1[18] = a2;
    CAnimationGlobalConfiguration::OnGlobalPlaybackRateChanged((CAnimationGlobalConfiguration *)a1);
  }
  return 0LL;
}
