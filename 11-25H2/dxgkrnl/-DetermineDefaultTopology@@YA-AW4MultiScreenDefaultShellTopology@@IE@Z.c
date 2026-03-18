/*
 * XREFs of ?DetermineDefaultTopology@@YA?AW4MultiScreenDefaultShellTopology@@IE@Z @ 0x1401BFE58
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403783FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1400551B0 (-GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z.c)
 */

__int16 __fastcall DetermineDefaultTopology(int a1, char a2)
{
  int MultiScreenDefaultShellTopology; // eax
  __int64 v5; // rbx
  __int16 result; // ax
  __int16 v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = 0;
  MultiScreenDefaultShellTopology = GetMultiScreenDefaultShellTopology((enum MultiScreenDefaultShellTopology *)&v7);
  if ( MultiScreenDefaultShellTopology >= 0 )
  {
    result = v7;
  }
  else
  {
    v5 = MultiScreenDefaultShellTopology;
    WdLogSingleEntry1(1LL, MultiScreenDefaultShellTopology);
    WdLogGlobalForLineNumber = 3436;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"Failed (Status = 0x%I64x) GetMultiScreenDefaultShellTopology, defaulting to legacy behavior",
      v5,
      0LL,
      0LL,
      0LL,
      0LL);
    result = 0;
  }
  if ( !result )
  {
    if ( a1 )
      return (a2 != 0) + 3;
    else
      return 4;
  }
  return result;
}
