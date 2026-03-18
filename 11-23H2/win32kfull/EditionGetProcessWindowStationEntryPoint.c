/*
 * XREFs of EditionGetProcessWindowStationEntryPoint @ 0x1C0081980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EditionGetProcessWindowStationEntryPoint(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  EnterSharedCrit(a1, a2, a3);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  if ( CurrentProcessWin32Process )
  {
    v6 = -*(_QWORD *)CurrentProcessWin32Process;
    v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    CurrentProcessWin32Process &= v8;
  }
  if ( a1 )
    *a1 = *(_QWORD *)(CurrentProcessWin32Process + 672);
  return UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
}
