/*
 * XREFs of ZwQueryAttributesFile @ 0x1801607F0
 * Callers:
 *     LdrpIsReparsePoint @ 0x18007A600 (LdrpIsReparsePoint.c)
 *     LdrpGetNtPathFromDosPath @ 0x1800927B0 (LdrpGetNtPathFromDosPath.c)
 *     RtlDoesFileExists_UstrEx @ 0x180093650 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosSearchPath_Ustr @ 0x1800937A0 (RtlDosSearchPath_Ustr.c)
 *     LdrpResValidateFilePath @ 0x1800E2638 (LdrpResValidateFilePath.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 *     LdrAddDllDirectory @ 0x180107730 (LdrAddDllDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  NTSTATUS result; // eax

  result = 61;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
