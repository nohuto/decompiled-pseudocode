/*
 * XREFs of _SetTargetingWindowValue @ 0x1401D70C8
 * Callers:
 *     NtUserRegisterTouchHitTestingWindow @ 0x1401D7040 (NtUserRegisterTouchHitTestingWindow.c)
 * Callees:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 */

__int64 __fastcall SetTargetingWindowValue(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 UserSessionState; // rax
  __int64 v6; // rax

  v2 = (int)a2;
  if ( (_DWORD)a2 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    return InternalSetProp(a1, *(unsigned __int16 *)(UserSessionState + 41412), v2, 5u);
  }
  else
  {
    v6 = W32GetUserSessionState(a1, a2);
    InternalRemoveProp(a1, *(unsigned __int16 *)(v6 + 41412), 1u);
    return 1LL;
  }
}
