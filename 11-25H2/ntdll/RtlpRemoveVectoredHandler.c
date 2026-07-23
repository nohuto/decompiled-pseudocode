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

__int64 __fastcall RtlpRemoveVectoredHandler(void **a1, unsigned int a2)
{
  __int64 v4; // rsi
  void **v5; // rdi
  void **i; // rbx
  int v7; // eax
  int v8; // edi
  signed __int64 v9; // rcx
  bool v10; // cc
  signed __int64 v11; // rcx
  int v12; // eax
  int v13; // ecx
  void **v14; // rdi
  int v16; // eax
  PVOID v17; // rcx
  int v18; // eax
  int v19; // edx
  void **v20; // rcx
  void **v21; // rax

  v4 = 3LL * a2;
  v5 = (void **)(&LdrpVectorHandlerList + 3 * a2 + 1);
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)*(&LdrpVectorHandlerList + 3 * a2));
  for ( i = (void **)*v5; ; i = (void **)*i )
  {
    if ( i == v5 )
    {
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)*(&LdrpVectorHandlerList + v4));
      return 0LL;
    }
    if ( i == a1 )
      break;
  }
  LOBYTE(v7) = LdrControlFlowGuardEnforced();
  if ( v7 )
  {
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      RtlProtectHeap(LdrpMrdataHeap, 0);
      goto LABEL_7;
    }
    if ( v8 == -1 )
    {
LABEL_23:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
LABEL_7:
    *(_DWORD *)LdrpMrdataHeapUnprotected = v8 + 1;
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
  }
  *((_DWORD *)i + 6) = 1;
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)i[2], 0xFFFFFFFFFFFFFFFFuLL);
  v10 = v9 <= 1;
  v11 = v9 - 1;
  if ( v10 )
  {
    if ( v11 )
      __fastfail(0xEu);
    LdrProtectMrdata(0);
    v20 = (void **)*i;
    v21 = (void **)i[1];
    if ( *((void ***)*i + 1) != i || *v21 != i )
      __fastfail(3u);
    *v21 = v20;
    v20[1] = v21;
    if ( v21 == v20 )
      _interlockedbittestandreset((volatile signed __int32 *)&NtCurrentPeb()->80, a2 + 2);
    v14 = i;
  }
  else
  {
    LOBYTE(v12) = LdrControlFlowGuardEnforced();
    if ( v12 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_23;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v13 - 1;
      if ( v13 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v14 = 0LL;
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)*(&LdrpVectorHandlerList + v4));
  if ( v14 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14[2]);
    LOBYTE(v16) = LdrControlFlowGuardEnforced();
    v17 = v16 ? LdrpMrdataHeap : NtCurrentPeb()->ProcessHeap;
    RtlFreeHeap(v17, 0, i);
    LdrProtectMrdata(1);
    LOBYTE(v18) = LdrControlFlowGuardEnforced();
    if ( v18 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v19 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( !*(_DWORD *)LdrpMrdataHeapUnprotected )
        goto LABEL_23;
      *(_DWORD *)LdrpMrdataHeapUnprotected = v19 - 1;
      if ( v19 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
  }
  return 1LL;
}
