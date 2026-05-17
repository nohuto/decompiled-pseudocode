/*
 * XREFs of ZwQueryVolumeInformationFile @ 0x1801625B0
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18003ED60 (EtwpFinalizeLogFileHeader.c)
 *     RtlpCreateNewDirectoryReference @ 0x180078610 (RtlpCreateNewDirectoryReference.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800B3D70 (EtwpAddLogHeaderToLogFile.c)
 *     LdrpCheckAppDirType @ 0x1801180BC (LdrpCheckAppDirType.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x18015D3A4 (RtlpQueryDiskSpacePolicyByHandle.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryVolumeInformationFile()
{
  __int64 result; // rax

  result = 73LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
