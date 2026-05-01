/*
 * XREFs of ?UnboostShellPriority@WindowEventDispatcher@@UEAAXXZ @ 0x180424A10
 * Callers:
 *     <none>
 * Callees:
 *     ??$ShellForegroundBoosted@_N@ViewManagerInteropTraceLogging@@SAX$$QEA_N@Z @ 0x18001EA4C (--$ShellForegroundBoosted@_N@ViewManagerInteropTraceLogging@@SAX$$QEA_N@Z.c)
 *     ??$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z @ 0x18001F798 (--$ShellPriorityChanged@AEA_K@ViewManagerInteropTraceLogging@@SAXAEA_K@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

void __fastcall WindowEventDispatcher::UnboostShellPriority(WindowEventDispatcher *this)
{
  __int64 v2; // rax
  HANDLE CurrentProcess; // rax
  char v4; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  wil::AcquireSRWLockExclusive(&v5, (RTL_SRWLOCK *)this + 57);
  v2 = *((_QWORD *)this + 59);
  if ( v2 )
  {
    *((_QWORD *)this + 59) = v2 - 1;
    ViewManagerInteropTraceLogging::ShellPriorityChanged<unsigned __int64 &>((int *)this + 118);
    if ( !*((_QWORD *)this + 59) )
    {
      CurrentProcess = GetCurrentProcess();
      ShellForegroundBoostProcess(CurrentProcess, 0LL);
      v4 = 0;
      ViewManagerInteropTraceLogging::ShellForegroundBoosted<bool>(&v4);
    }
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
}
