/*
 * XREFs of ?Stop@KStopwatch@@QEAA_KXZ @ 0x140075200
 * Callers:
 *     ??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ @ 0x1400498B0 (--1NdisFreeSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1Filter@BindingMetrics@@QEAA@XZ @ 0x140059B80 (--1Filter@BindingMetrics@@QEAA@XZ.c)
 *     ??1Protocol@BindingMetrics@@QEAA@XZ @ 0x14005DE20 (--1Protocol@BindingMetrics@@QEAA@XZ.c)
 *     ??1UpdateBindings@BindingMetrics@@QEAA@XZ @ 0x140067540 (--1UpdateBindings@BindingMetrics@@QEAA@XZ.c)
 *     ??1Miniport@BindingMetrics@@QEAA@XZ @ 0x14006A4A0 (--1Miniport@BindingMetrics@@QEAA@XZ.c)
 *     ??1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ @ 0x14006C3B0 (--1MiniportHaltTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ @ 0x140071240 (--1MiniportDevicePnPEventNotify@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportDriverUnload@AzTelemetry@@UEAA@XZ @ 0x14008BEC0 (--1MiniportDriverUnload@AzTelemetry@@UEAA@XZ.c)
 *     ??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ @ 0x14008D6E0 (--1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ.c)
 *     ??1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400DD220 (--1MiniportAddDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ @ 0x1400DD2D4 (--1MiniportFilterResourceRequirements@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ @ 0x1400DD388 (--1MiniportRemoveDeviceTelemetry@AzTelemetry@@UEAA@XZ.c)
 *     ??1MiniportStartDevice@AzTelemetry@@UEAA@XZ @ 0x1400DD424 (--1MiniportStartDevice@AzTelemetry@@UEAA@XZ.c)
 * Callees:
 *     ?GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ @ 0x14008CB10 (-GetElapsedTimeInMilliseconds@KStopwatch@@QEBA_KXZ.c)
 */

unsigned __int64 __fastcall KStopwatch::Stop(LARGE_INTEGER *this)
{
  this[2] = KeQueryPerformanceCounter(0LL);
  return KStopwatch::GetElapsedTimeInMilliseconds((KStopwatch *)this);
}
