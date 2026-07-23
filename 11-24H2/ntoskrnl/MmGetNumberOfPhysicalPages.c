/*
 * XREFs of MmGetNumberOfPhysicalPages @ 0x140454120
 * Callers:
 *     PopCalculateHiberFileSize @ 0x14074FE78 (PopCalculateHiberFileSize.c)
 *     PopEnlargeHiberFile @ 0x140750744 (PopEnlargeHiberFile.c)
 *     SmpSystemStoreCreate @ 0x140799964 (SmpSystemStoreCreate.c)
 *     CmpCanGrowHive @ 0x140969580 (CmpCanGrowHive.c)
 *     EtwpGetSystemMaximumBufferCount @ 0x1409CF9AC (EtwpGetSystemMaximumBufferCount.c)
 *     EtwpInitLoggerContext @ 0x1409CFDB8 (EtwpInitLoggerContext.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     PopRequestWrite @ 0x140B60100 (PopRequestWrite.c)
 *     PopWriteHiberPages @ 0x140B60AA8 (PopWriteHiberPages.c)
 *     ViPtInitCircularPoolTrace @ 0x140B8E974 (ViPtInitCircularPoolTrace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNumberOfPhysicalPages(unsigned __int16 a1)
{
  return *(_QWORD *)(*((_QWORD *)qword_140E300C8 + a1) + 18512LL);
}
