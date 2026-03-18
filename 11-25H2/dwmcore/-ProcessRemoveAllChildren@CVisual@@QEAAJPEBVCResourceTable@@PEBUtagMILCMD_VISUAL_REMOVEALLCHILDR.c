/*
 * XREFs of ?ProcessRemoveAllChildren@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVEALLCHILDREN@@@Z @ 0x18010A19C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18010A1B4 (-RemoveAllChildren@CVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CVisual::ProcessRemoveAllChildren(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_REMOVEALLCHILDREN *a3)
{
  CVisual::RemoveAllChildren(this);
  return 0LL;
}
