/*
 * XREFs of ?GetColorimetryData@MultiMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x140091EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A1CA0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MultiMonitorDescriptor::GetColorimetryData(
        DxgMonitor::MultiMonitorDescriptor *this,
        struct DISPLAY_COLORIMETRY_DATA *a2,
        struct DISPLAY_COLOR_DEPTHS *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct DISPLAY_COLORIMETRY_DATA *, struct DISPLAY_COLOR_DEPTHS *))(**((_QWORD **)this + 2) + 128LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
