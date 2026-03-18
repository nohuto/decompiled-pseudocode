/*
 * XREFs of ?ProcessSetMinOpacity@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETMINOPACITY@@@Z @ 0x1802ABE9C
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x1802ABFDC (-SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessSetMinOpacity(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_SETMINOPACITY *a3)
{
  CProjectedShadowScene::SetMinOpacity(this, *((float *)a3 + 2));
  return 0LL;
}
