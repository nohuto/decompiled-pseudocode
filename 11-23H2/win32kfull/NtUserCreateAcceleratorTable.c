/*
 * XREFs of NtUserCreateAcceleratorTable @ 0x1C008A030
 * Callers:
 *     <none>
 * Callees:
 *     _CreateAcceleratorTable @ 0x1C008A0F4 (_CreateAcceleratorTable.c)
 *     UserSetLastError @ 0x1C00EDA4C (UserSetLastError.c)
 */

__int64 __fastcall NtUserCreateAcceleratorTable(void *Src, int a2)
{
  unsigned __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 CurrentProcessWow64Process; // rax
  __int64 *AcceleratorTable; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx

  v2 = a2;
  EnterCrit(0LL, 0LL);
  if ( (unsigned int)(v2 - 1) > 0x7FFE )
  {
    v13 = 0LL;
    UserSetLastError(87LL);
  }
  else
  {
    if ( v2 > 0x2AAAAAAAAAAAAAAALL )
      ExRaiseAccessViolation();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v5, v4, v6);
    ProbeForRead(Src, 6 * v2, CurrentProcessWow64Process != 0 ? 1 : 4);
    AcceleratorTable = (__int64 *)CreateAcceleratorTable(Src, (unsigned int)(6 * v2));
    v13 = 0LL;
    if ( AcceleratorTable )
      v13 = *AcceleratorTable;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v13;
}
