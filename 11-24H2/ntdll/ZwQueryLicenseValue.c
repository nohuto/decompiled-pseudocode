/*
 * XREFs of ZwQueryLicenseValue @ 0x180164880
 * Callers:
 *     SwitchedRtlGetVersion @ 0x1800A9C70 (SwitchedRtlGetVersion.c)
 *     RtlGetVersion @ 0x1800AA620 (RtlGetVersion.c)
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800AAF10 (RtlpGetDeviceFamilyInfoEnum.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800B3A90 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlGetProductInfo @ 0x1800EA7B0 (RtlGetProductInfo.c)
 *     RtlpEcReadSkuUpdateManagementGroup @ 0x180146D64 (RtlpEcReadSkuUpdateManagementGroup.c)
 *     RtlpGetWindowsPolicy @ 0x180148EF0 (RtlpGetWindowsPolicy.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryLicenseValue()
{
  __int64 result; // rax

  result = 352LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
