/*
 * XREFs of KeGenericCallDpcEx @ 0x140414C8C
 * Callers:
 *     MiDemoteSlabEntries @ 0x1402CF530 (MiDemoteSlabEntries.c)
 *     MiFreeUnusedSlabPages @ 0x1402D398C (MiFreeUnusedSlabPages.c)
 *     MiStartDpcGang @ 0x1403A875C (MiStartDpcGang.c)
 *     MiSwapStackPage @ 0x1404303C4 (MiSwapStackPage.c)
 *     KeSetSystemTime @ 0x1404B3F6C (KeSetSystemTime.c)
 *     MiJumpStack @ 0x1404C0250 (MiJumpStack.c)
 *     KeAbCrossThreadDelete @ 0x1405C3BDC (KeAbCrossThreadDelete.c)
 *     ExpTrackTableInsertLimit @ 0x140655330 (ExpTrackTableInsertLimit.c)
 *     MiFreeUnusedPfnPages @ 0x14066CDB0 (MiFreeUnusedPfnPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x140678930 (MiInitializeWorkingSetManagerParameters.c)
 *     MiDeleteSlabEntriesForIdentity @ 0x140687540 (MiDeleteSlabEntriesForIdentity.c)
 *     MiZeroPageCalibrate @ 0x140693E8C (MiZeroPageCalibrate.c)
 *     MmSetPermanentCacheAttribute @ 0x1407ED460 (MmSetPermanentCacheAttribute.c)
 *     MiSpecialPurposeMemoryRemoved @ 0x1407FECA8 (MiSpecialPurposeMemoryRemoved.c)
 *     MiUpdateSpecialPurposeMemoryCacheEligibility @ 0x1407FEF40 (MiUpdateSpecialPurposeMemoryCacheEligibility.c)
 *     ExGetPoolTagInfo @ 0x140A03AF8 (ExGetPoolTagInfo.c)
 *     ExpAeThresholdInitialization @ 0x140C43E94 (ExpAeThresholdInitialization.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KiAcquireDpcCorralLock @ 0x140414E6C (KiAcquireDpcCorralLock.c)
 *     KiInitiateGenericCallDpc @ 0x140414ED0 (KiInitiateGenericCallDpc.c)
 *     KiReleaseDpcCorralLock @ 0x140414FB0 (KiReleaseDpcCorralLock.c)
 *     KeWaitForGate @ 0x140415DEC (KeWaitForGate.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCpuPartitionCheckGenericDpc @ 0x1405C01CC (KiCpuPartitionCheckGenericDpc.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
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
    KiRaiseIrqlProcessIrqlFlags(v6, 2LL);
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
