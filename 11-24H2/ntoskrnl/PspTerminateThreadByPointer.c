/*
 * XREFs of PspTerminateThreadByPointer @ 0x1408A7CB0
 * Callers:
 *     PspSystemThreadStartup @ 0x140487060 (PspSystemThreadStartup.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     NtTerminateThread @ 0x1408A7BD0 (NtTerminateThread.c)
 *     PspUserThreadStartup @ 0x1408FEA00 (PspUserThreadStartup.c)
 *     NtTerminateProcess @ 0x14093B030 (NtTerminateProcess.c)
 *     PspTerminateAllThreads @ 0x14094A964 (PspTerminateAllThreads.c)
 *     PsTerminateSystemThread @ 0x1409D8000 (PsTerminateSystemThread.c)
 *     PspSecureThreadStartup @ 0x140A94070 (PspSecureThreadStartup.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x140445660 (PsGetProcessServerSilo.c)
 *     KeRequestTerminationThread @ 0x140479818 (KeRequestTerminationThread.c)
 *     PspCatchCriticalBreak @ 0x140778EB8 (PspCatchCriticalBreak.c)
 *     PspExitThread @ 0x1408A7D90 (PspExitThread.c)
 */

__int64 __fastcall PspTerminateThreadByPointer(ULONG_PTR a1, unsigned int a2, char a3)
{
  __int64 v4; // rdi
  __int64 ProcessServerSilo; // rax

  v4 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 1440) & 0x20) != 0 && (*(_DWORD *)(v4 + 500) & 0x40000008) == 0 )
  {
    ProcessServerSilo = PsGetProcessServerSilo(v4);
    PspCatchCriticalBreak(
      (__int64)"Terminating critical thread 0x%p (in %s)\n",
      a1,
      (const char *)(v4 + 824),
      ProcessServerSilo,
      a2);
  }
  if ( a3 && (struct _KTHREAD *)a1 == KeGetCurrentThread() )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1440), 1u);
    PspExitThread(a2);
    __debugbreak();
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x400) != 0 )
    return 3221225506LL;
  if ( (*(_DWORD *)(v4 + 1532) & 1) != 0 )
    return 3221225659LL;
  if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 1440), 0) )
    *(_DWORD *)(a1 + 1496) = a2;
  KeRequestTerminationThread(a1);
  return 0LL;
}
