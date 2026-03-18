/*
 * XREFs of NtUserSetImeHotKey @ 0x1C007FB40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x1C007FBB4 (-SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z.c)
 */

__int64 __fastcall NtUserSetImeHotKey(unsigned int a1, unsigned int a2, unsigned int a3, HKL a4, unsigned int a5)
{
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9

  EnterCrit(0LL, 0LL);
  v9 = (int)SetImeHotKey(a1, a2, a3, a4, a5);
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return v9;
}
