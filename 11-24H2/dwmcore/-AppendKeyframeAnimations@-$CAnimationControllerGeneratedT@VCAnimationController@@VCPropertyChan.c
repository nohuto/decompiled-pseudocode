/*
 * XREFs of ?AppendKeyframeAnimations@?$CAnimationControllerGeneratedT@VCAnimationController@@VCPropertyChangeResource@@@@QEAAJAEBV?$span@PEAVCKeyframeAnimation@@$0?0@gsl@@@Z @ 0x180226D6C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::AppendKeyframeAnimations(
        __int64 a1,
        __int64 a2)
{
  return CAnimationControllerGeneratedT<CAnimationController,CPropertyChangeResource>::SetOrAppendKeyframeAnimations(
           a1,
           a2,
           1);
}
