/*
 * XREFs of SmpFlushStorePages @ 0x140A82120
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     MiFlushAllStoreSwapPages @ 0x1403C1088 (MiFlushAllStoreSwapPages.c)
 */

LONG __fastcall SmpFlushStorePages(__int64 a1)
{
  MiFlushAllStoreSwapPages(**(_QWORD **)(*(_QWORD *)a1 + 2096LL));
  return KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
}
