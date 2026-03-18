/*
 * XREFs of PspUserApcReserveKernelRoutine @ 0x140A46390
 * Callers:
 *     KiDeliverApc @ 0x14031D9B0 (KiDeliverApc.c)
 * Callees:
 *     PspUserApcReserveRundownRoutine @ 0x140A463B0 (PspUserApcReserveRundownRoutine.c)
 */

__int64 PspUserApcReserveKernelRoutine()
{
  return PspUserApcReserveRundownRoutine();
}
