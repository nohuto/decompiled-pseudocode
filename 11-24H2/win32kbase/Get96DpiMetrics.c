/*
 * XREFs of Get96DpiMetrics @ 0x1401940D0
 * Callers:
 *     CleanupGDI @ 0x140165F88 (CleanupGDI.c)
 * Callees:
 *     Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x1401B11B4 (Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 Get96DpiMetrics()
{
  __int64 v0; // rcx

  if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() )
    return *(_QWORD *)(W32GetUserSessionState(v0) + 19928) + 7736LL;
  else
    return W32GetUserSessionState(v0) + 66144;
}
