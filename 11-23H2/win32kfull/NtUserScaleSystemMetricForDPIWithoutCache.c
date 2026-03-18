/*
 * XREFs of NtUserScaleSystemMetricForDPIWithoutCache @ 0x1C01D9880
 * Callers:
 *     <none>
 * Callees:
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01BEE20 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall NtUserScaleSystemMetricForDPIWithoutCache(int a1, unsigned int a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterCrit(0LL, 0LL);
  v4 = ScaleSystemMetricForDPIWithoutCache(a1, a2);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
