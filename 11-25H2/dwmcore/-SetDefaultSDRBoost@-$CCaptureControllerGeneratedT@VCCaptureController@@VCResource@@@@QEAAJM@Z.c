/*
 * XREFs of ?SetDefaultSDRBoost@?$CCaptureControllerGeneratedT@VCCaptureController@@VCResource@@@@QEAAJM@Z @ 0x180283488
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnDefaultSDRBoostChanged@CCaptureController@@IEAAXXZ @ 0x18029F0B4 (-OnDefaultSDRBoostChanged@CCaptureController@@IEAAXXZ.c)
 */

__int64 __fastcall CCaptureControllerGeneratedT<CCaptureController,CResource>::SetDefaultSDRBoost(float *a1, float a2)
{
  if ( a2 != a1[22] )
  {
    a1[22] = a2;
    CCaptureController::OnDefaultSDRBoostChanged((CCaptureController *)a1);
  }
  return 0LL;
}
