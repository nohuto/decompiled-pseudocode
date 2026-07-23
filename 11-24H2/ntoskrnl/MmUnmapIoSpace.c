/*
 * XREFs of MmUnmapIoSpace @ 0x1402929D0
 * Callers:
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x1406FD8C8 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HvlDeleteProcessor @ 0x14070C8B4 (HvlDeleteProcessor.c)
 *     WmipFindSMBiosStructure @ 0x1407A4284 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x1407A43A0 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x1407A4498 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x1407A46F0 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x1407A49A8 (WmipParseSysIdTable.c)
 *     ExpGetSystemPlatformBinary @ 0x1407B4710 (ExpGetSystemPlatformBinary.c)
 *     WheapClearPoison @ 0x1407C820C (WheapClearPoison.c)
 *     MiZeroHotAddMemory @ 0x1407EA964 (MiZeroHotAddMemory.c)
 *     WmipGetSMBiosTableData @ 0x140A37918 (WmipGetSMBiosTableData.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140B4FD28 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140B4FF90 (HalpInitGenericErrorSourceEntryV2.c)
 *     PopGetHwConfigurationSignature @ 0x140B5EEA4 (PopGetHwConfigurationSignature.c)
 *     HalpFreeNvsBuffers @ 0x140B6DCA4 (HalpFreeNvsBuffers.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402929E8 (MiUnmapContiguousMemory.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  char v2; // r8

  v2 = 1;
  MiUnmapContiguousMemory(BaseAddress, NumberOfBytes, v2);
}
