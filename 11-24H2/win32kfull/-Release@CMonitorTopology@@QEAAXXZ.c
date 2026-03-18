/*
 * XREFs of ?Release@CMonitorTopology@@QEAAXXZ @ 0x1400688A4
 * Callers:
 *     ?ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z @ 0x140068228 (-ShouldDeferRecalc@CRecalcState@@QEBA_NPEBUtagWND@@W4ShouldDeferRecalcOption@1@@Z.c)
 *     ??1CCurrentMonitorTopologyPtr@@QEAA@XZ @ 0x140069164 (--1CCurrentMonitorTopologyPtr@@QEAA@XZ.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x14008EC50 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z @ 0x14014D534 (-NeedsMigration@CRecalcState@@AEBA_NPEBUtagWND@@@Z.c)
 *     ?OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_SET_DISPLAY_CONFIG_PARAMS_EX@@@Z @ 0x1401CAEC8 (-OnMonitorRectsChanged@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEAU_DXGK_S.c)
 *     ?OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z @ 0x1401CB0A8 (-OnWorkAreaChanged@DesktopRecalc@@YAXPEAVCMonitorTopology@@@Z.c)
 *     ?StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z @ 0x1401CB20C (-StartRecalc@DesktopRecalc@@YAXPEAUtagWINDOWSTATION@@PEAVCMonitorTopology@@PEBU_GUID@@@Z.c)
 *     ??1CRecalcState@@UEAA@XZ @ 0x1401E4300 (--1CRecalcState@@UEAA@XZ.c)
 *     EditionDriverUninitialize @ 0x1401F2C60 (EditionDriverUninitialize.c)
 *     ?SessionCleanup@CTopologyManager@@SAXXZ @ 0x1401F2DDC (-SessionCleanup@CTopologyManager@@SAXXZ.c)
 *     ?Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z @ 0x1401F2F30 (-Delete@CRapidHpdInfo@@CAXW4InputTracing_DesktopRecalcRapidHpdResult@@@Z.c)
 *     ?ClearAnchorPosition@CRecalcProp@@AEAAXXZ @ 0x1401FFFC4 (-ClearAnchorPosition@CRecalcProp@@AEAAXXZ.c)
 *     ?UpdateCurrent@CTopologyManager@@SA_NXZ @ 0x1402175E8 (-UpdateCurrent@CTopologyManager@@SA_NXZ.c)
 *     ?xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z @ 0x14021F87C (-xxxMigrateCheckpoint@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUtagMONITOR@@@Z.c)
 *     ?DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x14023AFEC (-DestroyPendingDesktops@@YAXPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ?_lambda_invoker_cdecl_@_lambda_27f747716261ed0f75ba1156a6124405_@@CA@PEAX@Z @ 0x140268790 (-_lambda_invoker_cdecl_@_lambda_27f747716261ed0f75ba1156a6124405_@@CA@PEAX@Z.c)
 *     ??1CRecalcProp@@AEAA@XZ @ 0x1402C1F0C (--1CRecalcProp@@AEAA@XZ.c)
 *     ?ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ @ 0x1402C2714 (-ClearLastInterceptedTopology@CRecalcProp@@QEAAXXZ.c)
 *     ?SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z @ 0x1402C3EC4 (-SetLastInterceptedTopology@DesktopRecalc@@YAXPEAUtagWND@@PEAVCMonitorTopology@@@Z.c)
 *     ?ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z @ 0x1402C91A0 (-ClearPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@@Z.c)
 *     ?Delete@CInterceptWindowProp@@UEAAXXZ @ 0x1402C94C0 (-Delete@CInterceptWindowProp@@UEAAXXZ.c)
 *     ?SetPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@PEBUWindowAction@AdvancedWindowPos@@@Z @ 0x1402CB318 (-SetPendingDisplayChangeInfo@CInterceptWindowProp@@SAXPEAUtagWND@@PEBUWindowAction@AdvancedWindo.c)
 * Callees:
 *     <none>
 */

void __fastcall CMonitorTopology::Release(CMonitorTopology *this)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF) == 1 )
    Win32FreePool(this);
}
