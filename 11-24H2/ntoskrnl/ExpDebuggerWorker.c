/*
 * XREFs of ExpDebuggerWorker @ 0x140B79F70
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1402CB2F0 (DbgPrintEx.c)
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140321EC0 (KiUnstackDetachProcess.c)
 *     MmGetDefaultPagePriority @ 0x14047E830 (MmGetDefaultPagePriority.c)
 *     DbgBreakPointWithStatus @ 0x1404FC810 (DbgBreakPointWithStatus.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14067FD28 (MmDbgMarkPfnModifiedWorker.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     EtwWmitraceWorker @ 0x1407AC83C (EtwWmitraceWorker.c)
 *     PsGetNextProcess @ 0x1408EEB70 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x140938BD4 (PsTerminateProcess.c)
 *     MmPrefetchVirtualMemory @ 0x140953128 (MmPrefetchVirtualMemory.c)
 *     PsQuitNextProcessThread @ 0x140A6C570 (PsQuitNextProcessThread.c)
 */

void ExpDebuggerWorker()
{
  _KPROCESS *v0; // rsi
  __int64 v1; // rbp
  char v2; // r14
  char DefaultPagePriority; // al
  int v4; // ebx
  __int64 *v5; // rdi
  __int64 *v6; // rcx
  __int64 *NextProcess; // rax
  __int64 v8; // r9
  int v9; // eax
  unsigned __int64 v10; // [rsp+20h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-50h]
  __int128 v12; // [rsp+30h] [rbp-48h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h]
  __int128 v14; // [rsp+50h] [rbp-28h]

  v0 = (_KPROCESS *)ExpDebuggerProcessAttach;
  v1 = ExpDebuggerProcessKill;
  v2 = EtwWmitraceWork;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  DefaultPagePriority = MmGetDefaultPagePriority();
  v10 = ExpDebuggerPageIn;
  v11 = 1LL;
  ExpDebuggerProcessKill = 0LL;
  v4 = DefaultPagePriority & 7 | 0xB8;
  ExpDebuggerProcessAttach = 0LL;
  ExpDebuggerPageIn = 0LL;
  _InterlockedExchange(&ExpDebuggerWork, 0);
  MmDbgMarkPfnModifiedWorker();
  v5 = 0LL;
  if ( v0 || v1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v6);
      v5 = NextProcess;
      if ( !NextProcess )
        break;
      if ( NextProcess == (__int64 *)v0 )
      {
        KiStackAttachProcess(v0, 0, (__int64)&v12);
        goto LABEL_12;
      }
      v6 = NextProcess;
      if ( NextProcess == (__int64 *)v1 )
      {
        PsTerminateProcess(NextProcess);
        goto LABEL_24;
      }
    }
    v8 = (__int64)v0;
    if ( !v0 )
      v8 = v1;
    DbgPrintEx(0, 0, "EX debug work: Unable to find process %p\n", v8, v10, v11, v12, v13, v14);
  }
LABEL_12:
  if ( v10 )
  {
    v9 = MmPrefetchVirtualMemory(-(__int64)(v10 < 0xFFFF800000000000uLL), 1uLL, (unsigned __int64)&v10, v4);
    if ( v9 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v9);
  }
  if ( v2 )
    EtwWmitraceWorker();
  if ( v0 || v1 || v10 || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v5 )
  {
    KiUnstackDetachProcess((__int64)&v12, 0);
LABEL_24:
    PsQuitNextProcessThread(v5);
  }
}
