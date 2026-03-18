/*
 * XREFs of MiFlushAllPages @ 0x1404C7844
 * Callers:
 *     MmFlushAllPagesEx @ 0x14066EAF4 (MmFlushAllPagesEx.c)
 *     MmPerformMemoryListCommand @ 0x140B5EAC0 (MmPerformMemoryListCommand.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     MiFlushAllPagesWorker @ 0x1403A75B4 (MiFlushAllPagesWorker.c)
 *     MiEmptyWorkingSetPrivatePagesByVa @ 0x1403D8D10 (MiEmptyWorkingSetPrivatePagesByVa.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
      MiEmptyWorkingSetPrivatePagesByVa((__int64)&v8[2].ReadyListHead.Blink, 0);
      KiUnstackDetachProcess((__int64)&ApcState, 0LL);
      return MiFlushAllPagesWorker(a1, v5, v6, 0LL);
    }
  }
  return result;
}
