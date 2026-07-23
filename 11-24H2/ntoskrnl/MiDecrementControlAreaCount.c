/*
 * XREFs of MiDecrementControlAreaCount @ 0x140453308
 * Callers:
 *     MiCheckForControlAreaDeletion @ 0x140339580 (MiCheckForControlAreaDeletion.c)
 *     MiDrainCrossPartitionUsage @ 0x14068B1E4 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 */

int __fastcall MiDecrementControlAreaCount(__int64 a1, volatile signed __int64 *a2)
{
  __int64 v2; // rax

  v2 = _InterlockedDecrement64(a2);
  if ( v2 <= -1 )
    __fastfail(0xEu);
  if ( !*(_QWORD *)(a1 + 1736) && !*(_QWORD *)(a1 + 1744) )
    LODWORD(v2) = KeSetEvent(*(PRKEVENT *)(a1 + 2768), 0, 0);
  return v2;
}
