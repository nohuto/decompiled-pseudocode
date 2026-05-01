/*
 * XREFs of ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x18008B368
 * Callers:
 *     ?DetermineSnapRegionForView@SnapLayoutHelpers@@YA?AW4SnapRegion@@PEAUIApplicationView@@@Z @ 0x18008B758 (-DetermineSnapRegionForView@SnapLayoutHelpers@@YA-AW4SnapRegion@@PEAUIApplicationView@@@Z.c)
 *     ?_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x180220B6C (-_SendAppSnapUnsnapEvent@CShellSnapComponent@@AEAAJPEAUHWND__@@W4ARRANGEMENT_COMPLETED_RESULT@@@.c)
 *     ?CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z @ 0x18059DE30 (-CreateSnapId@CShellSnapComponent@@UEAAJURect@Foundation@Windows@@PEAH@Z.c)
 *     ?TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA?AU?$pair@PEAUHWND__@@_N@std@@PEAUHWND__@@AEBUCRect@Geometry@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x1805A7828 (-TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA-AU-$pair@PEAUHWND__@@_N@std@@PE.c)
 *     ?_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@@AEBV?$vector@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@std@@@std@@PEAUIAppLayout@@W4SNAP_ASSIST_VIEW_FLAGS@@HPEA_N@Z @ 0x1805A7D70 (-_SnapAssistTriggered@CSnapAssistControllerBase@@IEAAJAEBUCRect@Geometry@@PEAUIImmersiveMonitor@.c)
 *     ?GetWindowStateIdForAction@HotkeyHandler@@AEAAIW4SnapAction@1@UtagRECT@@PEAUIImmersiveMonitor@@_N@Z @ 0x1805ADF54 (-GetWindowStateIdForAction@HotkeyHandler@@AEAAIW4SnapAction@1@UtagRECT@@PEAUIImmersiveMonitor@@_.c)
 *     SnapAccessibilityHelpers::HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1 @ 0x1805BDF10 (SnapAccessibilityHelpers--HandleWinShiftHotKeyNarratorAnnouncementsAsync$_ResumeCoro$1.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x18008B40C (-ComputeSnapErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@0H@Z @ 0x18008B45C (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCR_ea_18008B45C.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(__int64 a1, SnapRectHelpers *a2)
{
  unsigned int v4; // ebx
  __int64 (__fastcall *v5)(SnapRectHelpers *, int *); // rax
  int v6; // eax
  struct IImmersiveMonitor *v7; // rdx
  unsigned int v8; // eax
  int v10[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = 0;
  v5 = *(__int64 (__fastcall **)(SnapRectHelpers *, int *))(*(_QWORD *)a2 + 88LL);
  *(_OWORD *)v10 = 0LL;
  v6 = v5(a2, v10);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x186,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v6);
  }
  else
  {
    v8 = SnapRectHelpers::ComputeSnapErrorThresholdForMonitor(a2, v7);
    return (unsigned int)SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea(a1, v10, v8);
  }
  return v4;
}
