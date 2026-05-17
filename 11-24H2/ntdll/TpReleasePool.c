/*
 * XREFs of TpReleasePool @ 0x1800DEB80
 * Callers:
 *     TppPoolpReferenceGlobalPool @ 0x18001B460 (TppPoolpReferenceGlobalPool.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18006D7D0 (TppPoolpDereferenceGlobalPool.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 *     TppPoolpDereferenceGlobalPool @ 0x18006D7D0 (TppPoolpDereferenceGlobalPool.c)
 *     TppETWPoolClose @ 0x1800DEDBC (TppETWPoolClose.c)
 *     TppPoolpFree @ 0x1800DEE44 (TppPoolpFree.c)
 *     TppQueueRemoveHead @ 0x1800DEFA0 (TppQueueRemoveHead.c)
 *     ZwShutdownWorkerFactory @ 0x180165560 (ZwShutdownWorkerFactory.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180172020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall TpReleasePool(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  signed __int64 v4; // rax
  __int64 v5; // rax
  int i; // edi
  signed __int64 v7; // rdx
  __int64 j; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  volatile signed __int32 *v11; // rdx
  __int64 *v12; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  char v14; // [rsp+68h] [rbp+10h]
  signed __int64 v15; // [rsp+70h] [rbp+18h]

  v14 = 0;
  if ( !a1 || a1 == TppPoolpGlobalPool || a1 == TppPoolpSerializedPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 368), a2, a3);
    if ( *(_BYTE *)(a1 + 377) )
    {
      TppRaiseInvalidParameter();
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 376) )
      {
        *(_BYTE *)(a1 + 376) = 1;
        ZwShutdownWorkerFactory(*(_QWORD *)(a1 + 56), a1);
      }
      while ( 1 )
      {
        _m_prefetchw((const void *)(a1 + 8));
        v4 = *(_QWORD *)(a1 + 8);
        LODWORD(v15) = v4;
        do
        {
          if ( !HIDWORD(v4) )
            break;
          v7 = v4;
          HIDWORD(v15) = HIDWORD(v4) - 1;
          v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v15, v4);
          LODWORD(v15) = v4;
        }
        while ( v4 != v7 );
        if ( !HIDWORD(v4) )
          break;
        v5 = 0LL;
        for ( i = 0; i < 3; ++i )
        {
          if ( v5 )
            goto LABEL_15;
          for ( j = 0LL; (unsigned int)j < TppNumberNodes && !v5; j = (unsigned int)(j + 1) )
          {
            v9 = TppQueueRemoveHead(*(_QWORD *)(a1 + 8LL * i + 16) + 24 * j);
            v5 = (v9 - 16) & -(__int64)(v9 != 0);
          }
        }
        if ( !v5 )
          continue;
LABEL_15:
        if ( *(_QWORD *)v5 && *(_QWORD *)(*(_QWORD *)v5 + 8LL) )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, a1);
      }
      *(_QWORD *)(a1 + 408) = retaddr;
      *(_BYTE *)(a1 + 377) = 1;
      v14 = 1;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v10 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v10 = 2147353478LL;
    if ( *(_BYTE *)v10 )
      TppETWPoolClose(a1);
    if ( v14 )
    {
      if ( a1 == TppPoolpGlobalPool )
      {
        v11 = (volatile signed __int32 *)&TppPoolpGlobalPoolLock;
        v12 = &TppPoolpGlobalPool;
      }
      else
      {
        if ( a1 != TppPoolpSerializedPool )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            TppPoolpFree(a1);
          return;
        }
        v11 = (volatile signed __int32 *)&TppPoolpSerializedPoolLock;
        v12 = &TppPoolpSerializedPool;
      }
      TppPoolpDereferenceGlobalPool((const void **)v12, v11);
    }
  }
}
