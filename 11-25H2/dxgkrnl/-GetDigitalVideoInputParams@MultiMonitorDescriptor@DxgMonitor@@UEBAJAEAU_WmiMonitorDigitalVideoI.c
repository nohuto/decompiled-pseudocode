/*
 * XREFs of ?GetDigitalVideoInputParams@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAU_WmiMonitorDigitalVideoInputParams@@@Z @ 0x140090BD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetDigitalVideoInputParams(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _WmiMonitorDigitalVideoInputParams *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _WmiMonitorDigitalVideoInputParams *))(**((_QWORD **)this + 2) + 152LL))(
           *((_QWORD *)this + 2),
           a2);
}
