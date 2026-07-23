/*
 * XREFs of RtlpAddVectoredHandler @ 0x180032D08
 * Callers:
 *     RtlAddVectoredExceptionHandler @ 0x180106390 (RtlAddVectoredExceptionHandler.c)
 *     RtlAddVectoredContinueHandler @ 0x18010E780 (RtlAddVectoredContinueHandler.c)
 * Callees:
 *     RtlProtectHeap @ 0x180028BA0 (RtlProtectHeap.c)
 *     RtlEncodePointer @ 0x1800314C0 (RtlEncodePointer.c)
 *     LdrEnsureMrdataHeapExists @ 0x180033910 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdata @ 0x180033A80 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x1800366F0 (LdrControlFlowGuardEnforced.c)
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x18006B6C0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     bsearch @ 0x180121F70 (bsearch.c)
 */

_QWORD *__fastcall RtlpAddVectoredHandler(int a1, void *a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 v6; // rdi
  int v7; // eax
  int v8; // ebx
  int v9; // eax
  PVOID ProcessHeap; // rcx
  _QWORD *Heap; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  int v14; // eax
  PVOID v15; // rcx
  int v16; // eax
  int v17; // edx
  _UNKNOWN **v19; // rdi
  _UNKNOWN ***v20; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // rbx
  _QWORD *v23; // rax

  v3 = a3;
  v6 = 0LL;
  if ( (int)LdrEnsureMrdataHeapExists() >= 0 )
  {
    if ( !RtlpProtectedPolicies )
      goto LABEL_3;
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    v21 = bsearch(
            &unk_180179890,
            RtlpProtectedPolicies,
            (unsigned int)RtlpProtectedPoliciesActiveCount,
            0x18uLL,
            RtlpCompareProtectedPolicyEntry);
    v22 = v21;
    if ( v21 )
      v6 = v21[2];
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    if ( !v22 || !v6 )
    {
LABEL_3:
      LOBYTE(v7) = LdrControlFlowGuardEnforced();
      if ( v7 )
      {
        RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
        v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
        if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
        {
          if ( v8 == -1 )
            goto LABEL_27;
        }
        else
        {
          RtlProtectHeap(LdrpMrdataHeap, 0);
        }
        *(_DWORD *)LdrpMrdataHeapUnprotected = v8 + 1;
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      }
      LOBYTE(v9) = LdrControlFlowGuardEnforced();
      if ( v9 )
        ProcessHeap = LdrpMrdataHeap;
      else
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
      Heap = RtlAllocateHeap(ProcessHeap, 0, 0x28uLL);
      v12 = Heap;
      if ( Heap )
      {
        *((_DWORD *)Heap + 6) = 0;
        v13 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
        v12[2] = v13;
        if ( !v13 )
        {
          LOBYTE(v14) = LdrControlFlowGuardEnforced();
          if ( v14 )
            v15 = LdrpMrdataHeap;
          else
            v15 = NtCurrentPeb()->ProcessHeap;
          RtlFreeHeap(v15, 0, v12);
          v12 = 0LL;
          goto LABEL_14;
        }
        *v13 = 1LL;
        v12[4] = RtlEncodePointer(a2);
        v19 = &LdrpVectorHandlerList + 3 * v3 + 1;
        LdrProtectMrdata(0LL);
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)*(&LdrpVectorHandlerList + 3 * v3));
        if ( *v19 == (_UNKNOWN *)v19 )
          _interlockedbittestandset((volatile signed __int32 *)&NtCurrentPeb()->80, v3 + 2);
        if ( a1 )
        {
          v20 = (_UNKNOWN ***)*v19;
          if ( *((_UNKNOWN ***)*v19 + 1) != v19 )
            goto LABEL_24;
          *v12 = v20;
          v12[1] = v19;
          v20[1] = (_UNKNOWN **)v12;
          *v19 = v12;
        }
        else
        {
          v23 = v19[1];
          if ( (_UNKNOWN **)*v23 != v19 )
LABEL_24:
            __fastfail(3u);
          *v12 = v19;
          v12[1] = v23;
          *v23 = v12;
          v19[1] = v12;
        }
        RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)*(&LdrpVectorHandlerList + 3 * v3));
        LdrProtectMrdata(1LL);
      }
LABEL_14:
      LOBYTE(v16) = LdrControlFlowGuardEnforced();
      if ( !v16 )
        return v12;
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v17 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        *(_DWORD *)LdrpMrdataHeapUnprotected = v17 - 1;
        if ( v17 == 1 )
          RtlProtectHeap(LdrpMrdataHeap, 1u);
        RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
        return v12;
      }
LABEL_27:
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      __fastfail(0xEu);
    }
  }
  return 0LL;
}
