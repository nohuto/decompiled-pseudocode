/*
 * XREFs of ?SetProgress@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJM@Z @ 0x1801D37B0
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?OnProgressChanged@CAnimationController@@QEAAXXZ @ 0x18007D1C0 (-OnProgressChanged@CAnimationController@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetProgress(
        float *a1,
        float a2)
{
  if ( a2 != a1[20] )
  {
    a1[20] = fminf(1.0, fmaxf(a2, 0.0));
    CAnimationController::OnProgressChanged((CAnimationController *)a1);
  }
  return 0LL;
}
