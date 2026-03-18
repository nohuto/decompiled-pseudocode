/*
 * XREFs of EditionGetThreadDesktopEntryPoint @ 0x1401944D0
 * Callers:
 *     <none>
 * Callees:
 *     _GetThreadDesktop @ 0x140194510 (_GetThreadDesktop.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall EditionGetThreadDesktopEntryPoint(unsigned int a1)
{
  __int64 ThreadDesktop; // rbx
  __int64 v3; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v5, 1LL);
  ThreadDesktop = GetThreadDesktop(a1);
  UserSessionSwitchLeaveCrit(v3);
  return ThreadDesktop;
}
