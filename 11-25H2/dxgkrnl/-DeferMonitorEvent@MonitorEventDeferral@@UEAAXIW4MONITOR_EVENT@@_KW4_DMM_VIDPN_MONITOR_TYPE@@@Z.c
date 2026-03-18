/*
 * XREFs of ?DeferMonitorEvent@MonitorEventDeferral@@UEAAXIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x14026C040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorEventDeferral::DeferMonitorEvent(__int64 a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r11
  __int64 result; // rax
  __int64 v8; // rcx

  v5 = *(unsigned int *)(a1 + 112);
  if ( (unsigned int)v5 < 4 )
  {
    v8 = 3 * v5;
    *(_DWORD *)(a1 + 112) = v5 + 1;
    result = a5;
    *(_DWORD *)(a1 + 8 * v8 + 32) = a5;
    *(_DWORD *)(a1 + 8 * v8 + 16) = a2;
    *(_DWORD *)(a1 + 8 * v8 + 20) = a3;
    *(_QWORD *)(a1 + 8 * v8 + 24) = a4;
  }
  else
  {
    result = WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5290;
  }
  return result;
}
