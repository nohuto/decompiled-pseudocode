/*
 * XREFs of ?ProcessSetStartPoint@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT@@@Z @ 0x180227F74
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinearGradientBrush::ProcessSetStartPoint(
        CLinearGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT *a3)
{
  return CResource::SetPropertyImpl(
           this,
           (const struct AnimationHelper::AnimatedProperty *)&CLinearGradientBrush::sc_StartPoint,
           (char *)a3 + 8);
}
