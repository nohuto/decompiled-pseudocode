/*
 * XREFs of MiInSwapStoreContextDereference @ 0x140A43B78
 * Callers:
 *     MiInSwapStore @ 0x140A43954 (MiInSwapStore.c)
 *     MiInSwapStoreWorker @ 0x140A43A40 (MiInSwapStoreWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiInSwapStoreContextDereference(volatile signed __int32 *a1)
{
  if ( _InterlockedExchangeAdd(a1 + 16, 0xFFFFFFFF) == 1 )
    ExFreePoolWithTag((PVOID)a1, 0);
}
