/*
 * XREFs of SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_InitCoro$2 @ 0x180272BE8
 * Callers:
 *     ?ShowSnapBarOnMonitorAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@UtagPOINT@@@Z @ 0x180219588 (-ShowSnapBarOnMonitorAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@UtagPOINT@@@Z.c)
 * Callees:
 *     SnapFlyoutHost::ShowSnapBarOnMonitorAsync$_ResumeCoro$1 @ 0x180272C50 (SnapFlyoutHost--ShowSnapBarOnMonitorAsync$_ResumeCoro$1.c)
 */

__int64 __fastcall SnapFlyoutHost::ShowSnapBarOnMonitorAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        _QWORD *a4,
        __int64 a5)
{
  *(_QWORD *)(a2 + 145) = a5;
  *(_QWORD *)(a2 + 153) = *a4;
  *(_QWORD *)a2 = SnapFlyoutHost::ShowSnapBarOnMonitorAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 144) = 0;
  return SnapFlyoutHost::ShowSnapBarOnMonitorAsync__ResumeCoro_1(a2);
}
