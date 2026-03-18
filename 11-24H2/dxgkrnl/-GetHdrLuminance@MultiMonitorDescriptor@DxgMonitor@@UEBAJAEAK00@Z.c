/*
 * XREFs of ?GetHdrLuminance@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAK00@Z @ 0x140091FA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetHdrLuminance(
        DxgMonitor::MultiMonitorDescriptor *this,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *, unsigned int *))(**((_QWORD **)this + 2)
                                                                                           + 160LL))(
           *((_QWORD *)this + 2),
           a2,
           a3,
           a4);
}
