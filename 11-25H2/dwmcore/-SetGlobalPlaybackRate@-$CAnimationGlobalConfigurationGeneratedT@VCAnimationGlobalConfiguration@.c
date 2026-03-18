/*
 * XREFs of ?SetGlobalPlaybackRate@?$CAnimationGlobalConfigurationGeneratedT@VCAnimationGlobalConfiguration@@VCResource@@@@QEAAJM@Z @ 0x1802835D0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnGlobalPlaybackRateChanged@CAnimationGlobalConfiguration@@QEAAXXZ @ 0x18029EBA0 (-OnGlobalPlaybackRateChanged@CAnimationGlobalConfiguration@@QEAAXXZ.c)
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
