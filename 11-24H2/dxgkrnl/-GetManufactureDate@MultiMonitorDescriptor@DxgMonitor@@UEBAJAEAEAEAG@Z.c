/*
 * XREFs of ?GetManufactureDate@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x140091FD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetManufactureDate(
        DxgMonitor::MultiMonitorDescriptor *this,
        unsigned __int8 *a2,
        unsigned __int16 *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 *, unsigned __int16 *))(**((_QWORD **)this + 1) + 88LL))(
           *((_QWORD *)this + 1),
           a2,
           a3);
}
