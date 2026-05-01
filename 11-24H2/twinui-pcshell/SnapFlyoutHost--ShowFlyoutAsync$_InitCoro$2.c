/*
 * XREFs of SnapFlyoutHost::ShowFlyoutAsync$_InitCoro$2 @ 0x180272664
 * Callers:
 *     ?ShowFlyoutAsync@SnapFlyoutHost@@QEAA?AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z @ 0x180209D0C (-ShowFlyoutAsync@SnapFlyoutHost@@QEAA-AUfire_and_forget@winrt@@PEAUHWND__@@W4ShowFlags@1@@Z.c)
 * Callees:
 *     SnapFlyoutHost::ShowFlyoutAsync$_ResumeCoro$1 @ 0x1802726D0 (SnapFlyoutHost--ShowFlyoutAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapFlyoutHost::ShowFlyoutAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        int *a5,
        __int64 a6)
{
  int v6; // r10d

  v6 = *a5;
  *(_QWORD *)(a2 + 65) = a6;
  *(_QWORD *)(a2 + 73) = a4;
  *(_DWORD *)(a2 + 81) = v6;
  *(_QWORD *)a2 = SnapFlyoutHost::ShowFlyoutAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 64) = 0;
  return SnapFlyoutHost::ShowFlyoutAsync__ResumeCoro_1(a2);
}
