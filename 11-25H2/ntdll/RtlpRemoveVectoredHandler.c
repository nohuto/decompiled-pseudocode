/*
 * XREFs of RtlpRemoveVectoredHandler @ 0x1800F0A44
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x18010ECB0 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x180135B50 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     RtlProtectHeap @ 0x180024F60 (RtlProtectHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlpRemoveVectoredHandler(__int64 a1, unsigned int a2)
{
  __int64 v4; // rsi
  __int64 *v5; // rdi
  __int64 i; // rbx
  int v7; // edi
  signed __int64 v8; // rcx
  bool v9; // cc
  signed __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rdi
  __int64 v14; // r9
  __int64 v15; // r9
  void *v16; // rcx
  int v17; // edx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax

  v4 = 3LL * a2;
  v5 = (__int64 *)(&LdrpVectorHandlerList + 3 * a2 + 1);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)*(&LdrpVectorHandlerList + 3 * a2));
  for ( i = *v5; ; i = *(_QWORD *)i )
  {
    if ( (__int64 *)i == v5 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v4));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
    v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
      goto LABEL_7;
    }
    if ( v7 == -1 )
    {
LABEL_23:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
LABEL_7:
    *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  *(_DWORD *)(i + 24) = 1;
  v8 = _InterlockedExchangeAdd64(*(volatile signed __int64 **)(i + 16), 0xFFFFFFFFFFFFFFFFuLL);
  v9 = v8 <= 1;
  v10 = v8 - 1;
  if ( v9 )
  {
    if ( v10 )
      __fastfail(0xEu);
    LdrProtectMrdata(0);
    v18 = *(_QWORD **)i;
    v19 = *(_QWORD **)(i + 8);
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v19 != i )
      __fastfail(3u);
    *v19 = v18;
    v18[1] = v19;
    if ( v19 == v18 )
      _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, a2 + 2);
    v12 = i;
  }
  else
  {
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
      v11 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_23;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v11 - 1;
      if ( v11 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v12 = 0LL;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v4));
  if ( v12 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(v12 + 16), v14);
    v16 = LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap((__int64)v16, 0, i, v15);
    LdrProtectMrdata(1);
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
      v17 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_23;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v17 - 1;
      if ( v17 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
  }
  return 1LL;
}
