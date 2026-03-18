/*
 * XREFs of NtUserScaleSystemMetricForDPIWithoutCache @ 0x14020FB40
 * Callers:
 *     <none>
 * Callees:
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x14007AED4 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall NtUserScaleSystemMetricForDPIWithoutCache(int a1, unsigned __int16 a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx

  EnterCrit(0LL, 0LL);
  v4 = ScaleSystemMetricForDPIWithoutCache(a1, a2);
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
