/*
 * XREFs of KiHaltOnAddress @ 0x1404F7B98
 * Callers:
 *     KiSwapDirectoryTableBaseTarget @ 0x1403F4770 (KiSwapDirectoryTableBaseTarget.c)
 *     KeSignalCallDpcSynchronize @ 0x1404282B0 (KeSignalCallDpcSynchronize.c)
 *     ExpGetPoolTagInfoTarget @ 0x14042D650 (ExpGetPoolTagInfoTarget.c)
 *     MiDemoteSlabEntriesDpc @ 0x14043B750 (MiDemoteSlabEntriesDpc.c)
 *     KiSetSystemTimeDpc @ 0x140477490 (KiSetSystemTimeDpc.c)
 *     MiJumpStackTarget @ 0x14047B8F0 (MiJumpStackTarget.c)
 *     KeHaltOnAddress @ 0x1404AE0FC (KeHaltOnAddress.c)
 *     MiUpdatePageThresholdsDpc @ 0x1404AEE90 (MiUpdatePageThresholdsDpc.c)
 *     MiWritePteHighLevelIsr @ 0x1404B2C80 (MiWritePteHighLevelIsr.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x1405BB7A0 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     ExpLimitInsertDpc @ 0x140653350 (ExpLimitInsertDpc.c)
 *     ExpAeThresholdInitWorker @ 0x1406598D0 (ExpAeThresholdInitWorker.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x14066E010 (MiFreeUnusedPfnPagesDpc.c)
 *     MiMakeIoRangePermanentDpc @ 0x140677810 (MiMakeIoRangePermanentDpc.c)
 *     MiReapplyImportOptimizationWorker @ 0x14067D7B0 (MiReapplyImportOptimizationWorker.c)
 *     MiDbgCopyMemoryTarget @ 0x14067FB00 (MiDbgCopyMemoryTarget.c)
 *     MiChangeSlabIdentitiesDpc @ 0x140687770 (MiChangeSlabIdentitiesDpc.c)
 *     MiSpecialPurposeMemoryCacheUpdateDpc @ 0x14068FA90 (MiSpecialPurposeMemoryCacheUpdateDpc.c)
 *     MiDpcGangTarget @ 0x140692720 (MiDpcGangTarget.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiWakeAddressAll @ 0x140449DEC (KiWakeAddressAll.c)
 *     KiAddHaltBlockToWaitList @ 0x1405B7B90 (KiAddHaltBlockToWaitList.c)
 *     KiWaitForSignal @ 0x1405B7BE0 (KiWaitForSignal.c)
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
