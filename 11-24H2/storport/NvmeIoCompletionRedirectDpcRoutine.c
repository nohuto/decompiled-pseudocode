/*
 * XREFs of NvmeIoCompletionRedirectDpcRoutine @ 0x14011C6E0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

void __fastcall NvmeIoCompletionRedirectDpcRoutine(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        char *SystemArgument1,
        PVOID SystemArgument2)
{
  union _SLIST_HEADER *v5; // r14
  __int64 CurrentProcessorNumber; // rbp
  PSLIST_ENTRY v7; // rax
  IRP *v8; // rdi
  struct _SLIST_ENTRY *Next; // rsi
  _QWORD *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v14; // rcx
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v16; // rcx
  __int64 v17; // rcx
  struct _KDPC_WATCHDOG_INFORMATION WatchdogInformation; // [rsp+20h] [rbp-38h] BYREF

  v5 = (union _SLIST_HEADER *)(SystemArgument1 + 192);
  CurrentProcessorNumber = KeGetCurrentProcessorNumberEx(0LL);
  _InterlockedExchange((volatile __int32 *)SystemArgument1 + 64, 0);
  v7 = ExpInterlockedFlushSList((PSLIST_HEADER)SystemArgument1 + 12);
  if ( !v7 )
    goto LABEL_18;
  do
  {
    do
    {
      v8 = (IRP *)&v7[-8];
      Next = v7->Next;
      v10 = *(_QWORD **)(*((_QWORD *)&v7[3].Next + 1) + 24LL);
      if ( FeatureFixFUAForReadIoPerf && IoGetIoPriorityHint(v8) > IoPriorityLow )
        _InterlockedDecrement(*(volatile signed __int32 **)(v10[85] + 8 * CurrentProcessorNumber));
      IofCompleteRequest(v8, 0);
      v11 = v10[16];
      if ( !*(_BYTE *)v11
        && _InterlockedExchangeAdd(
             *(volatile signed __int32 **)(*(_QWORD *)(v11 + 24) + 8 * CurrentProcessorNumber),
             0xFFFFFFFF) == 1 )
      {
        v12 = *(_QWORD *)(v10[2] + 128LL);
        v13 = v10[16];
        if ( v13 )
        {
          if ( *(_QWORD *)(v13 + 8) )
          {
            v14 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v13 + 40);
            if ( v14 )
            {
              if ( ExAcquireRundownProtectionCacheAware(v14) )
              {
                PoFxIdleComponent(**(_QWORD **)(v10[16] + 8LL), 0LL, 2LL);
                v15 = v10[16];
                if ( v15 )
                {
                  if ( *(_QWORD *)(v15 + 8) )
                  {
                    v16 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(v15 + 40);
                    if ( v16 )
                      ExReleaseRundownProtectionCacheAware(v16);
                  }
                }
              }
            }
          }
        }
        v17 = *(_QWORD *)(v12 + 160);
        if ( *(_BYTE *)v17 == 1 )
          PoFxIdleComponent(**(_QWORD **)(v17 + 8), 0LL, 2LL);
      }
      v7 = Next;
    }
    while ( Next );
LABEL_18:
    memset(&WatchdogInformation, 0, sizeof(WatchdogInformation));
    if ( KeQueryDpcWatchdogInformation(&WatchdogInformation) >= 0
      && (WatchdogInformation.DpcWatchdogLimit
       && 100 * (unsigned __int64)WatchdogInformation.DpcWatchdogCount < 5
                                                                       * (unsigned __int64)WatchdogInformation.DpcWatchdogLimit
       || WatchdogInformation.DpcTimeLimit
       && 100 * (unsigned __int64)WatchdogInformation.DpcTimeCount < 10
                                                                   * (unsigned __int64)WatchdogInformation.DpcTimeLimit) )
    {
      break;
    }
    v7 = ExpInterlockedFlushSList(v5);
  }
  while ( v7 );
}
