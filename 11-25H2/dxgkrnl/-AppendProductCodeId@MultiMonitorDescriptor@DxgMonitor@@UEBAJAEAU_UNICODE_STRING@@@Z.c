/*
 * XREFs of ?AppendProductCodeId@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1400908E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::AppendProductCodeId(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct _UNICODE_STRING *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct _UNICODE_STRING *))(**((_QWORD **)this + 1) + 72LL))(
           *((_QWORD *)this + 1),
           a2);
}
