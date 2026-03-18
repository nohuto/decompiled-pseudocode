/*
 * XREFs of MmPrefetchForCacheManager @ 0x1409561A4
 * Callers:
 *     CcFetchDataForRead @ 0x1402820F0 (CcFetchDataForRead.c)
 *     CcAsyncReadPrefetch @ 0x140461E40 (CcAsyncReadPrefetch.c)
 *     CcPerformReadAhead @ 0x1404DDEB0 (CcPerformReadAhead.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiReturnCcAccessLog @ 0x140379C6C (MiReturnCcAccessLog.c)
 *     MiReleaseReadListResources @ 0x140956000 (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x140956378 (MiPfPrepareSequentialReadList.c)
 *     MiPfExecuteReadList @ 0x140956C3C (MiPfExecuteReadList.c)
 *     MiGetCcAccessLog @ 0x140956DF4 (MiGetCcAccessLog.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmPrefetchForCacheManager(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int64 a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7,
        PVOID *a8)
{
  __int64 CcAccessLog; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int v13; // ebp
  __int64 v14; // r12
  PVOID *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  PVOID P; // [rsp+80h] [rbp+8h] BYREF

  P = 0LL;
  CcAccessLog = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = a5;
  v14 = **(_QWORD **)(a1 + 40);
  if ( dword_140E3D02C && a5 >= dword_140E3D030 )
    CcAccessLog = MiGetCcAccessLog(a1, a1, a4 >> 12);
  if ( (int)MiPfPrepareSequentialReadList(CcAccessLog, v14, a2, a3, a4, v13, -1, 0LL, (__int64)&P) >= 0 && P )
  {
    v15 = a8;
    *((_DWORD *)P + 52) = 1;
    if ( !*v15 )
      --CurrentThread->SpecialApcDisable;
    if ( (int)MiPfPutPagesInTransition((__int64)P, 0, 1, -1, 0LL) >= 0 && *((PVOID *)P + 28) != (char *)P + 224 )
    {
      if ( CcAccessLog )
        MiReturnCcAccessLog((__int64)&MiSystemPartition, CcAccessLog, 1);
      MiPfExecuteReadList(P, 1LL, 0xFFFFFFFFLL, a7);
      result = 1LL;
      *(_QWORD *)P = *v15;
      *v15 = P;
      return result;
    }
    if ( !*v15
      && CurrentThread->SpecialApcDisable++ == -1
      && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v17, v16);
    }
    MiReleaseReadListResources((__int64)P);
    ExFreePoolWithTag(P, 0);
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog((__int64)&MiSystemPartition, CcAccessLog, 0);
  return 0LL;
}
