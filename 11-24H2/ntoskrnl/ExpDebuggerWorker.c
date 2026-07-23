/*
 * XREFs of ExpDebuggerWorker @ 0x140B7BF70
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140275B40 (DbgPrintEx.c)
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     MmGetDefaultPagePriority @ 0x140479730 (MmGetDefaultPagePriority.c)
 *     DbgBreakPointWithStatus @ 0x1404FA0D0 (DbgBreakPointWithStatus.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140680F28 (MmDbgMarkPfnModifiedWorker.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     EtwWmitraceWorker @ 0x1407ACD0C (EtwWmitraceWorker.c)
 *     PsGetNextProcess @ 0x1408603A0 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x1408F32A4 (PsTerminateProcess.c)
 *     MmPrefetchVirtualMemory @ 0x140936AD8 (MmPrefetchVirtualMemory.c)
 *     PsQuitNextProcessThread @ 0x140A65AD0 (PsQuitNextProcessThread.c)
 */

void ExpDebuggerWorker()
{
  _KPROCESS *v0; // rsi
  __int64 v1; // rbp
  char v2; // r14
  char DefaultPagePriority; // al
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *v11; // rdi
  __int64 *v12; // rcx
  __int64 *NextProcess; // rax
  __int64 v14; // r9
  int v15; // eax
  unsigned __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h]
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-38h]
  __int128 v20; // [rsp+50h] [rbp-28h]

  v0 = (_KPROCESS *)ExpDebuggerProcessAttach;
  v1 = ExpDebuggerProcessKill;
  v2 = EtwWmitraceWork;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  DefaultPagePriority = MmGetDefaultPagePriority();
  v16 = ExpDebuggerPageIn;
  v17 = 1LL;
  ExpDebuggerProcessKill = 0LL;
  v4 = DefaultPagePriority & 7 | 0xB8;
  ExpDebuggerProcessAttach = 0LL;
  ExpDebuggerPageIn = 0LL;
  _InterlockedExchange(&ExpDebuggerWork, 0);
  MmDbgMarkPfnModifiedWorker(v6, v5, v7, v8);
  v11 = 0LL;
  if ( v0 || v1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      NextProcess = PsGetNextProcess(v12);
      v11 = NextProcess;
      if ( !NextProcess )
        break;
      if ( NextProcess == (__int64 *)v0 )
      {
        KiStackAttachProcess(v0, 0, (__int64)&v18);
        goto LABEL_12;
      }
      v12 = NextProcess;
      if ( NextProcess == (__int64 *)v1 )
      {
        PsTerminateProcess(NextProcess);
        goto LABEL_24;
      }
    }
    v14 = (__int64)v0;
    if ( !v0 )
      v14 = v1;
    DbgPrintEx(0, 0, "EX debug work: Unable to find process %p\n", v14, v16, v17, v18, v19, v20);
  }
LABEL_12:
  if ( v16 )
  {
    v15 = MmPrefetchVirtualMemory(-(__int64)(v16 < 0xFFFF800000000000uLL), 1uLL, (__int64)&v16, v4);
    if ( v15 < 0 )
      DbgPrintEx(0, 0, "EX page in: MmPrefetchVirtualMemory failed, 0x%08x\n", v15);
  }
  if ( v2 )
    EtwWmitraceWorker();
  if ( v0 || v1 || v16 || v2 )
    DbgBreakPointWithStatus(7u);
  if ( v11 )
  {
    KiUnstackDetachProcess((__int64)&v18, 0, v9, v10);
LABEL_24:
    PsQuitNextProcessThread(v11);
  }
}
