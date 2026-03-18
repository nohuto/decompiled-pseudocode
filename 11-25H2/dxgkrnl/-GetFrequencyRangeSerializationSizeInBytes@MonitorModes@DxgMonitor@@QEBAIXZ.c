/*
 * XREFs of ?GetFrequencyRangeSerializationSizeInBytes@MonitorModes@DxgMonitor@@QEBAIXZ @ 0x140272F08
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x14026FB10 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     ?SerializeFrequencyRangesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORFREQUENCYRANGESET_SERIALIZATION@@I@Z @ 0x140273144 (-SerializeFrequencyRangesToBuffer@MonitorModes@DxgMonitor@@QEBAXPEAU_DMM_MONITORFREQUENCYRANGESE.c)
 * Callees:
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x1400508E0 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     ??0?$RESOURCE_LOCK@$$CBVMonitorModes@DxgMonitor@@@@QEAA@PEBVMonitorModes@DxgMonitor@@@Z @ 0x1400903BC (--0-$RESOURCE_LOCK@$$CBVMonitorModes@DxgMonitor@@@@QEAA@PEBVMonitorModes@DxgMonitor@@@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorModes::GetFrequencyRangeSerializationSizeInBytes(struct _ERESOURCE *this)
{
  ULONG ActiveEntries; // eax
  unsigned int v3; // ebx
  struct _ERESOURCE *v5; // [rsp+30h] [rbp+8h] BYREF

  RESOURCE_LOCK<DxgMonitor::MonitorModes const>::RESOURCE_LOCK<DxgMonitor::MonitorModes const>(&v5, this);
  ActiveEntries = this[1].ActiveEntries;
  if ( ActiveEntries )
    v3 = 48 * ActiveEntries + 8;
  else
    v3 = 56;
  RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>(&v5);
  return v3;
}
