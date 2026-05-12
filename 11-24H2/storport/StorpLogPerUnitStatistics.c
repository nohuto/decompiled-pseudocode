/*
 * XREFs of StorpLogPerUnitStatistics @ 0x14003C190
 * Callers:
 *     StorpLogStatistics @ 0x14003FE88 (StorpLogStatistics.c)
 *     RaUnitSurpriseRemovalIrp @ 0x14018B11C (RaUnitSurpriseRemovalIrp.c)
 * Callees:
 *     RaUnitAcquireRemoveLock @ 0x140004540 (RaUnitAcquireRemoveLock.c)
 *     StorpTelemetrySendUnitPerfData @ 0x140051BC8 (StorpTelemetrySendUnitPerfData.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x14005406C (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     RaidUnitDeviceHealthTelemetrySupported @ 0x1400AF2B0 (RaidUnitDeviceHealthTelemetrySupported.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1400BA4EC (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1400BB15C (StorpTelemetrySendUnitErrorDataSummary.c)
 *     StorpTelemetrySendUnitQos @ 0x1400BBDBC (StorpTelemetrySendUnitQos.c)
 */

void __fastcall StorpLogPerUnitStatistics(__int64 a1, __int16 a2)
{
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v5; // rsi
  PIO_WORKITEM v6; // rax
  struct _IO_WORKITEM *v7; // rsi

  if ( (a2 & 4) != 0 )
    StorpTelemetrySendUnitPerfData();
  if ( (a2 & 0x10) != 0 )
    StorpTelemetrySendUnitErrorDataSummary(a1);
  if ( (a2 & 0x20) != 0 && *(_BYTE *)(a1 + 3368) == 1 )
    StorpTelemetrySendUnitQos(a1);
  if ( (a2 & 8) != 0 )
    StorpTelemetrySendAdaptiveIdleCounters(a1);
  if ( (a2 & 0x80u) != 0 )
  {
    if ( (unsigned __int8)RaidUnitDeviceHealthTelemetrySupported(a1) )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      v5 = WorkItem;
      if ( WorkItem )
      {
        if ( (int)RaUnitAcquireRemoveLock(a1, (__int64)WorkItem, 0) < 0 )
          IoFreeWorkItem(v5);
        else
          IoQueueWorkItem(v5, (PIO_WORKITEM_ROUTINE)StorpDeviceHealthWorkItemRoutine, NormalWorkQueue, v5);
      }
    }
  }
  if ( (a2 & 0x40) != 0 )
    StorpTelemetrySendUnitPauseRequestCounters(a1);
  if ( (a2 & 0x100) != 0 )
  {
    if ( *(_QWORD *)(a1 + 112) )
    {
      if ( *(_DWORD *)(a1 + 56) == 1 && *(_DWORD *)(a1 + 3432) == 17 )
      {
        v6 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
        v7 = v6;
        if ( v6 )
        {
          if ( (int)RaUnitAcquireRemoveLock(a1, (__int64)v6, 0) < 0 )
            IoFreeWorkItem(v7);
          else
            IoQueueWorkItem(v7, StorpDeviceLogPagesWorkItemRoutine, NormalWorkQueue, v7);
        }
      }
    }
  }
  if ( (a2 & 0x30) != 0 )
  {
    *(_DWORD *)(a1 + 2264) = 0;
    *(_DWORD *)(a1 + 1400) = 0;
  }
}
