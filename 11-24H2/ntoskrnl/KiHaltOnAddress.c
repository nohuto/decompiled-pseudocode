/*
 * XREFs of KiHaltOnAddress @ 0x1404FA2B8
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x140311500 (KiSwapDirectoryTableBaseTarget.c)
 *     KeSignalCallDpcSynchronize @ 0x140435830 (KeSignalCallDpcSynchronize.c)
 *     ExpGetPoolTagInfoTarget @ 0x14043AE10 (ExpGetPoolTagInfoTarget.c)
 *     MiDemoteSlabEntriesDpc @ 0x140442780 (MiDemoteSlabEntriesDpc.c)
 *     KiSetSystemTimeDpc @ 0x14047BEC0 (KiSetSystemTimeDpc.c)
 *     MiJumpStackTarget @ 0x140480E20 (MiJumpStackTarget.c)
 *     KeHaltOnAddress @ 0x1404B388C (KeHaltOnAddress.c)
 *     MiUpdatePageThresholdsDpc @ 0x1404B4650 (MiUpdatePageThresholdsDpc.c)
 *     MiWritePteHighLevelIsr @ 0x1404B8330 (MiWritePteHighLevelIsr.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BE170 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     ExpLimitInsertDpc @ 0x140654C50 (ExpLimitInsertDpc.c)
 *     ExpAeThresholdInitWorker @ 0x14065B1B0 (ExpAeThresholdInitWorker.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14066CE40 (MiFreeUnusedPfnPagesDpc.c)
 *     MiMakeIoRangePermanentDpc @ 0x140676640 (MiMakeIoRangePermanentDpc.c)
 *     MiReapplyImportOptimizationWorker @ 0x14067C5D0 (MiReapplyImportOptimizationWorker.c)
 *     MiDbgCopyMemoryTarget @ 0x14067E900 (MiDbgCopyMemoryTarget.c)
 *     MiChangeSlabIdentitiesDpc @ 0x140686640 (MiChangeSlabIdentitiesDpc.c)
 *     MiSpecialPurposeMemoryCacheUpdateDpc @ 0x14068E960 (MiSpecialPurposeMemoryCacheUpdateDpc.c)
 *     MiDpcGangTarget @ 0x140691650 (MiDpcGangTarget.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiWakeAddressAll @ 0x14045512C (KiWakeAddressAll.c)
 *     KiAddHaltBlockToWaitList @ 0x1405BA560 (KiAddHaltBlockToWaitList.c)
 *     KiWaitForSignal @ 0x1405BA5B0 (KiWaitForSignal.c)
 */

__int64 __fastcall KiHaltOnAddress(_BYTE *a1, _BYTE *a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rbx
  bool v9; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  _QWORD v15[3]; // [rsp+20h] [rbp-28h] BYREF
  int v16; // [rsp+38h] [rbp-10h]
  int v17; // [rsp+3Ch] [rbp-Ch]

  v17 = 0;
  if ( (unsigned __int64)(a3 - 1) > 7 || ((a3 - 1) & a3) != 0 )
    return 3221225485LL;
  v15[2] = 0LL;
  v15[0] = a1;
  v16 = 0;
  v15[1] = KeGetCurrentPrcb();
  KiAddHaltBlockToWaitList(KiHaltOnAddressHashTable, v15);
  v6 = a3 - 1;
  if ( !v6 )
  {
    if ( *a1 == *a2 )
      goto LABEL_15;
    goto LABEL_13;
  }
  v7 = v6 - 1;
  if ( v7 )
  {
    v8 = v7 - 2;
    if ( v8 )
    {
      if ( v8 == 4 )
      {
        v9 = *(_QWORD *)a1 == *(_QWORD *)a2;
        goto LABEL_8;
      }
LABEL_13:
      KiWakeAddressAll();
      goto LABEL_15;
    }
    v9 = *(_DWORD *)a1 == *(_DWORD *)a2;
  }
  else
  {
    v9 = *(_WORD *)a1 == *(_WORD *)a2;
  }
LABEL_8:
  if ( !v9 )
    goto LABEL_13;
LABEL_15:
  while ( 1 )
  {
    _disable();
    if ( v16 == 1 )
      break;
    KiWaitForSignal();
  }
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    _m_prefetchw(SchedulerAssist);
    v12 = *SchedulerAssist;
    do
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
    }
    while ( v13 != v12 );
    if ( (v12 & 0x200000) != 0 )
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  _enable();
  return 0LL;
}
