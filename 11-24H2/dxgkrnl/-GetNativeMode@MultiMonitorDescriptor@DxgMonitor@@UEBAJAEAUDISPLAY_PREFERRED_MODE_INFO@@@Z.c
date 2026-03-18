/*
 * XREFs of ?GetNativeMode@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x140091FF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetNativeMode(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct DISPLAY_PREFERRED_MODE_INFO *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DISPLAY_PREFERRED_MODE_INFO *))(**((_QWORD **)this + 2) + 184LL))(
           *((_QWORD *)this + 2),
           a2);
}
