/*
 * XREFs of FsRtlGetCurrentProcessLoaderList @ 0x14070AA70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *FsRtlGetCurrentProcessLoaderList()
{
  return KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink[1].Blink + 1;
}
