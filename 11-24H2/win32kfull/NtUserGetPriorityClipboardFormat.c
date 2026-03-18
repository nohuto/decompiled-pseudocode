/*
 * XREFs of NtUserGetPriorityClipboardFormat @ 0x1401FD0A0
 * Callers:
 *     <none>
 * Callees:
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     _GetPriorityClipboardFormat @ 0x1401FD150 (_GetPriorityClipboardFormat.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028A53C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 */

__int64 __fastcall NtUserGetPriorityClipboardFormat(volatile void *Address, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v8; // rcx
  unsigned int PriorityClipboardFormat; // [rsp+28h] [rbp-20h]
  char v11; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  if ( v2 > 0x3FFFFFFFFFFFFFFFLL )
    ExRaiseAccessViolation();
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4, v6);
  ProbeForRead(Address, 4 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
  PriorityClipboardFormat = GetPriorityClipboardFormat(Address, (unsigned int)v2);
  UserSessionSwitchLeaveCrit(v8);
  return PriorityClipboardFormat;
}
