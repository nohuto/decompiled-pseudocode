/*
 * XREFs of GetCpuIdInfo @ 0x14000D6A0
 * Callers:
 *     IsFastCppcSupported @ 0x14000424C (IsFastCppcSupported.c)
 *     IsRaplSupported @ 0x140022340 (IsRaplSupported.c)
 *     InitMonitorMWaitSupport @ 0x140022560 (InitMonitorMWaitSupport.c)
 *     IsMonitorMWaitSupported @ 0x140022624 (IsMonitorMWaitSupported.c)
 *     InitDriver @ 0x140022E14 (InitDriver.c)
 *     IsACountMCountSupported @ 0x1400230FC (IsACountMCountSupported.c)
 *     ValidatePStateCapability @ 0x140023170 (ValidatePStateCapability.c)
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
