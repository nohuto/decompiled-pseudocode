/*
 * XREFs of ?IsShellParticipatesInSizing@@YA_NPEBUtagWND@@@Z @ 0x140067FA4
 * Callers:
 *     ?PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z @ 0x140067B0C (-PositioningChanged@NotifyShell@@YAXPEAUtagWND@@AEBUtagCVR@@@Z.c)
 *     NtUserUpdateWindowTrackingInfo @ 0x1402A1AB0 (NtUserUpdateWindowTrackingInfo.c)
 *     ?MarkActionForMoveSizeShellNotifications@@YAXPEAUMOVESIZEDATA@@PEAVCWindowAction@AdvancedWindowPos@@@Z @ 0x1402A61FC (-MarkActionForMoveSizeShellNotifications@@YAXPEAUMOVESIZEDATA@@PEAVCWindowAction@AdvancedWindowP.c)
 *     ?ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z @ 0x1402A6618 (-ReportMoveSizeCompletionToShell@@YAXPEBUMOVESIZEDATA@@@Z.c)
 *     ?xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z @ 0x1402CE108 (-xxxInterceptCommitMoveSize@WindowActions@@YAXPEAUMOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?BehaviorEnabled@ShellWindowManagement@@YA_NK@Z @ 0x14006809C (-BehaviorEnabled@ShellWindowManagement@@YA_NK@Z.c)
 */

char __fastcall IsShellParticipatesInSizing(const struct tagWND *a1, unsigned int a2)
{
  __int64 v2; // rsi
  unsigned int v4; // edx
  char v5; // bl
  __int64 v6; // rax

  v2 = *((_QWORD *)a1 + 2);
  v5 = 0;
  if ( ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)0x40, a2)
    && !ShellWindowManagement::BehaviorEnabled((ShellWindowManagement *)8, v4) )
  {
    v6 = *(_QWORD *)(v2 + 712);
    if ( v6 )
    {
      if ( *(const struct tagWND **)(v6 + 16) == a1 )
        return *(_DWORD *)(v6 + 380) != 0;
    }
  }
  return v5;
}
