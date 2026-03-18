/*
 * XREFs of ?SetShrinkWidth@DWM_ARRANGEMENT_DATA@@QEAAXIPEBUMOVESIZEDATA@@@Z @ 0x140187EB4
 * Callers:
 *     ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind@@PEAUtagRECT@@@Z @ 0x140187530 (-xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4ShellNotificationWindowKind.c)
 *     ?SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z @ 0x140187C10 (-SHData_StoreShellArrangeInfo@MOVESIZEDATA@@QEAAXAEBU_WINDOW_ARRANGEMENT_INFO@@@Z.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14024AF80 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@2@Z @ 0x14024C8C0 (-xxxUpdateArrangeDataForMove@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@.c)
 *     ?xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z @ 0x1402A905C (-xxxMoveSizeWithoutCapture@MoveSizeApi@@YAXPEAUtagWND@@UtagPOINT@@1W4_MOVESIZE_OPERATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140189210 (WPP_RECORDER_AND_TRACE_SF_d.c)
 */

void __fastcall DWM_ARRANGEMENT_DATA::SetShrinkWidth(
        DWM_ARRANGEMENT_DATA *this,
        __int64 a2,
        const struct MOVESIZEDATA *a3)
{
  int v3; // ebx
  bool v4; // si
  bool v5; // di
  __int64 UserSessionState; // rax
  int v7; // r8d
  int v8; // edx

  v3 = (*((_DWORD *)a3 + 50) & 0x20) != 0 ? a2 : 0;
  if ( *(_DWORD *)this != v3 )
  {
    *(_DWORD *)this = v3;
    *((_BYTE *)this + 4) = 1;
    v4 = *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 1) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u;
    v5 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
      && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
    if ( v4 || v5 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v7) = v5;
      LOBYTE(v8) = v4;
      WPP_RECORDER_AND_TRACE_SF_d(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v8,
        v7,
        *(_QWORD *)(UserSessionState + 69416),
        5,
        1,
        25,
        (__int64)&WPP_3a3e36d3d12b304605d2c81e14d21b4c_Traceguids,
        v3);
    }
  }
}
