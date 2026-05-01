/*
 * XREFs of ?HandleHotkey@CVirtualDesktopHotkeyHandler@@UEAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18055A4C0
 * Callers:
 *     ?HandleHotkey@CVirtualDesktopHotkeyHandler@@W7EAAJW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x18055A5A0 (-HandleHotkey@CVirtualDesktopHotkeyHandler@@W7EAAJW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MoveForegroundAppInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x18055A954 (-MoveForegroundAppInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection.c)
 *     ?_AddDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x18055AAF0 (-_AddDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ.c)
 *     ?_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z @ 0x18055AD24 (-_CycleInDirection@CVirtualDesktopHotkeyHandler@@AEAAJW4VirtualDesktopSwitchDirection@@@Z.c)
 *     ?_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ @ 0x18055AFC4 (-_RemoveDesktop@CVirtualDesktopHotkeyHandler@@AEAAJXZ.c)
 */

__int64 __fastcall CVirtualDesktopHotkeyHandler::HandleHotkey(CVirtualDesktopHotkeyHandler *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v8; // ebx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2 - 36;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 )
        {
          v6 = v5 - 70;
          if ( v6 )
          {
            if ( v6 != 1 )
              return 2147500033LL;
            v8 = CVirtualDesktopHotkeyHandler::MoveForegroundAppInDirection(a1, 1LL);
            if ( v8 < 0 )
            {
              v9 = 68LL;
LABEL_21:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)v9,
                (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeyhandler.cpp",
                (const char *)(unsigned int)v8);
              return (unsigned int)v8;
            }
          }
          else
          {
            v8 = CVirtualDesktopHotkeyHandler::MoveForegroundAppInDirection(a1, 0LL);
            if ( v8 < 0 )
            {
              v9 = 64LL;
              goto LABEL_21;
            }
          }
          return 0LL;
        }
        v8 = CVirtualDesktopHotkeyHandler::_RemoveDesktop(a1);
        if ( v8 < 0 )
        {
          v9 = 73LL;
          goto LABEL_21;
        }
      }
      else
      {
        v8 = CVirtualDesktopHotkeyHandler::_AddDesktop(a1);
        if ( v8 < 0 )
        {
          v9 = 71LL;
          goto LABEL_21;
        }
      }
    }
    else
    {
      v8 = CVirtualDesktopHotkeyHandler::_CycleInDirection(a1, 1LL);
      if ( v8 < 0 )
      {
        v9 = 61LL;
        goto LABEL_21;
      }
    }
  }
  else
  {
    v8 = CVirtualDesktopHotkeyHandler::_CycleInDirection(a1, 0LL);
    if ( v8 < 0 )
    {
      v9 = 59LL;
      goto LABEL_21;
    }
  }
  return (unsigned int)v8;
}
