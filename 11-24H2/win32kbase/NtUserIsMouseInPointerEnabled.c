/*
 * XREFs of NtUserIsMouseInPointerEnabled @ 0x14014DF30
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 NtUserIsMouseInPointerEnabled()
{
  __int64 v0; // rcx
  unsigned int v1; // ebx
  char v3; // [rsp+30h] [rbp+8h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v3, 1LL);
  v1 = (*(_DWORD *)(*((_QWORD *)PtiCurrent(v0) + 58) + 816LL) >> 2) & 1;
  UserSessionSwitchLeaveCritWithNonPaged();
  return v1;
}
