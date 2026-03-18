/*
 * XREFs of NtMITGetCursorUpdateHandle @ 0x1400BB240
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140042EA4 (UserSetLastError.c)
 *     IsInputProcessingActivated @ 0x140048E30 (IsInputProcessingActivated.c)
 *     IsInputThread @ 0x1400BB380 (IsInputThread.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     GetCursorUpdateHandle @ 0x140212734 (GetCursorUpdateHandle.c)
 */

__int64 NtMITGetCursorUpdateHandle()
{
  __int64 v0; // rcx
  __int64 CursorUpdateHandle; // rbx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v3, 1LL);
  if ( !(unsigned __int8)IsInputThread() || IsInputProcessingActivated(v0) )
  {
    CursorUpdateHandle = -1LL;
    UserSetLastError(5);
  }
  else
  {
    CursorUpdateHandle = GetCursorUpdateHandle();
  }
  UserSessionSwitchLeaveCritWithNonPaged();
  return CursorUpdateHandle;
}
