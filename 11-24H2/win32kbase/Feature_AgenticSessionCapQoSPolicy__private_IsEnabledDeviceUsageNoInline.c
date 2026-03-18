/*
 * XREFs of Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1401A5824
 * Callers:
 *     ?DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ @ 0x1401620B8 (-DwsUnlinkAllWindows@tagPROCESSINFO@@QEAAXXZ.c)
 *     ??1CQoSReport@@QEAA@XZ @ 0x1401A4848 (--1CQoSReport@@QEAA@XZ.c)
 *     ?GetPsProcessWindowState@tagPROCESSINFO@@QEBA?AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolicy@1@@Z @ 0x1401A521C (-GetPsProcessWindowState@tagPROCESSINFO@@QEBA-AW4_PS_PROCESS_WINDOW_STATE@@W4GetWindowStatePolic.c)
 *     ?Initialize@QualityOfService@@YAJXZ @ 0x1401A5348 (-Initialize@QualityOfService@@YAJXZ.c)
 *     ?ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z @ 0x1401A56D0 (-ReportProcess@CQoSReport@@QEAAXPEAUtagPROCESSINFO@@@Z.c)
 *     ?LogProcessInformation@ForegroundBoost@@YAXXZ @ 0x1401AC43C (-LogProcessInformation@ForegroundBoost@@YAXXZ.c)
 * Callees:
 *     Feature_AgenticSessionCapQoSPolicy__private_IsEnabledFallback @ 0x1401A585C (Feature_AgenticSessionCapQoSPolicy__private_IsEnabledFallback.c)
 */

__int64 Feature_AgenticSessionCapQoSPolicy__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_AgenticSessionCapQoSPolicy__private_featureState & 0x10) != 0 )
    return Feature_AgenticSessionCapQoSPolicy__private_featureState & 1;
  else
    return Feature_AgenticSessionCapQoSPolicy__private_IsEnabledFallback(
             (unsigned int)Feature_AgenticSessionCapQoSPolicy__private_featureState,
             3LL);
}
