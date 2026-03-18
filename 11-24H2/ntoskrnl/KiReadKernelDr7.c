/*
 * XREFs of KiReadKernelDr7 @ 0x1405B77B8
 * Callers:
 *     KiSwInterruptDispatch @ 0x1405088F0 (KiSwInterruptDispatch.c)
 * Callees:
 *     <none>
 */

__int64 KiReadKernelDr7()
{
  unsigned __int64 KernelDr7; // rcx

  KernelDr7 = KeGetCurrentPrcb()->ProcessorState.SpecialRegisters.KernelDr7;
  return KernelDr7 & -(__int64)((KernelDr7 & 0x355) != 0);
}
