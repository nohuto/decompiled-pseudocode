/*
 * XREFs of RtlpSetFunctionOverrideCapability @ 0x140787D38
 * Callers:
 *     RtlpSetUserKernelFunctionOverrideCapability @ 0x140787D78 (RtlpSetUserKernelFunctionOverrideCapability.c)
 *     RtlpInitFunctionOverrideCapabilities @ 0x14078D5E8 (RtlpInitFunctionOverrideCapabilities.c)
 * Callees:
 *     ??$RtlpGetCapabilityBitmap@U_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@E@@YAEPEAKPEAU_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@EPEAPEAE@Z @ 0x140787B8C (--$RtlpGetCapabilityBitmap@U_RTL_FUNCTION_OVERRIDE_CAPABILITIES@@E@@YAEPEAKPEAU_RTL_FUNCTION_OVE.c)
 */

char __fastcall RtlpSetFunctionOverrideCapability(unsigned int a1, __int64 a2, char a3)
{
  char result; // al
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 *v5; // [rsp+48h] [rbp+20h] BYREF

  v4 = a1;
  v5 = 0LL;
  result = RtlpGetCapabilityBitmap<_RTL_FUNCTION_OVERRIDE_CAPABILITIES,unsigned char>((int *)&v4, a2, a3, &v5);
  if ( result )
  {
    if ( v5 )
    {
      result = v4;
      _bittestandset64(v5, v4);
    }
  }
  return result;
}
