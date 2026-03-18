/*
 * XREFs of NtUserGetKeyboardLayout @ 0x140023920
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     _GetKeyboardLayout @ 0x140023958 (_GetKeyboardLayout.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetKeyboardLayout(unsigned int a1)
{
  __int64 KeyboardLayout; // rbx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v4, 1LL);
  KeyboardLayout = GetKeyboardLayout(a1);
  UserSessionSwitchLeaveCritWithNonPaged();
  return KeyboardLayout;
}
