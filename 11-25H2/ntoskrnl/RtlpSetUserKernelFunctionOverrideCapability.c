/*
 * XREFs of RtlpSetUserKernelFunctionOverrideCapability @ 0x140778BF8
 * Callers:
 *     RtlpInitFunctionOverrideCapabilities @ 0x14077E404 (RtlpInitFunctionOverrideCapabilities.c)
 * Callees:
 *     RtlpSetFunctionOverrideCapability @ 0x140778BB8 (RtlpSetFunctionOverrideCapability.c)
 */

char __fastcall RtlpSetUserKernelFunctionOverrideCapability(unsigned int a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // r11d

  RtlpSetFunctionOverrideCapability(a1, a2, 0);
  return RtlpSetFunctionOverrideCapability(v3, v2, 1);
}
