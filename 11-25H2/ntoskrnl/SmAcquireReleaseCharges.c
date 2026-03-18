/*
 * XREFs of SmAcquireReleaseCharges @ 0x14022E380
 * Callers:
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14020C270 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     SmKmStoreHelperCommandProcess @ 0x14020D8E4 (SmKmStoreHelperCommandProcess.c)
 *     SmKmFreeMdlForLock @ 0x14020DBD4 (SmKmFreeMdlForLock.c)
 *     SmFpFree @ 0x140327F20 (SmFpFree.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140394620 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140396200 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x140396584 (SmFpCleanup.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140456650 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmAllocateMdlForLock @ 0x1404665D8 (SmKmAllocateMdlForLock.c)
 *     SmFpPreAllocate @ 0x1404C4BB8 (SmFpPreAllocate.c)
 * Callees:
 *     MiChargeResident @ 0x14022CAE0 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14022E7B0 (MiChargeCommit.c)
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiSignalCommitSignals @ 0x140329790 (MiSignalCommitSignals.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiRestockOverCommit @ 0x14040ADD4 (MiRestockOverCommit.c)
 */

__int64 __fastcall SmAcquireReleaseCharges(__int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  ULONG **v4; // r14
  unsigned __int64 v5; // rdi
  int v6; // esi
  int v7; // ebx
  unsigned int v8; // ebp
  ULONG *v9; // r12
  int v10; // r15d
  int v11; // eax
  ULONG *v13; // rbp
  int v14; // eax
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 i; // r8
  signed __int32 v17; // eax
  volatile LONG *v18; // rcx
  KIRQL v19; // si

  v4 = *(ULONG ***)(a1 + 2096);
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
      MiReturnResident(*v4);
    }
    return v8;
  }
  v13 = *v4;
  if ( (a3 & 2) != 0 )
    MiReturnResident(*v4);
  v14 = v6 & 1;
  if ( !v7 )
    v14 = v6;
  if ( v14 && v5 )
  {
    if ( !*((_QWORD *)v13 + 2113) )
      goto LABEL_17;
    v18 = (volatile LONG *)(v13 + 4222);
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
    MiReleaseSpinLockExclusive(v13 + 4222, v19);
    if ( v5 )
    {
LABEL_17:
      if ( v13 == &MiSystemPartition )
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
      _InterlockedAdd64((volatile signed __int64 *)v13 + 2416, -(__int64)v5);
      MiSignalCommitSignals(v13, _InterlockedExchangeAdd64((volatile signed __int64 *)v13 + 2408, -(__int64)v5) - v5);
    }
  }
  return 1LL;
}
