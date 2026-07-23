/*
 * XREFs of MiFlushAllPages @ 0x1402653D4
 * Callers:
 *     MmFlushAllPagesEx @ 0x14067B574 (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x140B6F414 (MmPerformMemoryListCommand.c)
 * Callees:
 *     MiFlushAllPagesWorker @ 0x140263A34 (MiFlushAllPagesWorker.c)
 *     KiUnstackDetachProcess @ 0x1402CAA50 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x1402E1C90 (KeStackAttachProcess.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403C752C (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall MiFlushAllPages(__int64 a1, char a2, unsigned int a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // rbp
  __int64 result; // rax
  struct _KPROCESS *v8; // rbx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  v5 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  v6 = 10000000LL * a3;
  result = MiFlushAllPagesWorker(a1, MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0], v6, 0LL);
  if ( a2 )
  {
    result = *(unsigned int *)(a1 + 1204);
    if ( (_DWORD)result != -1 )
    {
      v8 = *(struct _KPROCESS **)(a1 + 1696);
      KeStackAttachProcess(v8, &ApcState);
      MiEmptyWorkingSetPrivatePagesByVa(&v8[2].ReadyListHead.Blink, 0LL);
      KiUnstackDetachProcess(&ApcState, 0LL);
      return MiFlushAllPagesWorker(a1, v5, v6, 0LL);
    }
  }
  return result;
}
