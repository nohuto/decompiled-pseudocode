/*
 * XREFs of RtlSetProtectedPolicy @ 0x1800FBDC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180011720 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800123F0 (RtlReleaseSRWLockExclusive.c)
 *     LdrProtectMrdata @ 0x180020A50 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180023510 (LdrControlFlowGuardEnforced.c)
 *     LdrEnsureMrdataHeapExists @ 0x1800240BC (LdrEnsureMrdataHeapExists.c)
 *     RtlProtectHeap @ 0x180024F60 (RtlProtectHeap.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     bsearch @ 0x180125820 (bsearch.c)
 *     qsort @ 0x1801276C0 (qsort.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlSetProtectedPolicy(_OWORD *Key, __int64 a2, _QWORD *a3)
{
  char v6; // di
  int v7; // ebx
  int v8; // ebx
  void *v9; // rax
  char *v10; // rbx
  unsigned int v11; // edi
  char *ProcessHeap; // rcx
  char *Heap; // rbx
  void *v14; // rsi
  __int64 v15; // rax
  int v16; // edx
  __int64 v18; // r9
  void *v19; // rcx

  v6 = 0;
  v7 = LdrEnsureMrdataHeapExists();
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpProtectedPoliciesSRWLock);
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
      v8 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        if ( v8 == -1 )
          goto LABEL_32;
      }
      else
      {
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v8 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v9 = RtlpProtectedPolicies;
    if ( RtlpProtectedPolicies )
    {
      v10 = (char *)bsearch(
                      Key,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      if ( v10 )
      {
LABEL_19:
        v15 = *((_QWORD *)v10 + 2);
        *((_QWORD *)v10 + 2) = a2;
        if ( a3 )
          *a3 = v15;
        if ( v6 )
          qsort(
            RtlpProtectedPolicies,
            (unsigned int)RtlpProtectedPoliciesActiveCount,
            0x18uLL,
            (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
        v7 = 0;
        goto LABEL_24;
      }
      v9 = RtlpProtectedPolicies;
    }
    if ( v9 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
    {
      LdrProtectMrdata(0);
      Heap = (char *)RtlpProtectedPolicies;
LABEL_18:
      v10 = &Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
      LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
      *(_OWORD *)v10 = 0LL;
      *((_QWORD *)v10 + 2) = 0LL;
      *(_OWORD *)v10 = *Key;
      LdrProtectMrdata(1);
      v6 = 1;
      goto LABEL_19;
    }
    if ( RtlpProtectedPoliciesTotalCount )
    {
      v11 = 2 * RtlpProtectedPoliciesTotalCount;
      if ( 2 * RtlpProtectedPoliciesTotalCount < (unsigned int)RtlpProtectedPoliciesTotalCount || v11 >= 0xAAAAAAA )
        goto LABEL_38;
    }
    else
    {
      v11 = 16;
    }
    if ( LdrControlFlowGuardEnforced() )
    {
      if ( 24 * (unsigned __int64)v11 >= 0xFF000 )
        goto LABEL_38;
      ProcessHeap = (char *)LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = (char *)NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap(ProcessHeap, 0, 24LL * v11);
    if ( Heap )
    {
      LdrProtectMrdata(0);
      v14 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        if ( LdrControlFlowGuardEnforced() )
          v19 = (void *)LdrpMrdataHeap;
        else
          v19 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)v19, 0, (__int64)v14, v18);
      }
      RtlpProtectedPolicies = Heap;
      RtlpProtectedPoliciesTotalCount = v11;
      goto LABEL_18;
    }
LABEL_38:
    v7 = -1073741801;
LABEL_24:
    if ( !LdrControlFlowGuardEnforced() )
    {
LABEL_29:
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      return (unsigned int)v7;
    }
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock);
    v16 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v16 - 1;
      if ( v16 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      goto LABEL_29;
    }
LABEL_32:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return (unsigned int)v7;
}
