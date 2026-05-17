/*
 * XREFs of ZwCreateFile @ 0x180162730
 * Callers:
 *     RtlpFileIsWin32WithRCManifest @ 0x180080844 (RtlpFileIsWin32WithRCManifest.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800CE8E0 (RtlCreateSystemVolumeInformationFolder.c)
 *     LdrpResMapFile @ 0x18010E614 (LdrpResMapFile.c)
 *     RtlpGetVolumeHandle @ 0x1801115B4 (RtlpGetVolumeHandle.c)
 *     OpenIptDevice @ 0x180118EF4 (OpenIptDevice.c)
 *     RtlCreateBootStatusDataFile @ 0x18013E260 (RtlCreateBootStatusDataFile.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18015D254 (RtlpQueryDiskSpacePolicy.c)
 * Callees:
 *     <none>
 */

__int64 ZwCreateFile()
{
  __int64 result; // rax

  result = 85LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
