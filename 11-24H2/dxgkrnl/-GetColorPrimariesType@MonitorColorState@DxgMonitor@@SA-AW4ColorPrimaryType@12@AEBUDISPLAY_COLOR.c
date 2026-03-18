/*
 * XREFs of ?GetColorPrimariesType@MonitorColorState@DxgMonitor@@SA?AW4ColorPrimaryType@12@AEBUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x14027B0F8
 * Callers:
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x14027CB30 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 * Callees:
 *     ?_GetColorGamutTriangleArea@MonitorColorState@DxgMonitor@@CANNNNNNN@Z @ 0x14027C634 (-_GetColorGamutTriangleArea@MonitorColorState@DxgMonitor@@CANNNNNNN@Z.c)
 *     ?_GetDeltaSquaredBetweenPoints@MonitorColorState@DxgMonitor@@CANNNNN@Z @ 0x14027C6A4 (-_GetDeltaSquaredBetweenPoints@MonitorColorState@DxgMonitor@@CANNNNN@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::GetColorPrimariesType(int *a1)
{
  int v1; // eax
  int v2; // r8d
  int v3; // r9d
  int v4; // r10d
  int v5; // r11d
  int v6; // ecx
  double v7; // xmm8_8
  double v8; // xmm9_8
  double v9; // xmm6_8
  double v10; // xmm7_8
  double v11; // xmm4_8
  double v12; // xmm5_8
  double v13; // xmm4_8
  double v14; // xmm5_8
  int v15; // edx
  double ColorGamutTriangleArea; // xmm0_8

  v1 = *a1;
  if ( !*a1 )
    return 0LL;
  v2 = a1[1];
  if ( !v2 )
    return 0LL;
  v3 = a1[2];
  if ( !v3 )
    return 0LL;
  v4 = a1[3];
  if ( !v4 )
    return 0LL;
  v5 = a1[4];
  if ( !v5 )
    return 0LL;
  v6 = a1[5];
  if ( !v6 )
    return 0LL;
  v7 = (float)((float)v1 * 0.00000095367432);
  v8 = (float)((float)v2 * 0.00000095367432);
  v9 = (float)((float)v5 * 0.00000095367432);
  v10 = (float)((float)v6 * 0.00000095367432);
  if ( v8 + v7 > 1.0 )
    return 0LL;
  if ( (float)((float)v4 * 0.00000095367432) + (float)((float)v3 * 0.00000095367432) > 1.0 )
    return 0LL;
  if ( v10 + v9 > 1.0 )
    return 0LL;
  if ( DxgMonitor::MonitorColorState::_GetDeltaSquaredBetweenPoints(v7, v8, 0.6399999856948853, 0.3300000131130219) > 0.0081 )
    return 0LL;
  if ( DxgMonitor::MonitorColorState::_GetDeltaSquaredBetweenPoints(v11, v12, 0.239999994635582, 0.6499999761581421) > 0.030625 )
    return 0LL;
  if ( DxgMonitor::MonitorColorState::_GetDeltaSquaredBetweenPoints(v9, v10, 0.1500000059604645, 0.07500000298023224) > 0.0049 )
    return 0LL;
  ColorGamutTriangleArea = DxgMonitor::MonitorColorState::_GetColorGamutTriangleArea(v7, v8, v13, v14, v9, v10);
  if ( ColorGamutTriangleArea < 0.056025 )
    return 0LL;
  LOBYTE(v15) = ColorGamutTriangleArea >= 0.1064475;
  return (unsigned int)(v15 + 1);
}
