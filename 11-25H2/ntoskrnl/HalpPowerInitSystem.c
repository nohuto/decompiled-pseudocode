/*
 * XREFs of HalpPowerInitSystem @ 0x140B3C520
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14036DFD0 (MmUnlockPagableImageSection.c)
 *     MmLockPagableDataSection @ 0x140A5F0D0 (MmLockPagableDataSection.c)
 *     HalpPowerInitDiscard @ 0x140BFD460 (HalpPowerInitDiscard.c)
 *     HalpPowerInitFwPerformanceTableMappings @ 0x140BFD554 (HalpPowerInitFwPerformanceTableMappings.c)
 */

__int64 __fastcall HalpPowerInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 == 8 )
  {
    HalpPowerInitDiscard(a3);
  }
  else if ( a1 == 17 )
  {
    if ( (unsigned __int8)byte_140FC0548 >= 5u )
      HalpPowerInitFwPerformanceTableMappings();
    HalpSleepPageLock = MmLockPagableDataSection(HalpSaveDmaControllerState);
    MmUnlockPagableImageSection(HalpSleepPageLock);
  }
  return 0LL;
}
