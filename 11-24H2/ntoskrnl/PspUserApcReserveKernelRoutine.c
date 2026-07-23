/*
 * XREFs of PspUserApcReserveKernelRoutine @ 0x140A3C050
 * Callers:
 *     KiDeliverApc @ 0x1402C6540 (KiDeliverApc.c)
 * Callees:
 *     PspUserApcReserveRundownRoutine @ 0x140A3C070 (PspUserApcReserveRundownRoutine.c)
 */

__int64 PspUserApcReserveKernelRoutine()
{
  return PspUserApcReserveRundownRoutine();
}
