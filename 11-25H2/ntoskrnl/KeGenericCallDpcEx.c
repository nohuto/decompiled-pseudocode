/*
 * XREFs of KeGenericCallDpcEx @ 0x140417AB0
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x1403B5490 (MiFreeUnusedSlabPages.c)
 *     MiDemoteSlabEntries @ 0x1403BE9C4 (MiDemoteSlabEntries.c)
 *     MiSwapStackPage @ 0x1403DBBA8 (MiSwapStackPage.c)
 *     MiJumpStack @ 0x140417820 (MiJumpStack.c)
 *     MiStartDpcGang @ 0x140417840 (MiStartDpcGang.c)
 *     KeSetSystemTime @ 0x140417A68 (KeSetSystemTime.c)
 *     KeAbCrossThreadDelete @ 0x1405BFAFC (KeAbCrossThreadDelete.c)
 *     ExpTrackTableInsertLimit @ 0x140649430 (ExpTrackTableInsertLimit.c)
 *     MiFreeUnusedPfnPages @ 0x140661270 (MiFreeUnusedPfnPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14066D024 (MiInitializeWorkingSetManagerParameters.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x14067BCB0 (MiDeleteSlabEntriesForIdentity.c)
 *     MiZeroPageCalibrate @ 0x140688A2C (MiZeroPageCalibrate.c)
 *     MmSetPermanentCacheAttribute @ 0x1407DD5C0 (MmSetPermanentCacheAttribute.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407EEE18 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1407EF0B0 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 *     ExGetPoolTagInfo @ 0x140A044C4 (ExGetPoolTagInfo.c)
 *     ExpAeThresholdInitialization @ 0x140C32BC8 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140252D80 (KeInsertQueueDpc.c)
 *     KiAcquireDpcCorralLock @ 0x140417C8C (KiAcquireDpcCorralLock.c)
 *     KiInitiateGenericCallDpc @ 0x140417CF0 (KiInitiateGenericCallDpc.c)
 *     KiReleaseDpcCorralLock @ 0x140417DD0 (KiReleaseDpcCorralLock.c)
 *     KeWaitForGate @ 0x140418844 (KeWaitForGate.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckGenericDpc @ 0x1405BC29C (KiCpuPartitionCheckGenericDpc.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall KeGenericCallDpcEx(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rcx
  char v7; // di
  unsigned __int8 CurrentIrql; // bl
  __int64 v10; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v12[2]; // [rsp+28h] [rbp-19h] BYREF
  struct _KDPC Dpc; // [rsp+38h] [rbp-9h] BYREF
  __int16 v14; // [rsp+78h] [rbp+37h] BYREF
  char v15; // [rsp+7Ah] [rbp+39h]
  int v16; // [rsp+7Ch] [rbp+3Bh]
  _QWORD v17[3]; // [rsp+80h] [rbp+3Fh] BYREF

  if ( (WORD2(xmmword_140FC5B10) & 0x200) != 0 )
    KiCpuPartitionCheckGenericDpc();
  memset_0(&Dpc, 0, 0x58uLL);
  v12[0] = a1;
  v12[1] = a2;
  KiAcquireDpcCorralLock(v5, v4);
  v7 = 0;
  if ( KeGetPcr()->Prcb.Number )
    goto LABEL_4;
  CurrentIrql = KeGetCurrentIrql();
  v10 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v6);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !CurrentPrcb->Number )
  {
    KiInitiateGenericCallDpc(CurrentPrcb, v12);
    v7 = 1;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v10) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
  }
  __writecr8(CurrentIrql);
  if ( !v7 )
  {
LABEL_4:
    Dpc.DpcData = 0LL;
    Dpc.DeferredRoutine = (PKDEFERRED_ROUTINE)KiGenericCallDpcInitiatorDpc;
    Dpc.DeferredContext = v12;
    Dpc.TargetInfoAsUlong = 134218515;
    Dpc.ProcessorHistory = 0LL;
    v17[1] = v17;
    v14 = 263;
    v17[0] = v17;
    v15 = 6;
    v16 = 0;
    KeInsertQueueDpc(&Dpc, 0LL, 0LL);
    KeWaitForGate(&v14, 0LL);
  }
  return KiReleaseDpcCorralLock();
}
