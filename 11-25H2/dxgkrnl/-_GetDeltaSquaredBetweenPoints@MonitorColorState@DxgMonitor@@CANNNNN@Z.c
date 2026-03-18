/*
 * XREFs of ?_GetDeltaSquaredBetweenPoints@MonitorColorState@DxgMonitor@@CANNNNN@Z @ 0x140275588
 * Callers:
 *     ?GetColorPrimariesType@MonitorColorState@DxgMonitor@@SA?AW4ColorPrimaryType@12@AEBUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x140273EE8 (-GetColorPrimariesType@MonitorColorState@DxgMonitor@@SA-AW4ColorPrimaryType@12@AEBUDISPLAY_COLOR.c)
 * Callees:
 *     <none>
 */

double __fastcall DxgMonitor::MonitorColorState::_GetDeltaSquaredBetweenPoints(
        double a1,
        double a2,
        double a3,
        double a4)
{
  double v4; // xmm2_8
  double v5; // xmm3_8

  if ( a3 < a1 )
    v4 = a1 - a3;
  else
    v4 = a3 - a1;
  if ( a4 < a2 )
    v5 = a2 - a4;
  else
    v5 = a4 - a2;
  return v5 * v5 + v4 * v4;
}
