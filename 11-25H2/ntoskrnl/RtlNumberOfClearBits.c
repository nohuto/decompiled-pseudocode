/*
 * XREFs of RtlNumberOfClearBits @ 0x140395F10
 * Callers:
 *     PopGetRemainingHibernateRangeDataSize @ 0x140B4D024 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140B871CC (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkFindAllSharedExports @ 0x140B8758C (ViThunkFindAllSharedExports.c)
 *     ViThunkCreateSharedExportInformation @ 0x140B963AC (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140395F40 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
