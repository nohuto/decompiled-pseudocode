/*
 * XREFs of MmPrefetchVirtualMemory @ 0x1409C69F8
 * Callers:
 *     MiProcessWsInSwapRanges @ 0x14045538C (MiProcessWsInSwapRanges.c)
 *     MmPrefetchVirtualAddresses @ 0x1409C6940 (MmPrefetchVirtualAddresses.c)
 *     PfpPrefetchPrivatePages @ 0x1409C6B5C (PfpPrefetchPrivatePages.c)
 *     ExpDebuggerWorker @ 0x140B69F70 (ExpDebuggerWorker.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x140289470 (KiUnstackDetachProcess.c)
 *     KeStackAttachProcess @ 0x140348CD0 (KeStackAttachProcess.c)
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 *     ObIsKernelHandle @ 0x14049C740 (ObIsKernelHandle.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 */

__int64 __fastcall MmPrefetchVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 a2, __int64 a3, int a4)
{
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // r14
  __int64 result; // rax
  PRKPROCESS v11; // rsi
  __int64 p_Blink; // r8
  unsigned int v13; // edi
  PRKPROCESS PROCESS; // [rsp+40h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-70h] BYREF

  v4 = 0;
  PROCESS = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  switch ( BugCheckParameter1 )
  {
    case 0uLL:
      v11 = PROCESS;
      p_Blink = 1LL;
      goto LABEL_8;
    case 0xFFFFFFFFFFFFFFFFuLL:
      v11 = CurrentThread->ApcState.Process;
LABEL_7:
      p_Blink = (__int64)&v11[2].ReadyListHead.Blink;
LABEL_8:
      v13 = MiPrefetchVirtualMemory(a2, a3, p_Blink, a4);
      if ( v4 )
        KiUnstackDetachProcess((__int64)&ApcState, 0LL);
      if ( BugCheckParameter1 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        if ( v11 )
          ObfDereferenceObjectWithTag(v11, 0x66506D4Du);
      }
      return v13;
    case 0xFFFFFFFFFFFFFFFDuLL:
      return 3221225659LL;
  }
  if ( !ObIsKernelHandle((HANDLE)BugCheckParameter1) )
    return 3221225711LL;
  result = ObpReferenceObjectByHandleWithTag(
             BugCheckParameter1,
             8,
             (__int64)PsProcessType,
             0,
             0x66506D4Du,
             &PROCESS,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    v11 = PROCESS;
    if ( CurrentThread->ApcState.Process != PROCESS )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      v4 = 1;
    }
    goto LABEL_7;
  }
  return result;
}
