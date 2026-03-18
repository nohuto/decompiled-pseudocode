/*
 * XREFs of NtUserGetKeyboardType @ 0x140123530
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     _GetKeyboardType @ 0x140123568 (_GetKeyboardType.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetKeyboardType(unsigned int a1)
{
  __int64 KeyboardType; // rbx
  char v4; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v4, 1LL);
  KeyboardType = (int)GetKeyboardType(a1);
  UserSessionSwitchLeaveCritWithNonPaged();
  return KeyboardType;
}
