/*
 * XREFs of MiStoreRundownWritesApc @ 0x140680F40
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
 *     MiStoreDecrementOutstandingWrites @ 0x1404838B0 (MiStoreDecrementOutstandingWrites.c)
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
