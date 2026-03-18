/*
 * XREFs of NtUserGetCursorPos @ 0x1400934C0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x14009350C (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetCursorPos(struct tagPOINT *a1, unsigned int a2)
{
  __int64 CursorPos; // rbx
  char v6; // [rsp+40h] [rbp+18h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v6, 1LL);
  CursorPos = (int)xxxGetCursorPos(a1, a2);
  UserSessionSwitchLeaveCrit();
  return CursorPos;
}
