/*
 * XREFs of MmUnmapIoSpace @ 0x140263160
 * Callers:
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x1406FFC88 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HvlDeleteProcessor @ 0x14070ED24 (HvlDeleteProcessor.c)
 *     WmipFindSMBiosStructure @ 0x1407A4174 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1407A4290 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1407A4388 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1407A45E0 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x1407A4898 (WmipParseSysIdTable.c)
 *     ExpGetSystemPlatformBinary @ 0x1407B42C0 (ExpGetSystemPlatformBinary.c)
 *     WheapClearPoison @ 0x1407C7D6C (WheapClearPoison.c)
 *     MiZeroHotAddMemory @ 0x1407EA394 (MiZeroHotAddMemory.c)
 *     WmipGetSMBiosTableData @ 0x140A42038 (WmipGetSMBiosTableData.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140B4DCD8 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140B4DF40 (HalpInitGenericErrorSourceEntryV2.c)
 *     PopGetHwConfigurationSignature @ 0x140B5CE34 (PopGetHwConfigurationSignature.c)
 *     HalpFreeNvsBuffers @ 0x140B6C400 (HalpFreeNvsBuffers.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x140263178 (MiUnmapContiguousMemory.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  char v2; // r8

  v2 = 1;
  MiUnmapContiguousMemory(BaseAddress, NumberOfBytes, v2);
}
