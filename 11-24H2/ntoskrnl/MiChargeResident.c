/*
 * XREFs of MiChargeResident @ 0x14033DD30
 * Callers:
 *     MiObtainSystemCharges @ 0x14021D05C (MiObtainSystemCharges.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14022EA80 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiGetSubsectionCharges @ 0x1402699F8 (MiGetSubsectionCharges.c)
 *     MiGetCloneCharges @ 0x140269B50 (MiGetCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     SmAcquireReleaseCharges @ 0x14033A050 (SmAcquireReleaseCharges.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MmChargeResources @ 0x14033BB60 (MmChargeResources.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiObtainFaultCharges @ 0x14033EB80 (MiObtainFaultCharges.c)
 *     MiCreateUltraThreadContextHelper @ 0x140412880 (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1404129EC (MiReplenishUltraPageTables.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14046C954 (MmAdjustWorkingSetSizeEx.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407EAE14 (MiInitializeSystemWorkingSetList.c)
 *     MmObtainChargesToLockPagedPool @ 0x1407EDCD0 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x1407F0364 (MiChargeLargeProtoSubsection.c)
 *     MiInsertVadCharges @ 0x140918FC8 (MiInsertVadCharges.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 *     MiConstructLoaderEntry @ 0x140A8F794 (MiConstructLoaderEntry.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x14033ECD0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeResident(ULONG *a1, unsigned __int64 a2, __int64 a3, struct _KPRCB *CurrentPrcb)
{
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v5; // ett

  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
    {
      v5 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - a2,
                                  CachedResidentAvailable);
      if ( v5 == CachedResidentAvailable )
        return 1LL;
    }
  }
  return MiChargePartitionResidentAvailable(a1, a2, a3, CurrentPrcb);
}
