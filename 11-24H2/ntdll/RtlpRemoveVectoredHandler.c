/*
 * XREFs of RtlpRemoveVectoredHandler @ 0x1800EF340
 * Callers:
 *     RtlRemoveVectoredExceptionHandler @ 0x18010CC60 (RtlRemoveVectoredExceptionHandler.c)
 *     RtlRemoveVectoredContinueHandler @ 0x1801342A0 (RtlRemoveVectoredContinueHandler.c)
 * Callees:
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 */

__int64 __fastcall RtlpRemoveVectoredHandler(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  int v3; // r14d
  __int64 v5; // rsi
  unsigned __int64 *v6; // rdi
  unsigned __int64 i; // rbx
  volatile signed __int32 **v8; // rdx
  unsigned __int64 v9; // r8
  int v10; // edi
  signed __int64 v11; // rcx
  bool v12; // cc
  signed __int64 v13; // rcx
  volatile signed __int32 **v14; // rdx
  unsigned __int64 v15; // r8
  int v16; // ecx
  unsigned __int64 v17; // rdi
  void *v19; // rcx
  volatile signed __int32 **v20; // rdx
  unsigned __int64 v21; // r8
  int v22; // edx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax

  v3 = (int)a2;
  v5 = 3LL * (unsigned int)a2;
  v6 = (unsigned __int64 *)(&LdrpVectorHandlerList + 3 * (unsigned int)a2 + 1);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)*(&LdrpVectorHandlerList + 3 * (unsigned int)a2), a2, a3);
  for ( i = *v6; ; i = *(_QWORD *)i )
  {
    if ( (unsigned __int64 *)i == v6 )
    {
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v5));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  if ( LdrControlFlowGuardEnforced() )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v8, v9);
    v10 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
      goto LABEL_7;
    }
    if ( v10 == -1 )
    {
LABEL_23:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
LABEL_7:
    *(_DWORD *)LdrpMrdataHeapUnprotected = v10 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  *(_DWORD *)(i + 24) = 1;
  v11 = _InterlockedExchangeAdd64(*(volatile signed __int64 **)(i + 16), 0xFFFFFFFFFFFFFFFFuLL);
  v12 = v11 <= 1;
  v13 = v11 - 1;
  if ( v12 )
  {
    if ( v13 )
      __fastfail(0xEu);
    LdrProtectMrdata(0);
    v23 = *(_QWORD **)i;
    v24 = *(_QWORD **)(i + 8);
    if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v24 != i )
      __fastfail(3u);
    *v24 = v23;
    v23[1] = v24;
    if ( v24 == v23 )
      _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
    v17 = i;
  }
  else
  {
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v14, v15);
      v16 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_23;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v16 - 1;
      if ( v16 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v17 = 0LL;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)*(&LdrpVectorHandlerList + v5));
  if ( v17 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *(_QWORD *)(v17 + 16));
    v19 = LdrControlFlowGuardEnforced() ? (void *)LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap((__int64)v19, 0, i);
    LdrProtectMrdata(1);
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v20, v21);
      v22 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_23;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v22 - 1;
      if ( v22 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
  }
  return 1LL;
}
