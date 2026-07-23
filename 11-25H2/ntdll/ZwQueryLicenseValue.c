/*
 * XREFs of ZwQueryLicenseValue @ 0x180165E10
 * Callers:
 *     SwitchedRtlGetVersion @ 0x180038AB0 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x180039460 (RtlGetVersion.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x180039D50 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180083D80 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlGetProductInfo @ 0x1800EBC00 (RtlGetProductInfo.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x180148314 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     RtlpGetWindowsPolicy @ 0x18014A4A0 (RtlpGetWindowsPolicy.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryLicenseValue(
        PUNICODE_STRING ValueName,
        PULONG Type,
        PVOID Data,
        ULONG DataSize,
        PULONG ResultDataSize)
{
  NTSTATUS result; // eax

  result = 352;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
