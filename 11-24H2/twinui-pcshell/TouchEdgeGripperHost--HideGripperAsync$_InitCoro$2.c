/*
 * XREFs of TouchEdgeGripperHost::HideGripperAsync$_InitCoro$2 @ 0x18059578C
 * Callers:
 *     ?HideGripperAsync@TouchEdgeGripperHost@@QEAA?AUfire_and_forget@winrt@@_N@Z @ 0x180595948 (-HideGripperAsync@TouchEdgeGripperHost@@QEAA-AUfire_and_forget@winrt@@_N@Z.c)
 * Callees:
 *     TouchEdgeGripperHost::HideGripperAsync$_ResumeCoro$1 @ 0x1805957F0 (TouchEdgeGripperHost--HideGripperAsync$_ResumeCoro$1.c)
 */

__int64 __fastcall TouchEdgeGripperHost::HideGripperAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        char *a4,
        __int64 a5)
{
  char v5; // r9

  v5 = *a4;
  *(_QWORD *)(a2 + 65) = a5;
  *(_BYTE *)(a2 + 73) = v5;
  *(_QWORD *)a2 = TouchEdgeGripperHost::HideGripperAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 64) = 0;
  return TouchEdgeGripperHost::HideGripperAsync__ResumeCoro_1(a2);
}
