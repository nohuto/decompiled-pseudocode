/*
 * XREFs of ZwSetSystemInformation @ 0x1801637C0
 * Callers:
 *     RtlSetFeatureConfigurations @ 0x18010CAF0 (RtlSetFeatureConfigurations.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x18010F440 (RtlpFcUpdateUsageSubscriptions.c)
 *     RtlOverwriteFeatureConfigurationBuffer @ 0x1801455A0 (RtlOverwriteFeatureConfigurationBuffer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemInformation(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID SystemInformation,
        ULONG SystemInformationLength)
{
  NTSTATUS result; // eax

  result = 444;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
