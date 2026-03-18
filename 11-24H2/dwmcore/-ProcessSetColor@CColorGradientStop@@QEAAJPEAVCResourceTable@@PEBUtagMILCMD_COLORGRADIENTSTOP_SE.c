/*
 * XREFs of ?ProcessSetColor@CColorGradientStop@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORGRADIENTSTOP_SETCOLOR@@@Z @ 0x180212FEC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorGradientStop::ProcessSetColor(
        CColorGradientStop *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COLORGRADIENTSTOP_SETCOLOR *a3)
{
  return CResource::SetPropertyImpl(
           this,
           (const struct AnimationHelper::AnimatedProperty *)&CColorGradientStop::sc_Color,
           (char *)a3 + 8);
}
