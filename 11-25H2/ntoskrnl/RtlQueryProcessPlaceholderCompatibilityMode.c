/*
 * XREFs of RtlQueryProcessPlaceholderCompatibilityMode @ 0x1407762D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR RtlQueryProcessPlaceholderCompatibilityMode(void)
{
  struct _LIST_ENTRY *Blink; // rax

  Blink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  if ( Blink )
    return (CHAR)Blink[123].Flink;
  else
    return -3;
}
