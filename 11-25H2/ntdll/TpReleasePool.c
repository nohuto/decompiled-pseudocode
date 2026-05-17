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

void __fastcall TpReleasePool(__int64 a1)
{
  __int64 v2; // r8
  unsigned __int64 v3; // r9
  signed __int64 v4; // rax
  __int64 v5; // rax
  int i; // edi
  signed __int64 v7; // rdx
  __int64 j; // rsi
  volatile signed __int32 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rdx
  __int64 *v13; // rcx
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]
  char v15; // [rsp+68h] [rbp+10h]
  signed __int64 v16; // [rsp+70h] [rbp+18h]

  v15 = 0;
  if ( !a1 || a1 == TppPoolpGlobalPool || a1 == TppPoolpSerializedPool || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    if ( !NtCurrentPeb()->Ldr->ShutdownInProgress )
      TppRaiseInvalidParameter();
  }
  else
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 368));
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
        LODWORD(v16) = v4;
        do
        {
          if ( !HIDWORD(v4) )
            break;
          v7 = v4;
          HIDWORD(v16) = HIDWORD(v4) - 1;
          v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v16, v4);
          LODWORD(v16) = v4;
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
            v9 = TppQueueRemoveHead((volatile signed __int32 *)(*(_QWORD *)(a1 + 8LL * i + 16) + 24 * j), i, v2, v3);
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
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 8LL))(v5, a1);
        }
      }
      *(_QWORD *)(a1 + 408) = retaddr;
      *(_BYTE *)(a1 + 377) = 1;
      v15 = 1;
    }
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 368));
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v11 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v11 = 2147353478LL;
    if ( *(_BYTE *)v11 )
      TppETWPoolClose(a1);
    if ( v15 )
    {
      if ( a1 == TppPoolpGlobalPool )
      {
        v12 = (volatile signed __int32 *)&TppPoolpGlobalPoolLock;
        v13 = &TppPoolpGlobalPool;
      }
      else
      {
        if ( a1 != TppPoolpSerializedPool )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF) == 1 )
            TppPoolpFree(a1, v10);
          return;
        }
        v12 = (volatile signed __int32 *)&TppPoolpSerializedPoolLock;
        v13 = &TppPoolpSerializedPool;
      }
      TppPoolpDereferenceGlobalPool((const void **)v13, v12);
    }
  }
}
