/*
 * XREFs of IoSetThreadHardErrorMode @ 0x14045D2F0
 * Callers:
 *     SmKmEtwAppendObjectName @ 0x14060D6C8 (SmKmEtwAppendObjectName.c)
 *     SmKmFileInfoGetPath @ 0x140799BE0 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x140799CF0 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14079A748 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14079ABFC (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x14079AEB4 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14079AF50 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x14079B448 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x14079B5E8 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x14079B81C (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1407B15C4 (EtwpPsProvCaptureState.c)
 *     CmpCmdHiveOpen @ 0x14092E91C (CmpCmdHiveOpen.c)
 *     FsRtlGetFileSize @ 0x140942760 (FsRtlGetFileSize.c)
 *     FsRtlSetFileSize @ 0x14094588C (FsRtlSetFileSize.c)
 *     EtwTraceProcess @ 0x14094CC44 (EtwTraceProcess.c)
 *     CmpCmdHiveClose @ 0x14097CFB0 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x140980EB4 (CmpDoFileSetSizeEx.c)
 *     ObKillProcess @ 0x1409E4FC8 (ObKillProcess.c)
 *     EtwpKernelTraceRundown @ 0x140A15E44 (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x140AB19B0 (SmKmFileInfoCleanup.c)
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
