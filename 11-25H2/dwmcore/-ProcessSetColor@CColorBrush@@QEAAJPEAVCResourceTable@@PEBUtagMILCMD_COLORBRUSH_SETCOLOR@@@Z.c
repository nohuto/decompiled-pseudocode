/*
 * XREFs of ?ProcessSetColor@CColorBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORBRUSH_SETCOLOR@@@Z @ 0x180213F1C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorBrush::ProcessSetColor(
        CColorBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COLORBRUSH_SETCOLOR *a3)
{
  return CResource::SetPropertyImpl(
           this,
           (const struct AnimationHelper::AnimatedProperty *)&CColorBrush::sc_Color,
           (char *)a3 + 8);
}
