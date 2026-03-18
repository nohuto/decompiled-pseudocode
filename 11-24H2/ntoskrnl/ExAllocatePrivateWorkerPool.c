/*
 * XREFs of ExAllocatePrivateWorkerPool @ 0x1406FBA78
 * Callers:
 *     ?SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z @ 0x1404A8CB0 (-SmFirstTimeInit@@YAJPEAU_SM_PARTITION@@K@Z.c)
 * Callees:
 *     ExpPartitionCreatePool @ 0x140AB9EF0 (ExpPartitionCreatePool.c)
 */

__int64 __fastcall ExAllocatePrivateWorkerPool(__int64 a1, __int64 a2, __int64 a3)
{
  return ExpPartitionCreatePool(*(_QWORD *)(a2 + 16), a2, a3, a1);
}
