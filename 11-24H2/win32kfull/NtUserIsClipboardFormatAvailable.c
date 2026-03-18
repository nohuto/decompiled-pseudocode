/*
 * XREFs of NtUserIsClipboardFormatAvailable @ 0x140105E00
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x140105EAC (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x140106020 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserIsClipboardFormatAvailable(unsigned int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagWINDOWSTATION *v5; // rsi
  __int64 v6; // rdx
  struct tagTHREADINFO *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  v2 = 0LL;
  v5 = CheckClipboardAccess();
  if ( v5 )
  {
    if ( !*(_DWORD *)(W32GetUserSessionState(v4, v3) + 66132) )
    {
      v7 = PtiCurrent(v4, v6);
      v4 = *(_QWORD *)(W32GetUserSessionState(v9, v8) + 63016);
      if ( *((_QWORD *)v7 + 62) != v4 )
        LOBYTE(v2) = FindClipFormat(v5, a1, 1u) != 0LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
