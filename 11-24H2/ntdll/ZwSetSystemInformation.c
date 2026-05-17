/*
 * XREFs of ZwSetSystemInformation @ 0x180165400
 * Callers:
 *     RtlSetFeatureConfigurations @ 0x1801116E0 (RtlSetFeatureConfigurations.c)
 *     RtlpFcUpdateUsageSubscriptions @ 0x1801141F0 (RtlpFcUpdateUsageSubscriptions.c)
 *     RtlOverwriteFeatureConfigurationBuffer @ 0x1801471F0 (RtlOverwriteFeatureConfigurationBuffer.c)
 * Callees:
 *     <none>
 */

__int64 ZwSetSystemInformation()
{
  __int64 result; // rax

  result = 444LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
