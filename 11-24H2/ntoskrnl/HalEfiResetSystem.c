/*
 * XREFs of HalEfiResetSystem @ 0x14054C6B8
 * Callers:
 *     HalpPowerWriteResetCommand @ 0x140544B14 (HalpPowerWriteResetCommand.c)
 *     HalpShutdown @ 0x140544D7C (HalpShutdown.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     HalpEfiStartRuntimeCode @ 0x1404443A4 (HalpEfiStartRuntimeCode.c)
 *     HalpEfiIncrementEfiCall @ 0x14045E854 (HalpEfiIncrementEfiCall.c)
 *     HalpEfiDecrementEfiCall @ 0x140486128 (HalpEfiDecrementEfiCall.c)
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
