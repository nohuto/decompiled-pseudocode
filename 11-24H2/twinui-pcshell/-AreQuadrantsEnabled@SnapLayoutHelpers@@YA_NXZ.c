/*
 * XREFs of ?AreQuadrantsEnabled@SnapLayoutHelpers@@YA_NXZ @ 0x18008B63C
 * Callers:
 *     ?IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z @ 0x18008B328 (-IsValidSnapRegion@SnapLayoutHelpers@@YA_NW4SnapRegion@@@Z.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x18008B45C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_18008B45C.c)
 *     ?DetermineSnapRegionFromPoint@CustomDragout@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCPoint@Geometry@@AEBUCRect@5@HHHHW4SnapRegionFlags@2@@Z @ 0x1805AA750 (-DetermineSnapRegionFromPoint@CustomDragout@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCPoint@Geom.c)
 *     ?DetermineNewSnapState@HotkeyHandler@@AEBA?AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAUIImmersiveMonitor@@PEAUISnappedWindow@@@Z @ 0x1805AD874 (-DetermineNewSnapState@HotkeyHandler@@AEBA-AUSNAP_STATE@1@W4SnapAction@1@W4HotkeyCommand@1@IPEAU.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z @ 0x18008A064 (-QueryTabletMode@TabletModeHelpers@@YAJPEAW4_TABLETMODESTATE@@@Z.c)
 */

bool __fastcall SnapLayoutHelpers::AreQuadrantsEnabled(SnapLayoutHelpers *this, enum _TABLETMODESTATE *a2)
{
  int TabletMode; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( byte_1808C9894 )
    return 0;
  v5 = 0;
  TabletMode = TabletModeHelpers::QueryTabletMode((TabletModeHelpers *)&v5, a2);
  if ( TabletMode >= 0 )
    return v5 != 1;
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x81,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
    (const char *)(unsigned int)TabletMode);
  return 1;
}
