/*
 * XREFs of TpReleasePool @ 0x1800D9CF0
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x180047E60 (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18008A0B0 (TppPoolpDereferenceGlobalPool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x18006B600 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18008A0B0 (TppPoolpDereferenceGlobalPool.c)
 *     TppETWPoolClose @ 0x1800D9F2C (TppETWPoolClose.c)
 *     TppPoolpFree @ 0x1800D9FB4 (TppPoolpFree.c)
 *     TppQueueRemoveHead @ 0x1800DA110 (TppQueueRemoveHead.c)
 *     ZwShutdownWorkerFactory @ 0x180163920 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180171020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __cdecl TpReleasePool(PTP_POOL Pool)
{
  signed __int64 Exchange; // rax
  __int64 v3; // rax
  int i; // edi
  signed __int64 v5; // rdx
  __int64 j; // rsi
  __int64 v7; // rax
  __int64 v8; // rcx
  _RTL_SRWLOCK *v9; // rdx
  const void **v10; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  char v12; // [rsp+68h] [rbp+10h]
  signed __int64 v13; // [rsp+70h] [rbp+18h]

  v12 = 0;
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
        LODWORD(v13) = Exchange;
        do
        {
          if ( !HIDWORD(Exchange) )
            break;
          v5 = Exchange;
          HIDWORD(v13) = HIDWORD(Exchange) - 1;
          Exchange = _InterlockedCompareExchange64(&Pool->QueueState.Exchange, v13, Exchange);
          LODWORD(v13) = Exchange;
        }
        while ( Exchange != v5 );
        if ( !HIDWORD(Exchange) )
          break;
        v3 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v3 )
            goto LABEL_15;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v3; j = (unsigned int)(j + 1) )
          {
            v7 = TppQueueRemoveHead(&Pool->TaskQueue[i][j]);
            v3 = (v7 - 16) & -(__int64)(v7 != 0);
          }
        }
        if ( !v3 )
          continue;
LABEL_15:
        if ( *(_QWORD *)v3 && *(_QWORD *)(*(_QWORD *)v3 + 8LL) )
          (*(void (__fastcall **)(__int64, PTP_POOL))(*(_QWORD *)v3 + 8LL))(v3, Pool);
      }
      Pool->ReleaseCaller.ReturnAddress = retaddr;
      Pool->Released = 1;
      v12 = 1;
    }
    RtlReleaseSRWLockExclusive(&Pool->ShutdownLock);
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      TppETWPoolClose(Pool);
    if ( v12 )
    {
      if ( Pool == (PTP_POOL)TppPoolpGlobalPool )
      {
        v9 = &TppPoolpGlobalPoolLock;
        v10 = (const void **)&TppPoolpGlobalPool;
      }
      else
      {
        if ( Pool != TppPoolpSerializedPool )
        {
          if ( _InterlockedExchangeAdd(&Pool->Refcount.Refcount, 0xFFFFFFFF) == 1 )
            TppPoolpFree(Pool);
          return;
        }
        v9 = &TppPoolpSerializedPoolLock;
        v10 = (const void **)&TppPoolpSerializedPool;
      }
      TppPoolpDereferenceGlobalPool(v10, v9);
    }
  }
}
