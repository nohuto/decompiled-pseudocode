/*
 * XREFs of MmUnmapIoSpace @ 0x1402AA7A0
 * Callers:
 *     HalpDmaCvmMakeContiguousVirtualBufferPrivate @ 0x1406F3E98 (HalpDmaCvmMakeContiguousVirtualBufferPrivate.c)
 *     HvlDeleteProcessor @ 0x140702E44 (HvlDeleteProcessor.c)
 *     WmipFindSMBiosStructure @ 0x140794DA4 (WmipFindSMBiosStructure.c)
 *     WmipFindSysIdTable @ 0x140794EC0 (WmipFindSysIdTable.c)
 *     WmipGetSMBiosEventlog @ 0x140794FB8 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x140795210 (WmipGetSysIds.c)
 *     WmipParseSysIdTable @ 0x1407954C8 (WmipParseSysIdTable.c)
 *     ExpGetSystemPlatformBinary @ 0x1407A4EF0 (ExpGetSystemPlatformBinary.c)
 *     WheapClearPoison @ 0x1407B859C (WheapClearPoison.c)
 *     MiZeroHotAddMemory @ 0x1407DA4D4 (MiZeroHotAddMemory.c)
 *     WmipGetSMBiosTableData @ 0x140A3D178 (WmipGetSMBiosTableData.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140B3DCD8 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140B3DF40 (HalpInitGenericErrorSourceEntryV2.c)
 *     PopGetHwConfigurationSignature @ 0x140B4CE34 (PopGetHwConfigurationSignature.c)
 *     HalpFreeNvsBuffers @ 0x140B5D320 (HalpFreeNvsBuffers.c)
 * Callees:
 *     MiUnmapContiguousMemory @ 0x1402AA7B8 (MiUnmapContiguousMemory.c)
 */

void __stdcall MmUnmapIoSpace(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  char v2; // r8

  v2 = 1;
  MiUnmapContiguousMemory(BaseAddress, NumberOfBytes, v2);
}
