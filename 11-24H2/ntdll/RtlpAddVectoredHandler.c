/*
 * XREFs of RtlpAddVectoredHandler @ 0x180006308
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x18010B9C0 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x180113480 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlEncodePointer @ 0x180004AC0 (RtlEncodePointer.c)
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlAcquireSRWLockShared @ 0x180010220 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180010280 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 *     bsearch @ 0x180123D40 (bsearch.c)
 */

_QWORD *__fastcall RtlpAddVectoredHandler(int a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v6; // rdi
  int v7; // ebx
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  void *v12; // rcx
  int v13; // edx
  bool v14; // zf
  __int64 v15; // rdx
  _UNKNOWN **v17; // rdi
  _UNKNOWN ***v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  _QWORD *v21; // rax

  v3 = a3;
  v6 = 0LL;
  if ( (int)LdrEnsureMrdataHeapExists() >= 0 )
  {
    if ( !RtlpProtectedPolicies )
      goto LABEL_41;
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    v19 = bsearch(
            &unk_1801792B0,
            RtlpProtectedPolicies,
            (unsigned int)RtlpProtectedPoliciesActiveCount,
            0x18uLL,
            RtlpCompareProtectedPolicyEntry);
    v20 = v19;
    if ( v19 )
      v6 = v19[2];
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    if ( !v20 || !v6 )
    {
LABEL_41:
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v7 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          if ( v7 == -1 )
            goto LABEL_27;
        }
        else
        {
          RtlProtectHeap(LdrpMrdataHeap, 0LL);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v7 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      if ( (unsigned int)LdrControlFlowGuardEnforced() )
        ProcessHeap = (void *)LdrpMrdataHeap;
      else
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
      Heap = RtlAllocateHeap(ProcessHeap, 0LL, 40LL);
      v10 = (_QWORD *)Heap;
      if ( Heap )
      {
        *(_DWORD *)(Heap + 24) = 0;
        v11 = (_QWORD *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 8LL);
        v10[2] = v11;
        if ( !v11 )
        {
          if ( (unsigned int)LdrControlFlowGuardEnforced() )
            v12 = (void *)LdrpMrdataHeap;
          else
            v12 = NtCurrentPeb()->ProcessHeap;
          RtlFreeHeap(v12, 0LL, v10);
          v10 = 0LL;
          goto LABEL_14;
        }
        *v11 = 1LL;
        v10[4] = RtlEncodePointer(a2);
        v17 = &LdrpVectorHandlerList + 3 * v3 + 1;
        LdrProtectMrdata(0LL);
        RtlAcquireSRWLockExclusive(*(&LdrpVectorHandlerList + 3 * v3));
        if ( *v17 == (_UNKNOWN *)v17 )
          _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
        if ( a1 )
        {
          v18 = (_UNKNOWN ***)*v17;
          if ( *((_UNKNOWN ***)*v17 + 1) != v17 )
            goto LABEL_24;
          *v10 = v18;
          v10[1] = v17;
          v18[1] = (_UNKNOWN **)v10;
          *v17 = v10;
        }
        else
        {
          v21 = v17[1];
          if ( (_UNKNOWN **)*v21 != v17 )
LABEL_24:
            __fastfail(3u);
          *v10 = v17;
          v10[1] = v21;
          *v21 = v10;
          v17[1] = v10;
        }
        RtlReleaseSRWLockExclusive(*(&LdrpVectorHandlerList + 3 * v3));
        LdrProtectMrdata(1LL);
      }
LABEL_14:
      if ( !(unsigned int)LdrControlFlowGuardEnforced() )
        return v10;
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v13 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        v14 = v13 == 1;
        v15 = (unsigned int)(v13 - 1);
        *(_DWORD *)LdrpMrdataHeapUnprotected = v15;
        if ( v14 )
        {
          LOBYTE(v15) = 1;
          RtlProtectHeap(LdrpMrdataHeap, v15);
        }
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v10;
      }
LABEL_27:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
  }
  return 0LL;
}
