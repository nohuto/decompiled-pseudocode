/*
 * XREFs of RtlNumberOfClearBits @ 0x14042B450
 * Callers:
 *     PopGetRemainingHibernateRangeDataSize @ 0x140B5D024 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140B971AC (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkFindAllSharedExports @ 0x140B9756C (ViThunkFindAllSharedExports.c)
 *     ViThunkCreateSharedExportInformation @ 0x140BA638C (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14042B480 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
