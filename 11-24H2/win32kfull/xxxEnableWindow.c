/*
 * XREFs of xxxEnableWindow @ 0x14014E5C0
 * Callers:
 *     NtUserEnableWindow @ 0x140241560 (NtUserEnableWindow.c)
 *     ?xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x14024FA00 (-xxxDestroyWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     IsImmersiveBand @ 0x14014E660 (IsImmersiveBand.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x14014E68C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ExemptedFromImmersiveRestrictions @ 0x14023DB78 (ExemptedFromImmersiveRestrictions.c)
 */

__int64 __fastcall xxxEnableWindow(struct tagWND *a1, int a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax

  v5 = 0;
  if ( !(unsigned int)IsImmersiveBand(a1) )
    goto LABEL_2;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( (unsigned int)IsDesktopApp(CurrentProcessWin32Process)
    && (v10 = PtiCurrent(v9, v8), !(unsigned int)ExemptedFromImmersiveRestrictions(v10)) )
  {
    UserSetLastError(5);
    return (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 31LL) >> 3) & 1;
  }
  else
  {
LABEL_2:
    LOBYTE(v5) = a2 != 0;
    return xxxEnableWindowWorker(a1, v5);
  }
}
