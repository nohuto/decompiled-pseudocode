/*
 * XREFs of SmpFlushStorePages @ 0x140A813F0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiFlushAllStoreSwapPages @ 0x1402611E0 (MiFlushAllStoreSwapPages.c)
 */

LONG __fastcall SmpFlushStorePages(__int64 a1)
{
  MiFlushAllStoreSwapPages(**(_QWORD **)(*(_QWORD *)a1 + 2096LL));
  return KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
}
