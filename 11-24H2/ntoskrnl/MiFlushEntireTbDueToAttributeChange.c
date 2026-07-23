/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x14039D0A4
 * Callers:
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiChangePageAttribute @ 0x14024C2DC (MiChangePageAttribute.c)
 *     MiCopyPage @ 0x140252870 (MiCopyPage.c)
 *     MiFlushCacheForAttributeChange @ 0x14039CF08 (MiFlushCacheForAttributeChange.c)
 *     MiChangePageAttributeBatch @ 0x1403A8860 (MiChangePageAttributeBatch.c)
 *     MiValidateInPage @ 0x1404291F0 (MiValidateInPage.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x14066FA58 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiDeleteStaleCacheMaps @ 0x140676A50 (MiDeleteStaleCacheMaps.c)
 *     MiIoPfnTreeExclusionCompatible @ 0x14067716C (MiIoPfnTreeExclusionCompatible.c)
 *     MiMakeIoRangePermanent @ 0x140677564 (MiMakeIoRangePermanent.c)
 *     MiCombiningInProgress @ 0x1406865CC (MiCombiningInProgress.c)
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
 *     MiValidateSectionCreate @ 0x14093C5D8 (MiValidateSectionCreate.c)
 *     MiInitializeCacheFlushing @ 0x140C5C468 (MiInitializeCacheFlushing.c)
 * Callees:
 *     HvlFlushTbAllPartitions @ 0x14039D340 (HvlFlushTbAllPartitions.c)
 *     KiPreprocessFlushTb @ 0x14039D3D0 (KiPreprocessFlushTb.c)
 *     KiFlushAddressSpaceTb @ 0x14039E4BC (KiFlushAddressSpaceTb.c)
 *     KxFlushEntireTb @ 0x14039EFB4 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x14039F660 (KxFlushNonGlobalTb.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetUserTbFlushPending @ 0x1406AC380 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 MiFlushEntireTbDueToAttributeChange()
{
  int v0; // ecx
  char v1; // bl
  __int64 result; // rax
  __int64 v3; // rdx
  unsigned __int64 Process; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int8 CurrentIrql; // bl
  __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int8 v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+48h] [rbp+10h] BYREF

  ++dword_140E2DC90;
  HvlFlushTbAllPartitions();
  v12 = 0;
  LOBYTE(v0) = 1;
  v11 = 0;
  v1 = 0;
  result = KiPreprocessFlushTb(v0, 3, 2, (unsigned int)&v12, (__int64)&v11);
  if ( (_BYTE)result )
  {
    if ( KiFlushPcid )
    {
      v9 = __readcr3();
      __writecr3(v9);
      Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      if ( !*(_BYTE *)(Process + 352) )
        KiSetUserTbFlushPending();
    }
    else
    {
      Process = __readcr4();
      if ( (Process & 0x20080) != 0 )
      {
        __writecr4(Process ^ 0x80);
        __writecr4(Process);
      }
      else
      {
        v10 = __readcr3();
        __writecr3(v10);
      }
    }
    if ( KiIrqlFlags )
    {
      LOBYTE(v3) = v11;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
    }
    result = v11;
    __writecr8(v11);
    v1 = 1;
  }
  if ( v12 )
  {
    LOBYTE(v6) = 1;
    LOBYTE(v5) = 1;
    result = KiFlushAddressSpaceTb(0LL, 0LL, v5, v6);
  }
  else if ( !v1 )
  {
    if ( KiKvaShadow )
      result = KxFlushNonGlobalTb(2LL);
    else
      result = KxFlushEntireTb(2LL);
  }
  if ( ExTbFlushActive )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(Process) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(Process, 15LL);
    }
    guard_dispatch_icall_no_overrides(ExpSvmIommuSystemContext, 0LL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v8);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
