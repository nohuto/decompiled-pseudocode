/*
 * XREFs of ZwQueryAttributesFile @ 0x180162430
 * Callers:
 *     LdrpIsReparsePoint @ 0x180064A20 (LdrpIsReparsePoint.c)
 *     LdrpGetNtPathFromDosPath @ 0x180075ED0 (LdrpGetNtPathFromDosPath.c)
 *     RtlDoesFileExists_UstrEx @ 0x180076D70 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x180076EC0 (RtlDosSearchPath_Ustr.c)
 *     LdrpResValidateFilePath @ 0x1800E7188 (LdrpResValidateFilePath.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 *     LdrAddDllDirectory @ 0x18010C9F0 (LdrAddDllDirectory.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryAttributesFile()
{
  __int64 result; // rax

  result = 61LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
