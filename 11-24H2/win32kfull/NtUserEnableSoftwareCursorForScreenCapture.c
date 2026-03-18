/*
 * XREFs of NtUserEnableSoftwareCursorForScreenCapture @ 0x140194DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x14019552C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ChangeComposableCursor @ 0x14020E090 (ChangeComposableCursor.c)
 */

__int64 __fastcall NtUserEnableSoftwareCursorForScreenCapture(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  EnterCrit(0LL, 0LL);
  v2 = 0LL;
  if ( (unsigned int)IsCurrentProcessDwm() )
  {
    if ( a1 != *(_DWORD *)(W32GetUserSessionState(v4, v3) + 36352) )
    {
      ChangeComposableCursor(a1);
      *(_DWORD *)(W32GetUserSessionState(v6, v5) + 36352) = a1;
    }
    v2 = 1LL;
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
