/*
 * XREFs of NtUserGetKeyboardLayoutList @ 0x1401102E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140023070 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x1400BBEB4 (SetLastNtError.c)
 *     _GetKeyboardLayoutList @ 0x14011036C (_GetKeyboardLayoutList.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x140198C14 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetKeyboardLayoutList(unsigned int a1, volatile void *a2)
{
  __int64 v3; // rbx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int KeyboardLayoutList; // ebx
  char v7; // [rsp+60h] [rbp+18h] BYREF

  v3 = a1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v7, 1LL);
  if ( a2 )
  {
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(a2, 8 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  }
  else
  {
    LODWORD(v3) = 0;
  }
  KeyboardLayoutList = GetKeyboardLayoutList((unsigned int)v3, a2);
  UserSessionSwitchLeaveCritWithNonPaged();
  return KeyboardLayoutList;
}
