/*
 * XREFs of ?GetNumericManufacturerIds@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAG0@Z @ 0x140092020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetNumericManufacturerIds(
        DxgMonitor::MultiMonitorDescriptor *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *, unsigned __int16 *))(**((_QWORD **)this + 1) + 112LL))(
           *((_QWORD *)this + 1),
           a2,
           a3);
}
