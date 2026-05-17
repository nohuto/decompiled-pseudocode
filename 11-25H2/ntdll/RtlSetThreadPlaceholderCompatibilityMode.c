/*
 * XREFs of RtlSetThreadPlaceholderCompatibilityMode @ 0x1800EEA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlSetThreadPlaceholderCompatibilityMode(char a1)
{
  struct _TEB *v1; // rdx
  char result; // al

  if ( (unsigned __int8)a1 > 3u )
    return -1;
  v1 = NtCurrentTeb();
  if ( !v1 )
    return -2;
  result = v1->PlaceholderCompatibilityMode;
  v1->PlaceholderCompatibilityMode = a1;
  return result;
}
