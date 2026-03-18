/*
 * XREFs of MNGetpItemFromIndex @ 0x1C00E40B0
 * Callers:
 *     xxxDrawMenuBarUnderlines @ 0x1C00A3B00 (xxxDrawMenuBarUnderlines.c)
 *     xxxSetMenuInfo @ 0x1C00E4338 (xxxSetMenuInfo.c)
 *     ?MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z @ 0x1C0214E40 (-MNItemHitTest@@YAIPEAUtagMENU@@PEAUtagWND@@UtagPOINT@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215824 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     MNGetpItem @ 0x1C021603C (MNGetpItem.c)
 *     xxxMNChar @ 0x1C0216848 (xxxMNChar.c)
 *     xxxMNOpenHierarchy @ 0x1C0218340 (xxxMNOpenHierarchy.c)
 *     xxxMNSetTop @ 0x1C0219924 (xxxMNSetTop.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1C0224F44 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0230C20 (xxxMNUpdateShownMenu.c)
 *     xxxMNSetGapState @ 0x1C0231154 (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C023134C (xxxMNUpdateDraggingInfo.c)
 *     MNEraseBackground @ 0x1C0234054 (MNEraseBackground.c)
 *     _ServerFixupMenuDC @ 0x1C023424C (_ServerFixupMenuDC.c)
 *     xxxMNDrawFullNC @ 0x1C0234A9C (xxxMNDrawFullNC.c)
 *     xxxMNInvertItem @ 0x1C0234DB0 (xxxMNInvertItem.c)
 *     xxxMenuDraw @ 0x1C0235944 (xxxMenuDraw.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0237A2C (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxMNCompute @ 0x1C0237FB0 (xxxMNCompute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNGetpItemFromIndex(__int64 a1, unsigned int a2)
{
  if ( a2 == -1 || a2 >= *(_DWORD *)(*(_QWORD *)(a1 + 40) + 44LL) )
    return 0LL;
  else
    return *(_QWORD *)(a1 + 88) + 96LL * (int)a2;
}
