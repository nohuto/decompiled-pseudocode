/*
 * XREFs of NtUserEnableSoftwareCursorForScreenCapture @ 0x1C01CEC80
 * Callers:
 *     <none>
 * Callees:
 *     ChangeComposableCursor @ 0x1C01A87C0 (ChangeComposableCursor.c)
 */

__int64 __fastcall NtUserEnableSoftwareCursorForScreenCapture(unsigned int a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v4, v3, v5);
  if ( (unsigned int)IsProcessDwm(CurrentProcess) )
  {
    if ( a1 != gbScreenCaptureSoftwareCursorEnabled )
    {
      ChangeComposableCursor(a1);
      gbScreenCaptureSoftwareCursorEnabled = a1;
    }
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9, v10);
  return v2;
}
