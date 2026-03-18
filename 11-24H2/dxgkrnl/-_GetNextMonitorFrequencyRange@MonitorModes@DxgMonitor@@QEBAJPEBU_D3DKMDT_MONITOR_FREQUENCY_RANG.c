/*
 * XREFs of ?_GetNextMonitorFrequencyRange@MonitorModes@DxgMonitor@@QEBAJPEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU3@@Z @ 0x1402DF850
 * Callers:
 *     ?MonitorGetNextFrequencyRange@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPEBU2@@Z @ 0x1402DFA58 (-MonitorGetNextFrequencyRange@@YAJPEAUHDXGMONITOR__@@PEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@PEAPE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorModes::_GetNextMonitorFrequencyRange(
        DxgMonitor::MonitorModes *this,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *a2,
        const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **a3)
{
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **v3; // rcx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v5; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v6; // r8
  __int64 result; // rax
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **v8; // rdx
  const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *v9; // rax

  v3 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)((char *)this + 176);
  if ( a2 )
  {
    v5 = *v3;
    if ( *v3 == (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)v3 )
    {
LABEL_7:
      WdLogSingleEntry1(2LL, a2);
      result = 3223192368LL;
      WdLogGlobalForLineNumber = 2899;
      return result;
    }
    v6 = a2 + 1;
    while ( v5 != v6 )
    {
      if ( v3 == (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)v5 )
        goto LABEL_7;
      v5 = *(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)&v5->Origin;
    }
    v8 = *(const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE ***)&v6->Origin;
  }
  else
  {
    v8 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE **)*v3;
  }
  if ( v8 == v3 )
    return 1075708748LL;
  v9 = (const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)(v8 - 6);
  if ( !v8 )
    v9 = 0LL;
  if ( !v9 )
    return 1075708748LL;
  *a3 = v9;
  return 0LL;
}
