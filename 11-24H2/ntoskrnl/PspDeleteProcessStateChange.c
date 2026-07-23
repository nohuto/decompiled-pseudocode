/*
 * XREFs of PspDeleteProcessStateChange @ 0x140776ED0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     PsThawMultiProcess @ 0x1404E6564 (PsThawMultiProcess.c)
 */

LONG_PTR __fastcall PspDeleteProcessStateChange(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  if ( *(_DWORD *)(a1 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    PsThawMultiProcess(*(_QWORD *)a1, 0, *(_DWORD *)(a1 + 16));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  }
  return ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x63507350u);
}
