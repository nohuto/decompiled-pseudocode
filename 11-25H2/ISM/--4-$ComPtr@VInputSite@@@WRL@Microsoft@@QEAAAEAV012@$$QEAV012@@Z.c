/*
 * XREFs of ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180022740
 * Callers:
 *     ?UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z @ 0x180013140 (-UpdateFocusedInputTarget@DWMInputRouter@@MEAAJPEAUIInputTarget@@@Z.c)
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x180014640 (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x18001B260 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001C760 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ??0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KK_K@Z @ 0x180022604 (--0DWMFocusedInputTarget@@IEAA@PEAUIInputTarget@@KK_K@Z.c)
 *     ??4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z @ 0x18002CA90 (--4TargetingInfo@KeyboardProcessor@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?GetInputSiteFromInputDest@InputDestTarget@@AEBA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagINPUTDEST@@@Z @ 0x180085570 (-GetInputSiteFromInputDest@InputDestTarget@@AEBA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@AEBUtagI.c)
 *     ?HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z @ 0x1800AEE1C (-HandleDelegationChangeNotification@ForegroundManager@@AEAAXII@Z.c)
 *     ??4GestureClient@GestureHandler@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801444C8 (--4GestureClient@GestureHandler@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z @ 0x1801978A0 (-HitTest@DWMInputRouter@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUIInputTarget@@PEAPEAU4@@Z.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801A4A14 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall Microsoft::WRL::ComPtr<InputSite>::operator=(__int64 *a1, char *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char v6; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  if ( &v6 != a2 )
  {
    v3 = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  v4 = *a1;
  *a1 = v3;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return a1;
}
