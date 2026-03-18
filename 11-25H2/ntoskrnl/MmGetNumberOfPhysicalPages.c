/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x140A0A990
 * Callers:
 *     ExpGetSystemBasicInformation @ 0x14044DD04 (ExpGetSystemBasicInformation.c)
 *     ExpGetSystemEmulationBasicInformation @ 0x14046B528 (ExpGetSystemEmulationBasicInformation.c)
 *     ExpInitializePoolTrackerTable @ 0x1406489C0 (ExpInitializePoolTrackerTable.c)
 *     ExpDetermineLargePagePolicy @ 0x14064E244 (ExpDetermineLargePagePolicy.c)
 *     PopRequestWrite @ 0x140B4DFC0 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140B4E968 (PopWriteHiberPages.c)
 *     ViPtInitCircularPoolTrace @ 0x140B7C994 (ViPtInitCircularPoolTrace.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140C37CD4 (CmpInitGlobalQuotaAllowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E2FD48 + a1) + 18512LL);
}
