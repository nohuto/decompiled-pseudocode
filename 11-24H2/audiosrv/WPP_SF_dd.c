/*
 * XREFs of WPP_SF_dD @ 0x18011C330
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@CapabilityAccess@Internal@Windows@@@Z @ 0x180119C08 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJPEAUICapabilityUsageSession@Management@Capabili.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_dD(__int64 a1, __int64 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return EtwTraceMessage(
           a1,
           43LL,
           &WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
           88LL,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
