/*
 * XREFs of ?OpenMonitorPnpKey@MonitorDataStore@DxgMonitor@@UEBAJ_NW4MonitorPnpKeyType@2@PEAPEAX@Z @ 0x140409C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorDataStore::OpenMonitorPnpKey(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
}
