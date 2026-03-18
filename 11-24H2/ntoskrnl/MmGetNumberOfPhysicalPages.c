/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x14045F260
 * Callers:
 *     PopCalculateHiberFileSize @ 0x140751B58 (PopCalculateHiberFileSize.c)
 *     PopEnlargeHiberFile @ 0x140752424 (PopEnlargeHiberFile.c)
 *     SmpSystemStoreCreate @ 0x140799854 (SmpSystemStoreCreate.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1408305C8 (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpInitLoggerContext @ 0x1408309D4 (EtwpInitLoggerContext.c)
 *     CmpCanGrowHive @ 0x140980D70 (CmpCanGrowHive.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     PopRequestWrite @ 0x140B5E080 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140B5EA28 (PopWriteHiberPages.c)
 *     ViPtInitCircularPoolTrace @ 0x140B8C974 (ViPtInitCircularPoolTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E2FF88 + a1) + 18512LL);
}
