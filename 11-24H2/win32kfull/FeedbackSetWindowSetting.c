/*
 * XREFs of FeedbackSetWindowSetting @ 0x1401BD3B8
 * Callers:
 *     NtUserSetWindowFeedbackSetting @ 0x1401BD250 (NtUserSetWindowFeedbackSetting.c)
 * Callees:
 *     InternalSetProp @ 0x140031458 (InternalSetProp.c)
 *     _GetProp @ 0x1400639A0 (_GetProp.c)
 */

__int64 __fastcall FeedbackSetWindowSetting(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // edi
  __int64 UserSessionState; // rax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // esi
  __int64 v10; // rdx

  v4 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v7 = ~(1 << v4) & (GetProp(a1, *(unsigned __int16 *)(UserSessionState + 41414), 1u) | (0x10000 << v4));
  v9 = v7 | (1 << v4);
  v10 = *(unsigned __int16 *)(W32GetUserSessionState(v4, v8) + 41414);
  if ( !a3 )
    v9 = v7;
  InternalSetProp(a1, v10, v9, 5u);
  return 1LL;
}
