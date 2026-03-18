/*
 * XREFs of MiStoreRundownWritesApc @ 0x14068C7D0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404840B0 (MiStoreDecrementOutstandingWrites.c)
 */

LONG __fastcall MiStoreRundownWritesApc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 48);
  --CurrentThread->SpecialApcDisable;
  ++*(_DWORD *)(v3 + 1228);
  *(_QWORD *)(v3 + 1304) = a1;
  MiStoreDecrementOutstandingWrites(v3);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($81B80DCEA5A02D890AB7B2872B48AC01 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v5, v4);
  return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
