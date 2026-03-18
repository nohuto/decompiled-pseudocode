/*
 * XREFs of GetSessionDpiMetrics @ 0x140194120
 * Callers:
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 * Callees:
 *     Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x1401B11B4 (Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 GetSessionDpiMetrics()
{
  __int64 v0; // rcx

  if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() )
    return *(_QWORD *)(W32GetUserSessionState(v0) + 19928) + 7656LL;
  else
    return W32GetUserSessionState(v0) + 66224;
}
