/*
 * XREFs of NtUserCountClipboardFormats @ 0x140105230
 * Callers:
 *     <none>
 * Callees:
 *     ?CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z @ 0x1401056F4 (-CountNumClipFormatForIL@@YAKUtagUIPI_INFO@@PEBUtagWINDOWSTATION@@@Z.c)
 *     ?CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ @ 0x140105EAC (-CheckClipboardAccess@@YAPEAUtagWINDOWSTATION@@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserCountClipboardFormats()
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  struct tagWINDOWSTATION *v2; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v4; // xmm0_8
  int v5; // eax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]
  char v9; // [rsp+40h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v9, 1LL);
  v0 = 0;
  v2 = CheckClipboardAccess();
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v4 = *(_QWORD *)(CurrentProcessWin32Process + 872);
    v5 = *(_DWORD *)(CurrentProcessWin32Process + 880);
    v7 = v4;
    v8 = v5;
    v0 = CountNumClipFormatForIL(&v7, v2);
  }
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
