/*
 * XREFs of NtUserIsClipboardFormatAvailable @ 0x1C0013110
 * Callers:
 *     <none>
 * Callees:
 *     ?FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z @ 0x1C0013198 (-FindClipFormat@@YAPEAUtagCLIP@@PEAUtagWINDOWSTATION@@IK@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0068408 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EB194 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserIsClipboardFormatAvailable(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  PVOID v4; // rcx
  struct tagWINDOWSTATION *v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  struct tagTHREADINFO *v8; // rax

  EnterSharedCrit();
  v2 = 0LL;
  v5 = CheckClipboardAccess();
  if ( v5 )
  {
    if ( !gbLockScreenActive )
    {
      v8 = PtiCurrentShared();
      v4 = grpdeskLogon;
      if ( *((PVOID *)v8 + 57) != grpdeskLogon )
        LOBYTE(v2) = FindClipFormat(v5, a1, 1u) != 0LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return v2;
}
