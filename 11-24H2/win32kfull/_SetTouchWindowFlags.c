/*
 * XREFs of _SetTouchWindowFlags @ 0x140269E44
 * Callers:
 *     NtUserModifyWindowTouchCapability @ 0x1401FC410 (NtUserModifyWindowTouchCapability.c)
 * Callees:
 *     InternalRemoveProp @ 0x140031360 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 */

__int64 __fastcall SetTouchWindowFlags(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 UserSessionState; // rax

  v2 = (int)a2;
  if ( (_DWORD)a2 )
  {
    UserSessionState = W32GetUserSessionState(a1, a2);
    return InternalSetProp(a1, *(unsigned __int16 *)(UserSessionState + 41410), v2, 5u);
  }
  else
  {
    v4 = W32GetUserSessionState(a1, a2);
    InternalRemoveProp(a1, *(unsigned __int16 *)(v4 + 41410), 1u);
    return 1LL;
  }
}
