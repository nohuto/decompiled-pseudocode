/*
 * XREFs of RtlSetProcessPlaceholderCompatibilityMode @ 0x1407854C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlSetProcessPlaceholderCompatibilityMode(CHAR Mode)
{
  struct _LIST_ENTRY *Blink; // r8
  CHAR result; // al

  if ( (unsigned __int8)Mode > 3u )
    return -1;
  Blink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  if ( !Blink )
    return -3;
  result = (CHAR)Blink[123].Flink;
  LOBYTE(Blink[123].Flink) = Mode;
  return result;
}
