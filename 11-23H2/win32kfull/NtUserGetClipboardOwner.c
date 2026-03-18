/*
 * XREFs of NtUserGetClipboardOwner @ 0x1C00681E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0068408 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 __fastcall NtUserGetClipboardOwner(__int64 a1, __int64 a2, __int64 a3)
{
  struct tagWINDOWSTATION *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 *v9; // rax

  EnterSharedCrit(a1, a2, a3);
  v3 = CheckClipboardAccess();
  v8 = 0LL;
  if ( v3 )
  {
    v9 = (__int64 *)*((_QWORD *)v3 + 14);
    if ( v9 )
      v8 = *v9;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
