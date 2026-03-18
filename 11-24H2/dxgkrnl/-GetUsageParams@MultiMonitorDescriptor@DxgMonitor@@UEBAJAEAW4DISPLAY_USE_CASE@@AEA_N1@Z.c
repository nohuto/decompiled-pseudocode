/*
 * XREFs of ?GetUsageParams@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAW4DISPLAY_USE_CASE@@AEA_N1@Z @ 0x140092120
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetUsageParams(
        DxgMonitor::MultiMonitorDescriptor *this,
        enum DISPLAY_USE_CASE *a2,
        bool *a3,
        bool *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, enum DISPLAY_USE_CASE *, bool *, bool *))(**((_QWORD **)this + 2) + 224LL))(
           *((_QWORD *)this + 2),
           a2,
           a3,
           a4);
}
