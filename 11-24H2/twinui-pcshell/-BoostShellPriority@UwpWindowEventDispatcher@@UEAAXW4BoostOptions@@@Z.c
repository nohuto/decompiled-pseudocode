/*
 * XREFs of ?BoostShellPriority@UwpWindowEventDispatcher@@UEAAXW4BoostOptions@@@Z @ 0x18001F6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ShellForegroundBoosted@_N@ViewManagerInteropTraceLogging@@SAX$$QEA_N@Z @ 0x18001EA4C (--$ShellForegroundBoosted@_N@ViewManagerInteropTraceLogging@@SAX$$QEA_N@Z.c)
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x18001F798 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 */

void __fastcall UwpWindowEventDispatcher::BoostShellPriority(RTL_SRWLOCK *a1, int a2)
{
  RTL_SRWLOCK *v2; // rsi
  HANDLE CurrentProcess; // rax
  char v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1 + 59;
  AcquireSRWLockExclusive(a1 + 59);
  if ( !a2 && ++a1[61].Ptr == (PVOID)1 )
  {
    CurrentProcess = GetCurrentProcess();
    ShellForegroundBoostProcess(CurrentProcess, 1LL);
    v6 = 1;
    ViewManagerInteropTraceLogging::ShellForegroundBoosted<bool>(&v6);
  }
  ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>(&a1[61]);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}
