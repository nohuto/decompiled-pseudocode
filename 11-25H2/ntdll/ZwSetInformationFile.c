/*
 * XREFs of ZwSetInformationFile @ 0x180163700
 * Callers:
 *     TpBindFileToDirect @ 0x18003B4F0 (TpBindFileToDirect.c)
 *     EtwpAddLogHeaderToLogFile @ 0x1800824C0 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpFinalizeLogFileHeader @ 0x180092750 (EtwpFinalizeLogFileHeader.c)
 *     LdrpResSetFilePointer @ 0x1800A6680 (LdrpResSetFilePointer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetInformationFile()
{
  __int64 result; // rax

  result = 39LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
