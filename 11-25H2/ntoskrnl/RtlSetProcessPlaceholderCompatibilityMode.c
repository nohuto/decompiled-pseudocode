/*
 * XREFs of RtlSetProcessPlaceholderCompatibilityMode @ 0x140776340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlSetProcessPlaceholderCompatibilityMode(unsigned __int8 a1)
{
  struct _LIST_ENTRY *Blink; // r8
  char result; // al

  if ( a1 > 3u )
    return -1;
  Blink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Blink;
  if ( !Blink )
    return -3;
  result = (char)Blink[123].Flink;
  LOBYTE(Blink[123].Flink) = a1;
  return result;
}
