/*
 * XREFs of MiChargeResident @ 0x1402F5FA0
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     SmAcquireReleaseCharges @ 0x140210CF0 (SmAcquireReleaseCharges.c)
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MmChargeResources @ 0x140212800 (MmChargeResources.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1402794F0 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiCreateUltraThreadContext @ 0x1402F3EF0 (MiCreateUltraThreadContext.c)
 *     MiObtainFaultCharges @ 0x1402F6A70 (MiObtainFaultCharges.c)
 *     MiObtainSystemCharges @ 0x1402F779C (MiObtainSystemCharges.c)
 *     MiGetSubsectionCharges @ 0x14036DF10 (MiGetSubsectionCharges.c)
 *     MiGetCloneCharges @ 0x14036E068 (MiGetCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14036E934 (MiCreateLargePfnList.c)
 *     MiCreateUltraThreadContextHelper @ 0x1403C6C4C (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1403C6DB8 (MiReplenishUltraPageTables.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1403CD164 (MmAdjustWorkingSetSizeEx.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407EA844 (MiInitializeSystemWorkingSetList.c)
 *     MmObtainChargesToLockPagedPool @ 0x1407ED700 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x1407EFD94 (MiChargeLargeProtoSubsection.c)
 *     MiInsertVadCharges @ 0x1408E2418 (MiInsertVadCharges.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     MiInitializePartialVad @ 0x140A246FC (MiInitializePartialVad.c)
 *     MiConstructLoaderEntry @ 0x140A92FE4 (MiConstructLoaderEntry.c)
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402F6BC0 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeResident(ULONG *a1, unsigned __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r9
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
  return MiChargePartitionResidentAvailable(a1, a2, a3);
}
