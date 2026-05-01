/*
 * XREFs of ?UnboostShellPriority@UwpWindowEventDispatcher@@UEAAXXZ @ 0x18001F280
 * Callers:
 *     <none>
 * Callees:
 *     ??$ShellForegroundBoosted@_N@ViewManagerInteropTraceLogging@@SAX$$QEA_N@Z @ 0x18001EA4C (--$ShellForegroundBoosted@_N@ViewManagerInteropTraceLogging@@SAX$$QEA_N@Z.c)
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x18001F798 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 */

void __fastcall UwpWindowEventDispatcher::UnboostShellPriority(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v1; // rdi
  char *Ptr; // rax
  HANDLE CurrentProcess; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = this + 59;
  AcquireSRWLockExclusive(this + 59);
  Ptr = (char *)this[61].Ptr;
  if ( Ptr )
  {
    this[61].Ptr = Ptr - 1;
    ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>(&this[61]);
    if ( !this[61].Ptr )
    {
      CurrentProcess = GetCurrentProcess();
      ShellForegroundBoostProcess(CurrentProcess, 0LL);
      v5 = 0;
      ViewManagerInteropTraceLogging::ShellForegroundBoosted<bool>(&v5);
    }
  }
  if ( v1 )
    ReleaseSRWLockExclusive(v1);
}
