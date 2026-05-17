/*
 * XREFs of ZwCreateFile @ 0x180163CC0
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x1800665D0 (RtlCreateSystemVolumeInformationFolder.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x1800AA648 (RtlpFileIsWin32WithRCManifest.c)
 *     LdrpResMapFile @ 0x1801110E4 (LdrpResMapFile.c)
 *     RtlpGetVolumeHandle @ 0x1801146B4 (RtlpGetVolumeHandle.c)
 *     OpenIptDevice @ 0x18011BF74 (OpenIptDevice.c)
 *     RtlCreateBootStatusDataFile @ 0x18013F990 (RtlCreateBootStatusDataFile.c)
 *     RtlpQueryDiskSpacePolicy @ 0x18015E718 (RtlpQueryDiskSpacePolicy.c)
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
