/*
 * XREFs of NtUserModifyWindowTouchCapability @ 0x1401FC410
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _SetTouchWindowFlags @ 0x140269E44 (_SetTouchWindowFlags.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserModifyWindowTouchCapability(__int64 a1, int a2, int a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 UserSessionState; // rax
  int v15; // ecx

  EnterCrit(0LL, 0LL);
  v6 = ValidateReceivingHwnd(a1, 1LL);
  v9 = 0;
  v10 = v6;
  if ( v6 )
  {
    if ( (a2 & 0xFFFFFFFC) != 0 )
    {
      v15 = 1004;
    }
    else
    {
      if ( PtiCurrent(v8, v7) == *(struct tagTHREADINFO **)(v6 + 16) )
      {
        if ( a3 )
        {
          v9 = SetTouchWindowFlags(v10, a2 | 0x10000u);
        }
        else
        {
          UserSessionState = W32GetUserSessionState(v13, v12);
          InternalRemoveProp(v10, *(unsigned __int16 *)(UserSessionState + 41410), 1u);
          v9 = 1;
        }
        goto LABEL_2;
      }
      v15 = 5;
    }
    UserSetLastError(v15);
  }
LABEL_2:
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
