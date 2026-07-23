/*
 * XREFs of TpReleasePool @ 0x1800A06E0
 * Callers:
 *     TppPoolpDereferenceGlobalPool @ 0x18003DF80 (TppPoolpDereferenceGlobalPool.c)
 *     TppPoolpReferenceGlobalPool @ 0x180048D80 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18003DF80 (TppPoolpDereferenceGlobalPool.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 *     TppQueueRemoveHead @ 0x18009ED70 (TppQueueRemoveHead.c)
 *     TppETWPoolClose @ 0x1800A091C (TppETWPoolClose.c)
 *     TppPoolpFree @ 0x1800A09A4 (TppPoolpFree.c)
 *     ZwShutdownWorkerFactory @ 0x180166AF0 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  __int64 v2; // r8
  char *v3; // r9
  signed __int64 Exchange; // rax
  __int64 v5; // rax
  int i; // edi
  signed __int64 v7; // rdx
  __int64 j; // rsi
  volatile signed __int32 *v9; // rax
  __int64 v10; // rcx
  _RTL_SRWLOCK *v11; // rdx
  const void **v12; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  char v14; // [rsp+68h] [rbp+10h]
  signed __int64 v15; // [rsp+70h] [rbp+18h]

  v14 = 0;
  if ( !Pool
    || Pool == (PTP_POOL)TppPoolpGlobalPool
    || Pool == TppPoolpSerializedPool
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    RtlAcquireSRWLockExclusive(&Pool->ShutdownLock);
    if ( Pool->Released )
    {
      TppRaiseInvalidParameter();
    }
    else
    {
      if ( !Pool->ShutdownInitiated )
      {
        Pool->ShutdownInitiated = 1;
        ZwShutdownWorkerFactory(Pool->WorkerFactory, (LONG *)&Pool->Refcount.Refcount);
      }
      while ( 1 )
      {
        _m_prefetchw((const void *)&Pool->QueueState);
        Exchange = Pool->QueueState.Exchange;
        LODWORD(v15) = Exchange;
        do
        {
          if ( !HIDWORD(Exchange) )
            break;
          v7 = Exchange;
          HIDWORD(v15) = HIDWORD(Exchange) - 1;
          Exchange = _InterlockedCompareExchange64(&Pool->QueueState.Exchange, v15, Exchange);
          LODWORD(v15) = Exchange;
        }
        while ( Exchange != v7 );
        if ( !HIDWORD(Exchange) )
          break;
        v5 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v5 )
            goto LABEL_15;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v5; j = (unsigned int)(j + 1) )
          {
            v9 = TppQueueRemoveHead((volatile signed __int32 *)&Pool->TaskQueue[i][j], i, v2, v3);
            v5 = (unsigned __int64)(v9 - 4) & -(__int64)(v9 != 0LL);
          }
        }
        if ( !v5 )
          continue;
LABEL_15:
        if ( *(_QWORD *)v5 )
        {
          v2 = *(_QWORD *)(*(_QWORD *)v5 + 8LL);
          if ( v2 )
            (*(void (__fastcall **)(__int64, PTP_POOL))(*(_QWORD *)v5 + 8LL))(v5, Pool);
        }
      }
      Pool->ReleaseCaller.ReturnAddress = retaddr;
      Pool->Released = 1;
      v14 = 1;
    }
    RtlReleaseSRWLockExclusive(&Pool->ShutdownLock);
    if ( RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      TppETWPoolClose(Pool);
    if ( v14 )
    {
      if ( Pool == (PTP_POOL)TppPoolpGlobalPool )
      {
        v11 = &TppPoolpGlobalPoolLock;
        v12 = (const void **)&TppPoolpGlobalPool;
      }
      else
      {
        if ( Pool != TppPoolpSerializedPool )
        {
          if ( _InterlockedExchangeAdd(&Pool->Refcount.Refcount, 0xFFFFFFFF) == 1 )
            TppPoolpFree(Pool);
          return;
        }
        v11 = &TppPoolpSerializedPoolLock;
        v12 = (const void **)&TppPoolpSerializedPool;
      }
      TppPoolpDereferenceGlobalPool(v12, v11);
    }
  }
}
