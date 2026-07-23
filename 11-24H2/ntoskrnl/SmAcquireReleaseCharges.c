/*
 * XREFs of SmAcquireReleaseCharges @ 0x14033A050
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14027CA30 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x1402E7B10 (SmKmStoreHelperCommandProcess.c)
 *     SmKmFreeMdlForLock @ 0x1402E7E04 (SmKmFreeMdlForLock.c)
 *     SmKmAllocateMdlForLock @ 0x1402E98DC (SmKmAllocateMdlForLock.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1402F8C30 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140376D70 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140377D20 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x1403780A4 (SmFpCleanup.c)
 *     SmFpFree @ 0x140421480 (SmFpFree.c)
 *     SmFpPreAllocate @ 0x1404BE790 (SmFpPreAllocate.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     MiSignalCommitSignals @ 0x14029EE00 (MiSignalCommitSignals.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiChargeCommit @ 0x14033A7B0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14033DD30 (MiChargeResident.c)
 *     MiRestockOverCommit @ 0x14042CEF4 (MiRestockOverCommit.c)
 */

__int64 __fastcall SmAcquireReleaseCharges(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 *v4; // r14
  unsigned __int64 v5; // rdi
  int v6; // esi
  int v7; // ebx
  unsigned int v8; // ebp
  __int64 v9; // r12
  int v10; // r15d
  int v11; // eax
  __int64 v13; // rbp
  int v14; // eax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 i; // r8
  signed __int32 v17; // eax
  unsigned __int64 v18; // r8
  volatile LONG *v19; // rcx
  KIRQL v20; // si

  v4 = *(__int64 **)(a1 + 2096);
  v5 = a2 >> 12;
  v6 = a3 & 1;
  v7 = a3 & 2;
  if ( !(_DWORD)a4 )
  {
    v8 = 0;
    v9 = *v4;
    v10 = 0;
    if ( (a3 & 2) != 0 )
    {
      if ( !(unsigned int)MiChargeResident(v9, v5, 0LL) )
        return v8;
      v10 = 2;
    }
    v11 = v6 & 1;
    if ( !v7 )
      v11 = v6;
    if ( !v11 || (unsigned int)MiChargeCommit(v9, v5, 1LL, a4) )
    {
      return 1;
    }
    else if ( v10 )
    {
      MiReturnResident(*v4, v5);
    }
    return v8;
  }
  v13 = *v4;
  if ( (a3 & 2) != 0 )
    MiReturnResident(*v4, v5);
  v14 = v6 & 1;
  if ( !v7 )
    v14 = v6;
  if ( v14 && v5 )
  {
    if ( !*(_QWORD *)(v13 + 16904) )
      goto LABEL_17;
    v19 = (volatile LONG *)(v13 + 16888);
    if ( KeGetCurrentIrql() == 2 )
    {
      v20 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v19);
    }
    else
    {
      v20 = ExAcquireSpinLockExclusive(v19);
    }
    v5 = MiRestockOverCommit(v13, v5);
    MiReleaseSpinLockExclusive((_DWORD *)(v13 + 16888), v20);
    if ( v5 )
    {
LABEL_17:
      if ( (ULONG *)v13 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
        for ( i = CurrentPrcb->CachedCommit; i + v5 <= 0x100; i = v17 )
        {
          v17 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + v5, i);
          if ( v17 == i )
            return 1LL;
        }
      }
      _InterlockedAdd64((volatile signed __int64 *)(v13 + 19328), -(__int64)v5);
      v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 19264), -(__int64)v5);
      MiSignalCommitSignals(v13, v18 - v5, v18);
    }
  }
  return 1LL;
}
