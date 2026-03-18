/*
 * XREFs of Get96DpiMetrics @ 0x1402F1598
 * Callers:
 *     GetScaledLogFontForDpi @ 0x14007915C (GetScaledLogFontForDpi.c)
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x14011138C (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     xxxSetNCFonts @ 0x140112490 (xxxSetNCFonts.c)
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x140112FC8 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     GetDPIMETRICSForDpiUnsafe @ 0x1401B2108 (GetDPIMETRICSForDpiUnsafe.c)
 *     EnsureDpiMetricsForDpi @ 0x1402873CC (EnsureDpiMetricsForDpi.c)
 *     ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x14028FA28 (-SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z.c)
 *     GetDpiMetricsForDpi @ 0x1402F16E0 (GetDpiMetricsForDpi.c)
 * Callees:
 *     Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline @ 0x14027A000 (Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 Get96DpiMetrics()
{
  __int64 v0; // rdx
  __int64 v1; // rcx

  if ( (unsigned int)Feature_DpiMetricsInUserMode__private_IsEnabledDeviceUsageNoInline() )
    return *(_QWORD *)(W32GetUserSessionState(v1, v0) + 19928) + 7736LL;
  else
    return W32GetUserSessionState(v1, v0) + 66144;
}
