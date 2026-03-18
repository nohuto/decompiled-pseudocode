/*
 * XREFs of NtUserRegisterTouchHitTestingWindow @ 0x1401D7040
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048610 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     _SetTargetingWindowValue @ 0x1401D70C8 (_SetTargetingWindowValue.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x140291AF0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 */

__int64 __fastcall NtUserRegisterTouchHitTestingWindow(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rdi

  EnterCrit(0LL, 0LL);
  v4 = ValidateReceivingHwnd(a1, 1LL);
  v7 = 0;
  v8 = v4;
  if ( v4 )
  {
    if ( PtiCurrent(v6, v5) == *(struct tagTHREADINFO **)(v4 + 16) )
      v7 = SetTargetingWindowValue(v8, a2);
    else
      UserSetLastError(5);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
