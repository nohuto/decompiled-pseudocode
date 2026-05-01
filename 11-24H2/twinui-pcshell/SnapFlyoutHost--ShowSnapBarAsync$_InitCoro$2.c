/*
 * XREFs of SnapFlyoutHost::ShowSnapBarAsync$_InitCoro$2 @ 0x1802728A8
 * Callers:
 *     ?ShowSnapBarAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@W4InputDeviceKind@Shell@UI@WindowsUdk@3@PEAUHWND__@@@Z @ 0x18022CD70 (-ShowSnapBarAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@W4InputDeviceKind@Shell@UI@Windo.c)
 * Callees:
 *     SnapFlyoutHost::ShowSnapBarAsync$_ResumeCoro$1 @ 0x180272910 (SnapFlyoutHost--ShowSnapBarAsync$_ResumeCoro$1.c)
 */

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
  *(_QWORD *)(a2 + 49) = a6;
  *(_DWORD *)(a2 + 57) = v6;
  *(_QWORD *)(a2 + 65) = a5;
  *(_QWORD *)a2 = SnapFlyoutHost::ShowSnapBarAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 48) = 0;
  return SnapFlyoutHost::ShowSnapBarAsync__ResumeCoro_1(a2);
}
