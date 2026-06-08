/*
 * XREFs of GetCpuIdInfo @ 0x14000E350
 * Callers:
 *     IsFastCppcSupported @ 0x1400042D8 (IsFastCppcSupported.c)
 *     IsTargettedCpuForQosExperiment_AMD @ 0x140004354 (IsTargettedCpuForQosExperiment_AMD.c)
 *     IsRaplSupported @ 0x140023340 (IsRaplSupported.c)
 *     InitMonitorMWaitSupport @ 0x140023560 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x140023624 (IsMonitorMWaitSupported.c)
 *     InitDriver @ 0x140023E94 (InitDriver.c)
 *     IsACountMCountSupported @ 0x14002417C (IsACountMCountSupported.c)
 *     ValidatePStateCapability @ 0x1400241F0 (ValidatePStateCapability.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetCpuIdInfo(unsigned int a1, _DWORD *a2)
{
  __int64 result; // rax

  _RAX = a1;
  __asm { cpuid }
  *a2 = result;
  a2[1] = _RBX;
  a2[2] = _RCX;
  a2[3] = _RDX;
  return result;
}
