/*
 * XREFs of ?GetCrc@MultiMonitorDescriptor@DxgMonitor@@UEBAEXZ @ 0x140090BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetCrc(DxgMonitor::MultiMonitorDescriptor *this)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 96LL))(*((_QWORD *)this + 1));
}
