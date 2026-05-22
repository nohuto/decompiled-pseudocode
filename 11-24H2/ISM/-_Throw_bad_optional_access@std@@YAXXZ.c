/*
 * XREFs of ?_Throw_bad_optional_access@std@@YAXXZ @ 0x18009B78C
 * Callers:
 *     ?PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ @ 0x180014C08 (-PopulateInputSiteFromViewId@DWMFocusedInputTarget@@AEAAXXZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180019290 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?HitTestRequestWithRetry@HitTestHelper@@SA?AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputProxy@@PEAVInputSiteManager@@PEAUIInputSiteHierarchyManager@@@Z @ 0x180019E50 (-HitTestRequestWithRetry@HitTestHelper@@SA-AUHitTestResult@@AEBUHitTestRequest@1@PEAUIDWMInputPr.c)
 *     ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001B120 (-GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA-AV-$ComPtr@VInputSite@@@WRL@M.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001B7B0 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x18001B830 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180031D30 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??$AttachObject@VBamoResizeControllerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x180036E5C (--$AttachObject@VBamoResizeControllerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PE.c)
 *     ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180052188 (-GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ.c)
 *     ?GetHwndAsInputSiteId@LegacyInputSinkData@@QEBA_KXZ @ 0x1800521F0 (-GetHwndAsInputSiteId@LegacyInputSinkData@@QEBA_KXZ.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180052450 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ??$AttachObject@VBamoInputDelegationInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoInputDelegationInputObjectProxy@@@Z @ 0x180056AB8 (--$AttachObject@VBamoInputDelegationInputObjectProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy.c)
 *     ??$AttachObject@VBamoWindowsMessageDeliveryProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoWindowsMessageDeliveryProxy@@@Z @ 0x180056E4C (--$AttachObject@VBamoWindowsMessageDeliveryProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PE.c)
 *     ?GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ @ 0x18005BAD0 (-GetViewInstanceId@LegacyInputSinkData@@QEBAAEBIXZ.c)
 *     ??$AttachObject@VBamoEdgyNotificationSourceClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoEdgyNotificationSourceClientProxy@@@Z @ 0x18005BFC4 (--$AttachObject@VBamoEdgyNotificationSourceClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementPro.c)
 *     ??$AttachObject@VBamoAnimationTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoAnimationTargetClientProxy@@@Z @ 0x18005C908 (--$AttachObject@VBamoAnimationTargetClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEA.c)
 *     ??$AttachObject@VBamoDragManagerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBamoDragManagerClientProxy@@@Z @ 0x18005FDBC (--$AttachObject@VBamoDragManagerClientProxy@@@InputSite@@QEAAXPEAVInputSiteElementProxy@@PEAVBam.c)
 *     ?value@?$optional@_K@std@@QEGAAAEA_KXZ @ 0x180063F10 (-value@-$optional@_K@std@@QEGAAAEA_KXZ.c)
 *     ?ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z @ 0x180072744 (-ClearInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@I@Z.c)
 *     ?value@?$optional@UtagINPUT_TRANSFORM@@@std@@QEGAAAEAUtagINPUT_TRANSFORM@@XZ @ 0x18009C0E8 (-value@-$optional@UtagINPUT_TRANSFORM@@@std@@QEGAAAEAUtagINPUT_TRANSFORM@@XZ.c)
 *     ?value@?$optional@UHandlerContext@ShellGesturesProcessor@@@std@@QEGAAAEAUHandlerContext@ShellGesturesProcessor@@XZ @ 0x18009C108 (-value@-$optional@UHandlerContext@ShellGesturesProcessor@@@std@@QEGAAAEAUHandlerContext@ShellGes.c)
 *     ?value@?$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ @ 0x1800B5ACC (-value@-$optional@UtagPROPVARIANT@@@std@@QEGAAAEAUtagPROPVARIANT@@XZ.c)
 *     ?GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA?AUtagPOINT@@U2@PEAVInputInjectionClientProxy@@@Z @ 0x1800E1F08 (-GetWorkspaceRelativeCoordinates@InjectionRawInputProvider@@AEAA-AUtagPOINT@@U2@PEAVInputInjecti.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800F5540 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ @ 0x1800F5780 (-GetInputSinkHandle@DWMInputTarget@@AEBAPEAXXZ.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800F58F0 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 *     ?value@?$optional@K@std@@QEGAAAEAKXZ @ 0x18010B99C (-value@-$optional@K@std@@QEGAAAEAKXZ.c)
 *     ?ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ @ 0x180134E04 (-ConfigureVirtualTouchpad@VirtualTouchpadControllerProxy@@AEAAXXZ.c)
 *     ?OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180135C30 (-OnIsActiveChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x180142468 (-GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z.c)
 *     ?QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ @ 0x180199EC8 (-QueryHapticsSupport@CompliantHapticInterface@@AEAAJXZ.c)
 *     ?TriggerHapticsForOrdinal@CompliantHapticInterface@@QEBAJW4HapticsType@@GAEBUSecondaryValues@@@Z @ 0x18019ABD0 (-TriggerHapticsForOrdinal@CompliantHapticInterface@@QEBAJW4HapticsType@@GAEBUSecondaryValues@@@Z.c)
 *     ?GetTransformFromRootToSite@PointerManipulationHelper@@SA?AUtagINPUT_TRANSFORM@@PEAVInputSite@@@Z @ 0x1801A0A54 (-GetTransformFromRootToSite@PointerManipulationHelper@@SA-AUtagINPUT_TRANSFORM@@PEAVInputSite@@@.c)
 *     ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x1801A7238 (-GetInputForwardInputSite@InputForwardProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4I.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_optional_access(void)
{
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v1; // [rsp+28h] [rbp-20h]

  pExceptionObject = &std::bad_optional_access::`vftable';
  v1 = 0LL;
  throw (std::bad_optional_access *)&pExceptionObject;
}
