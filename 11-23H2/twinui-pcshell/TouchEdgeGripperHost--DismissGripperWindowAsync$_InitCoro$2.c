/*
 * XREFs of TouchEdgeGripperHost::DismissGripperWindowAsync$_InitCoro$2 @ 0x18021F114
 * Callers:
 *     ?DismissGripperWindowAsync@TouchEdgeGripperHost@@AEAA?AUfire_and_forget@winrt@@_N@Z @ 0x18021F644 (-DismissGripperWindowAsync@TouchEdgeGripperHost@@AEAA-AUfire_and_forget@winrt@@_N@Z.c)
 * Callees:
 *     TouchEdgeGripperHost::DismissGripperWindowAsync$_ResumeCoro$1 @ 0x18021F1E0 (TouchEdgeGripperHost--DismissGripperWindowAsync$_ResumeCoro$1.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchEdgeGripperHost::DismissGripperWindowAsync__InitCoro_2(
        _DWORD *a1,
        __int64 a2,
        _BYTE *a3,
        char *a4,
        __int64 a5)
{
  char v5; // r9

  v5 = *a4;
  *(_QWORD *)(a2 + 251) = a5;
  *(_BYTE *)(a2 + 259) = v5;
  *(_QWORD *)a2 = TouchEdgeGripperHost::DismissGripperWindowAsync__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *a1 != 0 ? 2 : 65538;
  *a3 = 0;
  *(_BYTE *)(a2 + 250) = 0;
  return TouchEdgeGripperHost::DismissGripperWindowAsync__ResumeCoro_1(a2);
}
