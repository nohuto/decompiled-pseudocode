/*
 * XREFs of SmpFlushStorePages @ 0x140A868B0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiFlushAllStoreSwapPages @ 0x1402D01D8 (MiFlushAllStoreSwapPages.c)
 */

LONG __fastcall SmpFlushStorePages(__int64 a1, __int64 a2, __int64 a3)
{
  MiFlushAllStoreSwapPages(**(_QWORD **)(*(_QWORD *)a1 + 2096LL), a2, a3);
  return KeSetEvent((PRKEVENT)(a1 + 8), 0, 0);
}
