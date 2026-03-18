/*
 * XREFs of RtlGetProcessorSignature @ 0x140B50960
 * Callers:
 *     KiGetProcessorSignature @ 0x1405BF228 (KiGetProcessorSignature.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x14077E404 (RtlpInitFunctionOverrideCapabilities.c)
 *     RtlDetectProcessorFeatures @ 0x140B50140 (RtlDetectProcessorFeatures.c)
 *     RtlGetCpuMaxPhysicalBits @ 0x140B507B0 (RtlGetCpuMaxPhysicalBits.c)
 *     SpcDetectKvaLeakage @ 0x140B53788 (SpcDetectKvaLeakage.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlGetCpuVendor @ 0x140B50884 (RtlGetCpuVendor.c)
 */

__int64 __fastcall RtlGetProcessorSignature(char *a1, int *a2, int *a3, _DWORD *a4)
{
  char CpuVendor; // r10
  __int64 result; // rax
  int v14; // edx
  int v15; // ecx

  CpuVendor = RtlGetCpuVendor();
  _RAX = 1LL;
  __asm { cpuid }
  if ( (BYTE1(result) & 0xF) == 0xF )
  {
    v14 = (unsigned __int8)((unsigned int)result >> 20) + 15;
    v15 = (unsigned __int64)(result & 0xF0 | ((unsigned int)result >> 8) & 0xF00) >> 4;
  }
  else
  {
    v14 = BYTE1(result) & 0xF;
    v15 = (unsigned __int8)result >> 4;
  }
  if ( (CpuVendor == 2 || CpuVendor == 3) && v14 == 6 )
    v15 |= ((unsigned int)result >> 12) & 0xF0;
  if ( a1 )
    *a1 = CpuVendor;
  if ( a2 )
    *a2 = v14;
  if ( a3 )
    *a3 = v15;
  if ( a4 )
    *a4 = result & 0xF;
  return (unsigned int)result;
}
