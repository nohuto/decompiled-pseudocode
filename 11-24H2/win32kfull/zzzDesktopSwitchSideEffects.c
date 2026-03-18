/*
 * XREFs of zzzDesktopSwitchSideEffects @ 0x1401E8478
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401A9A08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     xxxSwitchDesktop @ 0x1401F69E4 (xxxSwitchDesktop.c)
 * Callees:
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     ?InterQueueMsgCleanup@@YAXK@Z @ 0x1401E851C (-InterQueueMsgCleanup@@YAXK@Z.c)
 */

LONG_PTR zzzDesktopSwitchSideEffects()
{
  unsigned int v0; // ecx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx
  LONG_PTR result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagWND *v10; // rdx

  ForceResetMouseButtonsDownState();
  InterQueueMsgCleanup(v0);
  *(_QWORD *)(W32GetUserSessionState(v2, v1) + 18896) = 0LL;
  result = W32GetUserSessionState(v4, v3);
  if ( *(_QWORD *)(result + 19200) )
  {
    result = W32GetUserSessionState(v7, v6);
    v9 = *(_QWORD *)(result + 19200);
    if ( *(_QWORD *)(v9 + 8) )
    {
      result = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v8) + 19200) + 8LL);
      v10 = *(struct tagWND **)(result + 24);
      if ( v10 )
      {
        result = *((_QWORD *)v10 + 5);
        if ( (*(_BYTE *)(result + 31) & 8) != 0 )
          return SetOrClrWF(0, v10, 0xF08u, 1);
      }
    }
  }
  return result;
}
