/*
 * XREFs of EngMulDiv @ 0x140053870
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x140010FF0 (NtUserGetDpiForMonitor.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1400114EC (-vMakeIso@DC@@QEAAXXZ.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x14001D4C4 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ?ConvertExplicitCoordinatesToAbsolute@MouseInputDataEx@CMouseProcessor@@QEAAXXZ @ 0x1400537C8 (-ConvertExplicitCoordinatesToAbsolute@MouseInputDataEx@CMouseProcessor@@QEAAXXZ.c)
 *     ?BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x140054054 (-BuildEnvironment@CPTPProcessor@@AEAAXQEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1400550CC (-ApplyCursorDisplayChangeOptions@CCursorClip@@AEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     InitLoadResources @ 0x14005548C (InitLoadResources.c)
 *     RIMTransformCoordinates @ 0x1400AD1C0 (RIMTransformCoordinates.c)
 *     ?rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInputSpace@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1400C7774 (-rimSetPointerDeviceOutputConfig@@YAXPEAURIMDEV@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAVCLockedInpu.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1400DA5F0 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 *     ?PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z @ 0x14017DCBC (-PopulatePTPProperties@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAX1@Z.c)
 *     ?ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z @ 0x140186F30 (-ApplyDeadZoneJumpIfNeeded@DeadzoneJumping@CCursorClip@@QEAA_NUtagPOINT@@PEBUtagRECT@@PEAU3@@Z.c)
 *     RIMUpdatePointerDeviceScalingInfo @ 0x1401E202C (RIMUpdatePointerDeviceScalingInfo.c)
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x14021158C (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 * Callees:
 *     <none>
 */

INT __stdcall EngMulDiv(INT a, INT b, INT c)
{
  INT v4; // eax
  unsigned int v5; // ecx
  INT v6; // r8d
  int v7; // r10d
  unsigned __int64 v8; // rax
  INT v9; // ecx
  INT result; // eax

  v4 = -a;
  if ( a >= 0 )
    v4 = a;
  v5 = ((a >> 31) & 0xFFFFFFFE) + 1;
  v6 = -b;
  if ( b > 0 )
    v6 = b;
  v7 = -v5;
  if ( b >= 0 )
    v7 = v5;
  if ( c )
  {
    if ( c < 0 )
    {
      v7 = -v7;
      c = -c;
    }
    v8 = (v4 * (__int64)v6 + c / 2) / c;
    v9 = 0x7FFFFFFF;
    if ( v8 <= 0x7FFFFFFF )
    {
      v9 = -(int)v8;
      if ( v7 > 0 )
        return v8;
      return v9;
    }
    if ( v7 > 0 )
      return v9;
    return 0x80000000;
  }
  else
  {
    result = 0x80000000;
    if ( v7 > 0 )
      return 0x7FFFFFFF;
  }
  return result;
}
