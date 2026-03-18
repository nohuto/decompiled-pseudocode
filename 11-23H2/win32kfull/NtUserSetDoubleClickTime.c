/*
 * XREFs of NtUserSetDoubleClickTime @ 0x1C01DB170
 * Callers:
 *     <none>
 * Callees:
 *     _SetDoubleClickTime @ 0x1C00D801C (_SetDoubleClickTime.c)
 */

__int64 __fastcall NtUserSetDoubleClickTime(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterCrit(0LL, 0LL);
  v5 = (int)SetDoubleClickTime(a1, v2, v3, v4);
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v5;
}
