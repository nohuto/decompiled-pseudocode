/*
 * XREFs of VidSchiCompletePendingCommandInNodeHwQueue @ 0x1400190D4
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x140017660 (VidSchiSendToExecutionQueue.c)
 *     VidSchiResetEngine @ 0x140047318 (VidSchiResetEngine.c)
 *     VidSchiCompleteAllPendingCommand @ 0x140053138 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchDdiNotifyDpcWorker @ 0x14000779C (VidSchDdiNotifyDpcWorker.c)
 *     VidSchiProfilePerformanceTick @ 0x140015D90 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x140056340 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400B5584 (VidSchWaitForCompletionEvent.c)
 */

void __fastcall VidSchiCompletePendingCommandInNodeHwQueue(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r10
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r10
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // [rsp+48h] [rbp-C0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+68h] [rbp-A0h]
  _DWORD v20[20]; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v21[40]; // [rsp+C8h] [rbp-40h] BYREF
  char v22; // [rsp+178h] [rbp+70h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 3016) )
  {
    if ( a3 && *(_DWORD *)(a1 + 3016) > 1u )
    {
      memset(v21, 0, sizeof(v21));
      v6 = *(unsigned __int16 *)(a1 + 4);
      v21[8] |= 0x40u;
      v21[12] = v6;
      v21[5] = 1;
      *(_QWORD *)(a1 + 280) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(a1 + 240));
      while ( *(_DWORD *)(a1 + 3016) > 1u )
      {
        VidSchiProfilePerformanceTick(16, v4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
        VidSchWaitForCompletionEvent(v4, v21, 0xFFFFFFFFLL);
        VidSchiProfilePerformanceTick(17, v4, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    if ( *(_DWORD *)(a1 + 3016) )
    {
      v22 = 0;
      memset(v20, 0, sizeof(v20));
      v7 = *(unsigned __int16 *)(a1 + 4);
      v8 = *(_QWORD *)(a1 + 24);
      if ( *(_DWORD *)(a1 + 3024) )
      {
        v9 = *(unsigned int *)(a1 + 160);
        v20[2] = *(_DWORD *)(a1 + 160);
        v20[0] = 2;
        v20[3] = a2;
        v10 = *(_QWORD *)(v8 + 688);
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 760) )
          v10 += 8 * v7;
        v20[4] = *(unsigned __int16 *)(*(_QWORD *)v10 + 8LL);
        v11 = *(_QWORD *)(v8 + 688);
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 760) )
          v11 += 8 * v7;
        v20[5] = *(unsigned __int16 *)(*(_QWORD *)v11 + 6LL);
        WdLogSingleEntry4(4LL, a2, v9);
        WdLogGlobalForLineNumber = 462;
      }
      else
      {
        v20[0] = 1;
        v20[2] = a2;
        v12 = *(_QWORD *)(v8 + 688);
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 760) )
          v12 += 8 * v7;
        v13 = *(unsigned __int16 *)(*(_QWORD *)v12 + 8LL);
        v20[3] = *(unsigned __int16 *)(*(_QWORD *)v12 + 8LL);
        v14 = *(_QWORD *)(v8 + 688);
        if ( (unsigned int)v7 < *(_DWORD *)(v8 + 760) )
          v14 += 8 * v7;
        v20[4] = *(unsigned __int16 *)(*(_QWORD *)v14 + 6LL);
        WdLogSingleEntry3(4LL, a2, v13, v20[4]);
        WdLogGlobalForLineNumber = 475;
      }
      v15 = *(unsigned int *)(v4 + 32);
      v16 = *(_QWORD *)(v4 + 24);
      v17 = *(_QWORD *)(v4 + 8);
      LockHandle.LockQueue.Next = (struct _KSPIN_LOCK_QUEUE *volatile)v20;
      DpSynchronizeExecution(v16, VidSchiCallNotifyInterruptAtISR, &v17, v15, &v22);
    }
  }
  *(_OWORD *)&LockHandle.LockQueue.Lock = 0LL;
  v19 = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 2008), (PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
  VidSchDdiNotifyDpcWorker(*(_QWORD *)(v4 + 8), 0);
  KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)&LockHandle.LockQueue.Lock);
}
