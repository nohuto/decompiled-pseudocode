/*
 * XREFs of PspUserApcReserveKernelRoutine @ 0x140A41D70
 * Callers:
 *     KiDeliverApc @ 0x140286490 (KiDeliverApc.c)
 * Callees:
 *     PspUserApcReserveRundownRoutine @ 0x140A41D90 (PspUserApcReserveRundownRoutine.c)
 */

__int64 PspUserApcReserveKernelRoutine()
{
  return PspUserApcReserveRundownRoutine();
}
