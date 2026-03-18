/*
 * XREFs of PfSnGetUnsafeProcessParameters @ 0x140827DE8
 * Callers:
 *     PfSnScanCommandLine @ 0x1408273E8 (PfSnScanCommandLine.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 */

struct _LIST_ENTRY *PfSnGetUnsafeProcessParameters()
{
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *result; // rax

  Blink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  result = 0LL;
  if ( Blink )
  {
    if ( ((__int64)Blink[2].Flink & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    return Blink[2].Flink;
  }
  return result;
}
