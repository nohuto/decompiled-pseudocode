/*
 * XREFs of NtUserRemoveClipboardFormatListener @ 0x1C0068230
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0068408 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ?_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z @ 0x1C00685A0 (-_RemoveClipboardFormatListener@@YAXPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserRemoveClipboardFormatListener(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 CurrentProcessWin32Process; // rax

  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    v5 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v4 = -*(_QWORD *)CurrentProcessWin32Process;
      v3 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v5 = v3 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) == v5 )
    {
      if ( CheckClipboardAccess() )
      {
        if ( (*(_DWORD *)(v8 + 320) & 0x800000) != 0 )
        {
          _RemoveClipboardFormatListener((struct tagWND *)v8);
          v7 = 1LL;
        }
        else
        {
          UserSetLastError(87LL);
        }
      }
    }
    else
    {
      v7 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
