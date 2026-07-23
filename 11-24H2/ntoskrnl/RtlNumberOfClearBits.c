/*
 * XREFs of RtlNumberOfClearBits @ 0x140377850
 * Callers:
 *     PopGetRemainingHibernateRangeDataSize @ 0x140B5F0A0 (PopGetRemainingHibernateRangeDataSize.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140B991AC (VfThunkApplyThunksCurrentSession.c)
 *     ViThunkFindAllSharedExports @ 0x140B9956C (ViThunkFindAllSharedExports.c)
 *     ViThunkCreateSharedExportInformation @ 0x140BA838C (ViThunkCreateSharedExportInformation.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140377880 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
