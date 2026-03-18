/*
 * XREFs of MmPrefetchForCacheManager @ 0x1409C9A84
 * Callers:
 *     CcFetchDataForRead @ 0x14025BCE0 (CcFetchDataForRead.c)
 *     CcAsyncReadPrefetch @ 0x1404627C8 (CcAsyncReadPrefetch.c)
 *     CcPerformReadAhead @ 0x1404DE7C0 (CcPerformReadAhead.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiReturnCcAccessLog @ 0x1403C3A8C (MiReturnCcAccessLog.c)
 *     MiReleaseReadListResources @ 0x1409C985C (MiReleaseReadListResources.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 *     MiPfExecuteReadList @ 0x1409CA528 (MiPfExecuteReadList.c)
 *     MiGetCcAccessLog @ 0x1409CA6E0 (MiGetCcAccessLog.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 result; // rax
  PVOID P; // [rsp+80h] [rbp+8h] BYREF

  P = 0LL;
  CcAccessLog = 0LL;
  CurrentThread = KeGetCurrentThread();
  v13 = a5;
  v14 = **(_QWORD **)(a1 + 40);
  if ( dword_140E3CDEC && a5 >= dword_140E3CDF0 )
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
      && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    MiReleaseReadListResources((__int64)P);
    ExFreePoolWithTag(P, 0);
  }
  if ( CcAccessLog )
    MiReturnCcAccessLog((__int64)&MiSystemPartition, CcAccessLog, 0);
  return 0LL;
}
