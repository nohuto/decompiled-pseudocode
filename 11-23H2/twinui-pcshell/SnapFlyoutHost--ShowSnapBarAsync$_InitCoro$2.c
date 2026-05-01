/*
 * XREFs of SnapFlyoutHost::ShowSnapBarAsync$_InitCoro$2 @ 0x1802280A0
 * Callers:
 *     ?ShowSnapBarAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@W4InputDeviceKind@Shell@UI@WindowsUdk@3@PEAUHWND__@@@Z @ 0x1802282FC (-ShowSnapBarAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@W4InputDeviceKind@Shell@UI@Windo.c)
 * Callees:
 *     SnapFlyoutHost::ShowSnapBarAsync$_ResumeCoro$1 @ 0x180228170 (SnapFlyoutHost--ShowSnapBarAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapFlyoutHost::ShowSnapBarAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        int *a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // r9d

  v6 = *a4;
  *(_QWORD *)(a2 + 50) = a6;
  *(_DWORD *)(a2 + 58) = v6;
  *(_QWORD *)(a2 + 66) = a5;
  *(_QWORD *)a2 = SnapFlyoutHost::ShowSnapBarAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 49) = 0;
  return SnapFlyoutHost::ShowSnapBarAsync__ResumeCoro_1(a2);
}
