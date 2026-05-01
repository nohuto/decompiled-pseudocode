/*
 * XREFs of TouchEdgeGripperHost::NotifyGripperPressedAsync$_InitCoro$2 @ 0x18021FCA0
 * Callers:
 *     ?NotifyGripperPressedAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@IUPoint@Foundation@Windows@3@@Z @ 0x18021FF0C (-NotifyGripperPressedAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@IUPoint@Foundatio.c)
 * Callees:
 *     TouchEdgeGripperHost::NotifyGripperPressedAsync$_ResumeCoro$1 @ 0x18021FD70 (TouchEdgeGripperHost--NotifyGripperPressedAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchEdgeGripperHost::NotifyGripperPressedAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        int *a4,
        _QWORD *a5,
        __int64 a6)
{
  int v6; // r9d

  v6 = *a4;
  *(_QWORD *)(a2 + 58) = a6;
  *(_DWORD *)(a2 + 66) = v6;
  *(_QWORD *)(a2 + 70) = *a5;
  *(_QWORD *)a2 = TouchEdgeGripperHost::NotifyGripperPressedAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 57) = 0;
  return TouchEdgeGripperHost::NotifyGripperPressedAsync__ResumeCoro_1(a2);
}
