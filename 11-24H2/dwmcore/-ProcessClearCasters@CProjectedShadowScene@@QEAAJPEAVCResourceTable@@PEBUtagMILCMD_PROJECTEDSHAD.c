/*
 * XREFs of ?ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS@@@Z @ 0x1802469D8
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x1802469F0 (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 */

__int64 __fastcall CProjectedShadowScene::ProcessClearCasters(
        CProjectedShadowScene *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS *a3)
{
  CProjectedShadowScene::ClearCasters(this);
  return 0LL;
}
