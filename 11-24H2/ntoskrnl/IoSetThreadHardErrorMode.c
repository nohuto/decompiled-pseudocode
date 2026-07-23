/*
 * XREFs of IoSetThreadHardErrorMode @ 0x1404523B0
 * Callers:
 *     SmKmEtwAppendObjectName @ 0x14060BC88 (SmKmEtwAppendObjectName.c)
 *     SmKmFileInfoGetPath @ 0x140799CF0 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x140799E00 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14079A858 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079AD0C (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x14079AFC4 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14079B060 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x14079B558 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B6F8 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x14079B92C (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1407B1A14 (EtwpPsProvCaptureState.c)
 *     EtwTraceProcess @ 0x1408F11B4 (EtwTraceProcess.c)
 *     CmpCmdHiveOpen @ 0x140930A5C (CmpCmdHiveOpen.c)
 *     CmpCmdHiveClose @ 0x1409657C0 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x1409696C4 (CmpDoFileSetSizeEx.c)
 *     FsRtlSetFileSize @ 0x14098A000 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x14098C9D0 (FsRtlGetFileSize.c)
 *     ObKillProcess @ 0x1409DFA28 (ObKillProcess.c)
 *     EtwpKernelTraceRundown @ 0x140A0F024 (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x140AAC920 (SmKmFileInfoCleanup.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoSetThreadHardErrorMode(BOOLEAN EnableHardErrors)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int8 v2; // cf

  CurrentThread = KeGetCurrentThread();
  if ( EnableHardErrors )
    v2 = _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  else
    v2 = _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  return v2 == 0;
}
