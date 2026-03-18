/*
 * XREFs of NtUserPostQuitMessage @ 0x1C0072160
 * Callers:
 *     <none>
 * Callees:
 *     IPostQuitMessage @ 0x1C00721A8 (IPostQuitMessage.c)
 */

__int64 __fastcall NtUserPostQuitMessage(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  EnterCrit(0LL, 0LL);
  v2 = (int)IPostQuitMessage(gptiCurrent, a1);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v2;
}
