/*
 * XREFs of ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18013C248
 * Callers:
 *     ?UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ @ 0x1801C38AC (-UpdateMonitorInfo@MonitorInformation@KeyboardHosting@@QEAAXXZ.c)
 *     ?GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z @ 0x180255238 (-GetForegroundAppRect@ViewRectHelper@KeyboardHosting@@SAJAEAURect@Foundation@Windows@@@Z.c)
 *     ?HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180255650 (-HandleEditControlPositionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Win.c)
 *     ?HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Windows@@PEAW4ShellRequestType@Text@Shell@Internal@5@@Z @ 0x180255820 (-HandleEditControlSelectionChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJURect@Foundation@Wi.c)
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180256970 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 *     ?UpdateMonitorInfoInternal@MonitorInformation@KeyboardHosting@@AEAAXXZ @ 0x18047A3B8 (-UpdateMonitorInfoInternal@MonitorInformation@KeyboardHosting@@AEAAXXZ.c)
 *     GetWorkAreaRect @ 0x1804886C8 (GetWorkAreaRect.c)
 *     GetWorkAreaRect_0 @ 0x1804887D8 (GetWorkAreaRect_0.c)
 * Callees:
 *     <none>
 */

float *__fastcall KeyboardHosting::ScalingHelper::PhysicalRectToRelative(float *a1, float *a2, int a3)
{
  float v3; // xmm0_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm1_4
  float v7; // xmm0_4

  v3 = *a2;
  if ( a3 )
  {
    v4 = (float)a3;
    v3 = (float)(v3 * 100.0) / (float)a3;
  }
  else
  {
    v4 = 0.0;
  }
  *a1 = v3;
  v5 = a2[1];
  if ( a3 )
    v5 = (float)(v5 * 100.0) / v4;
  v6 = a2[2];
  a1[1] = v5;
  if ( a3 )
    v6 = (float)(v6 * 100.0) / v4;
  v7 = a2[3];
  a1[2] = v6;
  if ( a3 )
    v7 = (float)(v7 * 100.0) / v4;
  a1[3] = v7;
  return a1;
}
