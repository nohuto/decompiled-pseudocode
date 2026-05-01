/*
 * XREFs of ?get@?$static_lazy@VCSnapComponentTelemetry@@@details@wil@@QEAAPEAVCSnapComponentTelemetry@@P6AXXZ@Z @ 0x1800CCC68
 * Callers:
 *     ?_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x18002C0C8 (-_EnumSnappedWindows@CSnappedWindowModel@@AEAAJW4SnappedWindowOcclusionModel@@AEBV-$deque@UtagRE.c)
 *     ??$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentTelemetry@@SAXAEAUtagPOINT@@AEBW4SnapRegion@@AEAK$$QEAPEAUIImmersiveMonitor@@@Z @ 0x1800CCAE8 (--$SnapRegionDetected@AEAUtagPOINT@@AEBW4SnapRegion@@AEAKPEAUIImmersiveMonitor@@@CSnapComponentT.c)
 *     ?SendTelemetry@SnapInteraction@@YAXAEBU?$com_ptr@UIApplicationView@@@winrt@@AEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z @ 0x1800CCB54 (-SendTelemetry@SnapInteraction@@YAXAEBU-$com_ptr@UIApplicationView@@@winrt@@AEBV-$duration@_JU-$.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x1800CCC28 (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z @ 0x1800CCD20 (-SnapWindow@CShellSnapComponent@@UEAAJPEAUHWND__@@PEBUtagRECT@@K@Z.c)
 *     ?_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x180220B6C (-_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@.c)
 *     ?Show@GuidedSnapAssistControl@@QEAAXV?$shared_ptr@VGuidedSnapAssistData@@@std@@V?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18028D318 (-Show@GuidedSnapAssistControl@@QEAAXV-$shared_ptr@VGuidedSnapAssistData@@@std@@V-$com_ptr_t@UIAp.c)
 *     ??$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemetry@@SAX$$QEAW4SnapRegion@@AEAUCRect@Geometry@@1$$QEAPEBGAEAPEAUHWND__@@@Z @ 0x18059AA1C (--$AppSnapped@W4SnapRegion@@AEAUCRect@Geometry@@AEAU23@PEBGAEAPEAUHWND__@@@CSnapComponentTelemet.c)
 *     ?SnapWindowWithGuidedSnapAssist@CShellSnapComponent@@UEAAJ_KURect@Foundation@Windows@@IPEAU234@@Z @ 0x1805A0DD0 (-SnapWindowWithGuidedSnapAssist@CShellSnapComponent@@UEAAJ_KURect@Foundation@Windows@@IPEAU234@@.c)
 *     ?SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x1805A6B90 (-SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArr.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x1805A7D70 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 *     ?SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4SnapRegion@@PEAUISnappedWindow@@@Z @ 0x1805AF6C0 (-SendSnapFillTypeEvent@CSnapComponentTelemetry@@SAJAEBUSMART_FILL_OUTPUT@SnapLayoutHelpers@@W4Sn.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x180224BF4 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1802D1A98 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<CSnapComponentTelemetry>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( __std_init_once_begin_initialize(&`CSnapComponentTelemetry::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_1808CC4D0 = 0LL;
    dword_1808CC4DC = 0;
    v8 = &qword_1808CC4C8;
    qword_1808CC4C8 = (__int64)&IamTraceLogging::`vftable';
    v4 = &`CSnapComponentTelemetry::Instance'::`2'::wrapper;
    byte_1808CC4D8 = 0;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer(&v4);
  }
  return v8;
}
