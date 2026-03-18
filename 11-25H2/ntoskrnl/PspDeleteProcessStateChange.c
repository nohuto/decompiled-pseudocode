/*
 * XREFs of PspDeleteProcessStateChange @ 0x1407672E0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     PsThawMultiProcess @ 0x1404EBCE4 (PsThawMultiProcess.c)
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
