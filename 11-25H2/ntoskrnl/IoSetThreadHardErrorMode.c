/*
 * XREFs of IoSetThreadHardErrorMode @ 0x14045E010
 * Callers:
 *     SmKmEtwAppendObjectName @ 0x14060169C (SmKmEtwAppendObjectName.c)
 *     SmKmFileInfoGetPath @ 0x14078A818 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x14078A928 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14078B380 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14078B834 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x14078BAEC (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14078BB88 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x14078C080 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x14078C220 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x14078C454 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1407A21F4 (EtwpPsProvCaptureState.c)
 *     CmpCmdHiveClose @ 0x140885694 (CmpCmdHiveClose.c)
 *     CmpCmdHiveOpen @ 0x140911900 (CmpCmdHiveOpen.c)
 *     EtwTraceProcess @ 0x140920FCC (EtwTraceProcess.c)
 *     FsRtlSetFileSize @ 0x14093A4A0 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x14093DE60 (FsRtlGetFileSize.c)
 *     ObKillProcess @ 0x140972730 (ObKillProcess.c)
 *     CmpDoFileSetSizeEx @ 0x1409F8288 (CmpDoFileSetSizeEx.c)
 *     EtwpKernelTraceRundown @ 0x140A11A68 (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x140AAC740 (SmKmFileInfoCleanup.c)
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
