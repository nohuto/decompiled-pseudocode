/*
 * XREFs of HalEfiResetSystem @ 0x140549F78
 * Callers:
 *     HalpPowerWriteResetCommand @ 0x1405423D4 (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x14054263C (HalpShutdown.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     HalpEfiStartRuntimeCode @ 0x140439E44 (HalpEfiStartRuntimeCode.c)
 *     HalpEfiIncrementEfiCall @ 0x140453714 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiDecrementEfiCall @ 0x140481718 (HalpEfiDecrementEfiCall.c)
 */

__int64 *HalEfiResetSystem()
{
  __int64 *result; // rax
  bool v1; // bl
  unsigned int v2; // r10d

  result = HalEfiRuntimeServicesTable;
  if ( HalEfiRuntimeServicesTable && HalEfiRuntimeServicesTable[2] )
  {
    v1 = HalpDisableInterrupts();
    HalpEfiIncrementEfiCall(&HalpEfiTimeWrites);
    HalpEfiIncrementEfiCall(&HalpEfiVariableWrites);
    HalpEfiStartRuntimeCode(4u);
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))HalEfiRuntimeServicesTable[2])(v2, 0LL, 0LL, 0LL);
    _InterlockedAnd((volatile signed __int32 *)&KeGetPcr()->HalReserved[8], 0xFFFFFFFB);
    HalpEfiDecrementEfiCall(&HalpEfiVariableWrites);
    result = (__int64 *)HalpEfiDecrementEfiCall(&HalpEfiTimeWrites);
    if ( v1 )
      _enable();
  }
  return result;
}
