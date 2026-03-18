/*
 * XREFs of ?ConvertMonitorModeTimingType@@YAJW4__WMI_MONITOR_TIMING_TYPE@@PEAW4_D3DKMDT_MONITOR_TIMING_TYPE@@@Z @ 0x140058A3C
 * Callers:
 *     ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1403CD898 (-ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertMonitorModeTimingType(int a1, _DWORD *a2)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case 1:
      *a2 = 1;
      break;
    case 2:
      *a2 = 2;
      break;
    case 3:
      *a2 = 3;
      break;
    case 4:
      *a2 = 4;
      break;
    default:
      WdLogSingleEntry1(2LL, a1);
      *a2 = 0;
      result = 3223192354LL;
      WdLogGlobalForLineNumber = 317;
      return result;
  }
  return 0LL;
}
