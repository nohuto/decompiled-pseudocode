/*
 * XREFs of MiInSwapStoreContextDereference @ 0x140A4CFE8
 * Callers:
 *     MiInSwapStore @ 0x140A4CDC4 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x140A4CEB0 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
