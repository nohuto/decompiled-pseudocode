/*
 * XREFs of NtUserGetPriorityClipboardFormat @ 0x1C01D2B20
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 *     _GetPriorityClipboardFormat @ 0x1C01FD278 (_GetPriorityClipboardFormat.c)
 */

__int64 __fastcall NtUserGetPriorityClipboardFormat(volatile void *Address, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int PriorityClipboardFormat; // [rsp+28h] [rbp-20h]

  v3 = (int)a2;
  EnterSharedCrit(Address, a2, a3);
  if ( v3 > 0x3FFFFFFFFFFFFFFFLL )
    ExRaiseAccessViolation();
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v6, v5, v7);
  ProbeForRead(Address, 4 * v3, CurrentProcessWow64Process != 0 ? 1 : 4);
  PriorityClipboardFormat = GetPriorityClipboardFormat(Address, (unsigned int)v3);
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return PriorityClipboardFormat;
}
