/*
 * XREFs of SnapFlyoutHost::HideAsync$_InitCoro$2 @ 0x180271A98
 * Callers:
 *     ?HideAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x1800B6CBC (-HideAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 * Callees:
 *     SnapFlyoutHost::HideAsync$_ResumeCoro$1 @ 0x180271B00 (SnapFlyoutHost--HideAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapFlyoutHost::HideAsync__InitCoro_2(_DWORD *a1, __int64 a2, _BYTE *a3, char *a4, __int64 a5)
{
  char v5; // r9

  v5 = *a4;
  *(_QWORD *)(a2 + 129) = a5;
  *(_BYTE *)(a2 + 137) = v5;
  *(_QWORD *)a2 = SnapFlyoutHost::HideAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 128) = 0;
  return SnapFlyoutHost::HideAsync__ResumeCoro_1(a2);
}
