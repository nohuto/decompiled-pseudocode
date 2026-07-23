/*
 * XREFs of MiStoreRundownWritesApc @ 0x14068D900
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 *     MiStoreDecrementOutstandingWrites @ 0x14047F648 (MiStoreDecrementOutstandingWrites.c)
 */

LONG __fastcall MiStoreRundownWritesApc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rcx
  bool v4; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(a1 + 48);
  --CurrentThread->SpecialApcDisable;
  ++*(_DWORD *)(v3 + 1228);
  *(_QWORD *)(v3 + 1304) = a1;
  MiStoreDecrementOutstandingWrites(v3);
  v4 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v4 && ($727077A9B6E167EAE1398C74674DC5A5 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return KeSetEvent((PRKEVENT)(a1 + 24), 0, 0);
}
