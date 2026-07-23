/*
 * XREFs of ZwQueryLicenseValue @ 0x180162C40
 * Callers:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x18000A5E0 (RtlpGetDeviceFamilyInfoEnum.c)
 *     SwitchedRtlGetVersion @ 0x18000AE00 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x18000B7B0 (RtlGetVersion.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180080330 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlGetProductInfo @ 0x1800E6020 (RtlGetProductInfo.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x180145114 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     RtlpGetWindowsPolicy @ 0x1801472A0 (RtlpGetWindowsPolicy.c)
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
