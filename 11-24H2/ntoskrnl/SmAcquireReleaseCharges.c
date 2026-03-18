/*
 * XREFs of SmAcquireReleaseCharges @ 0x140210CF0
 * Callers:
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14024C420 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x14037AA90 (SmKmStoreHelperCommandProcess.c)
 *     SmKmFreeMdlForLock @ 0x14037AD84 (SmKmFreeMdlForLock.c)
 *     SmKmAllocateMdlForLock @ 0x14037C85C (SmKmAllocateMdlForLock.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14037E000 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x14037E384 (SmFpCleanup.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14039B930 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     SmFpFree @ 0x14042F2B0 (SmFpFree.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140449680 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmFpPreAllocate @ 0x1404C3258 (SmFpPreAllocate.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiChargeCommit @ 0x140211450 (MiChargeCommit.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     MiSignalCommitSignals @ 0x14028F200 (MiSignalCommitSignals.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiChargeResident @ 0x1402F5FA0 (MiChargeResident.c)
 *     MiRestockOverCommit @ 0x14043A6C0 (MiRestockOverCommit.c)
 */

__int64 __fastcall SmAcquireReleaseCharges(__int64 a1, unsigned __int64 a2, char a3, int a4)
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
  volatile LONG *v18; // rcx
  KIRQL v19; // si

  v4 = *(__int64 **)(a1 + 2096);
  v5 = a2 >> 12;
  v6 = a3 & 1;
  v7 = a3 & 2;
  if ( !a4 )
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
    if ( !v11 || (unsigned int)MiChargeCommit(v9, v5, 1LL) )
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
    v18 = (volatile LONG *)(v13 + 16888);
    if ( KeGetCurrentIrql() == 2 )
    {
      v19 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v18);
    }
    else
    {
      v19 = ExAcquireSpinLockExclusive(v18);
    }
    v5 = MiRestockOverCommit(v13, v5);
    MiReleaseSpinLockExclusive(v13 + 16888, v19);
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
      MiSignalCommitSignals(v13, _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 + 19264), -(__int64)v5) - v5);
    }
  }
  return 1LL;
}
