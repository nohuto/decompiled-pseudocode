/*
 * XREFs of DecodeAcpi2CState @ 0x14003E348
 * Callers:
 *     RegisterHvCStates @ 0x140030378 (RegisterHvCStates.c)
 *     RegisterHiddenIdleStates @ 0x1400379D0 (RegisterHiddenIdleStates.c)
 *     RegisterKernelCStates @ 0x14003DCFC (RegisterKernelCStates.c)
 * Callees:
 *     DecodeAcpiIdleState @ 0x14003E3A0 (DecodeAcpiIdleState.c)
 */

__int64 __fastcall DecodeAcpi2CState(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  result = DecodeAcpiIdleState(a1, a2, *(unsigned __int8 *)(a2 + 12), 0, a3, a4, 0LL, a5);
  if ( (int)result >= 0 )
  {
    if ( a5 )
      *(_BYTE *)(a5 + 82) = *(_BYTE *)(a2 + 12);
  }
  return result;
}
