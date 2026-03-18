/*
 * XREFs of ??1MonitorModes@DxgMonitor@@QEAA@XZ @ 0x140272E6C
 * Callers:
 *     ?reset@?$unique_ptr@VMonitorModes@DxgMonitor@@U?$default_delete@VMonitorModes@DxgMonitor@@@wistd@@@wistd@@QEAAXPEAVMonitorModes@DxgMonitor@@@Z @ 0x140063118 (-reset@-$unique_ptr@VMonitorModes@DxgMonitor@@U-$default_delete@VMonitorModes@DxgMonitor@@@wistd.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140183B00 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 * Callees:
 *     ?_CleanupMonitorSourceModeAndFreqRanges@MonitorModes@DxgMonitor@@AEAAXXZ @ 0x1403D55D4 (-_CleanupMonitorSourceModeAndFreqRanges@MonitorModes@DxgMonitor@@AEAAXXZ.c)
 *     ?_CleanupRegistryOverridedFrequencyRanges@MonitorModes@DxgMonitor@@AEAAXXZ @ 0x1404085BC (-_CleanupRegistryOverridedFrequencyRanges@MonitorModes@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DxgMonitor::MonitorModes::~MonitorModes(DxgMonitor::MonitorModes *this)
{
  unsigned int v1; // eax

  v1 = *((_DWORD *)this + 56);
  if ( v1 )
  {
    WdLogSingleEntry2(2LL, v1, this);
    WdLogGlobalForLineNumber = 44;
  }
  DxgMonitor::MonitorModes::_CleanupMonitorSourceModeAndFreqRanges(this);
  DxgMonitor::MonitorModes::_CleanupRegistryOverridedFrequencyRanges(this);
  ExDeleteResourceLite((PERESOURCE)this);
}
