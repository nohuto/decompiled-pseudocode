/*
 * XREFs of _anonymous_namespace_::GetStore @ 0x1401CFC1C
 * Callers:
 *     FeedbackClearWindowSetting @ 0x140263F64 (FeedbackClearWindowSetting.c)
 * Callees:
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 */

__int64 *__fastcall anonymous_namespace_::GetStore(__int64 *a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  a1[1] = 0LL;
  *a1 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  *((_DWORD *)a1 + 2) = GetProp(a2, *(unsigned __int16 *)(UserSessionState + 41414), 1u);
  return a1;
}
