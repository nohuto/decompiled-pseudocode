/*
 * XREFs of ?TriggerExternalMonitorSdrWhiteLevelChangedWnf@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x1402754AC
 * Callers:
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140183F40 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorColorState::TriggerExternalMonitorSdrWhiteLevelChangedWnf(
        DxgMonitor::MonitorColorState *this,
        int a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  int v5; // [rsp+58h] [rbp+10h] BYREF

  v5 = a2;
  updated = ZwUpdateWnfStateData(&WNF_DX_SDR_WHITE_LEVEL_CHANGED, 0LL, 0LL, 0LL, &v5, 0, 0);
  v3 = updated;
  if ( updated < 0 )
  {
    WdLogSingleEntry1(2LL, updated);
    WdLogGlobalForLineNumber = 2120;
  }
  return v3;
}
