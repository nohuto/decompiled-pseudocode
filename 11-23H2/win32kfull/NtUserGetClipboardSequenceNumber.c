/*
 * XREFs of NtUserGetClipboardSequenceNumber @ 0x1C0017A00
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0068408 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 NtUserGetClipboardSequenceNumber()
{
  struct tagWINDOWSTATION *v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx

  EnterSharedCrit();
  v0 = CheckClipboardAccess();
  v5 = 0;
  if ( v0 )
    v5 = *((_DWORD *)v0 + 36);
  UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
  return v5;
}
