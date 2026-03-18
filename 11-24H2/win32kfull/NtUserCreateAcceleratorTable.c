/*
 * XREFs of NtUserCreateAcceleratorTable @ 0x1401E2400
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     SetLastNtError @ 0x1401067E0 (SetLastNtError.c)
 *     _CreateAcceleratorTable @ 0x1401E24C8 (_CreateAcceleratorTable.c)
 */

__int64 __fastcall NtUserCreateAcceleratorTable(volatile void *a1, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 *AcceleratorTable; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx

  v2 = a2;
  EnterCrit(0LL, 0LL);
  if ( (unsigned int)(v2 - 1) > 0x7FFE )
  {
    v9 = 0LL;
    UserSetLastError(87);
  }
  else
  {
    if ( v2 > 0x2AAAAAAAAAAAAAAALL )
      ExRaiseAccessViolation();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v4, v3, v5);
    ProbeForRead(a1, 6 * v2, 2 - (CurrentProcessWow64Process != 0));
    AcceleratorTable = (__int64 *)CreateAcceleratorTable(a1, (unsigned int)(6 * v2));
    v9 = 0LL;
    if ( AcceleratorTable )
      v9 = *AcceleratorTable;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v9;
}
