/*
 * XREFs of ClearPwndDceLists @ 0x14019CEF8
 * Callers:
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 * Callees:
 *     ?_ClearPwndDceList@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x14019CF88 (-_ClearPwndDceList@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ClearPwndDceLists(struct _LIST_ENTRY *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  GreLockVisRgn(*(_QWORD *)(*(_QWORD *)(UserSessionState + 57008) + 48LL));
  _ClearPwndDceList(a1 + 20, 0x68uLL);
  _ClearPwndDceList(a1 + 21, 0x78uLL);
  _ClearPwndDceList(a1 + 22, 0x88uLL);
  v6 = W32GetUserSessionState(v5, v4);
  return GreUnlockVisRgn(*(_QWORD *)(*(_QWORD *)(v6 + 57008) + 48LL));
}
