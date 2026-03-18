/*
 * XREFs of NtUserCountClipboardFormats @ 0x1C0016360
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1C00163D4 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x1C0068408 (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 */

__int64 NtUserCountClipboardFormats()
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  struct tagWINDOWSTATION *v3; // rdi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 CurrentProcessWin32Process; // rax

  EnterSharedCrit();
  v0 = 0;
  v3 = CheckClipboardAccess();
  if ( v3 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v2);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v0 = CountNumClipFormatForIL(*(_QWORD *)(CurrentProcessWin32Process + 896), v3);
  }
  UserSessionSwitchLeaveCrit(v2, v1, v4, v5);
  return v0;
}
