/*
 * XREFs of PspDeleteProcessStateChange @ 0x140776CB0
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PsThawMultiProcess @ 0x1404EEE60 (PsThawMultiProcess.c)
 */

LONG_PTR __fastcall PspDeleteProcessStateChange(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( *(_DWORD *)(a1 + 16) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    PsThawMultiProcess(*(_QWORD *)a1, 0, *(_DWORD *)(a1 + 16));
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v3, v4, v5);
  }
  return ObfDereferenceObjectWithTag(*(PVOID *)a1, 0x63507350u);
}
