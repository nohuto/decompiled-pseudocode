/*
 * XREFs of ?MonitorGetNextFrequencyRange@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1402C87E0
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1402C9BA0 (BmlFillPreferredMonitorMode.c)
 * Callees:
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x140034CB0 (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140036128 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?_GetNextMonitorFrequencyRange@MonitorModes@DxgMonitor@@QEBAJPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1402C8758 (-_GetNextMonitorFrequencyRange@MonitorModes@DxgMonitor@@QEBAJPEBU_D3DKMDT_MONITOR_FREQUENCY_RANG.c)
 */

__int64 __fastcall MonitorGetNextFrequencyRange(
        struct HDXGMONITOR__ *a1,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3)
{
  unsigned int NextMonitorFrequencyRange; // ebx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !a1 || !a3 )
    return 3221225485LL;
  *a3 = 0LL;
  MONITOR_MGR::AcquireMonitorShared(v7, (__int64)a1);
  if ( v7[0] )
  {
    NextMonitorFrequencyRange = DxgMonitor::MonitorModes::_GetNextMonitorFrequencyRange(
                                  *(DxgMonitor::MonitorModes **)(v7[0] + 232LL),
                                  a2,
                                  a3);
  }
  else
  {
    NextMonitorFrequencyRange = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
    WdLogGlobalForLineNumber = 3259;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v7);
  return NextMonitorFrequencyRange;
}
