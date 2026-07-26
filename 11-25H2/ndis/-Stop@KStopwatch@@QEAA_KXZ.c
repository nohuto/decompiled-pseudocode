/*
 * XREFs of ?Stop@KStopwatch@@QEAA_KXZ @ 0x140091420
 * Callers:
 *     ??1Filter@BindingMetrics@@QEAA@XZ @ 0x140074800 (--1Filter@BindingMetrics@@QEAA@XZ.c)
 *     ??1Protocol@BindingMetrics@@QEAA@XZ @ 0x140079940 (--1Protocol@BindingMetrics@@QEAA@XZ.c)
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x14007B8E0 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1UpdateBindings@BindingMetrics@@QEAA@XZ @ 0x140082F20 (--1UpdateBindings@BindingMetrics@@QEAA@XZ.c)
 *     ??1Miniport@BindingMetrics@@QEAA@XZ @ 0x140086100 (--1Miniport@BindingMetrics@@QEAA@XZ.c)
 *     ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x140088510 (--1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ @ 0x14008D950 (--1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportDriverUnload@AzTelemetry@@UEAA@XZ @ 0x140097670 (--1MiniportDriverUnload@AzTelemetry@@UEAA@XZ.c)
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x140098F80 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400E4430 (--1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ @ 0x1400E44E4 (--1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400E4598 (--1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportStartDevice@AzTelemetry@@UEAA@XZ @ 0x1400E4634 (--1MiniportStartDevice@AzTelemetry@@UEAA@XZ.c)
 * Callees:
 *     ?GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ @ 0x1400982C0 (-GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall KStopwatch::Stop(LARGE_INTEGER *this)
{
  this[2] = KeQueryPerformanceCounter(0LL);
  return KStopwatch::GetElapsedTimeInMilliseconds((KStopwatch *)this);
}
