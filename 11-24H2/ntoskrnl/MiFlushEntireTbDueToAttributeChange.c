/*
 * XREFs of MiFlushEntireTbDueToAttributeChange @ 0x1403AE894
 * Callers:
 *     MiChangePageAttribute @ 0x14021F58C (MiChangePageAttribute.c)
 *     MiCopyPage @ 0x1402254C0 (MiCopyPage.c)
 *     MiChangePageAttributeBatch @ 0x1402668E4 (MiChangePageAttributeBatch.c)
 *     MiReferenceIoPages @ 0x140283108 (MiReferenceIoPages.c)
 *     MiFlushCacheForAttributeChange @ 0x1403AE6F8 (MiFlushCacheForAttributeChange.c)
 *     MiValidateInPage @ 0x140436770 (MiValidateInPage.c)
 *     MiRemovePhysicalMemoryBatchComplete @ 0x14066E884 (MiRemovePhysicalMemoryBatchComplete.c)
 *     MiDeleteStaleCacheMaps @ 0x140675880 (MiDeleteStaleCacheMaps.c)
 *     MiIoPfnTreeExclusionCompatible @ 0x140675F9C (MiIoPfnTreeExclusionCompatible.c)
 *     MiMakeIoRangePermanent @ 0x140676394 (MiMakeIoRangePermanent.c)
 *     MiCombiningInProgress @ 0x14068549C (MiCombiningInProgress.c)
 *     MiRemovePhysicalMemory @ 0x1407E9DAC (MiRemovePhysicalMemory.c)
 *     MiValidateSectionCreate @ 0x140957B50 (MiValidateSectionCreate.c)
 *     MiInitializeCacheFlushing @ 0x140C5A2D8 (MiInitializeCacheFlushing.c)
 * Callees:
 *     HvlFlushTbAllPartitions @ 0x1403AEB30 (HvlFlushTbAllPartitions.c)
 *     KiPreprocessFlushTb @ 0x1403AEBC0 (KiPreprocessFlushTb.c)
 *     KiFlushAddressSpaceTb @ 0x1403AFCAC (KiFlushAddressSpaceTb.c)
 *     KxFlushEntireTb @ 0x1403B07A4 (KxFlushEntireTb.c)
 *     KxFlushNonGlobalTb @ 0x1403B0E50 (KxFlushNonGlobalTb.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiSetUserTbFlushPending @ 0x1406AB3E0 (KiSetUserTbFlushPending.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
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

  ++dword_140E2DB50;
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
    guard_dispatch_icall_no_overrides(ExpSvmIommuSystemContext, 0LL, 0LL, v6);
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
