/*
 * XREFs of ?GetAnalogVideoInputParams@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorAnalogVideoInputParams@@@Z @ 0x140091DF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetAnalogVideoInputParams(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _WmiMonitorAnalogVideoInputParams *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _WmiMonitorAnalogVideoInputParams *))(**((_QWORD **)this + 2) + 144LL))(
           *((_QWORD *)this + 2),
           a2);
}
