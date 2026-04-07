/*
 * XREFs of ?OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x18000B670
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x1800D4F34 (-_UpdateCaptureControllerCaptureState@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::OnWindowMinimized(CProjectionBorderManager *this, struct CWindowData *a2)
{
  __int64 v3; // rax
  HWND v4; // r9
  int updated; // eax
  unsigned int v6; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_DWORD *)a2 + 114) || *((_QWORD *)a2 + 81) )
    return 0LL;
  v3 = *((_QWORD *)a2 + 82);
  v4 = (HWND)*((_QWORD *)a2 + 5);
  if ( v3 )
    v4 = *(HWND *)(v3 + 40);
  updated = CProjectionBorderManager::_UpdateCaptureControllerCaptureState(this, v4, 0);
  v6 = updated;
  if ( updated >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3B4,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
    (const char *)(unsigned int)updated,
    v7);
  return v6;
}
