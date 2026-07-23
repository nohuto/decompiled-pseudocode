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

NTSTATUS __cdecl RtlSetProtectedPolicy(PGUID PolicyGuid, ULONG_PTR PolicyValue, PULONG_PTR OldPolicyValue)
{
  char v6; // di
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  PVOID v10; // rax
  char *v11; // rbx
  unsigned int v12; // edi
  int v13; // eax
  PVOID ProcessHeap; // rcx
  char *Heap; // rbx
  PVOID v16; // rsi
  unsigned __int64 v17; // rax
  int v18; // eax
  int v19; // edx
  int v21; // eax
  PVOID v22; // rcx

  v6 = 0;
  v7 = LdrEnsureMrdataHeapExists();
  if ( v7 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
    LOBYTE(v8) = LdrControlFlowGuardEnforced();
    if ( v8 )
    {
      RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
      v9 = *(_DWORD *)LdrpMrdataHeapUnprotected;
      if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
      {
        if ( v9 == -1 )
          goto LABEL_32;
      }
      else
      {
        RtlProtectHeap(LdrpMrdataHeap, 0);
      }
      *(_DWORD *)LdrpMrdataHeapUnprotected = v9 + 1;
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    }
    v10 = RtlpProtectedPolicies;
    if ( RtlpProtectedPolicies )
    {
      v11 = (char *)bsearch(
                      PolicyGuid,
                      RtlpProtectedPolicies,
                      (unsigned int)RtlpProtectedPoliciesActiveCount,
                      0x18uLL,
                      (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
      if ( v11 )
      {
LABEL_19:
        v17 = *((_QWORD *)v11 + 2);
        *((_QWORD *)v11 + 2) = PolicyValue;
        if ( OldPolicyValue )
          *OldPolicyValue = v17;
        if ( v6 )
          qsort(
            RtlpProtectedPolicies,
            (unsigned int)RtlpProtectedPoliciesActiveCount,
            0x18uLL,
            (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
        v7 = 0;
        goto LABEL_24;
      }
      v10 = RtlpProtectedPolicies;
    }
    if ( v10 && (_DWORD)RtlpProtectedPoliciesActiveCount + 1 != RtlpProtectedPoliciesTotalCount )
    {
      LdrProtectMrdata(0);
      Heap = (char *)RtlpProtectedPolicies;
LABEL_18:
      v11 = &Heap[24 * (unsigned int)RtlpProtectedPoliciesActiveCount];
      LODWORD(RtlpProtectedPoliciesActiveCount) = RtlpProtectedPoliciesActiveCount + 1;
      *(_OWORD *)v11 = 0LL;
      *((_QWORD *)v11 + 2) = 0LL;
      *(GUID *)v11 = *PolicyGuid;
      LdrProtectMrdata(1);
      v6 = 1;
      goto LABEL_19;
    }
    if ( RtlpProtectedPoliciesTotalCount )
    {
      v12 = 2 * RtlpProtectedPoliciesTotalCount;
      if ( 2 * RtlpProtectedPoliciesTotalCount < (unsigned int)RtlpProtectedPoliciesTotalCount || v12 >= 0xAAAAAAA )
        goto LABEL_38;
    }
    else
    {
      v12 = 16;
    }
    LOBYTE(v13) = LdrControlFlowGuardEnforced();
    if ( v13 )
    {
      if ( 24 * (unsigned __int64)v12 >= 0xFF000 )
        goto LABEL_38;
      ProcessHeap = LdrpMrdataHeap;
    }
    else
    {
      ProcessHeap = NtCurrentPeb()->ProcessHeap;
    }
    Heap = (char *)RtlAllocateHeap(ProcessHeap, 0, 24LL * v12);
    if ( Heap )
    {
      LdrProtectMrdata(0);
      v16 = RtlpProtectedPolicies;
      if ( RtlpProtectedPolicies )
      {
        memmove(Heap, RtlpProtectedPolicies, 24LL * (unsigned int)RtlpProtectedPoliciesActiveCount);
        LOBYTE(v21) = LdrControlFlowGuardEnforced();
        if ( v21 )
          v22 = LdrpMrdataHeap;
        else
          v22 = NtCurrentPeb()->ProcessHeap;
        RtlFreeHeap(v22, 0, v16);
      }
      RtlpProtectedPolicies = Heap;
      RtlpProtectedPoliciesTotalCount = v12;
      goto LABEL_18;
    }
LABEL_38:
    v7 = -1073741801;
LABEL_24:
    LOBYTE(v18) = LdrControlFlowGuardEnforced();
    if ( !v18 )
    {
LABEL_29:
      RtlReleaseSRWLockExclusive(&RtlpProtectedPoliciesSRWLock);
      return v7;
    }
    RtlAcquireSRWLockExclusive(&LdrpMrdataLock);
    v19 = *(_DWORD *)LdrpMrdataHeapUnprotected;
    if ( *(_DWORD *)LdrpMrdataHeapUnprotected )
    {
      *(_DWORD *)LdrpMrdataHeapUnprotected = v19 - 1;
      if ( v19 == 1 )
        RtlProtectHeap(LdrpMrdataHeap, 1u);
      RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
      goto LABEL_29;
    }
LABEL_32:
    RtlReleaseSRWLockExclusive(&LdrpMrdataLock);
    __fastfail(0xEu);
  }
  return v7;
}
