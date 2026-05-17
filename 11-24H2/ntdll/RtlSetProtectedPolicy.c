/*
 * XREFs of RtlSetProtectedPolicy @ 0x1800F9EC0
 * Callers:
 *     <none>
 * Callees:
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     LdrProtectMrdata @ 0x180007080 (LdrProtectMrdata.c)
 *     LdrControlFlowGuardEnforced @ 0x180009CF0 (LdrControlFlowGuardEnforced.c)
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800567B0 (RtlReleaseSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18009C280 (RtlProtectHeap.c)
 *     bsearch @ 0x180123D40 (bsearch.c)
 *     qsort @ 0x180125BE0 (qsort.c)
 *     memmove @ 0x180167400 (memmove.c)
 */

__int64 __fastcall RtlSetProtectedPolicy(_OWORD *Key, __int64 a2, _QWORD *a3)
{
  char v6; // di
  volatile signed __int32 **v7; // rdx
  int v8; // ebx
  unsigned __int64 v9; // r8
  volatile signed __int32 **v10; // rdx
  unsigned __int64 v11; // r8
  int v12; // ebx
  void *v13; // rax
  char *v14; // rbx
  unsigned int v15; // edi
  void *ProcessHeap; // rcx
  char *Heap; // rbx
  void *v18; // rsi
  __int64 v19; // rax
  volatile signed __int32 **v20; // rdx
  unsigned __int64 v21; // r8
  int v22; // edx
  void *v24; // rcx

  v6 = 0;
  v8 = LdrEnsureMrdataHeapExists((__int64)Key, a2);
  if ( v8 >= 0 )
  {
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&RtlpProtectedPoliciesSRWLock, v7, v9);
    if ( LdrControlFlowGuardEnforced() )
    {
      RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v10, v11);
      v12 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        if ( v12 == -1 )
          goto LABEL_32;
      }
      else
      {
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 0);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v12 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v13 = RtlpProtectedPolicies;
    if ( RtlpProtectedPolicies )
    {
      v14 = (char *)bsearch(
                      Key,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      if ( v14 )
      {
LABEL_19:
        v19 = *((_QWORD *)v14 + 2);
        *((_QWORD *)v14 + 2) = a2;
        if ( a3 )
          *a3 = v19;
        if ( v6 )
          qsort(
            RtlpProtectedPolicies,
            (unsigned int)RtlpProtectedPoliciesActiveCount,
            0x18uLL,
            (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
        v8 = 0;
        goto LABEL_24;
      }
      v13 = RtlpProtectedPolicies;
    }
    if ( v13 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
    {
      LdrProtectMrdata(0);
      Heap = (char *)RtlpProtectedPolicies;
LABEL_18:
      v14 = &Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
      LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
      *(_OWORD *)v14 = 0LL;
      *((_QWORD *)v14 + 2) = 0LL;
      *(_OWORD *)v14 = *Key;
      LdrProtectMrdata(1);
      v6 = 1;
      goto LABEL_19;
    }
    if ( RtlpProtectedPoliciesTotalCount )
    {
      v15 = 2 * RtlpProtectedPoliciesTotalCount;
      if ( 2 * RtlpProtectedPoliciesTotalCount < (unsigned int)RtlpProtectedPoliciesTotalCount || v15 >= 0xAAAAAAA )
        goto LABEL_38;
    }
    else
    {
      v15 = 16;
    }
    if ( LdrControlFlowGuardEnforced() )
    {
      if ( 24 * (unsigned __int64)v15 >= 0xFF000 )
        goto LABEL_38;
      ProcessHeap = (void *)LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap((__int64)ProcessHeap, 0, 24LL * v15);
    if ( Heap )
    {
      LdrProtectMrdata(0);
      v18 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        if ( LdrControlFlowGuardEnforced() )
          v24 = (void *)LdrpMrdataHeap;
        else
          v24 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap((__int64)v24, 0, (unsigned __int64)v18);
      }
      RtlpProtectedPolicies = Heap;
      RtlpProtectedPoliciesTotalCount = v15;
      goto LABEL_18;
    }
LABEL_38:
    v8 = -1073741801;
LABEL_24:
    if ( !LdrControlFlowGuardEnforced() )
    {
LABEL_29:
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      return (unsigned int)v8;
    }
    RtlAcquireSRWLockExclusive((volatile signed __int32 *)&LdrpMrdataLock, v20, v21);
    v22 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v22 - 1;
      if ( v22 == 1 )
        RtlProtectHeap((_DWORD *)LdrpMrdataHeap, 1);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      goto LABEL_29;
    }
LABEL_32:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return (unsigned int)v8;
}
