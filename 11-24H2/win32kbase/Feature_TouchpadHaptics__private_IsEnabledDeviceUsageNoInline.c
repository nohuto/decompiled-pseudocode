/*
 * XREFs of Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x1401B666C
 * Callers:
 *     RIMDoOnPnpNotification @ 0x1401127D0 (RIMDoOnPnpNotification.c)
 *     xxxSystemParametersInfo @ 0x140173780 (xxxSystemParametersInfo.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x14018C758 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 *     WritePointerDeviceSettings @ 0x1401B6B80 (WritePointerDeviceSettings.c)
 *     ?ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetailFlags@@@Z @ 0x14020A9D4 (-ApplySystemClips@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@PEAW4ClipResultDetail.c)
 *     ?BoundPoint@CCursorClip@@QEAA?AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_MouseUpdatePositionReason@@PEAU3@@Z @ 0x14020AA90 (-BoundPoint@CCursorClip@@QEAA-AUClipResult@@UtagPOINT@@W4BoundPointOptions@@W4InputTracing_Mouse.c)
 *     ?BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z @ 0x14020AD1C (-BoundPointToRegions@CCursorClip@@AEAA_NUtagPOINT@@W4BoundPointOptions@@PEAU2@@Z.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x14020C158 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x14020D128 (-PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z.c)
 *     ?UpdateLastInputData@tagTHREADINFO@@QEAAXPEBUtagQMSG@@@Z @ 0x1402101A0 (-UpdateLastInputData@tagTHREADINFO@@QEAAXPEBUtagQMSG@@@Z.c)
 * Callees:
 *     Feature_TouchpadHaptics__private_IsEnabledFallback @ 0x1401B66A4 (Feature_TouchpadHaptics__private_IsEnabledFallback.c)
 */

__int64 Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_TouchpadHaptics__private_featureState & 0x10) != 0 )
    return Feature_TouchpadHaptics__private_featureState & 1;
  else
    return Feature_TouchpadHaptics__private_IsEnabledFallback(
             (unsigned int)Feature_TouchpadHaptics__private_featureState,
             3LL);
}
