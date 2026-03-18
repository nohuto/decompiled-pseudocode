/*
 * XREFs of NtUserSetDoubleClickTime @ 0x14029D830
 * Callers:
 *     <none>
 * Callees:
 *     _SetDoubleClickTime @ 0x140214894 (_SetDoubleClickTime.c)
 */

__int64 __fastcall NtUserSetDoubleClickTime(unsigned int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx

  EnterCrit(0LL, 0LL);
  v2 = (int)SetDoubleClickTime(a1);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
