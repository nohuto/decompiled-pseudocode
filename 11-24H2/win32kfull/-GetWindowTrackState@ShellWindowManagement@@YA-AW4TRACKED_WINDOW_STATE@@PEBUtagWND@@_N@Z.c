/*
 * XREFs of ?GetWindowTrackState@ShellWindowManagement@@YA?AW4TRACKED_WINDOW_STATE@@PEBUtagWND@@_N@Z @ 0x1402682DC
 * Callers:
 *     ?DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z @ 0x14014861C (-DragSizeInfo@NotifyShell@@YAXPEBUtagWND@@W4DRAG_SIZE_STAGE@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@@Z.c)
 *     ?ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z @ 0x140251FB8 (-ArrangementCompleted@NotifyShell@@YAXPEBUtagWND@@_JW4ARRANGEMENT_COMPLETED_RESULT@@@Z.c)
 *     ?NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@Z @ 0x1402C0178 (-NotifyPosAndStateApplied@ShellWindowPos@@YAXPEBUtagWND@@W4TRACKED_WINDOW_STATE@@AEBUtagRECT@@K@.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1402C0238 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 * Callees:
 *     ?IsArranged@@YA_NPEBUtagWND@@@Z @ 0x14014EAE0 (-IsArranged@@YA_NPEBUtagWND@@@Z.c)
 */

__int64 __fastcall ShellWindowManagement::GetWindowTrackState(const struct tagWND *a1, char a2)
{
  unsigned int v2; // ebx
  char v3; // r8

  v2 = 0;
  v3 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v3 & 1) != 0 )
  {
    return 1;
  }
  else if ( (v3 & 0x20) != 0 )
  {
    return 2;
  }
  else if ( a2 && IsArranged(a1) )
  {
    return 3;
  }
  return v2;
}
