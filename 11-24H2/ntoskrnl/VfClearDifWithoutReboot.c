/*
 * XREFs of VfClearDifWithoutReboot @ 0x140B83890
 * Callers:
 *     VfVolatileClearDifRuleClass @ 0x1406148D0 (VfVolatileClearDifRuleClass.c)
 *     VfVolatileSetDifRuleClass @ 0x140614A94 (VfVolatileSetDifRuleClass.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x1402C7030 (MmUnlockPagableImageSection.c)
 */

void VfClearDifWithoutReboot()
{
  if ( ViCodeSectionHandle )
  {
    MmUnlockPagableImageSection(ViCodeSectionHandle);
    ViCodeSectionHandle = 0LL;
  }
  if ( ViDataSectionHandle )
  {
    MmUnlockPagableImageSection(ViDataSectionHandle);
    ViDataSectionHandle = 0LL;
  }
  ViVerifierDriverAddedThunkListHead = 0LL;
  *(_OWORD *)&ViVerifierDriverAddedSpecialThunkListHead = 0LL;
  if ( ViFullyInitialized )
  {
    if ( (VfOptionFlags & 0x800) != 0 )
    {
      ViFullyInitialized = 0;
      VfOptionFlags = 0;
    }
  }
}
